plugins {
    `java-library`
}

repositories {
    mavenLocal()
    mavenCentral()
}

dependencies {
    implementation("software.amazon.smithy:smithy-model:1.62.0")
    implementation("software.amazon.smithy:smithy-codegen-core:1.62.0")
    implementation("software.amazon.smithy:smithy-aws-traits:1.62.0")
    implementation("software.amazon.smithy:smithy-waiters:1.62.0")
    implementation("software.amazon.smithy:smithy-rules-engine:1.62.0")
    implementation("software.amazon.smithy:smithy-aws-endpoints:1.62.0")
    implementation("software.amazon.smithy:smithy-aws-iam-traits:1.62.0")
}
