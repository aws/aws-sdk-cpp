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
    AWS_OPSWORKS_API Layer();
    AWS_OPSWORKS_API Layer(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Layer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of a layer.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Layer& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Layer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Layer& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline Layer& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline Layer& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline Layer& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer ID.</p>
     */
    inline const Aws::String& GetLayerId() const{ return m_layerId; }
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }
    inline void SetLayerId(const Aws::String& value) { m_layerIdHasBeenSet = true; m_layerId = value; }
    inline void SetLayerId(Aws::String&& value) { m_layerIdHasBeenSet = true; m_layerId = std::move(value); }
    inline void SetLayerId(const char* value) { m_layerIdHasBeenSet = true; m_layerId.assign(value); }
    inline Layer& WithLayerId(const Aws::String& value) { SetLayerId(value); return *this;}
    inline Layer& WithLayerId(Aws::String&& value) { SetLayerId(std::move(value)); return *this;}
    inline Layer& WithLayerId(const char* value) { SetLayerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer type.</p>
     */
    inline const LayerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LayerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LayerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Layer& WithType(const LayerType& value) { SetType(value); return *this;}
    inline Layer& WithType(LayerType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer name. Layer names can be a maximum of 32 characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Layer& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Layer& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Layer& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer short name.</p>
     */
    inline const Aws::String& GetShortname() const{ return m_shortname; }
    inline bool ShortnameHasBeenSet() const { return m_shortnameHasBeenSet; }
    inline void SetShortname(const Aws::String& value) { m_shortnameHasBeenSet = true; m_shortname = value; }
    inline void SetShortname(Aws::String&& value) { m_shortnameHasBeenSet = true; m_shortname = std::move(value); }
    inline void SetShortname(const char* value) { m_shortnameHasBeenSet = true; m_shortname.assign(value); }
    inline Layer& WithShortname(const Aws::String& value) { SetShortname(value); return *this;}
    inline Layer& WithShortname(Aws::String&& value) { SetShortname(std::move(value)); return *this;}
    inline Layer& WithShortname(const char* value) { SetShortname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer attributes.</p> <p>For the <code>HaproxyStatsPassword</code>,
     * <code>MysqlRootPassword</code>, and <code>GangliaPassword</code> attributes,
     * OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value</p> <p>For an ECS Cluster layer, OpsWorks Stacks the
     * <code>EcsClusterArn</code> attribute is set to the cluster's ARN.</p>
     */
    inline const Aws::Map<LayerAttributesKeys, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<LayerAttributesKeys, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<LayerAttributesKeys, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline Layer& WithAttributes(const Aws::Map<LayerAttributesKeys, Aws::String>& value) { SetAttributes(value); return *this;}
    inline Layer& WithAttributes(Aws::Map<LayerAttributesKeys, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline Layer& AddAttributes(const LayerAttributesKeys& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline Layer& AddAttributes(LayerAttributesKeys&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline Layer& AddAttributes(const LayerAttributesKeys& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline Layer& AddAttributes(LayerAttributesKeys&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline Layer& AddAttributes(LayerAttributesKeys&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline Layer& AddAttributes(const LayerAttributesKeys& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch Logs configuration settings for the layer.</p>
     */
    inline const CloudWatchLogsConfiguration& GetCloudWatchLogsConfiguration() const{ return m_cloudWatchLogsConfiguration; }
    inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }
    inline void SetCloudWatchLogsConfiguration(const CloudWatchLogsConfiguration& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = value; }
    inline void SetCloudWatchLogsConfiguration(CloudWatchLogsConfiguration&& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = std::move(value); }
    inline Layer& WithCloudWatchLogsConfiguration(const CloudWatchLogsConfiguration& value) { SetCloudWatchLogsConfiguration(value); return *this;}
    inline Layer& WithCloudWatchLogsConfiguration(CloudWatchLogsConfiguration&& value) { SetCloudWatchLogsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the default IAM profile to be used for the layer's EC2 instances.
     * For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetCustomInstanceProfileArn() const{ return m_customInstanceProfileArn; }
    inline bool CustomInstanceProfileArnHasBeenSet() const { return m_customInstanceProfileArnHasBeenSet; }
    inline void SetCustomInstanceProfileArn(const Aws::String& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = value; }
    inline void SetCustomInstanceProfileArn(Aws::String&& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = std::move(value); }
    inline void SetCustomInstanceProfileArn(const char* value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn.assign(value); }
    inline Layer& WithCustomInstanceProfileArn(const Aws::String& value) { SetCustomInstanceProfileArn(value); return *this;}
    inline Layer& WithCustomInstanceProfileArn(Aws::String&& value) { SetCustomInstanceProfileArn(std::move(value)); return *this;}
    inline Layer& WithCustomInstanceProfileArn(const char* value) { SetCustomInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON formatted string containing the layer's custom stack configuration and
     * deployment attributes.</p>
     */
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = std::move(value); }
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }
    inline Layer& WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}
    inline Layer& WithCustomJson(Aws::String&& value) { SetCustomJson(std::move(value)); return *this;}
    inline Layer& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the layer's custom security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomSecurityGroupIds() const{ return m_customSecurityGroupIds; }
    inline bool CustomSecurityGroupIdsHasBeenSet() const { return m_customSecurityGroupIdsHasBeenSet; }
    inline void SetCustomSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds = value; }
    inline void SetCustomSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds = std::move(value); }
    inline Layer& WithCustomSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetCustomSecurityGroupIds(value); return *this;}
    inline Layer& WithCustomSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetCustomSecurityGroupIds(std::move(value)); return *this;}
    inline Layer& AddCustomSecurityGroupIds(const Aws::String& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(value); return *this; }
    inline Layer& AddCustomSecurityGroupIds(Aws::String&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline Layer& AddCustomSecurityGroupIds(const char* value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array containing the layer's security group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDefaultSecurityGroupNames() const{ return m_defaultSecurityGroupNames; }
    inline bool DefaultSecurityGroupNamesHasBeenSet() const { return m_defaultSecurityGroupNamesHasBeenSet; }
    inline void SetDefaultSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames = value; }
    inline void SetDefaultSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames = std::move(value); }
    inline Layer& WithDefaultSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetDefaultSecurityGroupNames(value); return *this;}
    inline Layer& WithDefaultSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetDefaultSecurityGroupNames(std::move(value)); return *this;}
    inline Layer& AddDefaultSecurityGroupNames(const Aws::String& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames.push_back(value); return *this; }
    inline Layer& AddDefaultSecurityGroupNames(Aws::String&& value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames.push_back(std::move(value)); return *this; }
    inline Layer& AddDefaultSecurityGroupNames(const char* value) { m_defaultSecurityGroupNamesHasBeenSet = true; m_defaultSecurityGroupNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>Package</code> objects that describe the layer's
     * packages.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackages() const{ return m_packages; }
    inline bool PackagesHasBeenSet() const { return m_packagesHasBeenSet; }
    inline void SetPackages(const Aws::Vector<Aws::String>& value) { m_packagesHasBeenSet = true; m_packages = value; }
    inline void SetPackages(Aws::Vector<Aws::String>&& value) { m_packagesHasBeenSet = true; m_packages = std::move(value); }
    inline Layer& WithPackages(const Aws::Vector<Aws::String>& value) { SetPackages(value); return *this;}
    inline Layer& WithPackages(Aws::Vector<Aws::String>&& value) { SetPackages(std::move(value)); return *this;}
    inline Layer& AddPackages(const Aws::String& value) { m_packagesHasBeenSet = true; m_packages.push_back(value); return *this; }
    inline Layer& AddPackages(Aws::String&& value) { m_packagesHasBeenSet = true; m_packages.push_back(std::move(value)); return *this; }
    inline Layer& AddPackages(const char* value) { m_packagesHasBeenSet = true; m_packages.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>VolumeConfigurations</code> object that describes the layer's Amazon
     * EBS volumes.</p>
     */
    inline const Aws::Vector<VolumeConfiguration>& GetVolumeConfigurations() const{ return m_volumeConfigurations; }
    inline bool VolumeConfigurationsHasBeenSet() const { return m_volumeConfigurationsHasBeenSet; }
    inline void SetVolumeConfigurations(const Aws::Vector<VolumeConfiguration>& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = value; }
    inline void SetVolumeConfigurations(Aws::Vector<VolumeConfiguration>&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = std::move(value); }
    inline Layer& WithVolumeConfigurations(const Aws::Vector<VolumeConfiguration>& value) { SetVolumeConfigurations(value); return *this;}
    inline Layer& WithVolumeConfigurations(Aws::Vector<VolumeConfiguration>&& value) { SetVolumeConfigurations(std::move(value)); return *this;}
    inline Layer& AddVolumeConfigurations(const VolumeConfiguration& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(value); return *this; }
    inline Layer& AddVolumeConfigurations(VolumeConfiguration&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether auto healing is disabled for the layer.</p>
     */
    inline bool GetEnableAutoHealing() const{ return m_enableAutoHealing; }
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
    inline bool GetAutoAssignElasticIps() const{ return m_autoAssignElasticIps; }
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
    inline bool GetAutoAssignPublicIps() const{ return m_autoAssignPublicIps; }
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
    inline const Recipes& GetDefaultRecipes() const{ return m_defaultRecipes; }
    inline bool DefaultRecipesHasBeenSet() const { return m_defaultRecipesHasBeenSet; }
    inline void SetDefaultRecipes(const Recipes& value) { m_defaultRecipesHasBeenSet = true; m_defaultRecipes = value; }
    inline void SetDefaultRecipes(Recipes&& value) { m_defaultRecipesHasBeenSet = true; m_defaultRecipes = std::move(value); }
    inline Layer& WithDefaultRecipes(const Recipes& value) { SetDefaultRecipes(value); return *this;}
    inline Layer& WithDefaultRecipes(Recipes&& value) { SetDefaultRecipes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer's custom
     * recipes.</p>
     */
    inline const Recipes& GetCustomRecipes() const{ return m_customRecipes; }
    inline bool CustomRecipesHasBeenSet() const { return m_customRecipesHasBeenSet; }
    inline void SetCustomRecipes(const Recipes& value) { m_customRecipesHasBeenSet = true; m_customRecipes = value; }
    inline void SetCustomRecipes(Recipes&& value) { m_customRecipesHasBeenSet = true; m_customRecipes = std::move(value); }
    inline Layer& WithCustomRecipes(const Recipes& value) { SetCustomRecipes(value); return *this;}
    inline Layer& WithCustomRecipes(Recipes&& value) { SetCustomRecipes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when the layer was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }
    inline Layer& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline Layer& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline Layer& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
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
    inline bool GetInstallUpdatesOnBoot() const{ return m_installUpdatesOnBoot; }
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }
    inline Layer& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the layer uses Amazon EBS-optimized instances.</p>
     */
    inline bool GetUseEbsOptimizedInstances() const{ return m_useEbsOptimizedInstances; }
    inline bool UseEbsOptimizedInstancesHasBeenSet() const { return m_useEbsOptimizedInstancesHasBeenSet; }
    inline void SetUseEbsOptimizedInstances(bool value) { m_useEbsOptimizedInstancesHasBeenSet = true; m_useEbsOptimizedInstances = value; }
    inline Layer& WithUseEbsOptimizedInstances(bool value) { SetUseEbsOptimizedInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline const LifecycleEventConfiguration& GetLifecycleEventConfiguration() const{ return m_lifecycleEventConfiguration; }
    inline bool LifecycleEventConfigurationHasBeenSet() const { return m_lifecycleEventConfigurationHasBeenSet; }
    inline void SetLifecycleEventConfiguration(const LifecycleEventConfiguration& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = value; }
    inline void SetLifecycleEventConfiguration(LifecycleEventConfiguration&& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = std::move(value); }
    inline Layer& WithLifecycleEventConfiguration(const LifecycleEventConfiguration& value) { SetLifecycleEventConfiguration(value); return *this;}
    inline Layer& WithLifecycleEventConfiguration(LifecycleEventConfiguration&& value) { SetLifecycleEventConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet = false;

    LayerType m_type;
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

    bool m_enableAutoHealing;
    bool m_enableAutoHealingHasBeenSet = false;

    bool m_autoAssignElasticIps;
    bool m_autoAssignElasticIpsHasBeenSet = false;

    bool m_autoAssignPublicIps;
    bool m_autoAssignPublicIpsHasBeenSet = false;

    Recipes m_defaultRecipes;
    bool m_defaultRecipesHasBeenSet = false;

    Recipes m_customRecipes;
    bool m_customRecipesHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    bool m_installUpdatesOnBoot;
    bool m_installUpdatesOnBootHasBeenSet = false;

    bool m_useEbsOptimizedInstances;
    bool m_useEbsOptimizedInstancesHasBeenSet = false;

    LifecycleEventConfiguration m_lifecycleEventConfiguration;
    bool m_lifecycleEventConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
