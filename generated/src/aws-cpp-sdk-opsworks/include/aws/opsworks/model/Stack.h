/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opsworks/model/StackConfigurationManager.h>
#include <aws/opsworks/model/ChefConfiguration.h>
#include <aws/opsworks/model/Source.h>
#include <aws/opsworks/model/RootDeviceType.h>
#include <aws/opsworks/model/StackAttributesKeys.h>
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
   * <p>Describes a stack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/Stack">AWS API
   * Reference</a></p>
   */
  class Stack
  {
  public:
    AWS_OPSWORKS_API Stack() = default;
    AWS_OPSWORKS_API Stack(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Stack& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    Stack& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack name. Stack names can be a maximum of 64 characters.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Stack& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Stack& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack Amazon Web Services Region, such as <code>ap-northeast-2</code>.
     * For more information about Amazon Web Services Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Stack& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID; applicable only if the stack is running in a VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Stack& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack's attributes.</p>
     */
    inline const Aws::Map<StackAttributesKeys, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<StackAttributesKeys, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<StackAttributesKeys, Aws::String>>
    Stack& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    inline Stack& AddAttributes(StackAttributesKeys key, Aws::String value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The stack Identity and Access Management (IAM) role.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    Stack& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM profile that is the default profile for all of the stack's
     * EC2 instances. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetDefaultInstanceProfileArn() const { return m_defaultInstanceProfileArn; }
    inline bool DefaultInstanceProfileArnHasBeenSet() const { return m_defaultInstanceProfileArnHasBeenSet; }
    template<typename DefaultInstanceProfileArnT = Aws::String>
    void SetDefaultInstanceProfileArn(DefaultInstanceProfileArnT&& value) { m_defaultInstanceProfileArnHasBeenSet = true; m_defaultInstanceProfileArn = std::forward<DefaultInstanceProfileArnT>(value); }
    template<typename DefaultInstanceProfileArnT = Aws::String>
    Stack& WithDefaultInstanceProfileArn(DefaultInstanceProfileArnT&& value) { SetDefaultInstanceProfileArn(std::forward<DefaultInstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack's default operating system.</p>
     */
    inline const Aws::String& GetDefaultOs() const { return m_defaultOs; }
    inline bool DefaultOsHasBeenSet() const { return m_defaultOsHasBeenSet; }
    template<typename DefaultOsT = Aws::String>
    void SetDefaultOs(DefaultOsT&& value) { m_defaultOsHasBeenSet = true; m_defaultOs = std::forward<DefaultOsT>(value); }
    template<typename DefaultOsT = Aws::String>
    Stack& WithDefaultOs(DefaultOsT&& value) { SetDefaultOs(std::forward<DefaultOsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack host name theme, with spaces replaced by underscores.</p>
     */
    inline const Aws::String& GetHostnameTheme() const { return m_hostnameTheme; }
    inline bool HostnameThemeHasBeenSet() const { return m_hostnameThemeHasBeenSet; }
    template<typename HostnameThemeT = Aws::String>
    void SetHostnameTheme(HostnameThemeT&& value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme = std::forward<HostnameThemeT>(value); }
    template<typename HostnameThemeT = Aws::String>
    Stack& WithHostnameTheme(HostnameThemeT&& value) { SetHostnameTheme(std::forward<HostnameThemeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack's default Availability Zone. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetDefaultAvailabilityZone() const { return m_defaultAvailabilityZone; }
    inline bool DefaultAvailabilityZoneHasBeenSet() const { return m_defaultAvailabilityZoneHasBeenSet; }
    template<typename DefaultAvailabilityZoneT = Aws::String>
    void SetDefaultAvailabilityZone(DefaultAvailabilityZoneT&& value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone = std::forward<DefaultAvailabilityZoneT>(value); }
    template<typename DefaultAvailabilityZoneT = Aws::String>
    Stack& WithDefaultAvailabilityZone(DefaultAvailabilityZoneT&& value) { SetDefaultAvailabilityZone(std::forward<DefaultAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default subnet ID; applicable only if the stack is running in a VPC.</p>
     */
    inline const Aws::String& GetDefaultSubnetId() const { return m_defaultSubnetId; }
    inline bool DefaultSubnetIdHasBeenSet() const { return m_defaultSubnetIdHasBeenSet; }
    template<typename DefaultSubnetIdT = Aws::String>
    void SetDefaultSubnetId(DefaultSubnetIdT&& value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId = std::forward<DefaultSubnetIdT>(value); }
    template<typename DefaultSubnetIdT = Aws::String>
    Stack& WithDefaultSubnetId(DefaultSubnetIdT&& value) { SetDefaultSubnetId(std::forward<DefaultSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON object that contains user-defined attributes to be added to the stack
     * configuration and deployment attributes. You can use custom JSON to override the
     * corresponding default stack configuration attribute values or to pass data to
     * recipes. The string should be in the following format:</p> <p> <code>"{\"key1\":
     * \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on
     * custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
     */
    inline const Aws::String& GetCustomJson() const { return m_customJson; }
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }
    template<typename CustomJsonT = Aws::String>
    void SetCustomJson(CustomJsonT&& value) { m_customJsonHasBeenSet = true; m_customJson = std::forward<CustomJsonT>(value); }
    template<typename CustomJsonT = Aws::String>
    Stack& WithCustomJson(CustomJsonT&& value) { SetCustomJson(std::forward<CustomJsonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration manager.</p>
     */
    inline const StackConfigurationManager& GetConfigurationManager() const { return m_configurationManager; }
    inline bool ConfigurationManagerHasBeenSet() const { return m_configurationManagerHasBeenSet; }
    template<typename ConfigurationManagerT = StackConfigurationManager>
    void SetConfigurationManager(ConfigurationManagerT&& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = std::forward<ConfigurationManagerT>(value); }
    template<typename ConfigurationManagerT = StackConfigurationManager>
    Stack& WithConfigurationManager(ConfigurationManagerT&& value) { SetConfigurationManager(std::forward<ConfigurationManagerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline const ChefConfiguration& GetChefConfiguration() const { return m_chefConfiguration; }
    inline bool ChefConfigurationHasBeenSet() const { return m_chefConfigurationHasBeenSet; }
    template<typename ChefConfigurationT = ChefConfiguration>
    void SetChefConfiguration(ChefConfigurationT&& value) { m_chefConfigurationHasBeenSet = true; m_chefConfiguration = std::forward<ChefConfigurationT>(value); }
    template<typename ChefConfigurationT = ChefConfiguration>
    Stack& WithChefConfiguration(ChefConfigurationT&& value) { SetChefConfiguration(std::forward<ChefConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the stack uses custom cookbooks.</p>
     */
    inline bool GetUseCustomCookbooks() const { return m_useCustomCookbooks; }
    inline bool UseCustomCookbooksHasBeenSet() const { return m_useCustomCookbooksHasBeenSet; }
    inline void SetUseCustomCookbooks(bool value) { m_useCustomCookbooksHasBeenSet = true; m_useCustomCookbooks = value; }
    inline Stack& WithUseCustomCookbooks(bool value) { SetUseCustomCookbooks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the stack automatically associates the OpsWorks Stacks built-in
     * security groups with the stack's layers.</p>
     */
    inline bool GetUseOpsworksSecurityGroups() const { return m_useOpsworksSecurityGroups; }
    inline bool UseOpsworksSecurityGroupsHasBeenSet() const { return m_useOpsworksSecurityGroupsHasBeenSet; }
    inline void SetUseOpsworksSecurityGroups(bool value) { m_useOpsworksSecurityGroupsHasBeenSet = true; m_useOpsworksSecurityGroups = value; }
    inline Stack& WithUseOpsworksSecurityGroups(bool value) { SetUseOpsworksSecurityGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the information required to retrieve an app or cookbook from a
     * repository. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Adding
     * Apps</a> or <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook.html">Cookbooks
     * and Recipes</a>.</p>
     */
    inline const Source& GetCustomCookbooksSource() const { return m_customCookbooksSource; }
    inline bool CustomCookbooksSourceHasBeenSet() const { return m_customCookbooksSourceHasBeenSet; }
    template<typename CustomCookbooksSourceT = Source>
    void SetCustomCookbooksSource(CustomCookbooksSourceT&& value) { m_customCookbooksSourceHasBeenSet = true; m_customCookbooksSource = std::forward<CustomCookbooksSourceT>(value); }
    template<typename CustomCookbooksSourceT = Source>
    Stack& WithCustomCookbooksSource(CustomCookbooksSourceT&& value) { SetCustomCookbooksSource(std::forward<CustomCookbooksSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A default Amazon EC2 key pair for the stack's instances. You can override
     * this value when you create or update an instance.</p>
     */
    inline const Aws::String& GetDefaultSshKeyName() const { return m_defaultSshKeyName; }
    inline bool DefaultSshKeyNameHasBeenSet() const { return m_defaultSshKeyNameHasBeenSet; }
    template<typename DefaultSshKeyNameT = Aws::String>
    void SetDefaultSshKeyName(DefaultSshKeyNameT&& value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName = std::forward<DefaultSshKeyNameT>(value); }
    template<typename DefaultSshKeyNameT = Aws::String>
    Stack& WithDefaultSshKeyName(DefaultSshKeyNameT&& value) { SetDefaultSshKeyName(std::forward<DefaultSshKeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the stack was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    Stack& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the stack, but you can override it when you create an instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>. </p>
     */
    inline RootDeviceType GetDefaultRootDeviceType() const { return m_defaultRootDeviceType; }
    inline bool DefaultRootDeviceTypeHasBeenSet() const { return m_defaultRootDeviceTypeHasBeenSet; }
    inline void SetDefaultRootDeviceType(RootDeviceType value) { m_defaultRootDeviceTypeHasBeenSet = true; m_defaultRootDeviceType = value; }
    inline Stack& WithDefaultRootDeviceType(RootDeviceType value) { SetDefaultRootDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent version. This parameter is set to <code>LATEST</code> for
     * auto-update. or a version number for a fixed agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    Stack& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Map<StackAttributesKeys, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    Aws::String m_defaultInstanceProfileArn;
    bool m_defaultInstanceProfileArnHasBeenSet = false;

    Aws::String m_defaultOs;
    bool m_defaultOsHasBeenSet = false;

    Aws::String m_hostnameTheme;
    bool m_hostnameThemeHasBeenSet = false;

    Aws::String m_defaultAvailabilityZone;
    bool m_defaultAvailabilityZoneHasBeenSet = false;

    Aws::String m_defaultSubnetId;
    bool m_defaultSubnetIdHasBeenSet = false;

    Aws::String m_customJson;
    bool m_customJsonHasBeenSet = false;

    StackConfigurationManager m_configurationManager;
    bool m_configurationManagerHasBeenSet = false;

    ChefConfiguration m_chefConfiguration;
    bool m_chefConfigurationHasBeenSet = false;

    bool m_useCustomCookbooks{false};
    bool m_useCustomCookbooksHasBeenSet = false;

    bool m_useOpsworksSecurityGroups{false};
    bool m_useOpsworksSecurityGroupsHasBeenSet = false;

    Source m_customCookbooksSource;
    bool m_customCookbooksSourceHasBeenSet = false;

    Aws::String m_defaultSshKeyName;
    bool m_defaultSshKeyNameHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    RootDeviceType m_defaultRootDeviceType{RootDeviceType::NOT_SET};
    bool m_defaultRootDeviceTypeHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
