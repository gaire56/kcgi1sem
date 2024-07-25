document.getElementById('send-button').addEventListener('click', sendMessage);
document.getElementById('view-messages-button').addEventListener('click', viewMessages);

function sendMessage() {
    const message = document.getElementById('message-input').value;
    if (message.trim() !== '') {
        fetch('/send', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify({ message })
        }).then(response => response.json())
        .then(data => {
            document.getElementById('message-input').value = '';
            updateChatBox();
        });
    }
}

function viewMessages() {
    fetch('/messages')
        .then(response => response.json())
        .then(data => {
            const storedMessagesDiv = document.getElementById('stored-messages');
            storedMessagesDiv.innerHTML = '';
            data.messages.forEach(msg => {
                const messageElement = document.createElement('p');
                messageElement.textContent = msg;
                storedMessagesDiv.appendChild(messageElement);
            });
        });
}

function updateChatBox() {
    fetch('/messages')
        .then(response => response.json())
        .then(data => {
            const chatBox = document.getElementById('chat-box');
            chatBox.innerHTML = '';
            data.messages.forEach(msg => {
                const messageElement = document.createElement('p');
                messageElement.textContent = msg;
                chatBox.appendChild(messageElement);
            });
        });
}

setInterval(updateChatBox, 1000); // Polling every second
