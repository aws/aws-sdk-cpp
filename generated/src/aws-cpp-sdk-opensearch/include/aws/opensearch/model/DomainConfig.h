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
    AWS_OPENSEARCHSERVICE_API DomainConfig();
    AWS_OPENSEARCHSERVICE_API DomainConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OpenSearch or Elasticsearch version that the domain is running.</p>
     */
    inline const VersionStatus& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const VersionStatus& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(VersionStatus&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline DomainConfig& WithEngineVersion(const VersionStatus& value) { SetEngineVersion(value); return *this;}
    inline DomainConfig& WithEngineVersion(VersionStatus&& value) { SetEngineVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for the cluster configuration of a the domain.</p>
     */
    inline const ClusterConfigStatus& GetClusterConfig() const{ return m_clusterConfig; }
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }
    inline void SetClusterConfig(const ClusterConfigStatus& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }
    inline void SetClusterConfig(ClusterConfigStatus&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }
    inline DomainConfig& WithClusterConfig(const ClusterConfigStatus& value) { SetClusterConfig(value); return *this;}
    inline DomainConfig& WithClusterConfig(ClusterConfigStatus&& value) { SetClusterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for EBS options configured for the domain.</p>
     */
    inline const EBSOptionsStatus& GetEBSOptions() const{ return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    inline void SetEBSOptions(const EBSOptionsStatus& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }
    inline void SetEBSOptions(EBSOptionsStatus&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }
    inline DomainConfig& WithEBSOptions(const EBSOptionsStatus& value) { SetEBSOptions(value); return *this;}
    inline DomainConfig& WithEBSOptions(EBSOptionsStatus&& value) { SetEBSOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the access policies for the domain.</p>
     */
    inline const AccessPoliciesStatus& GetAccessPolicies() const{ return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    inline void SetAccessPolicies(const AccessPoliciesStatus& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }
    inline void SetAccessPolicies(AccessPoliciesStatus&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }
    inline DomainConfig& WithAccessPolicies(const AccessPoliciesStatus& value) { SetAccessPolicies(value); return *this;}
    inline DomainConfig& WithAccessPolicies(AccessPoliciesStatus&& value) { SetAccessPolicies(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose either dual stack or IPv4 as your IP address type. Dual stack allows
     * you to share domain resources across IPv4 and IPv6 address types, and is the
     * recommended option. If you set your IP address type to dual stack, you can't
     * change your address type later.</p>
     */
    inline const IPAddressTypeStatus& GetIPAddressType() const{ return m_iPAddressType; }
    inline bool IPAddressTypeHasBeenSet() const { return m_iPAddressTypeHasBeenSet; }
    inline void SetIPAddressType(const IPAddressTypeStatus& value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = value; }
    inline void SetIPAddressType(IPAddressTypeStatus&& value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = std::move(value); }
    inline DomainConfig& WithIPAddressType(const IPAddressTypeStatus& value) { SetIPAddressType(value); return *this;}
    inline DomainConfig& WithIPAddressType(IPAddressTypeStatus&& value) { SetIPAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline const SnapshotOptionsStatus& GetSnapshotOptions() const{ return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    inline void SetSnapshotOptions(const SnapshotOptionsStatus& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }
    inline void SetSnapshotOptions(SnapshotOptionsStatus&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }
    inline DomainConfig& WithSnapshotOptions(const SnapshotOptionsStatus& value) { SetSnapshotOptions(value); return *this;}
    inline DomainConfig& WithSnapshotOptions(SnapshotOptionsStatus&& value) { SetSnapshotOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current VPC options for the domain and the status of any updates to their
     * configuration.</p>
     */
    inline const VPCDerivedInfoStatus& GetVPCOptions() const{ return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    inline void SetVPCOptions(const VPCDerivedInfoStatus& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }
    inline void SetVPCOptions(VPCDerivedInfoStatus&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }
    inline DomainConfig& WithVPCOptions(const VPCDerivedInfoStatus& value) { SetVPCOptions(value); return *this;}
    inline DomainConfig& WithVPCOptions(VPCDerivedInfoStatus&& value) { SetVPCOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for Amazon Cognito options for the domain.</p>
     */
    inline const CognitoOptionsStatus& GetCognitoOptions() const{ return m_cognitoOptions; }
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }
    inline void SetCognitoOptions(const CognitoOptionsStatus& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }
    inline void SetCognitoOptions(CognitoOptionsStatus&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }
    inline DomainConfig& WithCognitoOptions(const CognitoOptionsStatus& value) { SetCognitoOptions(value); return *this;}
    inline DomainConfig& WithCognitoOptions(CognitoOptionsStatus&& value) { SetCognitoOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline const EncryptionAtRestOptionsStatus& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptionsStatus& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptionsStatus&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }
    inline DomainConfig& WithEncryptionAtRestOptions(const EncryptionAtRestOptionsStatus& value) { SetEncryptionAtRestOptions(value); return *this;}
    inline DomainConfig& WithEncryptionAtRestOptions(EncryptionAtRestOptionsStatus&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline const NodeToNodeEncryptionOptionsStatus& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptionsStatus& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsStatus&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }
    inline DomainConfig& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptionsStatus& value) { SetNodeToNodeEncryptionOptions(value); return *this;}
    inline DomainConfig& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsStatus&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to specify advanced configuration options. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * options</a>.</p>
     */
    inline const AdvancedOptionsStatus& GetAdvancedOptions() const{ return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    inline void SetAdvancedOptions(const AdvancedOptionsStatus& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }
    inline void SetAdvancedOptions(AdvancedOptionsStatus&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }
    inline DomainConfig& WithAdvancedOptions(const AdvancedOptionsStatus& value) { SetAdvancedOptions(value); return *this;}
    inline DomainConfig& WithAdvancedOptions(AdvancedOptionsStatus&& value) { SetAdvancedOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure log publishing.</p>
     */
    inline const LogPublishingOptionsStatus& GetLogPublishingOptions() const{ return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    inline void SetLogPublishingOptions(const LogPublishingOptionsStatus& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }
    inline void SetLogPublishingOptions(LogPublishingOptionsStatus&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }
    inline DomainConfig& WithLogPublishingOptions(const LogPublishingOptionsStatus& value) { SetLogPublishingOptions(value); return *this;}
    inline DomainConfig& WithLogPublishingOptions(LogPublishingOptionsStatus&& value) { SetLogPublishingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline const DomainEndpointOptionsStatus& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }
    inline void SetDomainEndpointOptions(const DomainEndpointOptionsStatus& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }
    inline void SetDomainEndpointOptions(DomainEndpointOptionsStatus&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }
    inline DomainConfig& WithDomainEndpointOptions(const DomainEndpointOptionsStatus& value) { SetDomainEndpointOptions(value); return *this;}
    inline DomainConfig& WithDomainEndpointOptions(DomainEndpointOptionsStatus&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for fine-grained access control settings for the domain.</p>
     */
    inline const AdvancedSecurityOptionsStatus& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptionsStatus& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptionsStatus&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }
    inline DomainConfig& WithAdvancedSecurityOptions(const AdvancedSecurityOptionsStatus& value) { SetAdvancedSecurityOptions(value); return *this;}
    inline DomainConfig& WithAdvancedSecurityOptions(AdvancedSecurityOptionsStatus&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for IAM Identity Center Option control for the domain.</p>
     */
    inline const IdentityCenterOptionsStatus& GetIdentityCenterOptions() const{ return m_identityCenterOptions; }
    inline bool IdentityCenterOptionsHasBeenSet() const { return m_identityCenterOptionsHasBeenSet; }
    inline void SetIdentityCenterOptions(const IdentityCenterOptionsStatus& value) { m_identityCenterOptionsHasBeenSet = true; m_identityCenterOptions = value; }
    inline void SetIdentityCenterOptions(IdentityCenterOptionsStatus&& value) { m_identityCenterOptionsHasBeenSet = true; m_identityCenterOptions = std::move(value); }
    inline DomainConfig& WithIdentityCenterOptions(const IdentityCenterOptionsStatus& value) { SetIdentityCenterOptions(value); return *this;}
    inline DomainConfig& WithIdentityCenterOptions(IdentityCenterOptionsStatus&& value) { SetIdentityCenterOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for Auto-Tune settings for the domain.</p>
     */
    inline const AutoTuneOptionsStatus& GetAutoTuneOptions() const{ return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    inline void SetAutoTuneOptions(const AutoTuneOptionsStatus& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }
    inline void SetAutoTuneOptions(AutoTuneOptionsStatus&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }
    inline DomainConfig& WithAutoTuneOptions(const AutoTuneOptionsStatus& value) { SetAutoTuneOptions(value); return *this;}
    inline DomainConfig& WithAutoTuneOptions(AutoTuneOptionsStatus&& value) { SetAutoTuneOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for information about the progress of an existing configuration
     * change.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const{ return m_changeProgressDetails; }
    inline bool ChangeProgressDetailsHasBeenSet() const { return m_changeProgressDetailsHasBeenSet; }
    inline void SetChangeProgressDetails(const ChangeProgressDetails& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = value; }
    inline void SetChangeProgressDetails(ChangeProgressDetails&& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = std::move(value); }
    inline DomainConfig& WithChangeProgressDetails(const ChangeProgressDetails& value) { SetChangeProgressDetails(value); return *this;}
    inline DomainConfig& WithChangeProgressDetails(ChangeProgressDetails&& value) { SetChangeProgressDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for off-peak window options for the domain.</p>
     */
    inline const OffPeakWindowOptionsStatus& GetOffPeakWindowOptions() const{ return m_offPeakWindowOptions; }
    inline bool OffPeakWindowOptionsHasBeenSet() const { return m_offPeakWindowOptionsHasBeenSet; }
    inline void SetOffPeakWindowOptions(const OffPeakWindowOptionsStatus& value) { m_offPeakWindowOptionsHasBeenSet = true; m_offPeakWindowOptions = value; }
    inline void SetOffPeakWindowOptions(OffPeakWindowOptionsStatus&& value) { m_offPeakWindowOptionsHasBeenSet = true; m_offPeakWindowOptions = std::move(value); }
    inline DomainConfig& WithOffPeakWindowOptions(const OffPeakWindowOptionsStatus& value) { SetOffPeakWindowOptions(value); return *this;}
    inline DomainConfig& WithOffPeakWindowOptions(OffPeakWindowOptionsStatus&& value) { SetOffPeakWindowOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Software update options for the domain.</p>
     */
    inline const SoftwareUpdateOptionsStatus& GetSoftwareUpdateOptions() const{ return m_softwareUpdateOptions; }
    inline bool SoftwareUpdateOptionsHasBeenSet() const { return m_softwareUpdateOptionsHasBeenSet; }
    inline void SetSoftwareUpdateOptions(const SoftwareUpdateOptionsStatus& value) { m_softwareUpdateOptionsHasBeenSet = true; m_softwareUpdateOptions = value; }
    inline void SetSoftwareUpdateOptions(SoftwareUpdateOptionsStatus&& value) { m_softwareUpdateOptionsHasBeenSet = true; m_softwareUpdateOptions = std::move(value); }
    inline DomainConfig& WithSoftwareUpdateOptions(const SoftwareUpdateOptionsStatus& value) { SetSoftwareUpdateOptions(value); return *this;}
    inline DomainConfig& WithSoftwareUpdateOptions(SoftwareUpdateOptionsStatus&& value) { SetSoftwareUpdateOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the domain properties that are currently being
     * modified.</p>
     */
    inline const Aws::Vector<ModifyingProperties>& GetModifyingProperties() const{ return m_modifyingProperties; }
    inline bool ModifyingPropertiesHasBeenSet() const { return m_modifyingPropertiesHasBeenSet; }
    inline void SetModifyingProperties(const Aws::Vector<ModifyingProperties>& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties = value; }
    inline void SetModifyingProperties(Aws::Vector<ModifyingProperties>&& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties = std::move(value); }
    inline DomainConfig& WithModifyingProperties(const Aws::Vector<ModifyingProperties>& value) { SetModifyingProperties(value); return *this;}
    inline DomainConfig& WithModifyingProperties(Aws::Vector<ModifyingProperties>&& value) { SetModifyingProperties(std::move(value)); return *this;}
    inline DomainConfig& AddModifyingProperties(const ModifyingProperties& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties.push_back(value); return *this; }
    inline DomainConfig& AddModifyingProperties(ModifyingProperties&& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Container for parameters required to enable all machine learning
     * features.</p>
     */
    inline const AIMLOptionsStatus& GetAIMLOptions() const{ return m_aIMLOptions; }
    inline bool AIMLOptionsHasBeenSet() const { return m_aIMLOptionsHasBeenSet; }
    inline void SetAIMLOptions(const AIMLOptionsStatus& value) { m_aIMLOptionsHasBeenSet = true; m_aIMLOptions = value; }
    inline void SetAIMLOptions(AIMLOptionsStatus&& value) { m_aIMLOptionsHasBeenSet = true; m_aIMLOptions = std::move(value); }
    inline DomainConfig& WithAIMLOptions(const AIMLOptionsStatus& value) { SetAIMLOptions(value); return *this;}
    inline DomainConfig& WithAIMLOptions(AIMLOptionsStatus&& value) { SetAIMLOptions(std::move(value)); return *this;}
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
