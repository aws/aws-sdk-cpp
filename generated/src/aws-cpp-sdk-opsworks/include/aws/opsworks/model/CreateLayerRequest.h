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
    AWS_OPSWORKS_API CreateLayerRequest();

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
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline CreateLayerRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline CreateLayerRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline CreateLayerRequest& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer type. A stack cannot have more than one built-in layer of the same
     * type. It can have any number of custom layers. Built-in layers are not available
     * in Chef 12 stacks.</p>
     */
    inline const LayerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LayerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LayerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateLayerRequest& WithType(const LayerType& value) { SetType(value); return *this;}
    inline CreateLayerRequest& WithType(LayerType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer name, which is used by the console. Layer names can be a maximum of
     * 32 characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateLayerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateLayerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateLayerRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline const Aws::String& GetShortname() const{ return m_shortname; }
    inline bool ShortnameHasBeenSet() const { return m_shortnameHasBeenSet; }
    inline void SetShortname(const Aws::String& value) { m_shortnameHasBeenSet = true; m_shortname = value; }
    inline void SetShortname(Aws::String&& value) { m_shortnameHasBeenSet = true; m_shortname = std::move(value); }
    inline void SetShortname(const char* value) { m_shortnameHasBeenSet = true; m_shortname.assign(value); }
    inline CreateLayerRequest& WithShortname(const Aws::String& value) { SetShortname(value); return *this;}
    inline CreateLayerRequest& WithShortname(Aws::String&& value) { SetShortname(std::move(value)); return *this;}
    inline CreateLayerRequest& WithShortname(const char* value) { SetShortname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more user-defined key-value pairs to be added to the stack
     * attributes.</p> <p>To create a cluster layer, set the <code>EcsClusterArn</code>
     * attribute to the cluster's ARN.</p>
     */
    inline const Aws::Map<LayerAttributesKeys, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<LayerAttributesKeys, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<LayerAttributesKeys, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline CreateLayerRequest& WithAttributes(const Aws::Map<LayerAttributesKeys, Aws::String>& value) { SetAttributes(value); return *this;}
    inline CreateLayerRequest& WithAttributes(Aws::Map<LayerAttributesKeys, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline CreateLayerRequest& AddAttributes(const LayerAttributesKeys& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline CreateLayerRequest& AddAttributes(LayerAttributesKeys&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateLayerRequest& AddAttributes(const LayerAttributesKeys& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline CreateLayerRequest& AddAttributes(LayerAttributesKeys&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateLayerRequest& AddAttributes(LayerAttributesKeys&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateLayerRequest& AddAttributes(const LayerAttributesKeys& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies CloudWatch Logs configuration options for the layer. For more
     * information, see <a>CloudWatchLogsLogStream</a>.</p>
     */
    inline const CloudWatchLogsConfiguration& GetCloudWatchLogsConfiguration() const{ return m_cloudWatchLogsConfiguration; }
    inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }
    inline void SetCloudWatchLogsConfiguration(const CloudWatchLogsConfiguration& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = value; }
    inline void SetCloudWatchLogsConfiguration(CloudWatchLogsConfiguration&& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = std::move(value); }
    inline CreateLayerRequest& WithCloudWatchLogsConfiguration(const CloudWatchLogsConfiguration& value) { SetCloudWatchLogsConfiguration(value); return *this;}
    inline CreateLayerRequest& WithCloudWatchLogsConfiguration(CloudWatchLogsConfiguration&& value) { SetCloudWatchLogsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM profile to be used for the layer's EC2 instances. For more
     * information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetCustomInstanceProfileArn() const{ return m_customInstanceProfileArn; }
    inline bool CustomInstanceProfileArnHasBeenSet() const { return m_customInstanceProfileArnHasBeenSet; }
    inline void SetCustomInstanceProfileArn(const Aws::String& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = value; }
    inline void SetCustomInstanceProfileArn(Aws::String&& value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn = std::move(value); }
    inline void SetCustomInstanceProfileArn(const char* value) { m_customInstanceProfileArnHasBeenSet = true; m_customInstanceProfileArn.assign(value); }
    inline CreateLayerRequest& WithCustomInstanceProfileArn(const Aws::String& value) { SetCustomInstanceProfileArn(value); return *this;}
    inline CreateLayerRequest& WithCustomInstanceProfileArn(Aws::String&& value) { SetCustomInstanceProfileArn(std::move(value)); return *this;}
    inline CreateLayerRequest& WithCustomInstanceProfileArn(const char* value) { SetCustomInstanceProfileArn(value); return *this;}
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
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }
    inline void SetCustomJson(Aws::String&& value) { m_customJsonHasBeenSet = true; m_customJson = std::move(value); }
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }
    inline CreateLayerRequest& WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}
    inline CreateLayerRequest& WithCustomJson(Aws::String&& value) { SetCustomJson(std::move(value)); return *this;}
    inline CreateLayerRequest& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the layer custom security group IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomSecurityGroupIds() const{ return m_customSecurityGroupIds; }
    inline bool CustomSecurityGroupIdsHasBeenSet() const { return m_customSecurityGroupIdsHasBeenSet; }
    inline void SetCustomSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds = value; }
    inline void SetCustomSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds = std::move(value); }
    inline CreateLayerRequest& WithCustomSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetCustomSecurityGroupIds(value); return *this;}
    inline CreateLayerRequest& WithCustomSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetCustomSecurityGroupIds(std::move(value)); return *this;}
    inline CreateLayerRequest& AddCustomSecurityGroupIds(const Aws::String& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(value); return *this; }
    inline CreateLayerRequest& AddCustomSecurityGroupIds(Aws::String&& value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateLayerRequest& AddCustomSecurityGroupIds(const char* value) { m_customSecurityGroupIdsHasBeenSet = true; m_customSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>Package</code> objects that describes the layer
     * packages.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPackages() const{ return m_packages; }
    inline bool PackagesHasBeenSet() const { return m_packagesHasBeenSet; }
    inline void SetPackages(const Aws::Vector<Aws::String>& value) { m_packagesHasBeenSet = true; m_packages = value; }
    inline void SetPackages(Aws::Vector<Aws::String>&& value) { m_packagesHasBeenSet = true; m_packages = std::move(value); }
    inline CreateLayerRequest& WithPackages(const Aws::Vector<Aws::String>& value) { SetPackages(value); return *this;}
    inline CreateLayerRequest& WithPackages(Aws::Vector<Aws::String>&& value) { SetPackages(std::move(value)); return *this;}
    inline CreateLayerRequest& AddPackages(const Aws::String& value) { m_packagesHasBeenSet = true; m_packages.push_back(value); return *this; }
    inline CreateLayerRequest& AddPackages(Aws::String&& value) { m_packagesHasBeenSet = true; m_packages.push_back(std::move(value)); return *this; }
    inline CreateLayerRequest& AddPackages(const char* value) { m_packagesHasBeenSet = true; m_packages.push_back(value); return *this; }
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
    inline CreateLayerRequest& WithVolumeConfigurations(const Aws::Vector<VolumeConfiguration>& value) { SetVolumeConfigurations(value); return *this;}
    inline CreateLayerRequest& WithVolumeConfigurations(Aws::Vector<VolumeConfiguration>&& value) { SetVolumeConfigurations(std::move(value)); return *this;}
    inline CreateLayerRequest& AddVolumeConfigurations(const VolumeConfiguration& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(value); return *this; }
    inline CreateLayerRequest& AddVolumeConfigurations(VolumeConfiguration&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to disable auto healing for the layer.</p>
     */
    inline bool GetEnableAutoHealing() const{ return m_enableAutoHealing; }
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
    inline bool GetAutoAssignElasticIps() const{ return m_autoAssignElasticIps; }
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
    inline bool GetAutoAssignPublicIps() const{ return m_autoAssignPublicIps; }
    inline bool AutoAssignPublicIpsHasBeenSet() const { return m_autoAssignPublicIpsHasBeenSet; }
    inline void SetAutoAssignPublicIps(bool value) { m_autoAssignPublicIpsHasBeenSet = true; m_autoAssignPublicIps = value; }
    inline CreateLayerRequest& WithAutoAssignPublicIps(bool value) { SetAutoAssignPublicIps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>LayerCustomRecipes</code> object that specifies the layer custom
     * recipes.</p>
     */
    inline const Recipes& GetCustomRecipes() const{ return m_customRecipes; }
    inline bool CustomRecipesHasBeenSet() const { return m_customRecipesHasBeenSet; }
    inline void SetCustomRecipes(const Recipes& value) { m_customRecipesHasBeenSet = true; m_customRecipes = value; }
    inline void SetCustomRecipes(Recipes&& value) { m_customRecipesHasBeenSet = true; m_customRecipes = std::move(value); }
    inline CreateLayerRequest& WithCustomRecipes(const Recipes& value) { SetCustomRecipes(value); return *this;}
    inline CreateLayerRequest& WithCustomRecipes(Recipes&& value) { SetCustomRecipes(std::move(value)); return *this;}
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
    inline bool GetInstallUpdatesOnBoot() const{ return m_installUpdatesOnBoot; }
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }
    inline CreateLayerRequest& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to use Amazon EBS-optimized instances.</p>
     */
    inline bool GetUseEbsOptimizedInstances() const{ return m_useEbsOptimizedInstances; }
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
    inline const LifecycleEventConfiguration& GetLifecycleEventConfiguration() const{ return m_lifecycleEventConfiguration; }
    inline bool LifecycleEventConfigurationHasBeenSet() const { return m_lifecycleEventConfigurationHasBeenSet; }
    inline void SetLifecycleEventConfiguration(const LifecycleEventConfiguration& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = value; }
    inline void SetLifecycleEventConfiguration(LifecycleEventConfiguration&& value) { m_lifecycleEventConfigurationHasBeenSet = true; m_lifecycleEventConfiguration = std::move(value); }
    inline CreateLayerRequest& WithLifecycleEventConfiguration(const LifecycleEventConfiguration& value) { SetLifecycleEventConfiguration(value); return *this;}
    inline CreateLayerRequest& WithLifecycleEventConfiguration(LifecycleEventConfiguration&& value) { SetLifecycleEventConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

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

    Recipes m_customRecipes;
    bool m_customRecipesHasBeenSet = false;

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
