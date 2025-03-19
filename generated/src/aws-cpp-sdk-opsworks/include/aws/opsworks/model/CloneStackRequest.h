/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opsworks/model/StackConfigurationManager.h>
#include <aws/opsworks/model/ChefConfiguration.h>
#include <aws/opsworks/model/Source.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/RootDeviceType.h>
#include <aws/opsworks/model/StackAttributesKeys.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class CloneStackRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API CloneStackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CloneStack"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The source stack ID.</p>
     */
    inline const Aws::String& GetSourceStackId() const { return m_sourceStackId; }
    inline bool SourceStackIdHasBeenSet() const { return m_sourceStackIdHasBeenSet; }
    template<typename SourceStackIdT = Aws::String>
    void SetSourceStackId(SourceStackIdT&& value) { m_sourceStackIdHasBeenSet = true; m_sourceStackId = std::forward<SourceStackIdT>(value); }
    template<typename SourceStackIdT = Aws::String>
    CloneStackRequest& WithSourceStackId(SourceStackIdT&& value) { SetSourceStackId(std::forward<SourceStackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cloned stack name. Stack names can be a maximum of 64 characters.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CloneStackRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cloned stack Amazon Web Services Region, such as
     * <code>ap-northeast-2</code>. For more information about Amazon Web Services
     * Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    CloneStackRequest& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC that the cloned stack is to be launched into. It must be in
     * the specified region. All instances are launched into this VPC, and you cannot
     * change the ID later.</p> <ul> <li> <p>If your account supports EC2 Classic, the
     * default value is no VPC.</p> </li> <li> <p>If your account does not support EC2
     * Classic, the default value is the default VPC for the specified region.</p>
     * </li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified
     * either the <code>DefaultAvailabilityZone</code> or the
     * <code>DefaultSubnetId</code> parameter only, OpsWorks Stacks infers the value of
     * the other parameter. If you specify neither parameter, OpsWorks Stacks sets
     * these parameters to the first valid Availability Zone for the specified region
     * and the corresponding default VPC subnet ID, respectively. </p> <p>If you
     * specify a nondefault VPC ID, note the following:</p> <ul> <li> <p>It must belong
     * to a VPC in your account that is in the specified region.</p> </li> <li> <p>You
     * must specify a value for <code>DefaultSubnetId</code>.</p> </li> </ul> <p>For
     * more information about how to use OpsWorks Stacks with a VPC, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running
     * a Stack in a VPC</a>. For more information about default VPC and EC2 Classic,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported
     * Platforms</a>. </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CloneStackRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of stack attributes and values as key/value pairs to be added to the
     * cloned stack.</p>
     */
    inline const Aws::Map<StackAttributesKeys, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<StackAttributesKeys, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<StackAttributesKeys, Aws::String>>
    CloneStackRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    inline CloneStackRequest& AddAttributes(StackAttributesKeys key, Aws::String value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The stack Identity and Access Management (IAM) role, which allows OpsWorks
     * Stacks to work with Amazon Web Services resources on your behalf. You must set
     * this parameter to the Amazon Resource Name (ARN) for an existing IAM role. If
     * you create a stack by using the OpsWorkss Stacks console, it creates the role
     * for you. You can obtain an existing stack's IAM ARN programmatically by calling
     * <a>DescribePermissions</a>. For more information about IAM ARNs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>  <p>You must set this parameter to a valid service
     * role ARN or the action will fail; there is no default value. You can specify the
     * source stack's service role ARN, if you prefer, but you must do so
     * explicitly.</p> 
     */
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    CloneStackRequest& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM profile that is the default profile
     * for all of the stack's EC2 instances. For more information about IAM ARNs, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using
     * Identifiers</a>.</p>
     */
    inline const Aws::String& GetDefaultInstanceProfileArn() const { return m_defaultInstanceProfileArn; }
    inline bool DefaultInstanceProfileArnHasBeenSet() const { return m_defaultInstanceProfileArnHasBeenSet; }
    template<typename DefaultInstanceProfileArnT = Aws::String>
    void SetDefaultInstanceProfileArn(DefaultInstanceProfileArnT&& value) { m_defaultInstanceProfileArnHasBeenSet = true; m_defaultInstanceProfileArn = std::forward<DefaultInstanceProfileArnT>(value); }
    template<typename DefaultInstanceProfileArnT = Aws::String>
    CloneStackRequest& WithDefaultInstanceProfileArn(DefaultInstanceProfileArnT&& value) { SetDefaultInstanceProfileArn(std::forward<DefaultInstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack's operating system, which must be set to one of the following.</p>
     * <ul> <li> <p>A supported Linux operating system: An Amazon Linux version, such
     * as <code>Amazon Linux 2</code>, <code>Amazon Linux 2018.03</code>, <code>Amazon
     * Linux 2017.09</code>, <code>Amazon Linux 2017.03</code>, <code>Amazon Linux
     * 2016.09</code>, <code>Amazon Linux 2016.03</code>, <code>Amazon Linux
     * 2015.09</code>, or <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A
     * supported Ubuntu operating system, such as <code>Ubuntu 18.04 LTS</code>,
     * <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu
     * 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS Linux 7</code> </p> </li> <li>
     * <p> <code>Red Hat Enterprise Linux 7</code> </p> </li> <li> <p> <code>Microsoft
     * Windows Server 2012 R2 Base</code>, <code>Microsoft Windows Server 2012 R2 with
     * SQL Server Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL
     * Server Web</code>.</p> </li> <li> <p>A custom AMI: <code>Custom</code>. You
     * specify the custom AMI you want to use when you create instances. For more
     * information about how to use custom AMIs with OpsWorks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p> </li> </ul> <p>The default option is the parent stack's
     * operating system. Not all operating systems are supported with all versions of
     * Chef. For more information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">OpsWorks
     * Stacks Operating Systems</a>.</p>  <p>You can specify a different Linux
     * operating system for the cloned stack, but you cannot change from Linux to
     * Windows or Windows to Linux.</p> 
     */
    inline const Aws::String& GetDefaultOs() const { return m_defaultOs; }
    inline bool DefaultOsHasBeenSet() const { return m_defaultOsHasBeenSet; }
    template<typename DefaultOsT = Aws::String>
    void SetDefaultOs(DefaultOsT&& value) { m_defaultOsHasBeenSet = true; m_defaultOs = std::forward<DefaultOsT>(value); }
    template<typename DefaultOsT = Aws::String>
    CloneStackRequest& WithDefaultOs(DefaultOsT&& value) { SetDefaultOs(std::forward<DefaultOsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack's host name theme, with spaces are replaced by underscores. The
     * theme is used to generate host names for the stack's instances. By default,
     * <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates
     * host names by appending integers to the layer's short name. The other themes
     * are:</p> <ul> <li> <p> <code>Baked_Goods</code> </p> </li> <li> <p>
     * <code>Clouds</code> </p> </li> <li> <p> <code>Europe_Cities</code> </p> </li>
     * <li> <p> <code>Fruits</code> </p> </li> <li> <p>
     * <code>Greek_Deities_and_Titans</code> </p> </li> <li> <p>
     * <code>Legendary_creatures_from_Japan</code> </p> </li> <li> <p>
     * <code>Planets_and_Moons</code> </p> </li> <li> <p> <code>Roman_Deities</code>
     * </p> </li> <li> <p> <code>Scottish_Islands</code> </p> </li> <li> <p>
     * <code>US_Cities</code> </p> </li> <li> <p> <code>Wild_Cats</code> </p> </li>
     * </ul> <p>To obtain a generated host name, call
     * <code>GetHostNameSuggestion</code>, which returns a host name based on the
     * current theme.</p>
     */
    inline const Aws::String& GetHostnameTheme() const { return m_hostnameTheme; }
    inline bool HostnameThemeHasBeenSet() const { return m_hostnameThemeHasBeenSet; }
    template<typename HostnameThemeT = Aws::String>
    void SetHostnameTheme(HostnameThemeT&& value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme = std::forward<HostnameThemeT>(value); }
    template<typename HostnameThemeT = Aws::String>
    CloneStackRequest& WithHostnameTheme(HostnameThemeT&& value) { SetHostnameTheme(std::forward<HostnameThemeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cloned stack's default Availability Zone, which must be in the specified
     * region. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the
     * subnet must be in the same zone. For more information, see the
     * <code>VpcId</code> parameter description. </p>
     */
    inline const Aws::String& GetDefaultAvailabilityZone() const { return m_defaultAvailabilityZone; }
    inline bool DefaultAvailabilityZoneHasBeenSet() const { return m_defaultAvailabilityZoneHasBeenSet; }
    template<typename DefaultAvailabilityZoneT = Aws::String>
    void SetDefaultAvailabilityZone(DefaultAvailabilityZoneT&& value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone = std::forward<DefaultAvailabilityZoneT>(value); }
    template<typename DefaultAvailabilityZoneT = Aws::String>
    CloneStackRequest& WithDefaultAvailabilityZone(DefaultAvailabilityZoneT&& value) { SetDefaultAvailabilityZone(std::forward<DefaultAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack's default VPC subnet ID. This parameter is required if you specify
     * a value for the <code>VpcId</code> parameter. All instances are launched into
     * this subnet unless you specify otherwise when you create the instance. If you
     * also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must
     * be in that zone. For information on default values and when this parameter is
     * required, see the <code>VpcId</code> parameter description. </p>
     */
    inline const Aws::String& GetDefaultSubnetId() const { return m_defaultSubnetId; }
    inline bool DefaultSubnetIdHasBeenSet() const { return m_defaultSubnetIdHasBeenSet; }
    template<typename DefaultSubnetIdT = Aws::String>
    void SetDefaultSubnetId(DefaultSubnetIdT&& value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId = std::forward<DefaultSubnetIdT>(value); }
    template<typename DefaultSubnetIdT = Aws::String>
    CloneStackRequest& WithDefaultSubnetId(DefaultSubnetIdT&& value) { SetDefaultSubnetId(std::forward<DefaultSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that contains user-defined, custom JSON. It is used to override the
     * corresponding default stack configuration JSON values. The string should be in
     * the following format:</p> <p> <code>"{\"key1\": \"value1\", \"key2\":
     * \"value2\",...}"</code> </p> <p>For more information about custom JSON, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use
     * Custom JSON to Modify the Stack Configuration Attributes</a> </p>
     */
    inline const Aws::String& GetCustomJson() const { return m_customJson; }
    inline bool CustomJsonHasBeenSet() const { return m_customJsonHasBeenSet; }
    template<typename CustomJsonT = Aws::String>
    void SetCustomJson(CustomJsonT&& value) { m_customJsonHasBeenSet = true; m_customJson = std::forward<CustomJsonT>(value); }
    template<typename CustomJsonT = Aws::String>
    CloneStackRequest& WithCustomJson(CustomJsonT&& value) { SetCustomJson(std::forward<CustomJsonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration manager. When you clone a stack we recommend that you use
     * the configuration manager to specify the Chef version: 12, 11.10, or 11.4 for
     * Linux stacks, or 12.2 for Windows stacks. The default value for Linux stacks is
     * currently 12.</p>
     */
    inline const StackConfigurationManager& GetConfigurationManager() const { return m_configurationManager; }
    inline bool ConfigurationManagerHasBeenSet() const { return m_configurationManagerHasBeenSet; }
    template<typename ConfigurationManagerT = StackConfigurationManager>
    void SetConfigurationManager(ConfigurationManagerT&& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = std::forward<ConfigurationManagerT>(value); }
    template<typename ConfigurationManagerT = StackConfigurationManager>
    CloneStackRequest& WithConfigurationManager(ConfigurationManagerT&& value) { SetConfigurationManager(std::forward<ConfigurationManagerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ChefConfiguration</code> object that specifies whether to enable
     * Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline const ChefConfiguration& GetChefConfiguration() const { return m_chefConfiguration; }
    inline bool ChefConfigurationHasBeenSet() const { return m_chefConfigurationHasBeenSet; }
    template<typename ChefConfigurationT = ChefConfiguration>
    void SetChefConfiguration(ChefConfigurationT&& value) { m_chefConfigurationHasBeenSet = true; m_chefConfiguration = std::forward<ChefConfigurationT>(value); }
    template<typename ChefConfigurationT = ChefConfiguration>
    CloneStackRequest& WithChefConfiguration(ChefConfigurationT&& value) { SetChefConfiguration(std::forward<ChefConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to use custom cookbooks.</p>
     */
    inline bool GetUseCustomCookbooks() const { return m_useCustomCookbooks; }
    inline bool UseCustomCookbooksHasBeenSet() const { return m_useCustomCookbooksHasBeenSet; }
    inline void SetUseCustomCookbooks(bool value) { m_useCustomCookbooksHasBeenSet = true; m_useCustomCookbooks = value; }
    inline CloneStackRequest& WithUseCustomCookbooks(bool value) { SetUseCustomCookbooks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to associate the OpsWorks Stacks built-in security groups with the
     * stack's layers.</p> <p>OpsWorks Stacks provides a standard set of security
     * groups, one for each layer, which are associated with layers by default. With
     * <code>UseOpsworksSecurityGroups</code> you can instead provide your own custom
     * security groups. <code>UseOpsworksSecurityGroups</code> has the following
     * settings: </p> <ul> <li> <p>True - OpsWorks Stacks automatically associates the
     * appropriate built-in security group with each layer (default setting). You can
     * associate additional security groups with a layer after you create it but you
     * cannot delete the built-in security group.</p> </li> <li> <p>False - OpsWorks
     * Stacks does not associate built-in security groups with layers. You must create
     * appropriate Amazon EC2 security groups and associate a security group with each
     * layer that you create. However, you can still manually associate a built-in
     * security group with a layer on creation; custom security groups are required
     * only for those layers that need custom settings.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create
     * a New Stack</a>.</p>
     */
    inline bool GetUseOpsworksSecurityGroups() const { return m_useOpsworksSecurityGroups; }
    inline bool UseOpsworksSecurityGroupsHasBeenSet() const { return m_useOpsworksSecurityGroupsHasBeenSet; }
    inline void SetUseOpsworksSecurityGroups(bool value) { m_useOpsworksSecurityGroupsHasBeenSet = true; m_useOpsworksSecurityGroups = value; }
    inline CloneStackRequest& WithUseOpsworksSecurityGroups(bool value) { SetUseOpsworksSecurityGroups(value); return *this;}
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
    CloneStackRequest& WithCustomCookbooksSource(CustomCookbooksSourceT&& value) { SetCustomCookbooksSource(std::forward<CustomCookbooksSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A default Amazon EC2 key pair name. The default value is none. If you specify
     * a key pair name, OpsWorks installs the public key on the instance and you can
     * use the private key with an SSH client to log in to the instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html">
     * Using SSH to Communicate with an Instance</a> and <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html">
     * Managing SSH Access</a>. You can override this setting by specifying a different
     * key pair, or no key pair, when you <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">
     * create an instance</a>. </p>
     */
    inline const Aws::String& GetDefaultSshKeyName() const { return m_defaultSshKeyName; }
    inline bool DefaultSshKeyNameHasBeenSet() const { return m_defaultSshKeyNameHasBeenSet; }
    template<typename DefaultSshKeyNameT = Aws::String>
    void SetDefaultSshKeyName(DefaultSshKeyNameT&& value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName = std::forward<DefaultSshKeyNameT>(value); }
    template<typename DefaultSshKeyNameT = Aws::String>
    CloneStackRequest& WithDefaultSshKeyName(DefaultSshKeyNameT&& value) { SetDefaultSshKeyName(std::forward<DefaultSshKeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to clone the source stack's permissions.</p>
     */
    inline bool GetClonePermissions() const { return m_clonePermissions; }
    inline bool ClonePermissionsHasBeenSet() const { return m_clonePermissionsHasBeenSet; }
    inline void SetClonePermissions(bool value) { m_clonePermissionsHasBeenSet = true; m_clonePermissions = value; }
    inline CloneStackRequest& WithClonePermissions(bool value) { SetClonePermissions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of source stack app IDs to be included in the cloned stack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCloneAppIds() const { return m_cloneAppIds; }
    inline bool CloneAppIdsHasBeenSet() const { return m_cloneAppIdsHasBeenSet; }
    template<typename CloneAppIdsT = Aws::Vector<Aws::String>>
    void SetCloneAppIds(CloneAppIdsT&& value) { m_cloneAppIdsHasBeenSet = true; m_cloneAppIds = std::forward<CloneAppIdsT>(value); }
    template<typename CloneAppIdsT = Aws::Vector<Aws::String>>
    CloneStackRequest& WithCloneAppIds(CloneAppIdsT&& value) { SetCloneAppIds(std::forward<CloneAppIdsT>(value)); return *this;}
    template<typename CloneAppIdsT = Aws::String>
    CloneStackRequest& AddCloneAppIds(CloneAppIdsT&& value) { m_cloneAppIdsHasBeenSet = true; m_cloneAppIds.emplace_back(std::forward<CloneAppIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default root device type. This value is used by default for all instances
     * in the cloned stack, but you can override it when you create an instance. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage
     * for the Root Device</a>.</p>
     */
    inline RootDeviceType GetDefaultRootDeviceType() const { return m_defaultRootDeviceType; }
    inline bool DefaultRootDeviceTypeHasBeenSet() const { return m_defaultRootDeviceTypeHasBeenSet; }
    inline void SetDefaultRootDeviceType(RootDeviceType value) { m_defaultRootDeviceTypeHasBeenSet = true; m_defaultRootDeviceType = value; }
    inline CloneStackRequest& WithDefaultRootDeviceType(RootDeviceType value) { SetDefaultRootDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p>Auto-update - Set this parameter to
     * <code>LATEST</code>. OpsWorks Stacks automatically installs new agent versions
     * on the stack's instances as soon as they are available.</p> </li> <li> <p>Fixed
     * version - Set this parameter to your preferred agent version. To update the
     * agent version, you must edit the stack configuration and specify a new version.
     * OpsWorks Stacks automatically installs that version on the stack's
     * instances.</p> </li> </ul> <p>The default setting is <code>LATEST</code>. To
     * specify an agent version, you must use the complete version number, not the
     * abbreviated number shown on the console. For a list of available agent version
     * numbers, call <a>DescribeAgentVersions</a>. AgentVersion cannot be set to Chef
     * 12.2.</p>  <p>You can also specify an agent version when you create or
     * update an instance, which overrides the stack's default setting.</p> 
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    CloneStackRequest& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceStackId;
    bool m_sourceStackIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    bool m_clonePermissions{false};
    bool m_clonePermissionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_cloneAppIds;
    bool m_cloneAppIdsHasBeenSet = false;

    RootDeviceType m_defaultRootDeviceType{RootDeviceType::NOT_SET};
    bool m_defaultRootDeviceTypeHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
