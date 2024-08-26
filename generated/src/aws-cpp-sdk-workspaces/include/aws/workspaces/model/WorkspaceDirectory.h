/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/WorkspaceDirectoryType.h>
#include <aws/workspaces/model/WorkspaceDirectoryState.h>
#include <aws/workspaces/model/DefaultWorkspaceCreationProperties.h>
#include <aws/workspaces/model/WorkspaceAccessProperties.h>
#include <aws/workspaces/model/Tenancy.h>
#include <aws/workspaces/model/SelfservicePermissions.h>
#include <aws/workspaces/model/SamlProperties.h>
#include <aws/workspaces/model/CertificateBasedAuthProperties.h>
#include <aws/workspaces/model/MicrosoftEntraConfig.h>
#include <aws/workspaces/model/UserIdentityType.h>
#include <aws/workspaces/model/WorkspaceType.h>
#include <aws/workspaces/model/IDCConfig.h>
#include <aws/workspaces/model/ActiveDirectoryConfig.h>
#include <aws/workspaces/model/StreamingProperties.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a directory that is used with Amazon WorkSpaces.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceDirectory">AWS
   * API Reference</a></p>
   */
  class WorkspaceDirectory
  {
  public:
    AWS_WORKSPACES_API WorkspaceDirectory();
    AWS_WORKSPACES_API WorkspaceDirectory(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceDirectory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The directory identifier.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline WorkspaceDirectory& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline WorkspaceDirectory& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline WorkspaceDirectory& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory alias.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline WorkspaceDirectory& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline WorkspaceDirectory& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline WorkspaceDirectory& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the directory.</p>
     */
    inline const Aws::String& GetDirectoryName() const{ return m_directoryName; }
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }
    inline void SetDirectoryName(const Aws::String& value) { m_directoryNameHasBeenSet = true; m_directoryName = value; }
    inline void SetDirectoryName(Aws::String&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::move(value); }
    inline void SetDirectoryName(const char* value) { m_directoryNameHasBeenSet = true; m_directoryName.assign(value); }
    inline WorkspaceDirectory& WithDirectoryName(const Aws::String& value) { SetDirectoryName(value); return *this;}
    inline WorkspaceDirectory& WithDirectoryName(Aws::String&& value) { SetDirectoryName(std::move(value)); return *this;}
    inline WorkspaceDirectory& WithDirectoryName(const char* value) { SetDirectoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registration code for the directory. This is the code that users enter in
     * their Amazon WorkSpaces client application to connect to the directory.</p>
     */
    inline const Aws::String& GetRegistrationCode() const{ return m_registrationCode; }
    inline bool RegistrationCodeHasBeenSet() const { return m_registrationCodeHasBeenSet; }
    inline void SetRegistrationCode(const Aws::String& value) { m_registrationCodeHasBeenSet = true; m_registrationCode = value; }
    inline void SetRegistrationCode(Aws::String&& value) { m_registrationCodeHasBeenSet = true; m_registrationCode = std::move(value); }
    inline void SetRegistrationCode(const char* value) { m_registrationCodeHasBeenSet = true; m_registrationCode.assign(value); }
    inline WorkspaceDirectory& WithRegistrationCode(const Aws::String& value) { SetRegistrationCode(value); return *this;}
    inline WorkspaceDirectory& WithRegistrationCode(Aws::String&& value) { SetRegistrationCode(std::move(value)); return *this;}
    inline WorkspaceDirectory& WithRegistrationCode(const char* value) { SetRegistrationCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the subnets used with the directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline WorkspaceDirectory& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline WorkspaceDirectory& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline WorkspaceDirectory& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline WorkspaceDirectory& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline WorkspaceDirectory& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the DNS servers for the directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddresses() const{ return m_dnsIpAddresses; }
    inline bool DnsIpAddressesHasBeenSet() const { return m_dnsIpAddressesHasBeenSet; }
    inline void SetDnsIpAddresses(const Aws::Vector<Aws::String>& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses = value; }
    inline void SetDnsIpAddresses(Aws::Vector<Aws::String>&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses = std::move(value); }
    inline WorkspaceDirectory& WithDnsIpAddresses(const Aws::Vector<Aws::String>& value) { SetDnsIpAddresses(value); return *this;}
    inline WorkspaceDirectory& WithDnsIpAddresses(Aws::Vector<Aws::String>&& value) { SetDnsIpAddresses(std::move(value)); return *this;}
    inline WorkspaceDirectory& AddDnsIpAddresses(const Aws::String& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(value); return *this; }
    inline WorkspaceDirectory& AddDnsIpAddresses(Aws::String&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(std::move(value)); return *this; }
    inline WorkspaceDirectory& AddDnsIpAddresses(const char* value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user name for the service account.</p>
     */
    inline const Aws::String& GetCustomerUserName() const{ return m_customerUserName; }
    inline bool CustomerUserNameHasBeenSet() const { return m_customerUserNameHasBeenSet; }
    inline void SetCustomerUserName(const Aws::String& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = value; }
    inline void SetCustomerUserName(Aws::String&& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = std::move(value); }
    inline void SetCustomerUserName(const char* value) { m_customerUserNameHasBeenSet = true; m_customerUserName.assign(value); }
    inline WorkspaceDirectory& WithCustomerUserName(const Aws::String& value) { SetCustomerUserName(value); return *this;}
    inline WorkspaceDirectory& WithCustomerUserName(Aws::String&& value) { SetCustomerUserName(std::move(value)); return *this;}
    inline WorkspaceDirectory& WithCustomerUserName(const char* value) { SetCustomerUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the IAM role. This is the role that allows Amazon
     * WorkSpaces to make calls to other services, such as Amazon EC2, on your
     * behalf.</p>
     */
    inline const Aws::String& GetIamRoleId() const{ return m_iamRoleId; }
    inline bool IamRoleIdHasBeenSet() const { return m_iamRoleIdHasBeenSet; }
    inline void SetIamRoleId(const Aws::String& value) { m_iamRoleIdHasBeenSet = true; m_iamRoleId = value; }
    inline void SetIamRoleId(Aws::String&& value) { m_iamRoleIdHasBeenSet = true; m_iamRoleId = std::move(value); }
    inline void SetIamRoleId(const char* value) { m_iamRoleIdHasBeenSet = true; m_iamRoleId.assign(value); }
    inline WorkspaceDirectory& WithIamRoleId(const Aws::String& value) { SetIamRoleId(value); return *this;}
    inline WorkspaceDirectory& WithIamRoleId(Aws::String&& value) { SetIamRoleId(std::move(value)); return *this;}
    inline WorkspaceDirectory& WithIamRoleId(const char* value) { SetIamRoleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory type.</p>
     */
    inline const WorkspaceDirectoryType& GetDirectoryType() const{ return m_directoryType; }
    inline bool DirectoryTypeHasBeenSet() const { return m_directoryTypeHasBeenSet; }
    inline void SetDirectoryType(const WorkspaceDirectoryType& value) { m_directoryTypeHasBeenSet = true; m_directoryType = value; }
    inline void SetDirectoryType(WorkspaceDirectoryType&& value) { m_directoryTypeHasBeenSet = true; m_directoryType = std::move(value); }
    inline WorkspaceDirectory& WithDirectoryType(const WorkspaceDirectoryType& value) { SetDirectoryType(value); return *this;}
    inline WorkspaceDirectory& WithDirectoryType(WorkspaceDirectoryType&& value) { SetDirectoryType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the security group that is assigned to new WorkSpaces.</p>
     */
    inline const Aws::String& GetWorkspaceSecurityGroupId() const{ return m_workspaceSecurityGroupId; }
    inline bool WorkspaceSecurityGroupIdHasBeenSet() const { return m_workspaceSecurityGroupIdHasBeenSet; }
    inline void SetWorkspaceSecurityGroupId(const Aws::String& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = value; }
    inline void SetWorkspaceSecurityGroupId(Aws::String&& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = std::move(value); }
    inline void SetWorkspaceSecurityGroupId(const char* value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId.assign(value); }
    inline WorkspaceDirectory& WithWorkspaceSecurityGroupId(const Aws::String& value) { SetWorkspaceSecurityGroupId(value); return *this;}
    inline WorkspaceDirectory& WithWorkspaceSecurityGroupId(Aws::String&& value) { SetWorkspaceSecurityGroupId(std::move(value)); return *this;}
    inline WorkspaceDirectory& WithWorkspaceSecurityGroupId(const char* value) { SetWorkspaceSecurityGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the directory's registration with Amazon WorkSpaces. After a
     * directory is deregistered, the <code>DEREGISTERED</code> state is returned very
     * briefly before the directory metadata is cleaned up, so this state is rarely
     * returned. To confirm that a directory is deregistered, check for the directory
     * ID by using <a
     * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceDirectories.html">
     * DescribeWorkspaceDirectories</a>. If the directory ID isn't returned, then the
     * directory has been successfully deregistered.</p>
     */
    inline const WorkspaceDirectoryState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const WorkspaceDirectoryState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(WorkspaceDirectoryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline WorkspaceDirectory& WithState(const WorkspaceDirectoryState& value) { SetState(value); return *this;}
    inline WorkspaceDirectory& WithState(WorkspaceDirectoryState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default creation properties for all WorkSpaces in the directory.</p>
     */
    inline const DefaultWorkspaceCreationProperties& GetWorkspaceCreationProperties() const{ return m_workspaceCreationProperties; }
    inline bool WorkspaceCreationPropertiesHasBeenSet() const { return m_workspaceCreationPropertiesHasBeenSet; }
    inline void SetWorkspaceCreationProperties(const DefaultWorkspaceCreationProperties& value) { m_workspaceCreationPropertiesHasBeenSet = true; m_workspaceCreationProperties = value; }
    inline void SetWorkspaceCreationProperties(DefaultWorkspaceCreationProperties&& value) { m_workspaceCreationPropertiesHasBeenSet = true; m_workspaceCreationProperties = std::move(value); }
    inline WorkspaceDirectory& WithWorkspaceCreationProperties(const DefaultWorkspaceCreationProperties& value) { SetWorkspaceCreationProperties(value); return *this;}
    inline WorkspaceDirectory& WithWorkspaceCreationProperties(DefaultWorkspaceCreationProperties&& value) { SetWorkspaceCreationProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the IP access control groups associated with the
     * directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpGroupIds() const{ return m_ipGroupIds; }
    inline bool IpGroupIdsHasBeenSet() const { return m_ipGroupIdsHasBeenSet; }
    inline void SetIpGroupIds(const Aws::Vector<Aws::String>& value) { m_ipGroupIdsHasBeenSet = true; m_ipGroupIds = value; }
    inline void SetIpGroupIds(Aws::Vector<Aws::String>&& value) { m_ipGroupIdsHasBeenSet = true; m_ipGroupIds = std::move(value); }
    inline WorkspaceDirectory& WithIpGroupIds(const Aws::Vector<Aws::String>& value) { SetIpGroupIds(value); return *this;}
    inline WorkspaceDirectory& WithIpGroupIds(Aws::Vector<Aws::String>&& value) { SetIpGroupIds(std::move(value)); return *this;}
    inline WorkspaceDirectory& AddIpGroupIds(const Aws::String& value) { m_ipGroupIdsHasBeenSet = true; m_ipGroupIds.push_back(value); return *this; }
    inline WorkspaceDirectory& AddIpGroupIds(Aws::String&& value) { m_ipGroupIdsHasBeenSet = true; m_ipGroupIds.push_back(std::move(value)); return *this; }
    inline WorkspaceDirectory& AddIpGroupIds(const char* value) { m_ipGroupIdsHasBeenSet = true; m_ipGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The devices and operating systems that users can use to access
     * WorkSpaces.</p>
     */
    inline const WorkspaceAccessProperties& GetWorkspaceAccessProperties() const{ return m_workspaceAccessProperties; }
    inline bool WorkspaceAccessPropertiesHasBeenSet() const { return m_workspaceAccessPropertiesHasBeenSet; }
    inline void SetWorkspaceAccessProperties(const WorkspaceAccessProperties& value) { m_workspaceAccessPropertiesHasBeenSet = true; m_workspaceAccessProperties = value; }
    inline void SetWorkspaceAccessProperties(WorkspaceAccessProperties&& value) { m_workspaceAccessPropertiesHasBeenSet = true; m_workspaceAccessProperties = std::move(value); }
    inline WorkspaceDirectory& WithWorkspaceAccessProperties(const WorkspaceAccessProperties& value) { SetWorkspaceAccessProperties(value); return *this;}
    inline WorkspaceDirectory& WithWorkspaceAccessProperties(WorkspaceAccessProperties&& value) { SetWorkspaceAccessProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the directory is dedicated or shared. To use Bring Your Own
     * License (BYOL), this value must be set to <code>DEDICATED</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline const Tenancy& GetTenancy() const{ return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(const Tenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline void SetTenancy(Tenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }
    inline WorkspaceDirectory& WithTenancy(const Tenancy& value) { SetTenancy(value); return *this;}
    inline WorkspaceDirectory& WithTenancy(Tenancy&& value) { SetTenancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default self-service permissions for WorkSpaces in the directory.</p>
     */
    inline const SelfservicePermissions& GetSelfservicePermissions() const{ return m_selfservicePermissions; }
    inline bool SelfservicePermissionsHasBeenSet() const { return m_selfservicePermissionsHasBeenSet; }
    inline void SetSelfservicePermissions(const SelfservicePermissions& value) { m_selfservicePermissionsHasBeenSet = true; m_selfservicePermissions = value; }
    inline void SetSelfservicePermissions(SelfservicePermissions&& value) { m_selfservicePermissionsHasBeenSet = true; m_selfservicePermissions = std::move(value); }
    inline WorkspaceDirectory& WithSelfservicePermissions(const SelfservicePermissions& value) { SetSelfservicePermissions(value); return *this;}
    inline WorkspaceDirectory& WithSelfservicePermissions(SelfservicePermissions&& value) { SetSelfservicePermissions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the enablement status, user access URL, and relay state parameter
     * name that are used for configuring federation with an SAML 2.0 identity
     * provider.</p>
     */
    inline const SamlProperties& GetSamlProperties() const{ return m_samlProperties; }
    inline bool SamlPropertiesHasBeenSet() const { return m_samlPropertiesHasBeenSet; }
    inline void SetSamlProperties(const SamlProperties& value) { m_samlPropertiesHasBeenSet = true; m_samlProperties = value; }
    inline void SetSamlProperties(SamlProperties&& value) { m_samlPropertiesHasBeenSet = true; m_samlProperties = std::move(value); }
    inline WorkspaceDirectory& WithSamlProperties(const SamlProperties& value) { SetSamlProperties(value); return *this;}
    inline WorkspaceDirectory& WithSamlProperties(SamlProperties&& value) { SetSamlProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate-based authentication properties used to authenticate SAML 2.0
     * Identity Provider (IdP) user identities to Active Directory for WorkSpaces
     * login.</p>
     */
    inline const CertificateBasedAuthProperties& GetCertificateBasedAuthProperties() const{ return m_certificateBasedAuthProperties; }
    inline bool CertificateBasedAuthPropertiesHasBeenSet() const { return m_certificateBasedAuthPropertiesHasBeenSet; }
    inline void SetCertificateBasedAuthProperties(const CertificateBasedAuthProperties& value) { m_certificateBasedAuthPropertiesHasBeenSet = true; m_certificateBasedAuthProperties = value; }
    inline void SetCertificateBasedAuthProperties(CertificateBasedAuthProperties&& value) { m_certificateBasedAuthPropertiesHasBeenSet = true; m_certificateBasedAuthProperties = std::move(value); }
    inline WorkspaceDirectory& WithCertificateBasedAuthProperties(const CertificateBasedAuthProperties& value) { SetCertificateBasedAuthProperties(value); return *this;}
    inline WorkspaceDirectory& WithCertificateBasedAuthProperties(CertificateBasedAuthProperties&& value) { SetCertificateBasedAuthProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details about Microsoft Entra configurations.</p>
     */
    inline const MicrosoftEntraConfig& GetMicrosoftEntraConfig() const{ return m_microsoftEntraConfig; }
    inline bool MicrosoftEntraConfigHasBeenSet() const { return m_microsoftEntraConfigHasBeenSet; }
    inline void SetMicrosoftEntraConfig(const MicrosoftEntraConfig& value) { m_microsoftEntraConfigHasBeenSet = true; m_microsoftEntraConfig = value; }
    inline void SetMicrosoftEntraConfig(MicrosoftEntraConfig&& value) { m_microsoftEntraConfigHasBeenSet = true; m_microsoftEntraConfig = std::move(value); }
    inline WorkspaceDirectory& WithMicrosoftEntraConfig(const MicrosoftEntraConfig& value) { SetMicrosoftEntraConfig(value); return *this;}
    inline WorkspaceDirectory& WithMicrosoftEntraConfig(MicrosoftEntraConfig&& value) { SetMicrosoftEntraConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name fo the WorkSpace directory.</p>
     */
    inline const Aws::String& GetWorkspaceDirectoryName() const{ return m_workspaceDirectoryName; }
    inline bool WorkspaceDirectoryNameHasBeenSet() const { return m_workspaceDirectoryNameHasBeenSet; }
    inline void SetWorkspaceDirectoryName(const Aws::String& value) { m_workspaceDirectoryNameHasBeenSet = true; m_workspaceDirectoryName = value; }
    inline void SetWorkspaceDirectoryName(Aws::String&& value) { m_workspaceDirectoryNameHasBeenSet = true; m_workspaceDirectoryName = std::move(value); }
    inline void SetWorkspaceDirectoryName(const char* value) { m_workspaceDirectoryNameHasBeenSet = true; m_workspaceDirectoryName.assign(value); }
    inline WorkspaceDirectory& WithWorkspaceDirectoryName(const Aws::String& value) { SetWorkspaceDirectoryName(value); return *this;}
    inline WorkspaceDirectory& WithWorkspaceDirectoryName(Aws::String&& value) { SetWorkspaceDirectoryName(std::move(value)); return *this;}
    inline WorkspaceDirectory& WithWorkspaceDirectoryName(const char* value) { SetWorkspaceDirectoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the WorkSpace directory</p>
     */
    inline const Aws::String& GetWorkspaceDirectoryDescription() const{ return m_workspaceDirectoryDescription; }
    inline bool WorkspaceDirectoryDescriptionHasBeenSet() const { return m_workspaceDirectoryDescriptionHasBeenSet; }
    inline void SetWorkspaceDirectoryDescription(const Aws::String& value) { m_workspaceDirectoryDescriptionHasBeenSet = true; m_workspaceDirectoryDescription = value; }
    inline void SetWorkspaceDirectoryDescription(Aws::String&& value) { m_workspaceDirectoryDescriptionHasBeenSet = true; m_workspaceDirectoryDescription = std::move(value); }
    inline void SetWorkspaceDirectoryDescription(const char* value) { m_workspaceDirectoryDescriptionHasBeenSet = true; m_workspaceDirectoryDescription.assign(value); }
    inline WorkspaceDirectory& WithWorkspaceDirectoryDescription(const Aws::String& value) { SetWorkspaceDirectoryDescription(value); return *this;}
    inline WorkspaceDirectory& WithWorkspaceDirectoryDescription(Aws::String&& value) { SetWorkspaceDirectoryDescription(std::move(value)); return *this;}
    inline WorkspaceDirectory& WithWorkspaceDirectoryDescription(const char* value) { SetWorkspaceDirectoryDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the identity type of the specifired user.</p>
     */
    inline const UserIdentityType& GetUserIdentityType() const{ return m_userIdentityType; }
    inline bool UserIdentityTypeHasBeenSet() const { return m_userIdentityTypeHasBeenSet; }
    inline void SetUserIdentityType(const UserIdentityType& value) { m_userIdentityTypeHasBeenSet = true; m_userIdentityType = value; }
    inline void SetUserIdentityType(UserIdentityType&& value) { m_userIdentityTypeHasBeenSet = true; m_userIdentityType = std::move(value); }
    inline WorkspaceDirectory& WithUserIdentityType(const UserIdentityType& value) { SetUserIdentityType(value); return *this;}
    inline WorkspaceDirectory& WithUserIdentityType(UserIdentityType&& value) { SetUserIdentityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the directory's WorkSpace type is personal or pools.</p>
     */
    inline const WorkspaceType& GetWorkspaceType() const{ return m_workspaceType; }
    inline bool WorkspaceTypeHasBeenSet() const { return m_workspaceTypeHasBeenSet; }
    inline void SetWorkspaceType(const WorkspaceType& value) { m_workspaceTypeHasBeenSet = true; m_workspaceType = value; }
    inline void SetWorkspaceType(WorkspaceType&& value) { m_workspaceTypeHasBeenSet = true; m_workspaceType = std::move(value); }
    inline WorkspaceDirectory& WithWorkspaceType(const WorkspaceType& value) { SetWorkspaceType(value); return *this;}
    inline WorkspaceDirectory& WithWorkspaceType(WorkspaceType&& value) { SetWorkspaceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details about identity center configurations.</p>
     */
    inline const IDCConfig& GetIDCConfig() const{ return m_iDCConfig; }
    inline bool IDCConfigHasBeenSet() const { return m_iDCConfigHasBeenSet; }
    inline void SetIDCConfig(const IDCConfig& value) { m_iDCConfigHasBeenSet = true; m_iDCConfig = value; }
    inline void SetIDCConfig(IDCConfig&& value) { m_iDCConfigHasBeenSet = true; m_iDCConfig = std::move(value); }
    inline WorkspaceDirectory& WithIDCConfig(const IDCConfig& value) { SetIDCConfig(value); return *this;}
    inline WorkspaceDirectory& WithIDCConfig(IDCConfig&& value) { SetIDCConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Active Directory config.</p>
     */
    inline const ActiveDirectoryConfig& GetActiveDirectoryConfig() const{ return m_activeDirectoryConfig; }
    inline bool ActiveDirectoryConfigHasBeenSet() const { return m_activeDirectoryConfigHasBeenSet; }
    inline void SetActiveDirectoryConfig(const ActiveDirectoryConfig& value) { m_activeDirectoryConfigHasBeenSet = true; m_activeDirectoryConfig = value; }
    inline void SetActiveDirectoryConfig(ActiveDirectoryConfig&& value) { m_activeDirectoryConfigHasBeenSet = true; m_activeDirectoryConfig = std::move(value); }
    inline WorkspaceDirectory& WithActiveDirectoryConfig(const ActiveDirectoryConfig& value) { SetActiveDirectoryConfig(value); return *this;}
    inline WorkspaceDirectory& WithActiveDirectoryConfig(ActiveDirectoryConfig&& value) { SetActiveDirectoryConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming properties to configure.</p>
     */
    inline const StreamingProperties& GetStreamingProperties() const{ return m_streamingProperties; }
    inline bool StreamingPropertiesHasBeenSet() const { return m_streamingPropertiesHasBeenSet; }
    inline void SetStreamingProperties(const StreamingProperties& value) { m_streamingPropertiesHasBeenSet = true; m_streamingProperties = value; }
    inline void SetStreamingProperties(StreamingProperties&& value) { m_streamingPropertiesHasBeenSet = true; m_streamingProperties = std::move(value); }
    inline WorkspaceDirectory& WithStreamingProperties(const StreamingProperties& value) { SetStreamingProperties(value); return *this;}
    inline WorkspaceDirectory& WithStreamingProperties(StreamingProperties&& value) { SetStreamingProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message returned.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline WorkspaceDirectory& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline WorkspaceDirectory& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline WorkspaceDirectory& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet = false;

    Aws::String m_registrationCode;
    bool m_registrationCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIpAddresses;
    bool m_dnsIpAddressesHasBeenSet = false;

    Aws::String m_customerUserName;
    bool m_customerUserNameHasBeenSet = false;

    Aws::String m_iamRoleId;
    bool m_iamRoleIdHasBeenSet = false;

    WorkspaceDirectoryType m_directoryType;
    bool m_directoryTypeHasBeenSet = false;

    Aws::String m_workspaceSecurityGroupId;
    bool m_workspaceSecurityGroupIdHasBeenSet = false;

    WorkspaceDirectoryState m_state;
    bool m_stateHasBeenSet = false;

    DefaultWorkspaceCreationProperties m_workspaceCreationProperties;
    bool m_workspaceCreationPropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipGroupIds;
    bool m_ipGroupIdsHasBeenSet = false;

    WorkspaceAccessProperties m_workspaceAccessProperties;
    bool m_workspaceAccessPropertiesHasBeenSet = false;

    Tenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    SelfservicePermissions m_selfservicePermissions;
    bool m_selfservicePermissionsHasBeenSet = false;

    SamlProperties m_samlProperties;
    bool m_samlPropertiesHasBeenSet = false;

    CertificateBasedAuthProperties m_certificateBasedAuthProperties;
    bool m_certificateBasedAuthPropertiesHasBeenSet = false;

    MicrosoftEntraConfig m_microsoftEntraConfig;
    bool m_microsoftEntraConfigHasBeenSet = false;

    Aws::String m_workspaceDirectoryName;
    bool m_workspaceDirectoryNameHasBeenSet = false;

    Aws::String m_workspaceDirectoryDescription;
    bool m_workspaceDirectoryDescriptionHasBeenSet = false;

    UserIdentityType m_userIdentityType;
    bool m_userIdentityTypeHasBeenSet = false;

    WorkspaceType m_workspaceType;
    bool m_workspaceTypeHasBeenSet = false;

    IDCConfig m_iDCConfig;
    bool m_iDCConfigHasBeenSet = false;

    ActiveDirectoryConfig m_activeDirectoryConfig;
    bool m_activeDirectoryConfigHasBeenSet = false;

    StreamingProperties m_streamingProperties;
    bool m_streamingPropertiesHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
