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
        classpath(codegen.model)
        classpath(codegen.aws.traits)
        classpath(codegen.rules.engine)
    }
}

dependencies {
    implementation(project(":cpp-pagination-codegen"))
    implementation(codegen.aws.traits)
    implementation(codegen.aws.cloudformation.traits)
    implementation(codegen.aws.iam.traits)
    implementation(codegen.aws.endpoints)
    implementation(codegen.smoke.test.traits)
    implementation(codegen.aws.smoke.test.model)
    implementation(codegen.waiters)
}

tasks.jar {
    enabled = false
}

tasks.register("generate-smithy-build") {
    doLast {
        val projectionsBuilder = Node.objectNodeBuilder()
        val models = project.file("../../api-descriptions")
        val filteredServices: String = project.findProperty("servicesFilter")?.toString() ?: ""
        val filteredServiceList = filteredServices.split(",").map { it.trim() }.filter { it.isNotEmpty() }
        val c2jMapStr: String = project.findProperty("c2jMap")?.toString() ?: ""

        fileTree(models).filter { it.isFile }.files.forEach eachFile@{ file ->
            val model = Model.assembler()
                .addImport(file.absolutePath)
                // Grab the result directly rather than worrying about checking for errors via unwrap.
                // All we care about here is the service shape, any unchecked errors will be exposed
                // as part of the actual build task done by the smithy gradle plugin.
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
                    .withMember("cpp-codegen-pagination-plugin", Node.objectNodeBuilder()
                        .withMember("c2jMap", Node.from(c2jMapStr))
                        .build()))
                .build()
            
            projectionsBuilder.withMember("$sdkId.${service.version.lowercase()}", projectionContents)
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
