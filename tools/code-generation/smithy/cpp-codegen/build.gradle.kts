import software.amazon.smithy.model.Model
import software.amazon.smithy.model.node.Node
import software.amazon.smithy.model.shapes.ServiceShape
import software.amazon.smithy.aws.traits.ServiceTrait
import org.gradle.api.logging.Logging
import kotlin.streams.toList

val logger = Logging.getLogger("MyLogger")

plugins {
    id("java-library")
    id("software.amazon.smithy.gradle.smithy-base").version("1.3.0")
}

repositories {
    mavenLocal()
    mavenCentral()
}

buildscript {
    dependencies {
        classpath("software.amazon.smithy:smithy-model:1.62.0")
        classpath("software.amazon.smithy:smithy-aws-traits:1.62.0")
        classpath("software.amazon.smithy:smithy-rules-engine:1.62.0")
    }
}

dependencies {
    implementation(project(":smithy-cpp-codegen"))
    implementation("software.amazon.smithy:smithy-aws-traits:1.62.0")
    implementation("software.amazon.smithy:smithy-aws-cloudformation-traits:1.62.0")
    implementation("software.amazon.smithy:smithy-aws-iam-traits:1.62.0")
    implementation("software.amazon.smithy:smithy-aws-endpoints:1.62.0")
    implementation("software.amazon.smithy:smithy-smoke-test-traits:1.62.0")
    implementation("software.amazon.smithy:smithy-aws-smoke-test-model:1.62.0")
    implementation("software.amazon.smithy:smithy-waiters:1.62.0")
}

tasks.register("generate-smithy-build") {
    doLast {
        val projectionsBuilder = Node.objectNodeBuilder()
        val models = project.file("../api-descriptions")
        val filteredServices: String = project.findProperty("servicesFilter")?.toString() ?: ""
        val filteredServiceList = filteredServices.split(",").map { it.trim() }.filter { it.isNotEmpty() }
        val c2jMapStr: String = project.findProperty("c2jMap")?.toString() ?: ""

        fileTree(models).filter { it.isFile }.files.forEach eachFile@{ file ->
            val model = Model.assembler()
                .addImport(file.absolutePath)
                .assemble().result.get()
            val services = model.shapes(ServiceShape::class.java).sorted().toList()
            if (services.size != 1) return@eachFile
            
            val service = services[0]
            val serviceTrait = service.getTrait(ServiceTrait::class.java).get()
            val sdkId = serviceTrait.sdkId.replace(" ", "-").replace("_", "-").lowercase()
            
            if (filteredServiceList.isNotEmpty() && sdkId !in filteredServiceList) return@eachFile
            
            val projectionContents = Node.objectNodeBuilder()
                .withMember("imports", Node.fromStrings("${models.absolutePath}${File.separator}${file.name}"))
                .withMember("plugins", Node.objectNode()
                    .withMember("smithy-cpp-codegen", Node.objectNodeBuilder()
                        .withMember("c2jMap", Node.from(c2jMapStr))
                        .build()))
                .build()
            
            projectionsBuilder.withMember("$sdkId.${service.version.lowercase()}", projectionContents)
        }
        
        // Legacy services without full Smithy models - generate mock projections for base classes
        val legacyServices = mapOf("importexport" to "ImportExport", "sdb" to "SimpleDB")
        legacyServices.forEach { (c2jName, serviceName) ->
            if (filteredServiceList.isEmpty() || c2jName in filteredServiceList) {
                val mockProjectionContents = Node.objectNodeBuilder()
                    .withMember("plugins", Node.objectNode()
                        .withMember("smithy-cpp-codegen", Node.objectNodeBuilder()
                            .withMember("c2jMap", Node.from(c2jMapStr))
                            .build()))
                    .build()
                projectionsBuilder.withMember("$c2jName.mock", mockProjectionContents)
            }
        }
        
        // S3-CRT: Uses S3 model but generates with S3Crt namespace
        if (filteredServiceList.isEmpty() || "s3-crt" in filteredServiceList) {
            fileTree(models).filter { it.isFile && it.name == "s3.json" }.files.firstOrNull()?.let { s3ModelFile ->
                val s3CrtProjectionContents = Node.objectNodeBuilder()
                    .withMember("imports", Node.fromStrings(s3ModelFile.absolutePath))
                    .withMember("plugins", Node.objectNode()
                        .withMember("smithy-cpp-codegen", Node.objectNodeBuilder()
                            .withMember("c2jMap", Node.from(c2jMapStr))
                            .build()))
                    .build()
                projectionsBuilder.withMember("s3-crt.2006-03-01", s3CrtProjectionContents)
            }
        }
        
        val outputDirectoryArg = project.findProperty("outputDirectory")?.toString() ?: "output"
        file("smithy-build.json").writeText(Node.prettyPrintJson(Node.objectNodeBuilder()
            .withMember("version", "1.0")
            .withMember("projections", projectionsBuilder.build())
            .withMember("outputDirectory", outputDirectoryArg)
            .build()))
    }
}

tasks["build"].dependsOn(tasks["generate-smithy-build"])
