plugins {
    `java-library`
}

repositories {
    mavenLocal()
    mavenCentral()
}

dependencies {
    implementation("software.amazon.smithy:smithy-model:1.67.0")
    implementation("software.amazon.smithy:smithy-codegen-core:1.67.0")
    implementation("software.amazon.smithy:smithy-aws-traits:1.67.0")
    implementation("software.amazon.smithy:smithy-waiters:1.67.0")
    implementation("software.amazon.smithy:smithy-jmespath:1.67.0")
    implementation("software.amazon.smithy:smithy-rules-engine:1.67.0")
    implementation("software.amazon.smithy:smithy-aws-endpoints:1.67.0")
    implementation("software.amazon.smithy:smithy-aws-iam-traits:1.67.0")
    testImplementation("org.junit.jupiter:junit-jupiter:5.10.2")
    testRuntimeOnly("org.junit.platform:junit-platform-launcher:1.10.2")
}

tasks.test {
    useJUnitPlatform()
}
