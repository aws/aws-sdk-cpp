/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ClusterConfig.h>
#include <aws/opensearch/model/EBSOptions.h>
#include <aws/opensearch/model/SnapshotOptions.h>
#include <aws/opensearch/model/VPCOptions.h>
#include <aws/opensearch/model/CognitoOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opensearch/model/IPAddressType.h>
#include <aws/opensearch/model/EncryptionAtRestOptions.h>
#include <aws/opensearch/model/DomainEndpointOptions.h>
#include <aws/opensearch/model/NodeToNodeEncryptionOptions.h>
#include <aws/opensearch/model/AdvancedSecurityOptionsInput.h>
#include <aws/opensearch/model/IdentityCenterOptionsInput.h>
#include <aws/opensearch/model/AutoTuneOptions.h>
#include <aws/opensearch/model/DryRunMode.h>
#include <aws/opensearch/model/OffPeakWindowOptions.h>
#include <aws/opensearch/model/SoftwareUpdateOptions.h>
#include <aws/opensearch/model/AIMLOptionsInput.h>
#include <aws/opensearch/model/LogType.h>
#include <aws/opensearch/model/LogPublishingOption.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the request parameters to the <code>UpdateDomain</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdateDomainConfigRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDomainConfigRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdateDomainConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainConfig"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the domain that you're updating.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpdateDomainConfigRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes that you want to make to the cluster configuration, such as the
     * instance type and number of EC2 instances.</p>
     */
    inline const ClusterConfig& GetClusterConfig() const { return m_clusterConfig; }
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }
    template<typename ClusterConfigT = ClusterConfig>
    void SetClusterConfig(ClusterConfigT&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::forward<ClusterConfigT>(value); }
    template<typename ClusterConfigT = ClusterConfig>
    UpdateDomainConfigRequest& WithClusterConfig(ClusterConfigT&& value) { SetClusterConfig(std::forward<ClusterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and size of the EBS volume to attach to instances in the domain.</p>
     */
    inline const EBSOptions& GetEBSOptions() const { return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    template<typename EBSOptionsT = EBSOptions>
    void SetEBSOptions(EBSOptionsT&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::forward<EBSOptionsT>(value); }
    template<typename EBSOptionsT = EBSOptions>
    UpdateDomainConfigRequest& WithEBSOptions(EBSOptionsT&& value) { SetEBSOptions(std::forward<EBSOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Option to set the time, in UTC format, for the daily automated snapshot.
     * Default value is <code>0</code> hours. </p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const { return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    template<typename SnapshotOptionsT = SnapshotOptions>
    void SetSnapshotOptions(SnapshotOptionsT&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::forward<SnapshotOptionsT>(value); }
    template<typename SnapshotOptionsT = SnapshotOptions>
    UpdateDomainConfigRequest& WithSnapshotOptions(SnapshotOptionsT&& value) { SetSnapshotOptions(std::forward<SnapshotOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to specify the subnets and security groups for a VPC endpoint. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html">Launching
     * your Amazon OpenSearch Service domains using a VPC</a>.</p>
     */
    inline const VPCOptions& GetVPCOptions() const { return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    template<typename VPCOptionsT = VPCOptions>
    void SetVPCOptions(VPCOptionsT&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::forward<VPCOptionsT>(value); }
    template<typename VPCOptionsT = VPCOptions>
    UpdateDomainConfigRequest& WithVPCOptions(VPCOptionsT&& value) { SetVPCOptions(std::forward<VPCOptionsT>(value)); return *this;}
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
    UpdateDomainConfigRequest& WithCognitoOptions(CognitoOptionsT&& value) { SetCognitoOptions(std::forward<CognitoOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> </ul>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const { return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::forward<AdvancedOptionsT>(value); }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    UpdateDomainConfigRequest& WithAdvancedOptions(AdvancedOptionsT&& value) { SetAdvancedOptions(std::forward<AdvancedOptionsT>(value)); return *this;}
    template<typename AdvancedOptionsKeyT = Aws::String, typename AdvancedOptionsValueT = Aws::String>
    UpdateDomainConfigRequest& AddAdvancedOptions(AdvancedOptionsKeyT&& key, AdvancedOptionsValueT&& value) {
      m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::forward<AdvancedOptionsKeyT>(key), std::forward<AdvancedOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Identity and Access Management (IAM) access policy as a JSON-formatted
     * string.</p>
     */
    inline const Aws::String& GetAccessPolicies() const { return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    template<typename AccessPoliciesT = Aws::String>
    void SetAccessPolicies(AccessPoliciesT&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::forward<AccessPoliciesT>(value); }
    template<typename AccessPoliciesT = Aws::String>
    UpdateDomainConfigRequest& WithAccessPolicies(AccessPoliciesT&& value) { SetAccessPolicies(std::forward<AccessPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify either dual stack or IPv4 as your IP address type. Dual stack allows
     * you to share domain resources across IPv4 and IPv6 address types, and is the
     * recommended option. If your IP address type is currently set to dual stack, you
     * can't change it. </p>
     */
    inline IPAddressType GetIPAddressType() const { return m_iPAddressType; }
    inline bool IPAddressTypeHasBeenSet() const { return m_iPAddressTypeHasBeenSet; }
    inline void SetIPAddressType(IPAddressType value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = value; }
    inline UpdateDomainConfigRequest& WithIPAddressType(IPAddressType value) { SetIPAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to publish OpenSearch logs to Amazon CloudWatch Logs.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const { return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    template<typename LogPublishingOptionsT = Aws::Map<LogType, LogPublishingOption>>
    void SetLogPublishingOptions(LogPublishingOptionsT&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::forward<LogPublishingOptionsT>(value); }
    template<typename LogPublishingOptionsT = Aws::Map<LogType, LogPublishingOption>>
    UpdateDomainConfigRequest& WithLogPublishingOptions(LogPublishingOptionsT&& value) { SetLogPublishingOptions(std::forward<LogPublishingOptionsT>(value)); return *this;}
    inline UpdateDomainConfigRequest& AddLogPublishingOptions(LogType key, LogPublishingOption value) {
      m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Encryption at rest options for the domain.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const { return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    void SetEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::forward<EncryptionAtRestOptionsT>(value); }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    UpdateDomainConfigRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { SetEncryptionAtRestOptions(std::forward<EncryptionAtRestOptionsT>(value)); return *this;}
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
    UpdateDomainConfigRequest& WithDomainEndpointOptions(DomainEndpointOptionsT&& value) { SetDomainEndpointOptions(std::forward<DomainEndpointOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Node-to-node encryption options for the domain.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const { return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptions>
    void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::forward<NodeToNodeEncryptionOptionsT>(value); }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptions>
    UpdateDomainConfigRequest& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { SetNodeToNodeEncryptionOptions(std::forward<NodeToNodeEncryptionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for fine-grained access control.</p>
     */
    inline const AdvancedSecurityOptionsInput& GetAdvancedSecurityOptions() const { return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    template<typename AdvancedSecurityOptionsT = AdvancedSecurityOptionsInput>
    void SetAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::forward<AdvancedSecurityOptionsT>(value); }
    template<typename AdvancedSecurityOptionsT = AdvancedSecurityOptionsInput>
    UpdateDomainConfigRequest& WithAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { SetAdvancedSecurityOptions(std::forward<AdvancedSecurityOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IdentityCenterOptionsInput& GetIdentityCenterOptions() const { return m_identityCenterOptions; }
    inline bool IdentityCenterOptionsHasBeenSet() const { return m_identityCenterOptionsHasBeenSet; }
    template<typename IdentityCenterOptionsT = IdentityCenterOptionsInput>
    void SetIdentityCenterOptions(IdentityCenterOptionsT&& value) { m_identityCenterOptionsHasBeenSet = true; m_identityCenterOptions = std::forward<IdentityCenterOptionsT>(value); }
    template<typename IdentityCenterOptionsT = IdentityCenterOptionsInput>
    UpdateDomainConfigRequest& WithIdentityCenterOptions(IdentityCenterOptionsT&& value) { SetIdentityCenterOptions(std::forward<IdentityCenterOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for Auto-Tune.</p>
     */
    inline const AutoTuneOptions& GetAutoTuneOptions() const { return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    template<typename AutoTuneOptionsT = AutoTuneOptions>
    void SetAutoTuneOptions(AutoTuneOptionsT&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::forward<AutoTuneOptionsT>(value); }
    template<typename AutoTuneOptionsT = AutoTuneOptions>
    UpdateDomainConfigRequest& WithAutoTuneOptions(AutoTuneOptionsT&& value) { SetAutoTuneOptions(std::forward<AutoTuneOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag, when set to True, specifies whether the <code>UpdateDomain</code>
     * request should return the results of a dry run analysis without actually
     * applying the change. A dry run determines what type of deployment the update
     * will cause.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline UpdateDomainConfigRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of dry run to perform.</p> <ul> <li> <p> <code>Basic</code> only
     * returns the type of deployment (blue/green or dynamic) that the update will
     * cause.</p> </li> <li> <p> <code>Verbose</code> runs an additional check to
     * validate the changes you're making. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-configuration-changes#validation-check">Validating
     * a domain update</a>.</p> </li> </ul>
     */
    inline DryRunMode GetDryRunMode() const { return m_dryRunMode; }
    inline bool DryRunModeHasBeenSet() const { return m_dryRunModeHasBeenSet; }
    inline void SetDryRunMode(DryRunMode value) { m_dryRunModeHasBeenSet = true; m_dryRunMode = value; }
    inline UpdateDomainConfigRequest& WithDryRunMode(DryRunMode value) { SetDryRunMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Off-peak window options for the domain.</p>
     */
    inline const OffPeakWindowOptions& GetOffPeakWindowOptions() const { return m_offPeakWindowOptions; }
    inline bool OffPeakWindowOptionsHasBeenSet() const { return m_offPeakWindowOptionsHasBeenSet; }
    template<typename OffPeakWindowOptionsT = OffPeakWindowOptions>
    void SetOffPeakWindowOptions(OffPeakWindowOptionsT&& value) { m_offPeakWindowOptionsHasBeenSet = true; m_offPeakWindowOptions = std::forward<OffPeakWindowOptionsT>(value); }
    template<typename OffPeakWindowOptionsT = OffPeakWindowOptions>
    UpdateDomainConfigRequest& WithOffPeakWindowOptions(OffPeakWindowOptionsT&& value) { SetOffPeakWindowOptions(std::forward<OffPeakWindowOptionsT>(value)); return *this;}
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
    UpdateDomainConfigRequest& WithSoftwareUpdateOptions(SoftwareUpdateOptionsT&& value) { SetSoftwareUpdateOptions(std::forward<SoftwareUpdateOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for all machine learning features for the specified domain.</p>
     */
    inline const AIMLOptionsInput& GetAIMLOptions() const { return m_aIMLOptions; }
    inline bool AIMLOptionsHasBeenSet() const { return m_aIMLOptionsHasBeenSet; }
    template<typename AIMLOptionsT = AIMLOptionsInput>
    void SetAIMLOptions(AIMLOptionsT&& value) { m_aIMLOptionsHasBeenSet = true; m_aIMLOptions = std::forward<AIMLOptionsT>(value); }
    template<typename AIMLOptionsT = AIMLOptionsInput>
    UpdateDomainConfigRequest& WithAIMLOptions(AIMLOptionsT&& value) { SetAIMLOptions(std::forward<AIMLOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ClusterConfig m_clusterConfig;
    bool m_clusterConfigHasBeenSet = false;

    EBSOptions m_eBSOptions;
    bool m_eBSOptionsHasBeenSet = false;

    SnapshotOptions m_snapshotOptions;
    bool m_snapshotOptionsHasBeenSet = false;

    VPCOptions m_vPCOptions;
    bool m_vPCOptionsHasBeenSet = false;

    CognitoOptions m_cognitoOptions;
    bool m_cognitoOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;

    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    IPAddressType m_iPAddressType{IPAddressType::NOT_SET};
    bool m_iPAddressTypeHasBeenSet = false;

    Aws::Map<LogType, LogPublishingOption> m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    EncryptionAtRestOptions m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    DomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    NodeToNodeEncryptionOptions m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet = false;

    AdvancedSecurityOptionsInput m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet = false;

    IdentityCenterOptionsInput m_identityCenterOptions;
    bool m_identityCenterOptionsHasBeenSet = false;

    AutoTuneOptions m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    DryRunMode m_dryRunMode{DryRunMode::NOT_SET};
    bool m_dryRunModeHasBeenSet = false;

    OffPeakWindowOptions m_offPeakWindowOptions;
    bool m_offPeakWindowOptionsHasBeenSet = false;

    SoftwareUpdateOptions m_softwareUpdateOptions;
    bool m_softwareUpdateOptionsHasBeenSet = false;

    AIMLOptionsInput m_aIMLOptions;
    bool m_aIMLOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
