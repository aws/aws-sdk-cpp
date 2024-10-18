package org.gradle.accessors.dm;

import org.gradle.api.NonNullApi;
import org.gradle.api.artifacts.MinimalExternalModuleDependency;
import org.gradle.plugin.use.PluginDependency;
import org.gradle.api.artifacts.ExternalModuleDependencyBundle;
import org.gradle.api.artifacts.MutableVersionConstraint;
import org.gradle.api.provider.Provider;
import org.gradle.api.model.ObjectFactory;
import org.gradle.api.provider.ProviderFactory;
import org.gradle.api.internal.catalog.AbstractExternalDependencyFactory;
import org.gradle.api.internal.catalog.DefaultVersionCatalog;
import java.util.Map;
import org.gradle.api.internal.attributes.ImmutableAttributesFactory;
import org.gradle.api.internal.artifacts.dsl.CapabilityNotationParser;
import javax.inject.Inject;

/**
 * A catalog of dependencies accessible via the {@code codegen} extension.
 */
@NonNullApi
public class LibrariesForCodegen extends AbstractExternalDependencyFactory {

    private final AbstractExternalDependencyFactory owner = this;
    private final AwsLibraryAccessors laccForAwsLibraryAccessors = new AwsLibraryAccessors(owner);
    private final CodegenLibraryAccessors laccForCodegenLibraryAccessors = new CodegenLibraryAccessors(owner);
    private final CommonsLibraryAccessors laccForCommonsLibraryAccessors = new CommonsLibraryAccessors(owner);
    private final RulesLibraryAccessors laccForRulesLibraryAccessors = new RulesLibraryAccessors(owner);
    private final SmokeLibraryAccessors laccForSmokeLibraryAccessors = new SmokeLibraryAccessors(owner);
    private final VersionAccessors vaccForVersionAccessors = new VersionAccessors(providers, config);
    private final BundleAccessors baccForBundleAccessors = new BundleAccessors(objects, providers, config, attributesFactory, capabilityNotationParser);
    private final PluginAccessors paccForPluginAccessors = new PluginAccessors(providers, config);

    @Inject
    public LibrariesForCodegen(DefaultVersionCatalog config, ProviderFactory providers, ObjectFactory objects, ImmutableAttributesFactory attributesFactory, CapabilityNotationParser capabilityNotationParser) {
        super(config, providers, objects, attributesFactory, capabilityNotationParser);
    }

    /**
     * Dependency provider for <b>guava</b> with <b>com.google.guava:guava</b> coordinates and
     * with version <b>32.0.1-jre</b>
     * <p>
     * This dependency was declared in settings file 'settings.gradle.kts'
     */
    public Provider<MinimalExternalModuleDependency> getGuava() {
        return create("guava");
    }

    /**
     * Dependency provider for <b>lombok</b> with <b>org.projectlombok:lombok</b> coordinates and
     * with version <b>1.18.30</b>
     * <p>
     * This dependency was declared in settings file 'settings.gradle.kts'
     */
    public Provider<MinimalExternalModuleDependency> getLombok() {
        return create("lombok");
    }

    /**
     * Dependency provider for <b>model</b> with <b>software.amazon.smithy:smithy-model</b> coordinates and
     * with version reference <b>smithy</b>
     * <p>
     * This dependency was declared in settings file 'settings.gradle.kts'
     */
    public Provider<MinimalExternalModuleDependency> getModel() {
        return create("model");
    }

    /**
     * Dependency provider for <b>slf4j</b> with <b>org.slf4j:slf4j-simple</b> coordinates and
     * with version <b>1.7.30</b>
     * <p>
     * This dependency was declared in settings file 'settings.gradle.kts'
     */
    public Provider<MinimalExternalModuleDependency> getSlf4j() {
        return create("slf4j");
    }

    /**
     * Dependency provider for <b>waiters</b> with <b>software.amazon.smithy:smithy-waiters</b> coordinates and
     * with version reference <b>smithy</b>
     * <p>
     * This dependency was declared in settings file 'settings.gradle.kts'
     */
    public Provider<MinimalExternalModuleDependency> getWaiters() {
        return create("waiters");
    }

