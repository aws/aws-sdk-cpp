/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainEncryptionAtRestOptionsDetails.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainNodeToNodeEncryptionOptionsDetails.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainServiceSoftwareOptionsDetails.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainClusterConfigDetails.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainDomainEndpointOptionsDetails.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainVpcOptionsDetails.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainLogPublishingOptionsDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an Amazon OpenSearch Service domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsOpenSearchServiceDomainDetails">AWS
   * API Reference</a></p>
   */
  class AwsOpenSearchServiceDomainDetails
  {
  public:
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainDetails() = default;
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the OpenSearch Service domain.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AwsOpenSearchServiceDomainDetails& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IAM policy document that specifies the access policies for the OpenSearch
     * Service domain.</p>
     */
    inline const Aws::String& GetAccessPolicies() const { return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    template<typename AccessPoliciesT = Aws::String>
    void SetAccessPolicies(AccessPoliciesT&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::forward<AccessPoliciesT>(value); }
    template<typename AccessPoliciesT = Aws::String>
    AwsOpenSearchServiceDomainDetails& WithAccessPolicies(AccessPoliciesT&& value) { SetAccessPolicies(std::forward<AccessPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    AwsOpenSearchServiceDomainDetails& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AwsOpenSearchServiceDomainDetails& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain endpoint.</p>
     */
    inline const Aws::String& GetDomainEndpoint() const { return m_domainEndpoint; }
    inline bool DomainEndpointHasBeenSet() const { return m_domainEndpointHasBeenSet; }
    template<typename DomainEndpointT = Aws::String>
    void SetDomainEndpoint(DomainEndpointT&& value) { m_domainEndpointHasBeenSet = true; m_domainEndpoint = std::forward<DomainEndpointT>(value); }
    template<typename DomainEndpointT = Aws::String>
    AwsOpenSearchServiceDomainDetails& WithDomainEndpoint(DomainEndpointT&& value) { SetDomainEndpoint(std::forward<DomainEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the domain engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    AwsOpenSearchServiceDomainDetails& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline const AwsOpenSearchServiceDomainEncryptionAtRestOptionsDetails& GetEncryptionAtRestOptions() const { return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    template<typename EncryptionAtRestOptionsT = AwsOpenSearchServiceDomainEncryptionAtRestOptionsDetails>
    void SetEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::forward<EncryptionAtRestOptionsT>(value); }
    template<typename EncryptionAtRestOptionsT = AwsOpenSearchServiceDomainEncryptionAtRestOptionsDetails>
    AwsOpenSearchServiceDomainDetails& WithEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { SetEncryptionAtRestOptions(std::forward<EncryptionAtRestOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline const AwsOpenSearchServiceDomainNodeToNodeEncryptionOptionsDetails& GetNodeToNodeEncryptionOptions() const { return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    template<typename NodeToNodeEncryptionOptionsT = AwsOpenSearchServiceDomainNodeToNodeEncryptionOptionsDetails>
    void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::forward<NodeToNodeEncryptionOptionsT>(value); }
    template<typename NodeToNodeEncryptionOptionsT = AwsOpenSearchServiceDomainNodeToNodeEncryptionOptionsDetails>
    AwsOpenSearchServiceDomainDetails& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { SetNodeToNodeEncryptionOptions(std::forward<NodeToNodeEncryptionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline const AwsOpenSearchServiceDomainServiceSoftwareOptionsDetails& GetServiceSoftwareOptions() const { return m_serviceSoftwareOptions; }
    inline bool ServiceSoftwareOptionsHasBeenSet() const { return m_serviceSoftwareOptionsHasBeenSet; }
    template<typename ServiceSoftwareOptionsT = AwsOpenSearchServiceDomainServiceSoftwareOptionsDetails>
    void SetServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::forward<ServiceSoftwareOptionsT>(value); }
    template<typename ServiceSoftwareOptionsT = AwsOpenSearchServiceDomainServiceSoftwareOptionsDetails>
    AwsOpenSearchServiceDomainDetails& WithServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { SetServiceSoftwareOptions(std::forward<ServiceSoftwareOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the configuration of an OpenSearch cluster.</p>
     */
    inline const AwsOpenSearchServiceDomainClusterConfigDetails& GetClusterConfig() const { return m_clusterConfig; }
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }
    template<typename ClusterConfigT = AwsOpenSearchServiceDomainClusterConfigDetails>
    void SetClusterConfig(ClusterConfigT&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::forward<ClusterConfigT>(value); }
    template<typename ClusterConfigT = AwsOpenSearchServiceDomainClusterConfigDetails>
    AwsOpenSearchServiceDomainDetails& WithClusterConfig(ClusterConfigT&& value) { SetClusterConfig(std::forward<ClusterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline const AwsOpenSearchServiceDomainDomainEndpointOptionsDetails& GetDomainEndpointOptions() const { return m_domainEndpointOptions; }
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }
    template<typename DomainEndpointOptionsT = AwsOpenSearchServiceDomainDomainEndpointOptionsDetails>
    void SetDomainEndpointOptions(DomainEndpointOptionsT&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::forward<DomainEndpointOptionsT>(value); }
    template<typename DomainEndpointOptionsT = AwsOpenSearchServiceDomainDomainEndpointOptionsDetails>
    AwsOpenSearchServiceDomainDetails& WithDomainEndpointOptions(DomainEndpointOptionsT&& value) { SetDomainEndpointOptions(std::forward<DomainEndpointOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that OpenSearch Service derives based on <code>VPCOptions</code>
     * for the domain.</p>
     */
    inline const AwsOpenSearchServiceDomainVpcOptionsDetails& GetVpcOptions() const { return m_vpcOptions; }
    inline bool VpcOptionsHasBeenSet() const { return m_vpcOptionsHasBeenSet; }
    template<typename VpcOptionsT = AwsOpenSearchServiceDomainVpcOptionsDetails>
    void SetVpcOptions(VpcOptionsT&& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = std::forward<VpcOptionsT>(value); }
    template<typename VpcOptionsT = AwsOpenSearchServiceDomainVpcOptionsDetails>
    AwsOpenSearchServiceDomainDetails& WithVpcOptions(VpcOptionsT&& value) { SetVpcOptions(std::forward<VpcOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the CloudWatch Logs to publish for the OpenSearch domain.</p>
     */
    inline const AwsOpenSearchServiceDomainLogPublishingOptionsDetails& GetLogPublishingOptions() const { return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    template<typename LogPublishingOptionsT = AwsOpenSearchServiceDomainLogPublishingOptionsDetails>
    void SetLogPublishingOptions(LogPublishingOptionsT&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::forward<LogPublishingOptionsT>(value); }
    template<typename LogPublishingOptionsT = AwsOpenSearchServiceDomainLogPublishingOptionsDetails>
    AwsOpenSearchServiceDomainDetails& WithLogPublishingOptions(LogPublishingOptionsT&& value) { SetLogPublishingOptions(std::forward<LogPublishingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDomainEndpoints() const { return m_domainEndpoints; }
    inline bool DomainEndpointsHasBeenSet() const { return m_domainEndpointsHasBeenSet; }
    template<typename DomainEndpointsT = Aws::Map<Aws::String, Aws::String>>
    void SetDomainEndpoints(DomainEndpointsT&& value) { m_domainEndpointsHasBeenSet = true; m_domainEndpoints = std::forward<DomainEndpointsT>(value); }
    template<typename DomainEndpointsT = Aws::Map<Aws::String, Aws::String>>
    AwsOpenSearchServiceDomainDetails& WithDomainEndpoints(DomainEndpointsT&& value) { SetDomainEndpoints(std::forward<DomainEndpointsT>(value)); return *this;}
    template<typename DomainEndpointsKeyT = Aws::String, typename DomainEndpointsValueT = Aws::String>
    AwsOpenSearchServiceDomainDetails& AddDomainEndpoints(DomainEndpointsKeyT&& key, DomainEndpointsValueT&& value) {
      m_domainEndpointsHasBeenSet = true; m_domainEndpoints.emplace(std::forward<DomainEndpointsKeyT>(key), std::forward<DomainEndpointsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies options for fine-grained access control. </p>
     */
    inline const AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& GetAdvancedSecurityOptions() const { return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    template<typename AdvancedSecurityOptionsT = AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails>
    void SetAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::forward<AdvancedSecurityOptionsT>(value); }
    template<typename AdvancedSecurityOptionsT = AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails>
    AwsOpenSearchServiceDomainDetails& WithAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { SetAdvancedSecurityOptions(std::forward<AdvancedSecurityOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_domainEndpoint;
    bool m_domainEndpointHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    AwsOpenSearchServiceDomainEncryptionAtRestOptionsDetails m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    AwsOpenSearchServiceDomainNodeToNodeEncryptionOptionsDetails m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet = false;

    AwsOpenSearchServiceDomainServiceSoftwareOptionsDetails m_serviceSoftwareOptions;
    bool m_serviceSoftwareOptionsHasBeenSet = false;

    AwsOpenSearchServiceDomainClusterConfigDetails m_clusterConfig;
    bool m_clusterConfigHasBeenSet = false;

    AwsOpenSearchServiceDomainDomainEndpointOptionsDetails m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    AwsOpenSearchServiceDomainVpcOptionsDetails m_vpcOptions;
    bool m_vpcOptionsHasBeenSet = false;

    AwsOpenSearchServiceDomainLogPublishingOptionsDetails m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_domainEndpoints;
    bool m_domainEndpointsHasBeenSet = false;

    AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
