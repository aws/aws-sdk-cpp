/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/LayerType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opsworks/model/CloudWatchLogsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/Recipes.h>
#include <aws/opsworks/model/LifecycleEventConfiguration.h>
#include <aws/opsworks/model/LayerAttributesKeys.h>
#include <aws/opsworks/model/VolumeConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes a layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Layer">AWS API
   * Reference</a></p>
   */
  class Layer
  {
  public:
    AWS_OPSWORKS_API Layer() = default;
    AWS_OPSWORKS_API Layer(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Layer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of a layer.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Layer& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    Layer& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer ID.</p>
     */
    inline const Aws::String& GetLayerId() const { return m_layerId; }
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }
    template<typename LayerIdT = Aws::String>
    void SetLayerId(LayerIdT&& value) { m_layerIdHasBeenSet = true; m_layerId = std::forward<LayerIdT>(value); }
    template<typename LayerIdT = Aws::String>
    Layer& WithLayerId(LayerIdT&& value) { SetLayerId(std::forward<LayerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer type.</p>
     */
    inline LayerType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LayerType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Layer& WithType(LayerType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer name. Layer names can be a maximum of 32 characters.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Layer& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer short name.</p>
     */
    inline const Aws::String& GetShortname() const { return m_shortname; }
    inline bool ShortnameHasBeenSet() const { return m_shortnameHasBeenSet; }
    template<typename ShortnameT = Aws::String>
    void SetShortname(ShortnameT&& value) { m_shortnameHasBeenSet = true; m_shortname = std::forward<ShortnameT>(value); }
    template<typename ShortnameT = Aws::String>
    Layer& WithShortname(ShortnameT&& value) { SetShortname(std::forward<ShortnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes,
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline const Aws::Map<LayerAttributesKeys, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<LayerAttributesKeys, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<LayerAttributesKeys, Aws::String>>
    Layer& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    inline Layer& AddAttributes(LayerAttributesKeys key, Aws::String value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch Logs configuration settings for the layer.</p>
     */
    inline const CloudWatchLogsConfiguration& GetCloudWatchLogsConfiguration() const { return m_cloudWatchLogsConfiguration; }
    inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }
    template<typename CloudWatchLogsConfigurationT = CloudWatchLogsConfiguration>
    void SetCloudWatchLogsConfiguration(CloudWatchLogsConfigurationT&& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = std::forward<CloudWatchLogsConfigurationT>(value); }
    template<typename CloudWatchLogsConfigurationT = CloudWatchLogsConfiguration>
    Layer& WithCloudWatchLogsConfiguration(CloudWatchLogsConfigurationT&& value) { SetCloudWatchLogsConfiguration(std::forward<CloudWatchLogsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetCustomInstanceProfileArn() const { return m_customInstanceProfileArn; }
    inline bool CustomInstanceProfileArnHasBeenSet() const { return m_customInstanceProfileArnHasBeenSet; }
    template<typename CustomInstanceProfileArnT = Aws::String>
    void SetCustomInstanceProfileArn(CustomInstanceProfileArnT&& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = std::forward<CustomInstanceProfileArnT>(value); }
    template<typename CustomInstanceProfileArnT = Aws::String>
    Layer& WithCustomInstanceProfileArn(CustomInstanceProfileArnT&& value) { SetCustomInstanceProfileArn(std::forward<CustomInstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON formatted string containing the layer's custom stack configuration and
     * deployment attributes.</p>
     */
    inline const Aws::String& GetCustomJson() const { return m_customJson; }
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }
    template<typename CustomJsonT = Aws::String>
    void SetCustomJson(CustomJsonT&& value) { m_customJsonHasBeenSet = true; m_customJson = std::forward<CustomJsonT>(value); }
    template<typename CustomJsonT = Aws::String>
    Layer& WithCustomJson(CustomJsonT&& value) { SetCustomJson(std::forward<CustomJsonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomSecurityGroupIds() const { return m_customSecurityGroupIds; }
    inline bool CustomSecurityGroupIdsHasBeenSet() const { return m_customSecurityGroupIdsHasBeenSet; }
    template<typename CustomSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetCustomSecurityGroupIds(CustomSecurityGroupIdsT&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds = std::forward<CustomSecurityGroupIdsT>(value); }
    template<typename CustomSecurityGroupIdsT = Aws::Vector<Aws::String>>
    Layer& WithCustomSecurityGroupIds(CustomSecurityGroupIdsT&& value) { SetCustomSecurityGroupIds(std::forward<CustomSecurityGroupIdsT>(value)); return *this;}
    template<typename CustomSecurityGroupIdsT = Aws::String>
    Layer& AddCustomSecurityGroupIds(CustomSecurityGroupIdsT&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.emplace_back(std::forward<CustomSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDefaultSecurityGroupNames() const { return m_defaultSecurityGroupNames; }
    inline bool DefaultSecurityGroupNamesHasBeenSet() const { return m_defaultSecurityGroupNamesHasBeenSet; }
    template<typename DefaultSecurityGroupNamesT = Aws::Vector<Aws::String>>
    void SetDefaultSecurityGroupNames(DefaultSecurityGroupNamesT&& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames = std::forward<DefaultSecurityGroupNamesT>(value); }
    template<typename DefaultSecurityGroupNamesT = Aws::Vector<Aws::String>>
    Layer& WithDefaultSecurityGroupNames(DefaultSecurityGroupNamesT&& value) { SetDefaultSecurityGroupNames(std::forward<DefaultSecurityGroupNamesT>(value)); return *this;}
    template<typename DefaultSecurityGroupNamesT = Aws::String>
    Layer& AddDefaultSecurityGroupNames(DefaultSecurityGroupNamesT&& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames.emplace_back(std::forward<DefaultSecurityGroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackages() const { return m_packages; }
    inline bool PackagesHasBeenSet() const { return m_packagesHasBeenSet; }
    template<typename PackagesT = Aws::Vector<Aws::String>>
    void SetPackages(PackagesT&& value) { m_packagesHasBeenSet = true; m_packages = std::forward<PackagesT>(value); }
    template<typename PackagesT = Aws::Vector<Aws::String>>
    Layer& WithPackages(PackagesT&& value) { SetPackages(std::forward<PackagesT>(value)); return *this;}
    template<typename PackagesT = Aws::String>
    Layer& AddPackages(PackagesT&& value) { m_packagesHasBeenSet = true; m_packages.emplace_back(std::forward<PackagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline const Aws::Vector<VolumeConfiguration>& GetVolumeConfigurations() const { return m_volumeConfigurations; }
    inline bool VolumeConfigurationsHasBeenSet() const { return m_volumeConfigurationsHasBeenSet; }
    template<typename VolumeConfigurationsT = Aws::Vector<VolumeConfiguration>>
    void SetVolumeConfigurations(VolumeConfigurationsT&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = std::forward<VolumeConfigurationsT>(value); }
    template<typename VolumeConfigurationsT = Aws::Vector<VolumeConfiguration>>
    Layer& WithVolumeConfigurations(VolumeConfigurationsT&& value) { SetVolumeConfigurations(std::forward<VolumeConfigurationsT>(value)); return *this;}
    template<typename VolumeConfigurationsT = VolumeConfiguration>
    Layer& AddVolumeConfigurations(VolumeConfigurationsT&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.emplace_back(std::forward<VolumeConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether auto healing is disabled for the layer.</p>
     */
    inline bool GetEnableAutoHealing() const { return m_enableAutoHealing; }
    inline bool EnableAutoHealingHasBeenSet() const { return m_enableAutoHealingHasBeenSet; }
    inline void SetEnableAutoHealing(bool value) { m_enableAutoHealingHasBeenSet = true; m_enableAutoHealing = value; }
    inline Layer& WithEnableAutoHealing(bool value) { SetEnableAutoHealing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to automatically assign an <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
     * IP address</a> to the layer's instances. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline bool GetAutoAssignElasticIps() const { return m_autoAssignElasticIps; }
    inline bool AutoAssignElasticIpsHasBeenSet() const { return m_autoAssignElasticIpsHasBeenSet; }
    inline void SetAutoAssignElasticIps(bool value) { m_autoAssignElasticIpsHasBeenSet = true; m_autoAssignElasticIps = value; }
    inline Layer& WithAutoAssignElasticIps(bool value) { SetAutoAssignElasticIps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For stacks that are running in a VPC, whether to automatically assign a
     * public IP address to the layer's instances. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-edit.html">How
     * to Edit a Layer</a>.</p>
     */
    inline bool GetAutoAssignPublicIps() const { return m_autoAssignPublicIps; }
    inline bool AutoAssignPublicIpsHasBeenSet() const { return m_autoAssignPublicIpsHasBeenSet; }
    inline void SetAutoAssignPublicIps(bool value) { m_autoAssignPublicIpsHasBeenSet = true; m_autoAssignPublicIps = value; }
    inline Layer& WithAutoAssignPublicIps(bool value) { SetAutoAssignPublicIps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>OpsWorks Stacks supports five lifecycle events: <b>setup</b>,
     * <b>configuration</b>, <b>deploy</b>, <b>undeploy</b>, and <b>shutdown</b>. For
     * each layer, OpsWorks Stacks runs a set of standard recipes for each event. You
     * can also provide custom recipes for any or all layers and events. OpsWorks
     * Stacks runs custom event recipes after the standard recipes.
     * <code>LayerCustomRecipes</code> specifies the custom recipes for a particular
     * layer to be run in response to each of the five events.</p> <p>To specify a
     * recipe, use the cookbook's directory name in the repository followed by two
     * colons and the recipe name, which is the recipe's file name without the
     * <code>.rb</code> extension. For example: <code>phpapp2::dbsetup</code> specifies
     * the <code>dbsetup.rb</code> recipe in the repository's <code>phpapp2</code>
     * folder.</p>
     */
    inline const Recipes& GetDefaultRecipes() const { return m_defaultRecipes; }
    inline bool DefaultRecipesHasBeenSet() const { return m_defaultRecipesHasBeenSet; }
    template<typename DefaultRecipesT = Recipes>
    void SetDefaultRecipes(DefaultRecipesT&& value) { m_defaultRecipesHasBeenSet = true; m_defaultRecipes = std::forward<DefaultRecipesT>(value); }
    template<typename DefaultRecipesT = Recipes>
    Layer& WithDefaultRecipes(DefaultRecipesT&& value) { SetDefaultRecipes(std::forward<DefaultRecipesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline const Recipes& GetCustomRecipes() const { return m_customRecipes; }
    inline bool CustomRecipesHasBeenSet() const { return m_customRecipesHasBeenSet; }
    template<typename CustomRecipesT = Recipes>
    void SetCustomRecipes(CustomRecipesT&& value) { m_customRecipesHasBeenSet = true; m_customRecipes = std::forward<CustomRecipesT>(value); }
    template<typename CustomRecipesT = Recipes>
    Layer& WithCustomRecipes(CustomRecipesT&& value) { SetCustomRecipes(std::forward<CustomRecipesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when the layer was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    Layer& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. If this value is set to
     * <code>false</code>, you must then update your instances manually by using
     * <a>CreateDeployment</a> to run the <code>update_dependencies</code> stack
     * command or manually running <code>yum</code> (Amazon Linux) or
     * <code>apt-get</code> (Ubuntu) on the instances. </p>  <p>We strongly
     * recommend using the default value of <code>true</code>, to ensure that your
     * instances have the latest security updates.</p> 
     */
    inline bool GetInstallUpdatesOnBoot() const { return m_installUpdatesOnBoot; }
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }
    inline Layer& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the layer uses Amazon EBS-optimized instances.</p>
     */
    inline bool GetUseEbsOptimizedInstances() const { return m_useEbsOptimizedInstances; }
    inline bool UseEbsOptimizedInstancesHasBeenSet() const { return m_useEbsOptimizedInstancesHasBeenSet; }
    inline void SetUseEbsOptimizedInstances(bool value) { m_useEbsOptimizedInstancesHasBeenSet = true; m_useEbsOptimizedInstances = value; }
    inline Layer& WithUseEbsOptimizedInstances(bool value) { SetUseEbsOptimizedInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline const LifecycleEventConfiguration& GetLifecycleEventConfiguration() const { return m_lifecycleEventConfiguration; }
    inline bool LifecycleEventConfigurationHasBeenSet() const { return m_lifecycleEventConfigurationHasBeenSet; }
    template<typename LifecycleEventConfigurationT = LifecycleEventConfiguration>
    void SetLifecycleEventConfiguration(LifecycleEventConfigurationT&& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = std::forward<LifecycleEventConfigurationT>(value); }
    template<typename LifecycleEventConfigurationT = LifecycleEventConfiguration>
    Layer& WithLifecycleEventConfiguration(LifecycleEventConfigurationT&& value) { SetLifecycleEventConfiguration(std::forward<LifecycleEventConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet = false;

    LayerType m_type{LayerType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_shortname;
    bool m_shortnameHasBeenSet = false;

    Aws::Map<LayerAttributesKeys, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    CloudWatchLogsConfiguration m_cloudWatchLogsConfiguration;
    bool m_cloudWatchLogsConfigurationHasBeenSet = false;

    Aws::String m_customInstanceProfileArn;
    bool m_customInstanceProfileArnHasBeenSet = false;

    Aws::String m_customJson;
    bool m_customJsonHasBeenSet = false;

    Aws::Vector<Aws::String> m_customSecurityGroupIds;
    bool m_customSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_defaultSecurityGroupNames;
    bool m_defaultSecurityGroupNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_packages;
    bool m_packagesHasBeenSet = false;

    Aws::Vector<VolumeConfiguration> m_volumeConfigurations;
    bool m_volumeConfigurationsHasBeenSet = false;

    bool m_enableAutoHealing{false};
    bool m_enableAutoHealingHasBeenSet = false;

    bool m_autoAssignElasticIps{false};
    bool m_autoAssignElasticIpsHasBeenSet = false;

    bool m_autoAssignPublicIps{false};
    bool m_autoAssignPublicIpsHasBeenSet = false;

    Recipes m_defaultRecipes;
    bool m_defaultRecipesHasBeenSet = false;

    Recipes m_customRecipes;
    bool m_customRecipesHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    bool m_installUpdatesOnBoot{false};
    bool m_installUpdatesOnBootHasBeenSet = false;

    bool m_useEbsOptimizedInstances{false};
    bool m_useEbsOptimizedInstancesHasBeenSet = false;

    LifecycleEventConfiguration m_lifecycleEventConfiguration;
    bool m_lifecycleEventConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