    /**
     * Group of libraries at <b>aws</b>
     */
    public AwsLibraryAccessors getAws() {
        return laccForAwsLibraryAccessors;
    }

    /**
     * Group of libraries at <b>codegen</b>
     */
    public CodegenLibraryAccessors getCodegen() {
        return laccForCodegenLibraryAccessors;
    }

    /**
     * Group of libraries at <b>commons</b>
     */
    public CommonsLibraryAccessors getCommons() {
        return laccForCommonsLibraryAccessors;
    }

    /**
     * Group of libraries at <b>rules</b>
     */
    public RulesLibraryAccessors getRules() {
        return laccForRulesLibraryAccessors;
    }

    /**
     * Group of libraries at <b>smoke</b>
     */
    public SmokeLibraryAccessors getSmoke() {
        return laccForSmokeLibraryAccessors;
    }

    /**
     * Group of versions at <b>versions</b>
     */
    public VersionAccessors getVersions() {
        return vaccForVersionAccessors;
    }

    /**
     * Group of bundles at <b>bundles</b>
     */
    public BundleAccessors getBundles() {
        return baccForBundleAccessors;
    }

    /**
     * Group of plugins at <b>plugins</b>
     */
    public PluginAccessors getPlugins() {
        return paccForPluginAccessors;
    }

    public static class AwsLibraryAccessors extends SubDependencyFactory {
        private final AwsCloudformationLibraryAccessors laccForAwsCloudformationLibraryAccessors = new AwsCloudformationLibraryAccessors(owner);
        private final AwsIamLibraryAccessors laccForAwsIamLibraryAccessors = new AwsIamLibraryAccessors(owner);
        private final AwsSmokeLibraryAccessors laccForAwsSmokeLibraryAccessors = new AwsSmokeLibraryAccessors(owner);

        public AwsLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>endpoints</b> with <b>software.amazon.smithy:smithy-aws-endpoints</b> coordinates and
         * with version reference <b>smithy</b>
         * <p>
         * This dependency was declared in settings file 'settings.gradle.kts'
         */
        public Provider<MinimalExternalModuleDependency> getEndpoints() {
            return create("aws.endpoints");
        }

        /**
         * Dependency provider for <b>traits</b> with <b>software.amazon.smithy:smithy-aws-traits</b> coordinates and
         * with version reference <b>smithy</b>
         * <p>
         * This dependency was declared in settings file 'settings.gradle.kts'
         */
        public Provider<MinimalExternalModuleDependency> getTraits() {
            return create("aws.traits");
        }

        /**
         * Group of libraries at <b>aws.cloudformation</b>
         */
        public AwsCloudformationLibraryAccessors getCloudformation() {
            return laccForAwsCloudformationLibraryAccessors;
        }

        /**
         * Group of libraries at <b>aws.iam</b>
         */
        public AwsIamLibraryAccessors getIam() {
            return laccForAwsIamLibraryAccessors;
        }

        /**
         * Group of libraries at <b>aws.smoke</b>
         */
        public AwsSmokeLibraryAccessors getSmoke() {
            return laccForAwsSmokeLibraryAccessors;
        }

    }

    public static class AwsCloudformationLibraryAccessors extends SubDependencyFactory {

        public AwsCloudformationLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>traits</b> with <b>software.amazon.smithy:smithy-aws-cloudformation-traits</b> coordinates and
         * with version reference <b>smithy</b>
         * <p>
         * This dependency was declared in settings file 'settings.gradle.kts'
         */
        public Provider<MinimalExternalModuleDependency> getTraits() {
            return create("aws.cloudformation.traits");
        }

    }

    public static class AwsIamLibraryAccessors extends SubDependencyFactory {

        public AwsIamLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>traits</b> with <b>software.amazon.smithy:smithy-aws-iam-traits</b> coordinates and
         * with version reference <b>smithy</b>
         * <p>
         * This dependency was declared in settings file 'settings.gradle.kts'
         */
        public Provider<MinimalExternalModuleDependency> getTraits() {
            return create("aws.iam.traits");
        }

    }

