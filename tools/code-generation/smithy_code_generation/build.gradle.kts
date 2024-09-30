plugins {
    id("java-library")
}

repositories {
    mavenLocal()
    mavenCentral()
    //gradlePluginPortal()
}

allprojects {
    group = "com.amazonaws.util.awsclientsmithygenerator.generators"
    version = "0.1.0"
}

dependencies {
    //implementation("org.apache.velocity:velocity-engine-core:2.3")
    //implementation("software.amazon.smithy:smithy-model:1.51.0")
}