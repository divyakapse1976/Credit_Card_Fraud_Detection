# Dataset
The dataset is too large to be uploaded to GitHub.

You can download it from:
https://www.kaggle.com/datasets/mlg-ulb/creditcardfraud

After downloading, place the file inside the "data/" folder.


# Credit Card Fraud Detection
This project focuses on identifying fraudulent credit card transactions
using machine learning techniques. The objective is to build a
classification model that can accurately distinguish between genuine
and fraudulent transactions based on transaction data.

Project Objective
To develop a machine learning model that detects fraudulent credit card
transactions while handling class imbalance and evaluating performance
using appropriate classification metrics.

Dataset
- Source: Credit Card Transactions Dataset
- Description:
  - Contains transaction details made by credit cards
  - Highly imbalanced dataset with very few fraud cases
- Target Variable:
  - Class  
    - 0 → Genuine Transaction  
    - 1 → Fraudulent Transaction  

Technologies Used
- Python
- Pandas
- NumPy
- Matplotlib
- Seaborn
- Scikit-learn
- Jupyter Notebook

Project Workflow
1. Data Loading and Exploration  
2. Data Preprocessing and Normalization  
3. Handling Class Imbalance  
4. Exploratory Data Analysis (EDA)  
5. Train-Test Split  
6. Model Training (Logistic Regression)  
7. Model Evaluation  
8. Fraud Prediction  

Handling Class Imbalance
Since fraudulent transactions are rare, class imbalance is handled using
the `class_weight='balanced'` approach to improve model performance on
fraud detection.

Model Evaluation
The model is evaluated using:
- Precision  
- Recall  
- F1-Score  
- Confusion Matrix  

These metrics are crucial for imbalanced classification problems like
fraud detection.

How to Run the Project
1. Clone the repository  
2. Install required libraries using `requirements.txt`  
3. Open the Jupyter Notebook  
4. Run all cells sequentially  

Result
The trained model is able to detect fraudulent transactions with good
performance, demonstrating the effectiveness of machine learning in
financial fraud detection.
