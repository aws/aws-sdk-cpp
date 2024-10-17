plugins {
    id("java-library")
}

repositories {
    mavenLocal()
    mavenCentral()
}

allprojects {
    group = "com.amazonaws.util.awsclientsmithygenerator.generators"
    version = "0.1.0"
}

dependencies {
}

// Ensure the build task in the root project depends on the subproject's update task
//tasks.named("build") {
//    dependsOn(":cpp-smoke-tests:updateSmithyBuildJson") // Replace 'subproject' with the actual subproject name
//}

