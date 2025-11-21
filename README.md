# 🎟️ Ticket Booking Management System (C Programming)

## 📄 ABSTRACT
The Ticket Booking Management System is a terminal-based application written in C that helps users manage bookings for different ticket types such as Movie, Bus, and Train.  
The program allows users to book new tickets, view bookings, search by customer name, update details, and delete records.  
All booking information is stored persistently in a binary file **bookings.txt**, ensuring that the data remains intact across multiple runs.  
This project demonstrates essential C concepts such as **structures, file handling, control flow, and modular programming**, making it ideal for beginners, students, and mini-projects.

---

## ✨ FEATURES

### 🔧 Core Functionalities
✔️ Book Tickets (Movie, Bus, Train)  
✔️ Display All Bookings in formatted table  
✔️ Search Booking by Customer Name  
✔️ Update Booking Details  
✔️ Delete Booking using temporary-file method  
✔️ Persistent Binary Storage  
✔️ Auto File Creation  
✔️ Basic Error Handling  
✔️ Beginner-Friendly Code Structure  

---

## 🛠️ TECHNICAL REQUIREMENTS

### 🖥️ System Requirements
- Windows / Linux / macOS  
- Terminal / Command Prompt  
- Minimum 4 MB RAM  
- Storage for `bookings.txt`  

### 🔧 Software Requirements
- C Compiler: GCC / MinGW / Clang / MSVC  
- IDE (Optional): VS Code, Dev-C++, Code::Blocks, Turbo C, etc.  

### 🧠 Programming Requirements
- Language Standard: **C89 / C99 / C11**
- Required Header Files:
  - `stdio.h`
  - `string.h`

### 📁 File Handling
- Read/Write access required
- Binary format storage using `fwrite()` / `fread()`
- Temporary file used for safe delete/update operations

---

## 📌 FUNCTIONAL REQUIREMENTS

### 🖥️ User Interface
- Menu-driven CLI
- Accepts user input
- Displays confirmations and error warnings

### 🎟️ Ticket Operations

#### ➕ Book Ticket
User enters:
- Customer Name  
- Ticket Type  
  - Movie (₹150)  
  - Bus (₹100)  
  - Train (₹300)  
- Quantity  

System calculates total cost automatically and saves it.

#### 📋 View Bookings
Displays:
- Name  
- Ticket Type  
- Quantity  
- Total Amount  

#### 🔍 Search Booking
Searches record by **customer name**.

#### ✏️ Update Booking
Allows editing:
- Ticket Type  
- Quantity  
New total amount recalculated.

#### ❌ Delete Booking
Uses safe method:
- Create temp file ➝ Copy all except deleted
- Replace original file

---

## 📂 DATA MANAGEMENT
- Efficient binary storage
- Supports multiple records
- Handles missing files gracefully

---

## 🔄 PROGRAM FLOW

Display Menu → User Choice → Perform Action → Repeat Until Exit

yaml
Copy code

---

## ▶️ HOW TO RUN

### 1️⃣ Compile

#### Linux / macOS:
gcc ticket_booking.c -o ticket

shell
Copy code

#### Windows:
gcc ticket_booking.c -o ticket.exe

bash
Copy code

### 2️⃣ Run Program

- Linux/macOS:
./ticket

diff
Copy code

- Windows:
ticket.exe

yaml
Copy code

### 3️⃣ Data File
- `bookings.txt` is auto-created
- Stores data in binary format

---

## 📸 Screenshots (Optional)


 📥 Book Ticket 

 <img width="478" height="384" alt="Screenshot 2025-11-20 133759" src="https://github.com/user-attachments/assets/bd15c671-9727-4ea1-8496-13c4ad7822d7" />

 📋 View Bookings

 <img width="454" height="509" alt="Screenshot 2025-11-20 133811" src="https://github.com/user-attachments/assets/ac840517-93dd-41e7-9bc4-59fa0b0f4227" />

 🔍 Search Booking

 <img width="538" height="281" alt="Screenshot 2025-11-20 133823" src="https://github.com/user-attachments/assets/3f2fa452-34f2-4db2-9cdd-a49f51598af5" />

 ✏️ Update Booking 

 <img width="587" height="737" alt="Screenshot 2025-11-20 133912" src="https://github.com/user-attachments/assets/16d1325d-4ea4-4d4c-865f-369e5bf8be66" />

 ❌ Delete Booking 

 <img width="420" height="256" alt="Screenshot 2025-11-20 133927" src="https://github.com/user-attachments/assets/83c26681-649a-4344-934d-ea600ca04782" />

 🚪 Exit Program 

 <img width="519" height="219" alt="Screenshot 2025-11-20 133939" src="https://github.com/user-attachments/assets/3e639f99-35ab-42e0-856a-218f93ae4c34" />




---

## 📝 Author

👤 **PURNA .K**

---
