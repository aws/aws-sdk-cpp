/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opensearch/model/ClusterConfig.h>
#include <aws/opensearch/model/EBSOptions.h>
#include <aws/opensearch/model/IPAddressType.h>
#include <aws/opensearch/model/SnapshotOptions.h>
#include <aws/opensearch/model/VPCDerivedInfo.h>
#include <aws/opensearch/model/CognitoOptions.h>
#include <aws/opensearch/model/EncryptionAtRestOptions.h>
#include <aws/opensearch/model/NodeToNodeEncryptionOptions.h>
#include <aws/opensearch/model/ServiceSoftwareOptions.h>
#include <aws/opensearch/model/DomainEndpointOptions.h>
#include <aws/opensearch/model/AdvancedSecurityOptions.h>
#include <aws/opensearch/model/IdentityCenterOptions.h>
#include <aws/opensearch/model/AutoTuneOptionsOutput.h>
#include <aws/opensearch/model/ChangeProgressDetails.h>
#include <aws/opensearch/model/OffPeakWindowOptions.h>
#include <aws/opensearch/model/SoftwareUpdateOptions.h>
#include <aws/opensearch/model/DomainProcessingStatusType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/AIMLOptionsOutput.h>
#include <aws/opensearch/model/LogType.h>
#include <aws/opensearch/model/LogPublishingOption.h>
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
   * <p>The current status of an OpenSearch Service domain.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainStatus">AWS
   * API Reference</a></p>
   */
  class DomainStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainStatus() = default;
    AWS_OPENSEARCHSERVICE_API DomainStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the domain.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    DomainStatus& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the domain. Domain names are unique across all domains owned by the
     * same account within an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainStatus& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the domain. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * identifiers </a> in the <i>AWS Identity and Access Management User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    DomainStatus& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation status of an OpenSearch Service domain. True if domain creation is
     * complete. False if domain creation is still in progress.</p>
     */
    inline bool GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(bool value) { m_createdHasBeenSet = true; m_created = value; }
    inline DomainStatus& WithCreated(bool value) { SetCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deletion status of an OpenSearch Service domain. True if domain deletion is
     * complete. False if domain deletion is still in progress. Once deletion is
     * complete, the status of the domain is no longer returned.</p>
     */
    inline bool GetDeleted() const { return m_deleted; }
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }
    inline DomainStatus& WithDeleted(bool value) { SetDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to the domain.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    DomainStatus& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IPAddressType</code> to set to <code>dualstack</code>, a version 2
     * domain endpoint is provisioned. This endpoint functions like a normal endpoint,
     * except that it works with both IPv4 and IPv6 IP addresses. Normal endpoints work
     * only with IPv4 IP addresses. </p>
     */
    inline const Aws::String& GetEndpointV2() const { return m_endpointV2; }
    inline bool EndpointV2HasBeenSet() const { return m_endpointV2HasBeenSet; }
    template<typename EndpointV2T = Aws::String>
    void SetEndpointV2(EndpointV2T&& value) { m_endpointV2HasBeenSet = true; m_endpointV2 = std::forward<EndpointV2T>(value); }
    template<typename EndpointV2T = Aws::String>
    DomainStatus& WithEndpointV2(EndpointV2T&& value) { SetEndpointV2(std::forward<EndpointV2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints. For example:</p> <ul> <li> <p> <b>IPv4 IP addresses</b> -
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>
     * </p> </li> <li> <p> <b>Dual stack IP addresses</b> -
     * <code>'vpcv2':'vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.aos.us-east-1.on.aws'</code>
     * </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Map<Aws::String, Aws::String>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Map<Aws::String, Aws::String>>
    DomainStatus& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsKeyT = Aws::String, typename EndpointsValueT = Aws::String>
    DomainStatus& AddEndpoints(EndpointsKeyT&& key, EndpointsValueT&& value) {
      m_endpointsHasBeenSet = true; m_endpoints.emplace(std::forward<EndpointsKeyT>(key), std::forward<EndpointsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The dual stack hosted zone ID for the domain. </p>
     */
    inline const Aws::String& GetDomainEndpointV2HostedZoneId() const { return m_domainEndpointV2HostedZoneId; }
    inline bool DomainEndpointV2HostedZoneIdHasBeenSet() const { return m_domainEndpointV2HostedZoneIdHasBeenSet; }
    template<typename DomainEndpointV2HostedZoneIdT = Aws::String>
    void SetDomainEndpointV2HostedZoneId(DomainEndpointV2HostedZoneIdT&& value) { m_domainEndpointV2HostedZoneIdHasBeenSet = true; m_domainEndpointV2HostedZoneId = std::forward<DomainEndpointV2HostedZoneIdT>(value); }
    template<typename DomainEndpointV2HostedZoneIdT = Aws::String>
    DomainStatus& WithDomainEndpointV2HostedZoneId(DomainEndpointV2HostedZoneIdT&& value) { SetDomainEndpointV2HostedZoneId(std::forward<DomainEndpointV2HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the domain configuration. True if OpenSearch Service is
     * processing configuration changes. False if the configuration is active.</p>
     */
    inline bool GetProcessing() const { return m_processing; }
    inline bool ProcessingHasBeenSet() const { return m_processingHasBeenSet; }
    inline void SetProcessing(bool value) { m_processingHasBeenSet = true; m_processing = value; }
    inline DomainStatus& WithProcessing(bool value) { SetProcessing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a domain version upgrade to a new version of OpenSearch or
     * Elasticsearch. True if OpenSearch Service is in the process of a version
     * upgrade. False if the configuration is active.</p>
     */
    inline bool GetUpgradeProcessing() const { return m_upgradeProcessing; }
    inline bool UpgradeProcessingHasBeenSet() const { return m_upgradeProcessingHasBeenSet; }
    inline void SetUpgradeProcessing(bool value) { m_upgradeProcessingHasBeenSet = true; m_upgradeProcessing = value; }
    inline DomainStatus& WithUpgradeProcessing(bool value) { SetUpgradeProcessing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of OpenSearch or Elasticsearch that the domain is running, in the
     * format <code>Elasticsearch_X.Y</code> or <code>OpenSearch_X.Y</code>.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    DomainStatus& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for the cluster configuration of the domain.</p>
     */
    inline const ClusterConfig& GetClusterConfig() const { return m_clusterConfig; }
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }
    template<typename ClusterConfigT = ClusterConfig>
    void SetClusterConfig(ClusterConfigT&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::forward<ClusterConfigT>(value); }
    template<typename ClusterConfigT = ClusterConfig>
    DomainStatus& WithClusterConfig(ClusterConfigT&& value) { SetClusterConfig(std::forward<ClusterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for EBS-based storage settings for the domain.</p>
     */
    inline const EBSOptions& GetEBSOptions() const { return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    template<typename EBSOptionsT = EBSOptions>
    void SetEBSOptions(EBSOptionsT&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::forward<EBSOptionsT>(value); }
    template<typename EBSOptionsT = EBSOptions>
    DomainStatus& WithEBSOptions(EBSOptionsT&& value) { SetEBSOptions(std::forward<EBSOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the domain.</p>
     */
    inline const Aws::String& GetAccessPolicies() const { return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    template<typename AccessPoliciesT = Aws::String>
    void SetAccessPolicies(AccessPoliciesT&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::forward<AccessPoliciesT>(value); }
    template<typename AccessPoliciesT = Aws::String>
    DomainStatus& WithAccessPolicies(AccessPoliciesT&& value) { SetAccessPolicies(std::forward<AccessPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP addresses supported by the endpoint for the domain.</p>
     */
    inline IPAddressType GetIPAddressType() const { return m_iPAddressType; }
    inline bool IPAddressTypeHasBeenSet() const { return m_iPAddressTypeHasBeenSet; }
    inline void SetIPAddressType(IPAddressType value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = value; }
    inline DomainStatus& WithIPAddressType(IPAddressType value) { SetIPAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const { return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    template<typename SnapshotOptionsT = SnapshotOptions>
    void SetSnapshotOptions(SnapshotOptionsT&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::forward<SnapshotOptionsT>(value); }
    template<typename SnapshotOptionsT = SnapshotOptions>
    DomainStatus& WithSnapshotOptions(SnapshotOptionsT&& value) { SetSnapshotOptions(std::forward<SnapshotOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration for the domain.</p>
     */
    inline const VPCDerivedInfo& GetVPCOptions() const { return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    template<typename VPCOptionsT = VPCDerivedInfo>
    void SetVPCOptions(VPCOptionsT&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::forward<VPCOptionsT>(value); }
    template<typename VPCOptionsT = VPCDerivedInfo>
    DomainStatus& WithVPCOptions(VPCOptionsT&& value) { SetVPCOptions(std::forward<VPCOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline const CognitoOptions& GetCognitoOptions() const { return m_cognitoOptions; }
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }
    template<typename CognitoOptionsT = CognitoOptions>
    void SetCognitoOptions(CognitoOptionsT&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::forward<CognitoOptionsT>(value); }
    template<typename CognitoOptionsT = CognitoOptions>
    DomainStatus& WithCognitoOptions(CognitoOptionsT&& value) { SetCognitoOptions(std::forward<CognitoOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption at rest settings for the domain.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const { return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    void SetEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::forward<EncryptionAtRestOptionsT>(value); }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    DomainStatus& WithEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { SetEncryptionAtRestOptions(std::forward<EncryptionAtRestOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const { return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptions>
    void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::forward<NodeToNodeEncryptionOptionsT>(value); }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptions>
    DomainStatus& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { SetNodeToNodeEncryptionOptions(std::forward<NodeToNodeEncryptionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const { return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::forward<AdvancedOptionsT>(value); }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    DomainStatus& WithAdvancedOptions(AdvancedOptionsT&& value) { SetAdvancedOptions(std::forward<AdvancedOptionsT>(value)); return *this;}
    template<typename AdvancedOptionsKeyT = Aws::String, typename AdvancedOptionsValueT = Aws::String>
    DomainStatus& AddAdvancedOptions(AdvancedOptionsKeyT&& key, AdvancedOptionsValueT&& value) {
      m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::forward<AdvancedOptionsKeyT>(key), std::forward<AdvancedOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Log publishing options for the domain.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const { return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    template<typename LogPublishingOptionsT = Aws::Map<LogType, LogPublishingOption>>
    void SetLogPublishingOptions(LogPublishingOptionsT&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::forward<LogPublishingOptionsT>(value); }
    template<typename LogPublishingOptionsT = Aws::Map<LogType, LogPublishingOption>>
    DomainStatus& WithLogPublishingOptions(LogPublishingOptionsT&& value) { SetLogPublishingOptions(std::forward<LogPublishingOptionsT>(value)); return *this;}
    inline DomainStatus& AddLogPublishingOptions(LogType key, LogPublishingOption value) {
      m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const { return m_serviceSoftwareOptions; }
    inline bool ServiceSoftwareOptionsHasBeenSet() const { return m_serviceSoftwareOptionsHasBeenSet; }
    template<typename ServiceSoftwareOptionsT = ServiceSoftwareOptions>
    void SetServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::forward<ServiceSoftwareOptionsT>(value); }
    template<typename ServiceSoftwareOptionsT = ServiceSoftwareOptions>
    DomainStatus& WithServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { SetServiceSoftwareOptions(std::forward<ServiceSoftwareOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline const DomainEndpointOptions& GetDomainEndpointOptions() const { return m_domainEndpointOptions; }
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }
    template<typename DomainEndpointOptionsT = DomainEndpointOptions>
    void SetDomainEndpointOptions(DomainEndpointOptionsT&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::forward<DomainEndpointOptionsT>(value); }
    template<typename DomainEndpointOptionsT = DomainEndpointOptions>
    DomainStatus& WithDomainEndpointOptions(DomainEndpointOptionsT&& value) { SetDomainEndpointOptions(std::forward<DomainEndpointOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for fine-grained access control.</p>
     */
    inline const AdvancedSecurityOptions& GetAdvancedSecurityOptions() const { return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    template<typename AdvancedSecurityOptionsT = AdvancedSecurityOptions>
    void SetAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::forward<AdvancedSecurityOptionsT>(value); }
    template<typename AdvancedSecurityOptionsT = AdvancedSecurityOptions>
    DomainStatus& WithAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { SetAdvancedSecurityOptions(std::forward<AdvancedSecurityOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for controlling IAM Identity Center integration within
     * a domain.</p>
     */
    inline const IdentityCenterOptions& GetIdentityCenterOptions() const { return m_identityCenterOptions; }
    inline bool IdentityCenterOptionsHasBeenSet() const { return m_identityCenterOptionsHasBeenSet; }
    template<typename IdentityCenterOptionsT = IdentityCenterOptions>
    void SetIdentityCenterOptions(IdentityCenterOptionsT&& value) { m_identityCenterOptionsHasBeenSet = true; m_identityCenterOptions = std::forward<IdentityCenterOptionsT>(value); }
    template<typename IdentityCenterOptionsT = IdentityCenterOptions>
    DomainStatus& WithIdentityCenterOptions(IdentityCenterOptionsT&& value) { SetIdentityCenterOptions(std::forward<IdentityCenterOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Auto-Tune settings for the domain.</p>
     */
    inline const AutoTuneOptionsOutput& GetAutoTuneOptions() const { return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    template<typename AutoTuneOptionsT = AutoTuneOptionsOutput>
    void SetAutoTuneOptions(AutoTuneOptionsT&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::forward<AutoTuneOptionsT>(value); }
    template<typename AutoTuneOptionsT = AutoTuneOptionsOutput>
    DomainStatus& WithAutoTuneOptions(AutoTuneOptionsT&& value) { SetAutoTuneOptions(std::forward<AutoTuneOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a configuration change happening on the domain.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const { return m_changeProgressDetails; }
    inline bool ChangeProgressDetailsHasBeenSet() const { return m_changeProgressDetailsHasBeenSet; }
    template<typename ChangeProgressDetailsT = ChangeProgressDetails>
    void SetChangeProgressDetails(ChangeProgressDetailsT&& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = std::forward<ChangeProgressDetailsT>(value); }
    template<typename ChangeProgressDetailsT = ChangeProgressDetails>
    DomainStatus& WithChangeProgressDetails(ChangeProgressDetailsT&& value) { SetChangeProgressDetails(std::forward<ChangeProgressDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options that specify a custom 10-hour window during which OpenSearch Service
     * can perform configuration changes on the domain.</p>
     */
    inline const OffPeakWindowOptions& GetOffPeakWindowOptions() const { return m_offPeakWindowOptions; }
    inline bool OffPeakWindowOptionsHasBeenSet() const { return m_offPeakWindowOptionsHasBeenSet; }
    template<typename OffPeakWindowOptionsT = OffPeakWindowOptions>
    void SetOffPeakWindowOptions(OffPeakWindowOptionsT&& value) { m_offPeakWindowOptionsHasBeenSet = true; m_offPeakWindowOptions = std::forward<OffPeakWindowOptionsT>(value); }
    template<typename OffPeakWindowOptionsT = OffPeakWindowOptions>
    DomainStatus& WithOffPeakWindowOptions(OffPeakWindowOptionsT&& value) { SetOffPeakWindowOptions(std::forward<OffPeakWindowOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Service software update options for the domain.</p>
     */
    inline const SoftwareUpdateOptions& GetSoftwareUpdateOptions() const { return m_softwareUpdateOptions; }
    inline bool SoftwareUpdateOptionsHasBeenSet() const { return m_softwareUpdateOptionsHasBeenSet; }
    template<typename SoftwareUpdateOptionsT = SoftwareUpdateOptions>
    void SetSoftwareUpdateOptions(SoftwareUpdateOptionsT&& value) { m_softwareUpdateOptionsHasBeenSet = true; m_softwareUpdateOptions = std::forward<SoftwareUpdateOptionsT>(value); }
    template<typename SoftwareUpdateOptionsT = SoftwareUpdateOptions>
    DomainStatus& WithSoftwareUpdateOptions(SoftwareUpdateOptionsT&& value) { SetSoftwareUpdateOptions(std::forward<SoftwareUpdateOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of any changes that are currently in progress for the domain.</p>
     */
    inline DomainProcessingStatusType GetDomainProcessingStatus() const { return m_domainProcessingStatus; }
    inline bool DomainProcessingStatusHasBeenSet() const { return m_domainProcessingStatusHasBeenSet; }
    inline void SetDomainProcessingStatus(DomainProcessingStatusType value) { m_domainProcessingStatusHasBeenSet = true; m_domainProcessingStatus = value; }
    inline DomainStatus& WithDomainProcessingStatus(DomainProcessingStatusType value) { SetDomainProcessingStatus(value); return *this;}
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
    DomainStatus& WithModifyingProperties(ModifyingPropertiesT&& value) { SetModifyingProperties(std::forward<ModifyingPropertiesT>(value)); return *this;}
    template<typename ModifyingPropertiesT = ModifyingProperties>
    DomainStatus& AddModifyingProperties(ModifyingPropertiesT&& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties.emplace_back(std::forward<ModifyingPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Container for parameters required to enable all machine learning
     * features.</p>
     */
    inline const AIMLOptionsOutput& GetAIMLOptions() const { return m_aIMLOptions; }
    inline bool AIMLOptionsHasBeenSet() const { return m_aIMLOptionsHasBeenSet; }
    template<typename AIMLOptionsT = AIMLOptionsOutput>
    void SetAIMLOptions(AIMLOptionsT&& value) { m_aIMLOptionsHasBeenSet = true; m_aIMLOptions = std::forward<AIMLOptionsT>(value); }
    template<typename AIMLOptionsT = AIMLOptionsOutput>
    DomainStatus& WithAIMLOptions(AIMLOptionsT&& value) { SetAIMLOptions(std::forward<AIMLOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    bool m_created{false};
    bool m_createdHasBeenSet = false;

    bool m_deleted{false};
    bool m_deletedHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_endpointV2;
    bool m_endpointV2HasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::String m_domainEndpointV2HostedZoneId;
    bool m_domainEndpointV2HostedZoneIdHasBeenSet = false;

    bool m_processing{false};
    bool m_processingHasBeenSet = false;

    bool m_upgradeProcessing{false};
    bool m_upgradeProcessingHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    ClusterConfig m_clusterConfig;
    bool m_clusterConfigHasBeenSet = false;

    EBSOptions m_eBSOptions;
    bool m_eBSOptionsHasBeenSet = false;

    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    IPAddressType m_iPAddressType{IPAddressType::NOT_SET};
    bool m_iPAddressTypeHasBeenSet = false;

    SnapshotOptions m_snapshotOptions;
    bool m_snapshotOptionsHasBeenSet = false;

    VPCDerivedInfo m_vPCOptions;
    bool m_vPCOptionsHasBeenSet = false;

    CognitoOptions m_cognitoOptions;
    bool m_cognitoOptionsHasBeenSet = false;

    EncryptionAtRestOptions m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    NodeToNodeEncryptionOptions m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;

    Aws::Map<LogType, LogPublishingOption> m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    ServiceSoftwareOptions m_serviceSoftwareOptions;
    bool m_serviceSoftwareOptionsHasBeenSet = false;

    DomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    AdvancedSecurityOptions m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet = false;

    IdentityCenterOptions m_identityCenterOptions;
    bool m_identityCenterOptionsHasBeenSet = false;

    AutoTuneOptionsOutput m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet = false;

    ChangeProgressDetails m_changeProgressDetails;
    bool m_changeProgressDetailsHasBeenSet = false;

    OffPeakWindowOptions m_offPeakWindowOptions;
    bool m_offPeakWindowOptionsHasBeenSet = false;

    SoftwareUpdateOptions m_softwareUpdateOptions;
    bool m_softwareUpdateOptionsHasBeenSet = false;

    DomainProcessingStatusType m_domainProcessingStatus{DomainProcessingStatusType::NOT_SET};
    bool m_domainProcessingStatusHasBeenSet = false;

    Aws::Vector<ModifyingProperties> m_modifyingProperties;
    bool m_modifyingPropertiesHasBeenSet = false;

    AIMLOptionsOutput m_aIMLOptions;
    bool m_aIMLOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
