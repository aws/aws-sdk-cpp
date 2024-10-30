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
    AWS_OPENSEARCHSERVICE_API UpdateDomainConfigRequest();

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
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline UpdateDomainConfigRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline UpdateDomainConfigRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline UpdateDomainConfigRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes that you want to make to the cluster configuration, such as the
     * instance type and number of EC2 instances.</p>
     */
    inline const ClusterConfig& GetClusterConfig() const{ return m_clusterConfig; }
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }
    inline void SetClusterConfig(const ClusterConfig& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }
    inline void SetClusterConfig(ClusterConfig&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }
    inline UpdateDomainConfigRequest& WithClusterConfig(const ClusterConfig& value) { SetClusterConfig(value); return *this;}
    inline UpdateDomainConfigRequest& WithClusterConfig(ClusterConfig&& value) { SetClusterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and size of the EBS volume to attach to instances in the domain.</p>
     */
    inline const EBSOptions& GetEBSOptions() const{ return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithEBSOptions(const EBSOptions& value) { SetEBSOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Option to set the time, in UTC format, for the daily automated snapshot.
     * Default value is <code>0</code> hours. </p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const{ return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to specify the subnets and security groups for a VPC endpoint. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html">Launching
     * your Amazon OpenSearch Service domains using a VPC</a>.</p>
     */
    inline const VPCOptions& GetVPCOptions() const{ return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    inline void SetVPCOptions(const VPCOptions& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }
    inline void SetVPCOptions(VPCOptions&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithVPCOptions(const VPCOptions& value) { SetVPCOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithVPCOptions(VPCOptions&& value) { SetVPCOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline const CognitoOptions& GetCognitoOptions() const{ return m_cognitoOptions; }
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }
    inline void SetCognitoOptions(const CognitoOptions& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }
    inline void SetCognitoOptions(CognitoOptions&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithCognitoOptions(const CognitoOptions& value) { SetCognitoOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithCognitoOptions(CognitoOptions&& value) { SetCognitoOptions(std::move(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}
    inline UpdateDomainConfigRequest& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }
    inline UpdateDomainConfigRequest& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }
    inline UpdateDomainConfigRequest& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }
    inline UpdateDomainConfigRequest& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateDomainConfigRequest& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }
    inline UpdateDomainConfigRequest& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }
    inline UpdateDomainConfigRequest& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identity and Access Management (IAM) access policy as a JSON-formatted
     * string.</p>
     */
    inline const Aws::String& GetAccessPolicies() const{ return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }
    inline void SetAccessPolicies(const char* value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies.assign(value); }
    inline UpdateDomainConfigRequest& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}
    inline UpdateDomainConfigRequest& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}
    inline UpdateDomainConfigRequest& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify either dual stack or IPv4 as your IP address type. Dual stack allows
     * you to share domain resources across IPv4 and IPv6 address types, and is the
     * recommended option. If your IP address type is currently set to dual stack, you
     * can't change it. </p>
     */
    inline const IPAddressType& GetIPAddressType() const{ return m_iPAddressType; }
    inline bool IPAddressTypeHasBeenSet() const { return m_iPAddressTypeHasBeenSet; }
    inline void SetIPAddressType(const IPAddressType& value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = value; }
    inline void SetIPAddressType(IPAddressType&& value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = std::move(value); }
    inline UpdateDomainConfigRequest& WithIPAddressType(const IPAddressType& value) { SetIPAddressType(value); return *this;}
    inline UpdateDomainConfigRequest& WithIPAddressType(IPAddressType&& value) { SetIPAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to publish OpenSearch logs to Amazon CloudWatch Logs.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const{ return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    inline void SetLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }
    inline void SetLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetLogPublishingOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetLogPublishingOptions(std::move(value)); return *this;}
    inline UpdateDomainConfigRequest& AddLogPublishingOptions(const LogType& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this; }
    inline UpdateDomainConfigRequest& AddLogPublishingOptions(LogType&& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), value); return *this; }
    inline UpdateDomainConfigRequest& AddLogPublishingOptions(const LogType& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, std::move(value)); return *this; }
    inline UpdateDomainConfigRequest& AddLogPublishingOptions(LogType&& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Encryption at rest options for the domain.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline const DomainEndpointOptions& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }
    inline void SetDomainEndpointOptions(const DomainEndpointOptions& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }
    inline void SetDomainEndpointOptions(DomainEndpointOptions&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithDomainEndpointOptions(const DomainEndpointOptions& value) { SetDomainEndpointOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithDomainEndpointOptions(DomainEndpointOptions&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Node-to-node encryption options for the domain.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for fine-grained access control.</p>
     */
    inline const AdvancedSecurityOptionsInput& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptionsInput& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptionsInput&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithAdvancedSecurityOptions(const AdvancedSecurityOptionsInput& value) { SetAdvancedSecurityOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithAdvancedSecurityOptions(AdvancedSecurityOptionsInput&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const IdentityCenterOptionsInput& GetIdentityCenterOptions() const{ return m_identityCenterOptions; }
    inline bool IdentityCenterOptionsHasBeenSet() const { return m_identityCenterOptionsHasBeenSet; }
    inline void SetIdentityCenterOptions(const IdentityCenterOptionsInput& value) { m_identityCenterOptionsHasBeenSet = true; m_identityCenterOptions = value; }
    inline void SetIdentityCenterOptions(IdentityCenterOptionsInput&& value) { m_identityCenterOptionsHasBeenSet = true; m_identityCenterOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithIdentityCenterOptions(const IdentityCenterOptionsInput& value) { SetIdentityCenterOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithIdentityCenterOptions(IdentityCenterOptionsInput&& value) { SetIdentityCenterOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for Auto-Tune.</p>
     */
    inline const AutoTuneOptions& GetAutoTuneOptions() const{ return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    inline void SetAutoTuneOptions(const AutoTuneOptions& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }
    inline void SetAutoTuneOptions(AutoTuneOptions&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithAutoTuneOptions(const AutoTuneOptions& value) { SetAutoTuneOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithAutoTuneOptions(AutoTuneOptions&& value) { SetAutoTuneOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag, when set to True, specifies whether the <code>UpdateDomain</code>
     * request should return the results of a dry run analysis without actually
     * applying the change. A dry run determines what type of deployment the update
     * will cause.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
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
    inline const DryRunMode& GetDryRunMode() const{ return m_dryRunMode; }
    inline bool DryRunModeHasBeenSet() const { return m_dryRunModeHasBeenSet; }
    inline void SetDryRunMode(const DryRunMode& value) { m_dryRunModeHasBeenSet = true; m_dryRunMode = value; }
    inline void SetDryRunMode(DryRunMode&& value) { m_dryRunModeHasBeenSet = true; m_dryRunMode = std::move(value); }
    inline UpdateDomainConfigRequest& WithDryRunMode(const DryRunMode& value) { SetDryRunMode(value); return *this;}
    inline UpdateDomainConfigRequest& WithDryRunMode(DryRunMode&& value) { SetDryRunMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Off-peak window options for the domain.</p>
     */
    inline const OffPeakWindowOptions& GetOffPeakWindowOptions() const{ return m_offPeakWindowOptions; }
    inline bool OffPeakWindowOptionsHasBeenSet() const { return m_offPeakWindowOptionsHasBeenSet; }
    inline void SetOffPeakWindowOptions(const OffPeakWindowOptions& value) { m_offPeakWindowOptionsHasBeenSet = true; m_offPeakWindowOptions = value; }
    inline void SetOffPeakWindowOptions(OffPeakWindowOptions&& value) { m_offPeakWindowOptionsHasBeenSet = true; m_offPeakWindowOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithOffPeakWindowOptions(const OffPeakWindowOptions& value) { SetOffPeakWindowOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithOffPeakWindowOptions(OffPeakWindowOptions&& value) { SetOffPeakWindowOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Service software update options for the domain.</p>
     */
    inline const SoftwareUpdateOptions& GetSoftwareUpdateOptions() const{ return m_softwareUpdateOptions; }
    inline bool SoftwareUpdateOptionsHasBeenSet() const { return m_softwareUpdateOptionsHasBeenSet; }
    inline void SetSoftwareUpdateOptions(const SoftwareUpdateOptions& value) { m_softwareUpdateOptionsHasBeenSet = true; m_softwareUpdateOptions = value; }
    inline void SetSoftwareUpdateOptions(SoftwareUpdateOptions&& value) { m_softwareUpdateOptionsHasBeenSet = true; m_softwareUpdateOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithSoftwareUpdateOptions(const SoftwareUpdateOptions& value) { SetSoftwareUpdateOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithSoftwareUpdateOptions(SoftwareUpdateOptions&& value) { SetSoftwareUpdateOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for all machine learning features for the specified domain.</p>
     */
    inline const AIMLOptionsInput& GetAIMLOptions() const{ return m_aIMLOptions; }
    inline bool AIMLOptionsHasBeenSet() const { return m_aIMLOptionsHasBeenSet; }
    inline void SetAIMLOptions(const AIMLOptionsInput& value) { m_aIMLOptionsHasBeenSet = true; m_aIMLOptions = value; }
    inline void SetAIMLOptions(AIMLOptionsInput&& value) { m_aIMLOptionsHasBeenSet = true; m_aIMLOptions = std::move(value); }
    inline UpdateDomainConfigRequest& WithAIMLOptions(const AIMLOptionsInput& value) { SetAIMLOptions(value); return *this;}
    inline UpdateDomainConfigRequest& WithAIMLOptions(AIMLOptionsInput&& value) { SetAIMLOptions(std::move(value)); return *this;}
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

    IPAddressType m_iPAddressType;
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

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    DryRunMode m_dryRunMode;
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
