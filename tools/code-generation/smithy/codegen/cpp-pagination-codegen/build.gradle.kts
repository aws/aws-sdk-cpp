plugins {
    `java-library`
}

repositories {
    mavenLocal()
    mavenCentral()
}

dependencies {
    implementation("software.amazon.smithy:smithy-model:1.51.0")
    implementation("software.amazon.smithy:smithy-codegen-core:1.51.0")
    implementation("software.amazon.smithy:smithy-aws-traits:1.51.0")
    implementation("software.amazon.smithy:smithy-waiters:1.51.0")
    implementation("software.amazon.smithy:smithy-rules-engine:1.51.0")
    implementation("software.amazon.smithy:smithy-aws-endpoints:1.51.0")
}
