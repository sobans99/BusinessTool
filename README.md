<h1>Business Manager Tool</h1>
    <p>The Business Manager Tool is a C++ console-based project designed to manage various aspects of a business,
        including employee management, inventory management, and bill generation.<a href="SCREEN SHOTS OF OUR PROJECT.pdf">  Screenshots of this project</a> This tool provides a user-friendly
        interface to perform the following tasks:</p>
    <ol>
        <li>
            <p><strong>Employee Manager</strong></p>
            <ul>
                <li>Add new employees to the system by providing necessary details such as name, designation, salary,
                    etc.</li>
                <li>Change or update the information of existing employees.</li>
                <li>Remove employees from the records if they are no longer associated with the business.</li>
                <li>Calculate the salary of employees based on their designations and working hours.</li>
            </ul>
        </li>
        <li>
            <p><strong>Inventory Manager</strong></p>
            <ul>
                <li>Add new products to the inventory with details like product name, price, quantity, etc.</li>
                <li>Remove products from the inventory that are no longer available for sale.</li>
                <li>Update product information, such as price and quantity, when necessary.</li>
            </ul>
        </li>
        <li>
            <p><strong>Bill Maker</strong></p>
            <ul>
                <li>Generate bills/receipts for customers after making purchases.</li>
                <li>Save the generated bill in a notepad file for future reference.</li>
            </ul>
        </li>
    </ol>
    <h2>Getting Started</h2>
    <p>Follow these instructions to get a copy of the "Business Manager Tool" project up and running on your local
        machine.</p>
    <h3>Prerequisites</h3>
    <p>Before you proceed, ensure you have the following installed:</p>
    <ul>
        <li>C++ Compiler (GCC, Clang, or MSVC)</li>
        <li>Git (optional, for cloning the repository)</li>
    </ul>
    <h3>Installation</h3>
    <ol>
        <li>
            <p>Clone the GitHub repository using the following command (if you have Git installed):</p>
            <pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>bash</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-bash">git <span class="hljs-built_in">clone</span> https://github.com/sobans99/BusinessTool
                
</code></div></div></pre>
            <p>Alternatively, you can download the repository as a ZIP file from the GitHub website and extract it to a
                folder.</p>
        </li>
        <li>
            <p>Compile the source code using your preferred C++ compiler:</p>
            <pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>css</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-css">g++ <span class="hljs-selector-tag">main</span><span class="hljs-selector-class">.cpp</span> -o business_manager_tool
</code></div></div></pre>
            <p>Replace <code>g++</code> with your compiler command if different.</p>
        </li>
        <li>
            <p>Run the executable:</p>
            <pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>bash</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-bash">./business_manager_tool
</code></div></div></pre>
        </li>
    </ol>
    <h2>How to Use</h2>
    <p>Upon running the "Business Manager Tool," you will be presented with a menu displaying different options for
        managing employees, inventory, and generating bills. Use the arrow keys or numeric input to select the desired
        operation and follow the on-screen instructions.</p>
    <h3>Employee Manager</h3>
    <ol>
        <li>
            <p><strong>Add Employee</strong></p>
            <ul>
                <li>Enter the required information for the new employee when prompted.</li>
                <li>The employee will be added to the database.</li>
            </ul>
        </li>
        <li>
            <p><strong>Update Employee</strong></p>
            <ul>
                <li>Search for the employee using their unique identifier (e.g., ID, name).</li>
                <li>Modify the necessary details (e.g., salary, designation).</li>
            </ul>
        </li>
        <li>
            <p><strong>Remove Employee</strong></p>
            <ul>
                <li>Search for the employee using their unique identifier.</li>
                <li>The employee will be removed from the records.</li>
            </ul>
        </li>
        <li>
            <p><strong>Calculate Salary</strong></p>
            <ul>
                <li>Enter the required details (e.g., working hours, hourly rate).</li>
                <li>The salary will be calculated based on the provided information.</li>
            </ul>
        </li>
    </ol>
    <h3>Inventory Manager</h3>
    <ol>
        <li>
            <p><strong>Add Product</strong></p>
            <ul>
                <li>Enter the product details (e.g., name, price, quantity).</li>
                <li>The product will be added to the inventory.</li>
            </ul>
        </li>
        <li>
            <p><strong>Update Product</strong></p>
            <ul>
                <li>Search for the product using its identifier (e.g., product code, name).</li>
                <li>Update the product information as needed.</li>
            </ul>
        </li>
        <li>
            <p><strong>Remove Product</strong></p>
            <ul>
                <li>Search for the product using its identifier.</li>
                <li>The product will be removed from the inventory.</li>
            </ul>
        </li>
    </ol>
    <h3>Bill Maker</h3>
    <ol>
        <li>
            <p><strong>Generate Bill</strong></p>
            <ul>
                <li>Select the products purchased and their quantities.</li>
                <li>The bill will be generated, displaying the total amount due.</li>
            </ul>
        </li>
        <li>
            <p><strong>Save Bill</strong></p>
            <ul>
                <li>The generated bill will be saved in a notepad file for record-keeping.</li>
            </ul>
        </li>
    </ol>
    <h2>Contributing</h2>
    <p>If you wish to contribute to this project, feel free to fork the repository, make necessary changes, and submit a
        pull request.</p>
    <h2>License</h2>
    <p>This project is licensed under the <a href="LICENSE" target="_new">MIT License</a>. You are free to use, modify,
        and distribute the code as per the terms of the license.</p>
    <h2>Acknowledgments</h2>
    <p>Special thanks to all contributors and developers who have helped make this project possible.</p>
    <p>Please feel free to contact us if you have any questions or suggestions! Happy business managing!</p>