    public static class AwsSmokeLibraryAccessors extends SubDependencyFactory {
        private final AwsSmokeTestLibraryAccessors laccForAwsSmokeTestLibraryAccessors = new AwsSmokeTestLibraryAccessors(owner);

        public AwsSmokeLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>aws.smoke.test</b>
         */
        public AwsSmokeTestLibraryAccessors getTest() {
            return laccForAwsSmokeTestLibraryAccessors;
        }

    }

    public static class AwsSmokeTestLibraryAccessors extends SubDependencyFactory {

        public AwsSmokeTestLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>model</b> with <b>software.amazon.smithy:smithy-aws-smoke-test-model</b> coordinates and
         * with version reference <b>smithy</b>
         * <p>
         * This dependency was declared in settings file 'settings.gradle.kts'
         */
        public Provider<MinimalExternalModuleDependency> getModel() {
            return create("aws.smoke.test.model");
        }

    }

    public static class CodegenLibraryAccessors extends SubDependencyFactory {

        public CodegenLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>core</b> with <b>software.amazon.smithy:smithy-codegen-core</b> coordinates and
         * with version reference <b>smithy</b>
         * <p>
         * This dependency was declared in settings file 'settings.gradle.kts'
         */
        public Provider<MinimalExternalModuleDependency> getCore() {
            return create("codegen.core");
        }

    }

    public static class CommonsLibraryAccessors extends SubDependencyFactory {

        public CommonsLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>cli</b> with <b>commons-cli:commons-cli</b> coordinates and
         * with version <b>1.9.0</b>
         * <p>
         * This dependency was declared in settings file 'settings.gradle.kts'
         */
        public Provider<MinimalExternalModuleDependency> getCli() {
            return create("commons.cli");
        }

        /**
         * Dependency provider for <b>io</b> with <b>commons-io:commons-io</b> coordinates and
         * with version <b>2.16.1</b>
         * <p>
         * This dependency was declared in settings file 'settings.gradle.kts'
         */
        public Provider<MinimalExternalModuleDependency> getIo() {
            return create("commons.io");
        }

    }

    public static class RulesLibraryAccessors extends SubDependencyFactory {

        public RulesLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>engine</b> with <b>software.amazon.smithy:smithy-rules-engine</b> coordinates and
         * with version reference <b>smithy</b>
         * <p>
         * This dependency was declared in settings file 'settings.gradle.kts'
         */
        public Provider<MinimalExternalModuleDependency> getEngine() {
            return create("rules.engine");
        }

    }

    public static class SmokeLibraryAccessors extends SubDependencyFactory {
        private final SmokeTestLibraryAccessors laccForSmokeTestLibraryAccessors = new SmokeTestLibraryAccessors(owner);

        public SmokeLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Group of libraries at <b>smoke.test</b>
         */
        public SmokeTestLibraryAccessors getTest() {
            return laccForSmokeTestLibraryAccessors;
        }

    }

    public static class SmokeTestLibraryAccessors extends SubDependencyFactory {

        public SmokeTestLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>traits</b> with <b>software.amazon.smithy:smithy-smoke-test-traits</b> coordinates and
         * with version reference <b>smithy</b>
         * <p>
         * This dependency was declared in settings file 'settings.gradle.kts'
         */
        public Provider<MinimalExternalModuleDependency> getTraits() {
            return create("smoke.test.traits");
        }

    }

    public static class VersionAccessors extends VersionFactory  {

        public VersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>smithy</b> with value <b>1.51.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in settings file 'settings.gradle.kts'
         */
        public Provider<String> getSmithy() { return getVersion("smithy"); }

    }

    public static class BundleAccessors extends BundleFactory {

        public BundleAccessors(ObjectFactory objects, ProviderFactory providers, DefaultVersionCatalog config, ImmutableAttributesFactory attributesFactory, CapabilityNotationParser capabilityNotationParser) { super(objects, providers, config, attributesFactory, capabilityNotationParser); }

    }

    public static class PluginAccessors extends PluginFactory {

        public PluginAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

    }

}
