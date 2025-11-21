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
 📋 View Bookings
 🔍 Search Booking
 ✏️ Update Booking 
 ❌ Delete Booking 
 🚪 Exit Program 



---

## 📝 Author

👤 **PURNA .K**

---
