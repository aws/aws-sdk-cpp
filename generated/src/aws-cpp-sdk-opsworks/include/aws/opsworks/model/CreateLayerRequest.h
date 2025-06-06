﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class CreateLayerRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API CreateLayerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLayer"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The layer stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    CreateLayerRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer type. A stack cannot have more than one built-in layer of the same
     * type. It can have any number of custom layers. Built-in layers are not available
     * in Chef 12 stacks.</p>
     */
    inline LayerType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LayerType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateLayerRequest& WithType(LayerType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer name, which is used by the console. Layer names can be a maximum of
     * 32 characters.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateLayerRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For custom layers only, use this parameter to specify the layer's short name,
     * which is used internally by OpsWorks Stacks and by Chef recipes. The short name
     * is also used as the name for the directory where your app files are installed.
     * It can have a maximum of 32 characters, which are limited to the alphanumeric
     * characters, '-', '_', and '.'.</p> <p>Built-in layer short names are defined by
     * OpsWorks Stacks. For more information, see the <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers.html">Layer
     * Reference</a>.</p>
     */
    inline const Aws::String& GetShortname() const { return m_shortname; }
    inline bool ShortnameHasBeenSet() const { return m_shortnameHasBeenSet; }
    template<typename ShortnameT = Aws::String>
    void SetShortname(ShortnameT&& value) { m_shortnameHasBeenSet = true; m_shortname = std::forward<ShortnameT>(value); }
    template<typename ShortnameT = Aws::String>
    CreateLayerRequest& WithShortname(ShortnameT&& value) { SetShortname(std::forward<ShortnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p> <p>To create a cluster layer, set the <code>EcsClusterArn</code>
     * attribute to the cluster's ARN.</p>
     */
    inline const Aws::Map<LayerAttributesKeys, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<LayerAttributesKeys, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<LayerAttributesKeys, Aws::String>>
    CreateLayerRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    inline CreateLayerRequest& AddAttributes(LayerAttributesKeys key, Aws::String value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies CloudWatch Logs configuration options for the layer. For more
     * information, see <a>CloudWatchLogsLogStream</a>.</p>
     */
    inline const CloudWatchLogsConfiguration& GetCloudWatchLogsConfiguration() const { return m_cloudWatchLogsConfiguration; }
    inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }
    template<typename CloudWatchLogsConfigurationT = CloudWatchLogsConfiguration>
    void SetCloudWatchLogsConfiguration(CloudWatchLogsConfigurationT&& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = std::forward<CloudWatchLogsConfigurationT>(value); }
    template<typename CloudWatchLogsConfigurationT = CloudWatchLogsConfiguration>
    CreateLayerRequest& WithCloudWatchLogsConfiguration(CloudWatchLogsConfigurationT&& value) { SetCloudWatchLogsConfiguration(std::forward<CloudWatchLogsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM profile to be used for the layer's EC2 instances. For more
     * information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetCustomInstanceProfileArn() const { return m_customInstanceProfileArn; }
    inline bool CustomInstanceProfileArnHasBeenSet() const { return m_customInstanceProfileArnHasBeenSet; }
    template<typename CustomInstanceProfileArnT = Aws::String>
    void SetCustomInstanceProfileArn(CustomInstanceProfileArnT&& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = std::forward<CustomInstanceProfileArnT>(value); }
    template<typename CustomInstanceProfileArnT = Aws::String>
    CreateLayerRequest& WithCustomInstanceProfileArn(CustomInstanceProfileArnT&& value) { SetCustomInstanceProfileArn(std::forward<CustomInstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON-formatted string containing custom stack configuration and deployment
     * attributes to be installed on the layer's instances. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-json-override.html">
     * Using Custom JSON</a>. This feature is supported as of version 1.7.42 of the
     * CLI. </p>
     */
    inline const Aws::String& GetCustomJson() const { return m_customJson; }
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }
    template<typename CustomJsonT = Aws::String>
    void SetCustomJson(CustomJsonT&& value) { m_customJsonHasBeenSet = true; m_customJson = std::forward<CustomJsonT>(value); }
    template<typename CustomJsonT = Aws::String>
    CreateLayerRequest& WithCustomJson(CustomJsonT&& value) { SetCustomJson(std::forward<CustomJsonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the layer custom security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomSecurityGroupIds() const { return m_customSecurityGroupIds; }
    inline bool CustomSecurityGroupIdsHasBeenSet() const { return m_customSecurityGroupIdsHasBeenSet; }
    template<typename CustomSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetCustomSecurityGroupIds(CustomSecurityGroupIdsT&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds = std::forward<CustomSecurityGroupIdsT>(value); }
    template<typename CustomSecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateLayerRequest& WithCustomSecurityGroupIds(CustomSecurityGroupIdsT&& value) { SetCustomSecurityGroupIds(std::forward<CustomSecurityGroupIdsT>(value)); return *this;}
    template<typename CustomSecurityGroupIdsT = Aws::String>
    CreateLayerRequest& AddCustomSecurityGroupIds(CustomSecurityGroupIdsT&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.emplace_back(std::forward<CustomSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>Package</code> objects that describes the layer
     * packages.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackages() const { return m_packages; }
    inline bool PackagesHasBeenSet() const { return m_packagesHasBeenSet; }
    template<typename PackagesT = Aws::Vector<Aws::String>>
    void SetPackages(PackagesT&& value) { m_packagesHasBeenSet = true; m_packages = std::forward<PackagesT>(value); }
    template<typename PackagesT = Aws::Vector<Aws::String>>
    CreateLayerRequest& WithPackages(PackagesT&& value) { SetPackages(std::forward<PackagesT>(value)); return *this;}
    template<typename PackagesT = Aws::String>
    CreateLayerRequest& AddPackages(PackagesT&& value) { m_packagesHasBeenSet = true; m_packages.emplace_back(std::forward<PackagesT>(value)); return *this; }
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
    CreateLayerRequest& WithVolumeConfigurations(VolumeConfigurationsT&& value) { SetVolumeConfigurations(std::forward<VolumeConfigurationsT>(value)); return *this;}
    template<typename VolumeConfigurationsT = VolumeConfiguration>
    CreateLayerRequest& AddVolumeConfigurations(VolumeConfigurationsT&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.emplace_back(std::forward<VolumeConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to disable auto healing for the layer.</p>
     */
    inline bool GetEnableAutoHealing() const { return m_enableAutoHealing; }
    inline bool EnableAutoHealingHasBeenSet() const { return m_enableAutoHealingHasBeenSet; }
    inline void SetEnableAutoHealing(bool value) { m_enableAutoHealingHasBeenSet = true; m_enableAutoHealing = value; }
    inline CreateLayerRequest& WithEnableAutoHealing(bool value) { SetEnableAutoHealing(value); return *this;}
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
    inline CreateLayerRequest& WithAutoAssignElasticIps(bool value) { SetAutoAssignElasticIps(value); return *this;}
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
    inline CreateLayerRequest& WithAutoAssignPublicIps(bool value) { SetAutoAssignPublicIps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer custom
     * recipes.</p>
     */
    inline const Recipes& GetCustomRecipes() const { return m_customRecipes; }
    inline bool CustomRecipesHasBeenSet() const { return m_customRecipesHasBeenSet; }
    template<typename CustomRecipesT = Recipes>
    void SetCustomRecipes(CustomRecipesT&& value) { m_customRecipesHasBeenSet = true; m_customRecipes = std::forward<CustomRecipesT>(value); }
    template<typename CustomRecipesT = Recipes>
    CreateLayerRequest& WithCustomRecipes(CustomRecipesT&& value) { SetCustomRecipes(std::forward<CustomRecipesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or by manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p>  <p>To ensure that your instances have the latest security
     * updates, we strongly recommend using the default value of <code>true</code>.</p>
     * 
     */
    inline bool GetInstallUpdatesOnBoot() const { return m_installUpdatesOnBoot; }
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }
    inline CreateLayerRequest& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to use Amazon EBS-optimized instances.</p>
     */
    inline bool GetUseEbsOptimizedInstances() const { return m_useEbsOptimizedInstances; }
    inline bool UseEbsOptimizedInstancesHasBeenSet() const { return m_useEbsOptimizedInstancesHasBeenSet; }
    inline void SetUseEbsOptimizedInstances(bool value) { m_useEbsOptimizedInstancesHasBeenSet = true; m_useEbsOptimizedInstances = value; }
    inline CreateLayerRequest& WithUseEbsOptimizedInstances(bool value) { SetUseEbsOptimizedInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>LifeCycleEventConfiguration</code> object that you can use to
     * configure the Shutdown event to specify an execution timeout and enable or
     * disable Elastic Load Balancer connection draining.</p>
     */
    inline const LifecycleEventConfiguration& GetLifecycleEventConfiguration() const { return m_lifecycleEventConfiguration; }
    inline bool LifecycleEventConfigurationHasBeenSet() const { return m_lifecycleEventConfigurationHasBeenSet; }
    template<typename LifecycleEventConfigurationT = LifecycleEventConfiguration>
    void SetLifecycleEventConfiguration(LifecycleEventConfigurationT&& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = std::forward<LifecycleEventConfigurationT>(value); }
    template<typename LifecycleEventConfigurationT = LifecycleEventConfiguration>
    CreateLayerRequest& WithLifecycleEventConfiguration(LifecycleEventConfigurationT&& value) { SetLifecycleEventConfiguration(std::forward<LifecycleEventConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

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

    Recipes m_customRecipes;
    bool m_customRecipesHasBeenSet = false;

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
