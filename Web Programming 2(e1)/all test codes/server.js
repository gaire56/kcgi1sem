const express = require('express');
const bodyParser = require('body-parser');
const mongoose = require('mongoose');

const app = express();
app.use(bodyParser.json());
app.use(express.static('public'));

// Connect to MongoDB using IPv4
mongoose.connect('mongodb://127.0.0.1:27017/chat', { useNewUrlParser: true, useUnifiedTopology: true });

const messageSchema = new mongoose.Schema({
    message: String,
    timestamp: { type: Date, default: Date.now }
});

const Message = mongoose.model('Message', messageSchema);

app.post('/send', async (req, res) => {
    try {
        const newMessage = new Message({ message: req.body.message });
        await newMessage.save();
        res.json({ success: true });
    } catch (err) {
        res.status(500).json({ success: false });
    }
});

app.get('/messages', async (req, res) => {
    try {
        const messages = await Message.find().sort({ timestamp: 1 }).exec();
        res.json({ messages: messages.map(msg => `[${msg.timestamp}] ${msg.message}`) });
    } catch (err) {
        res.status(500).json({ success: false });
    }
});

app.listen(3000, () => {
    console.log('Server is running on http://localhost:3000');
});
