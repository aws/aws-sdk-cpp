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
#include <aws/workspaces/model/EndpointEncryptionMode.h>
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
    AWS_WORKSPACES_API WorkspaceDirectory() = default;
    AWS_WORKSPACES_API WorkspaceDirectory(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceDirectory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The directory identifier.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    WorkspaceDirectory& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory alias.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    WorkspaceDirectory& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the directory.</p>
     */
    inline const Aws::String& GetDirectoryName() const { return m_directoryName; }
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }
    template<typename DirectoryNameT = Aws::String>
    void SetDirectoryName(DirectoryNameT&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::forward<DirectoryNameT>(value); }
    template<typename DirectoryNameT = Aws::String>
    WorkspaceDirectory& WithDirectoryName(DirectoryNameT&& value) { SetDirectoryName(std::forward<DirectoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registration code for the directory. This is the code that users enter in
     * their Amazon WorkSpaces client application to connect to the directory.</p>
     */
    inline const Aws::String& GetRegistrationCode() const { return m_registrationCode; }
    inline bool RegistrationCodeHasBeenSet() const { return m_registrationCodeHasBeenSet; }
    template<typename RegistrationCodeT = Aws::String>
    void SetRegistrationCode(RegistrationCodeT&& value) { m_registrationCodeHasBeenSet = true; m_registrationCode = std::forward<RegistrationCodeT>(value); }
    template<typename RegistrationCodeT = Aws::String>
    WorkspaceDirectory& WithRegistrationCode(RegistrationCodeT&& value) { SetRegistrationCode(std::forward<RegistrationCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the subnets used with the directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    WorkspaceDirectory& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    WorkspaceDirectory& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the DNS servers for the directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddresses() const { return m_dnsIpAddresses; }
    inline bool DnsIpAddressesHasBeenSet() const { return m_dnsIpAddressesHasBeenSet; }
    template<typename DnsIpAddressesT = Aws::Vector<Aws::String>>
    void SetDnsIpAddresses(DnsIpAddressesT&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses = std::forward<DnsIpAddressesT>(value); }
    template<typename DnsIpAddressesT = Aws::Vector<Aws::String>>
    WorkspaceDirectory& WithDnsIpAddresses(DnsIpAddressesT&& value) { SetDnsIpAddresses(std::forward<DnsIpAddressesT>(value)); return *this;}
    template<typename DnsIpAddressesT = Aws::String>
    WorkspaceDirectory& AddDnsIpAddresses(DnsIpAddressesT&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.emplace_back(std::forward<DnsIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user name for the service account.</p>
     */
    inline const Aws::String& GetCustomerUserName() const { return m_customerUserName; }
    inline bool CustomerUserNameHasBeenSet() const { return m_customerUserNameHasBeenSet; }
    template<typename CustomerUserNameT = Aws::String>
    void SetCustomerUserName(CustomerUserNameT&& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = std::forward<CustomerUserNameT>(value); }
    template<typename CustomerUserNameT = Aws::String>
    WorkspaceDirectory& WithCustomerUserName(CustomerUserNameT&& value) { SetCustomerUserName(std::forward<CustomerUserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the IAM role. This is the role that allows Amazon
     * WorkSpaces to make calls to other services, such as Amazon EC2, on your
     * behalf.</p>
     */
    inline const Aws::String& GetIamRoleId() const { return m_iamRoleId; }
    inline bool IamRoleIdHasBeenSet() const { return m_iamRoleIdHasBeenSet; }
    template<typename IamRoleIdT = Aws::String>
    void SetIamRoleId(IamRoleIdT&& value) { m_iamRoleIdHasBeenSet = true; m_iamRoleId = std::forward<IamRoleIdT>(value); }
    template<typename IamRoleIdT = Aws::String>
    WorkspaceDirectory& WithIamRoleId(IamRoleIdT&& value) { SetIamRoleId(std::forward<IamRoleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory type.</p>
     */
    inline WorkspaceDirectoryType GetDirectoryType() const { return m_directoryType; }
    inline bool DirectoryTypeHasBeenSet() const { return m_directoryTypeHasBeenSet; }
    inline void SetDirectoryType(WorkspaceDirectoryType value) { m_directoryTypeHasBeenSet = true; m_directoryType = value; }
    inline WorkspaceDirectory& WithDirectoryType(WorkspaceDirectoryType value) { SetDirectoryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the security group that is assigned to new WorkSpaces.</p>
     */
    inline const Aws::String& GetWorkspaceSecurityGroupId() const { return m_workspaceSecurityGroupId; }
    inline bool WorkspaceSecurityGroupIdHasBeenSet() const { return m_workspaceSecurityGroupIdHasBeenSet; }
    template<typename WorkspaceSecurityGroupIdT = Aws::String>
    void SetWorkspaceSecurityGroupId(WorkspaceSecurityGroupIdT&& value) { m_workspaceSecurityGroupIdHasBeenSet = true; m_workspaceSecurityGroupId = std::forward<WorkspaceSecurityGroupIdT>(value); }
    template<typename WorkspaceSecurityGroupIdT = Aws::String>
    WorkspaceDirectory& WithWorkspaceSecurityGroupId(WorkspaceSecurityGroupIdT&& value) { SetWorkspaceSecurityGroupId(std::forward<WorkspaceSecurityGroupIdT>(value)); return *this;}
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
    inline WorkspaceDirectoryState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(WorkspaceDirectoryState value) { m_stateHasBeenSet = true; m_state = value; }
    inline WorkspaceDirectory& WithState(WorkspaceDirectoryState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default creation properties for all WorkSpaces in the directory.</p>
     */
    inline const DefaultWorkspaceCreationProperties& GetWorkspaceCreationProperties() const { return m_workspaceCreationProperties; }
    inline bool WorkspaceCreationPropertiesHasBeenSet() const { return m_workspaceCreationPropertiesHasBeenSet; }
    template<typename WorkspaceCreationPropertiesT = DefaultWorkspaceCreationProperties>
    void SetWorkspaceCreationProperties(WorkspaceCreationPropertiesT&& value) { m_workspaceCreationPropertiesHasBeenSet = true; m_workspaceCreationProperties = std::forward<WorkspaceCreationPropertiesT>(value); }
    template<typename WorkspaceCreationPropertiesT = DefaultWorkspaceCreationProperties>
    WorkspaceDirectory& WithWorkspaceCreationProperties(WorkspaceCreationPropertiesT&& value) { SetWorkspaceCreationProperties(std::forward<WorkspaceCreationPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the IP access control groups associated with the
     * directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpGroupIds() const { return m_ipGroupIds; }
    inline bool IpGroupIdsHasBeenSet() const { return m_ipGroupIdsHasBeenSet; }
    template<typename IpGroupIdsT = Aws::Vector<Aws::String>>
    void SetIpGroupIds(IpGroupIdsT&& value) { m_ipGroupIdsHasBeenSet = true; m_ipGroupIds = std::forward<IpGroupIdsT>(value); }
    template<typename IpGroupIdsT = Aws::Vector<Aws::String>>
    WorkspaceDirectory& WithIpGroupIds(IpGroupIdsT&& value) { SetIpGroupIds(std::forward<IpGroupIdsT>(value)); return *this;}
    template<typename IpGroupIdsT = Aws::String>
    WorkspaceDirectory& AddIpGroupIds(IpGroupIdsT&& value) { m_ipGroupIdsHasBeenSet = true; m_ipGroupIds.emplace_back(std::forward<IpGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The devices and operating systems that users can use to access
     * WorkSpaces.</p>
     */
    inline const WorkspaceAccessProperties& GetWorkspaceAccessProperties() const { return m_workspaceAccessProperties; }
    inline bool WorkspaceAccessPropertiesHasBeenSet() const { return m_workspaceAccessPropertiesHasBeenSet; }
    template<typename WorkspaceAccessPropertiesT = WorkspaceAccessProperties>
    void SetWorkspaceAccessProperties(WorkspaceAccessPropertiesT&& value) { m_workspaceAccessPropertiesHasBeenSet = true; m_workspaceAccessProperties = std::forward<WorkspaceAccessPropertiesT>(value); }
    template<typename WorkspaceAccessPropertiesT = WorkspaceAccessProperties>
    WorkspaceDirectory& WithWorkspaceAccessProperties(WorkspaceAccessPropertiesT&& value) { SetWorkspaceAccessProperties(std::forward<WorkspaceAccessPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the directory is dedicated or shared. To use Bring Your Own
     * License (BYOL), this value must be set to <code>DEDICATED</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">Bring
     * Your Own Windows Desktop Images</a>.</p>
     */
    inline Tenancy GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(Tenancy value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline WorkspaceDirectory& WithTenancy(Tenancy value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default self-service permissions for WorkSpaces in the directory.</p>
     */
    inline const SelfservicePermissions& GetSelfservicePermissions() const { return m_selfservicePermissions; }
    inline bool SelfservicePermissionsHasBeenSet() const { return m_selfservicePermissionsHasBeenSet; }
    template<typename SelfservicePermissionsT = SelfservicePermissions>
    void SetSelfservicePermissions(SelfservicePermissionsT&& value) { m_selfservicePermissionsHasBeenSet = true; m_selfservicePermissions = std::forward<SelfservicePermissionsT>(value); }
    template<typename SelfservicePermissionsT = SelfservicePermissions>
    WorkspaceDirectory& WithSelfservicePermissions(SelfservicePermissionsT&& value) { SetSelfservicePermissions(std::forward<SelfservicePermissionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the enablement status, user access URL, and relay state parameter
     * name that are used for configuring federation with an SAML 2.0 identity
     * provider.</p>
     */
    inline const SamlProperties& GetSamlProperties() const { return m_samlProperties; }
    inline bool SamlPropertiesHasBeenSet() const { return m_samlPropertiesHasBeenSet; }
    template<typename SamlPropertiesT = SamlProperties>
    void SetSamlProperties(SamlPropertiesT&& value) { m_samlPropertiesHasBeenSet = true; m_samlProperties = std::forward<SamlPropertiesT>(value); }
    template<typename SamlPropertiesT = SamlProperties>
    WorkspaceDirectory& WithSamlProperties(SamlPropertiesT&& value) { SetSamlProperties(std::forward<SamlPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate-based authentication properties used to authenticate SAML 2.0
     * Identity Provider (IdP) user identities to Active Directory for WorkSpaces
     * login.</p>
     */
    inline const CertificateBasedAuthProperties& GetCertificateBasedAuthProperties() const { return m_certificateBasedAuthProperties; }
    inline bool CertificateBasedAuthPropertiesHasBeenSet() const { return m_certificateBasedAuthPropertiesHasBeenSet; }
    template<typename CertificateBasedAuthPropertiesT = CertificateBasedAuthProperties>
    void SetCertificateBasedAuthProperties(CertificateBasedAuthPropertiesT&& value) { m_certificateBasedAuthPropertiesHasBeenSet = true; m_certificateBasedAuthProperties = std::forward<CertificateBasedAuthPropertiesT>(value); }
    template<typename CertificateBasedAuthPropertiesT = CertificateBasedAuthProperties>
    WorkspaceDirectory& WithCertificateBasedAuthProperties(CertificateBasedAuthPropertiesT&& value) { SetCertificateBasedAuthProperties(std::forward<CertificateBasedAuthPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint encryption mode that allows you to configure the specified directory
     * between Standard TLS and FIPS 140-2 validated mode.</p>
     */
    inline EndpointEncryptionMode GetEndpointEncryptionMode() const { return m_endpointEncryptionMode; }
    inline bool EndpointEncryptionModeHasBeenSet() const { return m_endpointEncryptionModeHasBeenSet; }
    inline void SetEndpointEncryptionMode(EndpointEncryptionMode value) { m_endpointEncryptionModeHasBeenSet = true; m_endpointEncryptionMode = value; }
    inline WorkspaceDirectory& WithEndpointEncryptionMode(EndpointEncryptionMode value) { SetEndpointEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details about Microsoft Entra configurations.</p>
     */
    inline const MicrosoftEntraConfig& GetMicrosoftEntraConfig() const { return m_microsoftEntraConfig; }
    inline bool MicrosoftEntraConfigHasBeenSet() const { return m_microsoftEntraConfigHasBeenSet; }
    template<typename MicrosoftEntraConfigT = MicrosoftEntraConfig>
    void SetMicrosoftEntraConfig(MicrosoftEntraConfigT&& value) { m_microsoftEntraConfigHasBeenSet = true; m_microsoftEntraConfig = std::forward<MicrosoftEntraConfigT>(value); }
    template<typename MicrosoftEntraConfigT = MicrosoftEntraConfig>
    WorkspaceDirectory& WithMicrosoftEntraConfig(MicrosoftEntraConfigT&& value) { SetMicrosoftEntraConfig(std::forward<MicrosoftEntraConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name fo the WorkSpace directory.</p>
     */
    inline const Aws::String& GetWorkspaceDirectoryName() const { return m_workspaceDirectoryName; }
    inline bool WorkspaceDirectoryNameHasBeenSet() const { return m_workspaceDirectoryNameHasBeenSet; }
    template<typename WorkspaceDirectoryNameT = Aws::String>
    void SetWorkspaceDirectoryName(WorkspaceDirectoryNameT&& value) { m_workspaceDirectoryNameHasBeenSet = true; m_workspaceDirectoryName = std::forward<WorkspaceDirectoryNameT>(value); }
    template<typename WorkspaceDirectoryNameT = Aws::String>
    WorkspaceDirectory& WithWorkspaceDirectoryName(WorkspaceDirectoryNameT&& value) { SetWorkspaceDirectoryName(std::forward<WorkspaceDirectoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the WorkSpace directory</p>
     */
    inline const Aws::String& GetWorkspaceDirectoryDescription() const { return m_workspaceDirectoryDescription; }
    inline bool WorkspaceDirectoryDescriptionHasBeenSet() const { return m_workspaceDirectoryDescriptionHasBeenSet; }
    template<typename WorkspaceDirectoryDescriptionT = Aws::String>
    void SetWorkspaceDirectoryDescription(WorkspaceDirectoryDescriptionT&& value) { m_workspaceDirectoryDescriptionHasBeenSet = true; m_workspaceDirectoryDescription = std::forward<WorkspaceDirectoryDescriptionT>(value); }
    template<typename WorkspaceDirectoryDescriptionT = Aws::String>
    WorkspaceDirectory& WithWorkspaceDirectoryDescription(WorkspaceDirectoryDescriptionT&& value) { SetWorkspaceDirectoryDescription(std::forward<WorkspaceDirectoryDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the identity type of the specifired user.</p>
     */
    inline UserIdentityType GetUserIdentityType() const { return m_userIdentityType; }
    inline bool UserIdentityTypeHasBeenSet() const { return m_userIdentityTypeHasBeenSet; }
    inline void SetUserIdentityType(UserIdentityType value) { m_userIdentityTypeHasBeenSet = true; m_userIdentityType = value; }
    inline WorkspaceDirectory& WithUserIdentityType(UserIdentityType value) { SetUserIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the directory's WorkSpace type is personal or pools.</p>
     */
    inline WorkspaceType GetWorkspaceType() const { return m_workspaceType; }
    inline bool WorkspaceTypeHasBeenSet() const { return m_workspaceTypeHasBeenSet; }
    inline void SetWorkspaceType(WorkspaceType value) { m_workspaceTypeHasBeenSet = true; m_workspaceType = value; }
    inline WorkspaceDirectory& WithWorkspaceType(WorkspaceType value) { SetWorkspaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details about identity center configurations.</p>
     */
    inline const IDCConfig& GetIDCConfig() const { return m_iDCConfig; }
    inline bool IDCConfigHasBeenSet() const { return m_iDCConfigHasBeenSet; }
    template<typename IDCConfigT = IDCConfig>
    void SetIDCConfig(IDCConfigT&& value) { m_iDCConfigHasBeenSet = true; m_iDCConfig = std::forward<IDCConfigT>(value); }
    template<typename IDCConfigT = IDCConfig>
    WorkspaceDirectory& WithIDCConfig(IDCConfigT&& value) { SetIDCConfig(std::forward<IDCConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Active Directory config.</p>
     */
    inline const ActiveDirectoryConfig& GetActiveDirectoryConfig() const { return m_activeDirectoryConfig; }
    inline bool ActiveDirectoryConfigHasBeenSet() const { return m_activeDirectoryConfigHasBeenSet; }
    template<typename ActiveDirectoryConfigT = ActiveDirectoryConfig>
    void SetActiveDirectoryConfig(ActiveDirectoryConfigT&& value) { m_activeDirectoryConfigHasBeenSet = true; m_activeDirectoryConfig = std::forward<ActiveDirectoryConfigT>(value); }
    template<typename ActiveDirectoryConfigT = ActiveDirectoryConfig>
    WorkspaceDirectory& WithActiveDirectoryConfig(ActiveDirectoryConfigT&& value) { SetActiveDirectoryConfig(std::forward<ActiveDirectoryConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming properties to configure.</p>
     */
    inline const StreamingProperties& GetStreamingProperties() const { return m_streamingProperties; }
    inline bool StreamingPropertiesHasBeenSet() const { return m_streamingPropertiesHasBeenSet; }
    template<typename StreamingPropertiesT = StreamingProperties>
    void SetStreamingProperties(StreamingPropertiesT&& value) { m_streamingPropertiesHasBeenSet = true; m_streamingProperties = std::forward<StreamingPropertiesT>(value); }
    template<typename StreamingPropertiesT = StreamingProperties>
    WorkspaceDirectory& WithStreamingProperties(StreamingPropertiesT&& value) { SetStreamingProperties(std::forward<StreamingPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message returned.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    WorkspaceDirectory& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
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

    WorkspaceDirectoryType m_directoryType{WorkspaceDirectoryType::NOT_SET};
    bool m_directoryTypeHasBeenSet = false;

    Aws::String m_workspaceSecurityGroupId;
    bool m_workspaceSecurityGroupIdHasBeenSet = false;

    WorkspaceDirectoryState m_state{WorkspaceDirectoryState::NOT_SET};
    bool m_stateHasBeenSet = false;

    DefaultWorkspaceCreationProperties m_workspaceCreationProperties;
    bool m_workspaceCreationPropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipGroupIds;
    bool m_ipGroupIdsHasBeenSet = false;

    WorkspaceAccessProperties m_workspaceAccessProperties;
    bool m_workspaceAccessPropertiesHasBeenSet = false;

    Tenancy m_tenancy{Tenancy::NOT_SET};
    bool m_tenancyHasBeenSet = false;

    SelfservicePermissions m_selfservicePermissions;
    bool m_selfservicePermissionsHasBeenSet = false;

    SamlProperties m_samlProperties;
    bool m_samlPropertiesHasBeenSet = false;

    CertificateBasedAuthProperties m_certificateBasedAuthProperties;
    bool m_certificateBasedAuthPropertiesHasBeenSet = false;

    EndpointEncryptionMode m_endpointEncryptionMode{EndpointEncryptionMode::NOT_SET};
    bool m_endpointEncryptionModeHasBeenSet = false;

    MicrosoftEntraConfig m_microsoftEntraConfig;
    bool m_microsoftEntraConfigHasBeenSet = false;

    Aws::String m_workspaceDirectoryName;
    bool m_workspaceDirectoryNameHasBeenSet = false;

    Aws::String m_workspaceDirectoryDescription;
    bool m_workspaceDirectoryDescriptionHasBeenSet = false;

    UserIdentityType m_userIdentityType{UserIdentityType::NOT_SET};
    bool m_userIdentityTypeHasBeenSet = false;

    WorkspaceType m_workspaceType{WorkspaceType::NOT_SET};
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
