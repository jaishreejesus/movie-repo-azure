flowchart TD
    A[📥 Data Input: airline.tsv, eco_news.tsv, glo_warm.tsv, text_emo.tsv] --> B[🧹 Data Cleaning: Lowercasing, Remove URLs, Mentions, Hashtags, Symbols]
    B --> C[🎭 Label Normalization: Map multi-domain labels → Positive / Negative / Neutral]
    C --> D[🔤 Text Preprocessing: Tokenization, Stopword Removal, Duplicate Filtering]
    D --> E[🧮 Feature Extraction: TF-IDF Vectorization (Unigrams + Bigrams)]
    E --> F[⚙️ Model Training: XGBoost Classifier (Booster=gbtree, n_estimators=300)]
    F --> G[📊 Model Evaluation: Accuracy, Confusion Matrix, Classification Report]
    G --> H[💾 Model Storage: Save Vectorizer, Model, LabelEncoder]
    H --> I[🔮 Prediction Inference: Clean → Vectorize → Predict → Output Probabilities]

    style A fill:#e6f7ff,stroke:#007acc,stroke-width:2px
    style B fill:#f0fff4,stroke:#33a02c,stroke-width:2px
    style C fill:#fff8e1,stroke:#ffb300,stroke-width:2px
    style D fill:#ede7f6,stroke:#673ab7,stroke-width:2px
    style E fill:#fff0f5,stroke:#d81b60,stroke-width:2px
    style F fill:#e8f5e9,stroke:#388e3c,stroke-width:2px
    style G fill:#f3e5f5,stroke:#6a1b9a,stroke-width:2px
    style H fill:#e0f7fa,stroke:#00838f,stroke-width:2px
    style I fill:#fff3e0,stroke:#f57c00,stroke-width:2px









