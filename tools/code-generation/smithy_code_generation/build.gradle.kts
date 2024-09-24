plugins {
    id("software.amazon.smithy.gradle.smithy-base") version "1.1.0"
    id("java-library")
    //id("io.freefair.lombok") version "5.3.0"
}

allprojects {
    group = "com.amazonaws.util.awsclientsmithygenerator.generators"
    version = "0.1.0"
}

repositories {
    mavenLocal()
    mavenCentral()
}

dependencies {
    // Smithy model dependencies
    implementation("software.amazon.smithy:smithy-model:1.51.0") // Replace with your required version

    // Smithy AWS SDK integration (if you are using Smithy to generate AWS SDKs)
    implementation("software.amazon.smithy:smithy-aws-traits:1.51.0") // Example for AWS specific traits

    // For code generation with Smithy (optional, depending on what you are building)
    implementation("software.amazon.smithy:smithy-codegen-core:1.51.0")

    implementation("software.amazon.smithy:smithy-smoke-test-traits:1.51.0")

    implementation("software.amazon.smithy:smithy-waiters:1.51.0")

    api("software.amazon.smithy:smithy-rules-engine:1.51.0")

    implementation("software.amazon.smithy:smithy-aws-smoke-test-model:1.51.0")

    api("software.amazon.smithy:smithy-aws-endpoints:1.51.0")

    // Other dependencies
    api("com.google.guava:guava:32.0.1-jre")
    implementation("org.projectlombok:lombok:1.18.30") // Corrected Lombok dependency
    annotationProcessor("org.projectlombok:lombok:1.18.30")

    api("commons-cli:commons-cli:1.9.0")
    api("commons-io:commons-io:2.16.1")
    api("org.apache.velocity:velocity-engine-core:2.3")

    // Unit testing dependencies
    testImplementation("org.junit.jupiter:junit-jupiter-api:5.8.1")
    testRuntimeOnly("org.junit.jupiter:junit-jupiter-engine")
}

smithy {
    sourceSets {
        main {
            java {
                // Specify the directory where your Java files are located
                srcDirs("smoke-tests/src/main/java")
            }
            smithy {
                srcDir("model/")
            }
            resources {
                srcDir("smoke-tests/src/main/resources")
            }
        }
    }

    //sourceProjection.set("smoketest")
}

tasks.test {
    useJUnitPlatform()
}
