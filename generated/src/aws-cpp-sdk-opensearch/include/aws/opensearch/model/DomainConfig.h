/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/VersionStatus.h>
#include <aws/opensearch/model/ClusterConfigStatus.h>
#include <aws/opensearch/model/EBSOptionsStatus.h>
#include <aws/opensearch/model/AccessPoliciesStatus.h>
#include <aws/opensearch/model/IPAddressTypeStatus.h>
#include <aws/opensearch/model/SnapshotOptionsStatus.h>
#include <aws/opensearch/model/VPCDerivedInfoStatus.h>
#include <aws/opensearch/model/CognitoOptionsStatus.h>
#include <aws/opensearch/model/EncryptionAtRestOptionsStatus.h>
#include <aws/opensearch/model/NodeToNodeEncryptionOptionsStatus.h>
#include <aws/opensearch/model/AdvancedOptionsStatus.h>
#include <aws/opensearch/model/LogPublishingOptionsStatus.h>
#include <aws/opensearch/model/DomainEndpointOptionsStatus.h>
#include <aws/opensearch/model/AdvancedSecurityOptionsStatus.h>
#include <aws/opensearch/model/IdentityCenterOptionsStatus.h>
#include <aws/opensearch/model/AutoTuneOptionsStatus.h>
#include <aws/opensearch/model/ChangeProgressDetails.h>
#include <aws/opensearch/model/OffPeakWindowOptionsStatus.h>
#include <aws/opensearch/model/SoftwareUpdateOptionsStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/AIMLOptionsStatus.h>
#include <aws/opensearch/model/ModifyingProperties.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the configuration of an OpenSearch Service
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainConfig">AWS
   * API Reference</a></p>
   */
  class DomainConfig
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainConfig() = default;
    AWS_OPENSEARCHSERVICE_API DomainConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OpenSearch or Elasticsearch version that the domain is running.</p>
     */
    inline const VersionStatus& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = VersionStatus>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = VersionStatus>
    DomainConfig& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for the cluster configuration of a the domain.</p>
     */
    inline const ClusterConfigStatus& GetClusterConfig() const { return m_clusterConfig; }
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }
    template<typename ClusterConfigT = ClusterConfigStatus>
    void SetClusterConfig(ClusterConfigT&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::forward<ClusterConfigT>(value); }
    template<typename ClusterConfigT = ClusterConfigStatus>
    DomainConfig& WithClusterConfig(ClusterConfigT&& value) { SetClusterConfig(std::forward<ClusterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for EBS options configured for the domain.</p>
     */
    inline const EBSOptionsStatus& GetEBSOptions() const { return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    template<typename EBSOptionsT = EBSOptionsStatus>
    void SetEBSOptions(EBSOptionsT&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::forward<EBSOptionsT>(value); }
    template<typename EBSOptionsT = EBSOptionsStatus>
    DomainConfig& WithEBSOptions(EBSOptionsT&& value) { SetEBSOptions(std::forward<EBSOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the access policies for the domain.</p>
     */
    inline const AccessPoliciesStatus& GetAccessPolicies() const { return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    template<typename AccessPoliciesT = AccessPoliciesStatus>
    void SetAccessPolicies(AccessPoliciesT&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::forward<AccessPoliciesT>(value); }
    template<typename AccessPoliciesT = AccessPoliciesStatus>
    DomainConfig& WithAccessPolicies(AccessPoliciesT&& value) { SetAccessPolicies(std::forward<AccessPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose either dual stack or IPv4 as your IP address type. Dual stack allows
     * you to share domain resources across IPv4 and IPv6 address types, and is the
     * recommended option. If you set your IP address type to dual stack, you can't
     * change your address type later.</p>
     */
    inline const IPAddressTypeStatus& GetIPAddressType() const { return m_iPAddressType; }
    inline bool IPAddressTypeHasBeenSet() const { return m_iPAddressTypeHasBeenSet; }
    template<typename IPAddressTypeT = IPAddressTypeStatus>
    void SetIPAddressType(IPAddressTypeT&& value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = std::forward<IPAddressTypeT>(value); }
    template<typename IPAddressTypeT = IPAddressTypeStatus>
    DomainConfig& WithIPAddressType(IPAddressTypeT&& value) { SetIPAddressType(std::forward<IPAddressTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline const SnapshotOptionsStatus& GetSnapshotOptions() const { return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    template<typename SnapshotOptionsT = SnapshotOptionsStatus>
    void SetSnapshotOptions(SnapshotOptionsT&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::forward<SnapshotOptionsT>(value); }
    template<typename SnapshotOptionsT = SnapshotOptionsStatus>
    DomainConfig& WithSnapshotOptions(SnapshotOptionsT&& value) { SetSnapshotOptions(std::forward<SnapshotOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current VPC options for the domain and the status of any updates to their
     * configuration.</p>
     */
    inline const VPCDerivedInfoStatus& GetVPCOptions() const { return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    template<typename VPCOptionsT = VPCDerivedInfoStatus>
    void SetVPCOptions(VPCOptionsT&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::forward<VPCOptionsT>(value); }
    template<typename VPCOptionsT = VPCDerivedInfoStatus>
    DomainConfig& WithVPCOptions(VPCOptionsT&& value) { SetVPCOptions(std::forward<VPCOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for Amazon Cognito options for the domain.</p>
     */
    inline const CognitoOptionsStatus& GetCognitoOptions() const { return m_cognitoOptions; }
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }
    template<typename CognitoOptionsT = CognitoOptionsStatus>
    void SetCognitoOptions(CognitoOptionsT&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::forward<CognitoOptionsT>(value); }
    template<typename CognitoOptionsT = CognitoOptionsStatus>
    DomainConfig& WithCognitoOptions(CognitoOptionsT&& value) { SetCognitoOptions(std::forward<CognitoOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline const EncryptionAtRestOptionsStatus& GetEncryptionAtRestOptions() const { return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptionsStatus>
    void SetEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::forward<EncryptionAtRestOptionsT>(value); }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptionsStatus>
    DomainConfig& WithEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { SetEncryptionAtRestOptions(std::forward<EncryptionAtRestOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline const NodeToNodeEncryptionOptionsStatus& GetNodeToNodeEncryptionOptions() const { return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptionsStatus>
    void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::forward<NodeToNodeEncryptionOptionsT>(value); }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptionsStatus>
    DomainConfig& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { SetNodeToNodeEncryptionOptions(std::forward<NodeToNodeEncryptionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to specify advanced configuration options. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * options</a>.</p>
     */
    inline const AdvancedOptionsStatus& GetAdvancedOptions() const { return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    template<typename AdvancedOptionsT = AdvancedOptionsStatus>
    void SetAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::forward<AdvancedOptionsT>(value); }
    template<typename AdvancedOptionsT = AdvancedOptionsStatus>
    DomainConfig& WithAdvancedOptions(AdvancedOptionsT&& value) { SetAdvancedOptions(std::forward<AdvancedOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure log publishing.</p>
     */
    inline const LogPublishingOptionsStatus& GetLogPublishingOptions() const { return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    template<typename LogPublishingOptionsT = LogPublishingOptionsStatus>
    void SetLogPublishingOptions(LogPublishingOptionsT&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::forward<LogPublishingOptionsT>(value); }
    template<typename LogPublishingOptionsT = LogPublishingOptionsStatus>
    DomainConfig& WithLogPublishingOptions(LogPublishingOptionsT&& value) { SetLogPublishingOptions(std::forward<LogPublishingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline const DomainEndpointOptionsStatus& GetDomainEndpointOptions() const { return m_domainEndpointOptions; }
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }
    template<typename DomainEndpointOptionsT = DomainEndpointOptionsStatus>
    void SetDomainEndpointOptions(DomainEndpointOptionsT&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::forward<DomainEndpointOptionsT>(value); }
    template<typename DomainEndpointOptionsT = DomainEndpointOptionsStatus>
    DomainConfig& WithDomainEndpointOptions(DomainEndpointOptionsT&& value) { SetDomainEndpointOptions(std::forward<DomainEndpointOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for fine-grained access control settings for the domain.</p>
     */
    inline const AdvancedSecurityOptionsStatus& GetAdvancedSecurityOptions() const { return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    template<typename AdvancedSecurityOptionsT = AdvancedSecurityOptionsStatus>
    void SetAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::forward<AdvancedSecurityOptionsT>(value); }
    template<typename AdvancedSecurityOptionsT = AdvancedSecurityOptionsStatus>
    DomainConfig& WithAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { SetAdvancedSecurityOptions(std::forward<AdvancedSecurityOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for enabling and managing IAM Identity Center
     * integration within a domain.</p>
     */
    inline const IdentityCenterOptionsStatus& GetIdentityCenterOptions() const { return m_identityCenterOptions; }
    inline bool IdentityCenterOptionsHasBeenSet() const { return m_identityCenterOptionsHasBeenSet; }
    template<typename IdentityCenterOptionsT = IdentityCenterOptionsStatus>
    void SetIdentityCenterOptions(IdentityCenterOptionsT&& value) { m_identityCenterOptionsHasBeenSet = true; m_identityCenterOptions = std::forward<IdentityCenterOptionsT>(value); }
    template<typename IdentityCenterOptionsT = IdentityCenterOptionsStatus>
    DomainConfig& WithIdentityCenterOptions(IdentityCenterOptionsT&& value) { SetIdentityCenterOptions(std::forward<IdentityCenterOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for Auto-Tune settings for the domain.</p>
     */
    inline const AutoTuneOptionsStatus& GetAutoTuneOptions() const { return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    template<typename AutoTuneOptionsT = AutoTuneOptionsStatus>
    void SetAutoTuneOptions(AutoTuneOptionsT&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::forward<AutoTuneOptionsT>(value); }
    template<typename AutoTuneOptionsT = AutoTuneOptionsStatus>
    DomainConfig& WithAutoTuneOptions(AutoTuneOptionsT&& value) { SetAutoTuneOptions(std::forward<AutoTuneOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for information about the progress of an existing configuration
     * change.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const { return m_changeProgressDetails; }
    inline bool ChangeProgressDetailsHasBeenSet() const { return m_changeProgressDetailsHasBeenSet; }
    template<typename ChangeProgressDetailsT = ChangeProgressDetails>
    void SetChangeProgressDetails(ChangeProgressDetailsT&& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = std::forward<ChangeProgressDetailsT>(value); }
    template<typename ChangeProgressDetailsT = ChangeProgressDetails>
    DomainConfig& WithChangeProgressDetails(ChangeProgressDetailsT&& value) { SetChangeProgressDetails(std::forward<ChangeProgressDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for off-peak window options for the domain.</p>
     */
    inline const OffPeakWindowOptionsStatus& GetOffPeakWindowOptions() const { return m_offPeakWindowOptions; }
    inline bool OffPeakWindowOptionsHasBeenSet() const { return m_offPeakWindowOptionsHasBeenSet; }
    template<typename OffPeakWindowOptionsT = OffPeakWindowOptionsStatus>
    void SetOffPeakWindowOptions(OffPeakWindowOptionsT&& value) { m_offPeakWindowOptionsHasBeenSet = true; m_offPeakWindowOptions = std::forward<OffPeakWindowOptionsT>(value); }
    template<typename OffPeakWindowOptionsT = OffPeakWindowOptionsStatus>
    DomainConfig& WithOffPeakWindowOptions(OffPeakWindowOptionsT&& value) { SetOffPeakWindowOptions(std::forward<OffPeakWindowOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Software update options for the domain.</p>
     */
    inline const SoftwareUpdateOptionsStatus& GetSoftwareUpdateOptions() const { return m_softwareUpdateOptions; }
    inline bool SoftwareUpdateOptionsHasBeenSet() const { return m_softwareUpdateOptionsHasBeenSet; }
    template<typename SoftwareUpdateOptionsT = SoftwareUpdateOptionsStatus>
    void SetSoftwareUpdateOptions(SoftwareUpdateOptionsT&& value) { m_softwareUpdateOptionsHasBeenSet = true; m_softwareUpdateOptions = std::forward<SoftwareUpdateOptionsT>(value); }
    template<typename SoftwareUpdateOptionsT = SoftwareUpdateOptionsStatus>
    DomainConfig& WithSoftwareUpdateOptions(SoftwareUpdateOptionsT&& value) { SetSoftwareUpdateOptions(std::forward<SoftwareUpdateOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the domain properties that are currently being
     * modified.</p>
     */
    inline const Aws::Vector<ModifyingProperties>& GetModifyingProperties() const { return m_modifyingProperties; }
    inline bool ModifyingPropertiesHasBeenSet() const { return m_modifyingPropertiesHasBeenSet; }
    template<typename ModifyingPropertiesT = Aws::Vector<ModifyingProperties>>
    void SetModifyingProperties(ModifyingPropertiesT&& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties = std::forward<ModifyingPropertiesT>(value); }
    template<typename ModifyingPropertiesT = Aws::Vector<ModifyingProperties>>
    DomainConfig& WithModifyingProperties(ModifyingPropertiesT&& value) { SetModifyingProperties(std::forward<ModifyingPropertiesT>(value)); return *this;}
    template<typename ModifyingPropertiesT = ModifyingProperties>
    DomainConfig& AddModifyingProperties(ModifyingPropertiesT&& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties.emplace_back(std::forward<ModifyingPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Container for parameters required to enable all machine learning
     * features.</p>
     */
    inline const AIMLOptionsStatus& GetAIMLOptions() const { return m_aIMLOptions; }
    inline bool AIMLOptionsHasBeenSet() const { return m_aIMLOptionsHasBeenSet; }
    template<typename AIMLOptionsT = AIMLOptionsStatus>
    void SetAIMLOptions(AIMLOptionsT&& value) { m_aIMLOptionsHasBeenSet = true; m_aIMLOptions = std::forward<AIMLOptionsT>(value); }
    template<typename AIMLOptionsT = AIMLOptionsStatus>
    DomainConfig& WithAIMLOptions(AIMLOptionsT&& value) { SetAIMLOptions(std::forward<AIMLOptionsT>(value)); return *this;}
    ///@}
  private:

    VersionStatus m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    ClusterConfigStatus m_clusterConfig;
    bool m_clusterConfigHasBeenSet = false;

    EBSOptionsStatus m_eBSOptions;
    bool m_eBSOptionsHasBeenSet = false;

    AccessPoliciesStatus m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    IPAddressTypeStatus m_iPAddressType;
    bool m_iPAddressTypeHasBeenSet = false;

    SnapshotOptionsStatus m_snapshotOptions;
    bool m_snapshotOptionsHasBeenSet = false;

    VPCDerivedInfoStatus m_vPCOptions;
    bool m_vPCOptionsHasBeenSet = false;

    CognitoOptionsStatus m_cognitoOptions;
    bool m_cognitoOptionsHasBeenSet = false;

    EncryptionAtRestOptionsStatus m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    NodeToNodeEncryptionOptionsStatus m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet = false;

    AdvancedOptionsStatus m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;

    LogPublishingOptionsStatus m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    DomainEndpointOptionsStatus m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    AdvancedSecurityOptionsStatus m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet = false;

    IdentityCenterOptionsStatus m_identityCenterOptions;
    bool m_identityCenterOptionsHasBeenSet = false;

    AutoTuneOptionsStatus m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet = false;

    ChangeProgressDetails m_changeProgressDetails;
    bool m_changeProgressDetailsHasBeenSet = false;

    OffPeakWindowOptionsStatus m_offPeakWindowOptions;
    bool m_offPeakWindowOptionsHasBeenSet = false;

    SoftwareUpdateOptionsStatus m_softwareUpdateOptions;
    bool m_softwareUpdateOptionsHasBeenSet = false;

    Aws::Vector<ModifyingProperties> m_modifyingProperties;
    bool m_modifyingPropertiesHasBeenSet = false;

    AIMLOptionsStatus m_aIMLOptions;
    bool m_aIMLOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
