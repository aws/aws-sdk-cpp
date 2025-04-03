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
#include <aws/opensearch/model/IPAddressType.h>
#include <aws/opensearch/model/SnapshotOptions.h>
#include <aws/opensearch/model/VPCOptions.h>
#include <aws/opensearch/model/CognitoOptions.h>
#include <aws/opensearch/model/EncryptionAtRestOptions.h>
#include <aws/opensearch/model/NodeToNodeEncryptionOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opensearch/model/DomainEndpointOptions.h>
#include <aws/opensearch/model/AdvancedSecurityOptionsInput.h>
#include <aws/opensearch/model/IdentityCenterOptionsInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/AutoTuneOptionsInput.h>
#include <aws/opensearch/model/OffPeakWindowOptions.h>
#include <aws/opensearch/model/SoftwareUpdateOptions.h>
#include <aws/opensearch/model/AIMLOptionsInput.h>
#include <aws/opensearch/model/LogType.h>
#include <aws/opensearch/model/LogPublishingOption.h>
#include <aws/opensearch/model/Tag.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class CreateDomainRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API CreateDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Name of the OpenSearch Service domain to create. Domain names are unique
     * across the domains owned by an account within an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateDomainRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch Service domain. For example,
     * <code>OpenSearch_1.0</code> or <code>Elasticsearch_7.9</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains">Creating
     * and managing Amazon OpenSearch Service domains</a>.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CreateDomainRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for the cluster configuration of a domain.</p>
     */
    inline const ClusterConfig& GetClusterConfig() const { return m_clusterConfig; }
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }
    template<typename ClusterConfigT = ClusterConfig>
    void SetClusterConfig(ClusterConfigT&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::forward<ClusterConfigT>(value); }
    template<typename ClusterConfigT = ClusterConfig>
    CreateDomainRequest& WithClusterConfig(ClusterConfigT&& value) { SetClusterConfig(std::forward<ClusterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for the parameters required to enable EBS-based storage for an
     * OpenSearch Service domain.</p>
     */
    inline const EBSOptions& GetEBSOptions() const { return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    template<typename EBSOptionsT = EBSOptions>
    void SetEBSOptions(EBSOptionsT&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::forward<EBSOptionsT>(value); }
    template<typename EBSOptionsT = EBSOptions>
    CreateDomainRequest& WithEBSOptions(EBSOptionsT&& value) { SetEBSOptions(std::forward<EBSOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the new domain.</p>
     */
    inline const Aws::String& GetAccessPolicies() const { return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    template<typename AccessPoliciesT = Aws::String>
    void SetAccessPolicies(AccessPoliciesT&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::forward<AccessPoliciesT>(value); }
    template<typename AccessPoliciesT = Aws::String>
    CreateDomainRequest& WithAccessPolicies(AccessPoliciesT&& value) { SetAccessPolicies(std::forward<AccessPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify either dual stack or IPv4 as your IP address type. Dual stack allows
     * you to share domain resources across IPv4 and IPv6 address types, and is the
     * recommended option. If you set your IP address type to dual stack, you can't
     * change your address type later.</p>
     */
    inline IPAddressType GetIPAddressType() const { return m_iPAddressType; }
    inline bool IPAddressTypeHasBeenSet() const { return m_iPAddressTypeHasBeenSet; }
    inline void SetIPAddressType(IPAddressType value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = value; }
    inline CreateDomainRequest& WithIPAddressType(IPAddressType value) { SetIPAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>DEPRECATED. Container for the parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const { return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    template<typename SnapshotOptionsT = SnapshotOptions>
    void SetSnapshotOptions(SnapshotOptionsT&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::forward<SnapshotOptionsT>(value); }
    template<typename SnapshotOptionsT = SnapshotOptions>
    CreateDomainRequest& WithSnapshotOptions(SnapshotOptionsT&& value) { SetSnapshotOptions(std::forward<SnapshotOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for the values required to configure VPC access domains. If you
     * don't specify these values, OpenSearch Service creates the domain with a public
     * endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html">Launching
     * your Amazon OpenSearch Service domains using a VPC</a>.</p>
     */
    inline const VPCOptions& GetVPCOptions() const { return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    template<typename VPCOptionsT = VPCOptions>
    void SetVPCOptions(VPCOptionsT&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::forward<VPCOptionsT>(value); }
    template<typename VPCOptionsT = VPCOptions>
    CreateDomainRequest& WithVPCOptions(VPCOptionsT&& value) { SetVPCOptions(std::forward<VPCOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html">Configuring
     * Amazon Cognito authentication for OpenSearch Dashboards</a>.</p>
     */
    inline const CognitoOptions& GetCognitoOptions() const { return m_cognitoOptions; }
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }
    template<typename CognitoOptionsT = CognitoOptions>
    void SetCognitoOptions(CognitoOptionsT&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::forward<CognitoOptionsT>(value); }
    template<typename CognitoOptionsT = CognitoOptions>
    CreateDomainRequest& WithCognitoOptions(CognitoOptionsT&& value) { SetCognitoOptions(std::forward<CognitoOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const { return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    void SetEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::forward<EncryptionAtRestOptionsT>(value); }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    CreateDomainRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { SetEncryptionAtRestOptions(std::forward<EncryptionAtRestOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables node-to-node encryption.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const { return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptions>
    void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::forward<NodeToNodeEncryptionOptionsT>(value); }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptions>
    CreateDomainRequest& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { SetNodeToNodeEncryptionOptions(std::forward<NodeToNodeEncryptionOptionsT>(value)); return *this;}
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
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const { return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::forward<AdvancedOptionsT>(value); }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    CreateDomainRequest& WithAdvancedOptions(AdvancedOptionsT&& value) { SetAdvancedOptions(std::forward<AdvancedOptionsT>(value)); return *this;}
    template<typename AdvancedOptionsKeyT = Aws::String, typename AdvancedOptionsValueT = Aws::String>
    CreateDomainRequest& AddAdvancedOptions(AdvancedOptionsKeyT&& key, AdvancedOptionsValueT&& value) {
      m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::forward<AdvancedOptionsKeyT>(key), std::forward<AdvancedOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure log publishing.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const { return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    template<typename LogPublishingOptionsT = Aws::Map<LogType, LogPublishingOption>>
    void SetLogPublishingOptions(LogPublishingOptionsT&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::forward<LogPublishingOptionsT>(value); }
    template<typename LogPublishingOptionsT = Aws::Map<LogType, LogPublishingOption>>
    CreateDomainRequest& WithLogPublishingOptions(LogPublishingOptionsT&& value) { SetLogPublishingOptions(std::forward<LogPublishingOptionsT>(value)); return *this;}
    inline CreateDomainRequest& AddLogPublishingOptions(LogType key, LogPublishingOption value) {
      m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this;
    }
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
    CreateDomainRequest& WithDomainEndpointOptions(DomainEndpointOptionsT&& value) { SetDomainEndpointOptions(std::forward<DomainEndpointOptionsT>(value)); return *this;}
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
    CreateDomainRequest& WithAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { SetAdvancedSecurityOptions(std::forward<AdvancedSecurityOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for enabling and managing IAM Identity Center
     * integration within a domain.</p>
     */
    inline const IdentityCenterOptionsInput& GetIdentityCenterOptions() const { return m_identityCenterOptions; }
    inline bool IdentityCenterOptionsHasBeenSet() const { return m_identityCenterOptionsHasBeenSet; }
    template<typename IdentityCenterOptionsT = IdentityCenterOptionsInput>
    void SetIdentityCenterOptions(IdentityCenterOptionsT&& value) { m_identityCenterOptionsHasBeenSet = true; m_identityCenterOptions = std::forward<IdentityCenterOptionsT>(value); }
    template<typename IdentityCenterOptionsT = IdentityCenterOptionsInput>
    CreateDomainRequest& WithIdentityCenterOptions(IdentityCenterOptionsT&& value) { SetIdentityCenterOptions(std::forward<IdentityCenterOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of tags to add to the domain upon creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    CreateDomainRequest& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    CreateDomainRequest& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Options for Auto-Tune.</p>
     */
    inline const AutoTuneOptionsInput& GetAutoTuneOptions() const { return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    template<typename AutoTuneOptionsT = AutoTuneOptionsInput>
    void SetAutoTuneOptions(AutoTuneOptionsT&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::forward<AutoTuneOptionsT>(value); }
    template<typename AutoTuneOptionsT = AutoTuneOptionsInput>
    CreateDomainRequest& WithAutoTuneOptions(AutoTuneOptionsT&& value) { SetAutoTuneOptions(std::forward<AutoTuneOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a daily 10-hour time block during which OpenSearch Service can
     * perform configuration changes on the domain, including service software updates
     * and Auto-Tune enhancements that require a blue/green deployment. If no options
     * are specified, the default start time of 10:00 P.M. local time (for the Region
     * that the domain is created in) is used.</p>
     */
    inline const OffPeakWindowOptions& GetOffPeakWindowOptions() const { return m_offPeakWindowOptions; }
    inline bool OffPeakWindowOptionsHasBeenSet() const { return m_offPeakWindowOptionsHasBeenSet; }
    template<typename OffPeakWindowOptionsT = OffPeakWindowOptions>
    void SetOffPeakWindowOptions(OffPeakWindowOptionsT&& value) { m_offPeakWindowOptionsHasBeenSet = true; m_offPeakWindowOptions = std::forward<OffPeakWindowOptionsT>(value); }
    template<typename OffPeakWindowOptionsT = OffPeakWindowOptions>
    CreateDomainRequest& WithOffPeakWindowOptions(OffPeakWindowOptionsT&& value) { SetOffPeakWindowOptions(std::forward<OffPeakWindowOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Software update options for the domain.</p>
     */
    inline const SoftwareUpdateOptions& GetSoftwareUpdateOptions() const { return m_softwareUpdateOptions; }
    inline bool SoftwareUpdateOptionsHasBeenSet() const { return m_softwareUpdateOptionsHasBeenSet; }
    template<typename SoftwareUpdateOptionsT = SoftwareUpdateOptions>
    void SetSoftwareUpdateOptions(SoftwareUpdateOptionsT&& value) { m_softwareUpdateOptionsHasBeenSet = true; m_softwareUpdateOptions = std::forward<SoftwareUpdateOptionsT>(value); }
    template<typename SoftwareUpdateOptionsT = SoftwareUpdateOptions>
    CreateDomainRequest& WithSoftwareUpdateOptions(SoftwareUpdateOptionsT&& value) { SetSoftwareUpdateOptions(std::forward<SoftwareUpdateOptionsT>(value)); return *this;}
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
    CreateDomainRequest& WithAIMLOptions(AIMLOptionsT&& value) { SetAIMLOptions(std::forward<AIMLOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

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

    VPCOptions m_vPCOptions;
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

    DomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    AdvancedSecurityOptionsInput m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet = false;

    IdentityCenterOptionsInput m_identityCenterOptions;
    bool m_identityCenterOptionsHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    AutoTuneOptionsInput m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet = false;

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
