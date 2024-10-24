plugins {
    id("java-library")
}

repositories {
    mavenLocal()
    mavenCentral()
}

dependencies {
    implementation(codegen.model)
    implementation(codegen.aws.traits)
    implementation(codegen.codegen.core)
    implementation(codegen.smoke.test.traits)
    implementation(codegen.waiters)
    api(codegen.rules.engine)
    implementation(codegen.aws.smoke.test.model)
    api(codegen.aws.endpoints)
    api(codegen.aws.iam.traits)
    api(codegen.aws.cloudformation.traits)
    api(codegen.guava)
    implementation(codegen.lombok)
    annotationProcessor(codegen.lombok)
    api(codegen.commons.cli)
    api(codegen.commons.io)

    testImplementation(test.junit.jupiter.api)
    testRuntimeOnly(test.junit.jupiter.engine)
    implementation("ch.qos.logback:logback-classic:1.4.7") // Adding Logback for SLF4J
    implementation("com.google.code.gson:gson:2.10.1")// Use the latest version
    implementation("com.google.guava:guava:32.1.2-jre")
}

tasks.test {
    useJUnitPlatform()
}
