//Gaire Ananta Prasad M24W0272
const express = require('express');
const bodyParser = require('body-parser');
const sqlite3 = require('sqlite3').verbose();

const app = express();
app.use(bodyParser.json());
app.use(express.static('public'));

const db = new sqlite3.Database('chat.db');

db.serialize(() => {
    db.run('CREATE TABLE IF NOT EXISTS messages (id INTEGER PRIMARY KEY AUTOINCREMENT, message TEXT, timestamp DATETIME DEFAULT CURRENT_TIMESTAMP)');
});

app.post('/send', (req, res) => {
    const message = req.body.message;
    db.run('INSERT INTO messages (message) VALUES (?)', [message], (err) => {
        if (err) {
            return res.status(500).json({ success: false });
        }
        res.json({ success: true });
    });
});
app.get('/messages', (req, res) => {
    db.all('SELECT * FROM messages ORDER BY timestamp ASC', (err, rows) => {
        if (err) {
            return res.status(500).json({ success: false });
        }
        const messages = rows.map(row => `[${row.timestamp}] ${row.message}`);
        res.json({ messages });
    });
});
app.listen(3000, () => {
    console.log('Server is running on http://localhost:3000');
});
