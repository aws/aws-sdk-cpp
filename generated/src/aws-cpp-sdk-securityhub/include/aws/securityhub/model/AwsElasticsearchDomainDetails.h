/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsElasticsearchDomainDomainEndpointOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/AwsElasticsearchDomainElasticsearchClusterConfigDetails.h>
#include <aws/securityhub/model/AwsElasticsearchDomainEncryptionAtRestOptions.h>
#include <aws/securityhub/model/AwsElasticsearchDomainLogPublishingOptions.h>
#include <aws/securityhub/model/AwsElasticsearchDomainNodeToNodeEncryptionOptions.h>
#include <aws/securityhub/model/AwsElasticsearchDomainServiceSoftwareOptions.h>
#include <aws/securityhub/model/AwsElasticsearchDomainVPCOptions.h>
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
   * <p>Information about an Elasticsearch domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticsearchDomainDetails">AWS
   * API Reference</a></p>
   */
  class AwsElasticsearchDomainDetails
  {
  public:
    AWS_SECURITYHUB_API AwsElasticsearchDomainDetails() = default;
    AWS_SECURITYHUB_API AwsElasticsearchDomainDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticsearchDomainDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>IAM policy document specifying the access policies for the new Elasticsearch
     * domain.</p>
     */
    inline const Aws::String& GetAccessPolicies() const { return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    template<typename AccessPoliciesT = Aws::String>
    void SetAccessPolicies(AccessPoliciesT&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::forward<AccessPoliciesT>(value); }
    template<typename AccessPoliciesT = Aws::String>
    AwsElasticsearchDomainDetails& WithAccessPolicies(AccessPoliciesT&& value) { SetAccessPolicies(std::forward<AccessPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline const AwsElasticsearchDomainDomainEndpointOptions& GetDomainEndpointOptions() const { return m_domainEndpointOptions; }
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }
    template<typename DomainEndpointOptionsT = AwsElasticsearchDomainDomainEndpointOptions>
    void SetDomainEndpointOptions(DomainEndpointOptionsT&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::forward<DomainEndpointOptionsT>(value); }
    template<typename DomainEndpointOptionsT = AwsElasticsearchDomainDomainEndpointOptions>
    AwsElasticsearchDomainDetails& WithDomainEndpointOptions(DomainEndpointOptionsT&& value) { SetDomainEndpointOptions(std::forward<DomainEndpointOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for an Elasticsearch domain.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    AwsElasticsearchDomainDetails& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of an Elasticsearch domain.</p> <p>Domain names are unique across all
     * domains owned by the same account within an Amazon Web Services Region.</p>
     * <p>Domain names must start with a lowercase letter and must be between 3 and 28
     * characters.</p> <p>Valid characters are a-z (lowercase only), 0-9, and –
     * (hyphen). </p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    AwsElasticsearchDomainDetails& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to an Elasticsearch domain.</p> <p>The endpoint is a service URL. </p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    AwsElasticsearchDomainDetails& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Map<Aws::String, Aws::String>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Map<Aws::String, Aws::String>>
    AwsElasticsearchDomainDetails& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsKeyT = Aws::String, typename EndpointsValueT = Aws::String>
    AwsElasticsearchDomainDetails& AddEndpoints(EndpointsKeyT&& key, EndpointsValueT&& value) {
      m_endpointsHasBeenSet = true; m_endpoints.emplace(std::forward<EndpointsKeyT>(key), std::forward<EndpointsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>OpenSearch version.</p>
     */
    inline const Aws::String& GetElasticsearchVersion() const { return m_elasticsearchVersion; }
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }
    template<typename ElasticsearchVersionT = Aws::String>
    void SetElasticsearchVersion(ElasticsearchVersionT&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::forward<ElasticsearchVersionT>(value); }
    template<typename ElasticsearchVersionT = Aws::String>
    AwsElasticsearchDomainDetails& WithElasticsearchVersion(ElasticsearchVersionT&& value) { SetElasticsearchVersion(std::forward<ElasticsearchVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an OpenSearch cluster configuration.</p>
     */
    inline const AwsElasticsearchDomainElasticsearchClusterConfigDetails& GetElasticsearchClusterConfig() const { return m_elasticsearchClusterConfig; }
    inline bool ElasticsearchClusterConfigHasBeenSet() const { return m_elasticsearchClusterConfigHasBeenSet; }
    template<typename ElasticsearchClusterConfigT = AwsElasticsearchDomainElasticsearchClusterConfigDetails>
    void SetElasticsearchClusterConfig(ElasticsearchClusterConfigT&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = std::forward<ElasticsearchClusterConfigT>(value); }
    template<typename ElasticsearchClusterConfigT = AwsElasticsearchDomainElasticsearchClusterConfigDetails>
    AwsElasticsearchDomainDetails& WithElasticsearchClusterConfig(ElasticsearchClusterConfigT&& value) { SetElasticsearchClusterConfig(std::forward<ElasticsearchClusterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline const AwsElasticsearchDomainEncryptionAtRestOptions& GetEncryptionAtRestOptions() const { return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    template<typename EncryptionAtRestOptionsT = AwsElasticsearchDomainEncryptionAtRestOptions>
    void SetEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::forward<EncryptionAtRestOptionsT>(value); }
    template<typename EncryptionAtRestOptionsT = AwsElasticsearchDomainEncryptionAtRestOptions>
    AwsElasticsearchDomainDetails& WithEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { SetEncryptionAtRestOptions(std::forward<EncryptionAtRestOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the CloudWatch Logs to publish for the Elasticsearch domain.</p>
     */
    inline const AwsElasticsearchDomainLogPublishingOptions& GetLogPublishingOptions() const { return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    template<typename LogPublishingOptionsT = AwsElasticsearchDomainLogPublishingOptions>
    void SetLogPublishingOptions(LogPublishingOptionsT&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::forward<LogPublishingOptionsT>(value); }
    template<typename LogPublishingOptionsT = AwsElasticsearchDomainLogPublishingOptions>
    AwsElasticsearchDomainDetails& WithLogPublishingOptions(LogPublishingOptionsT&& value) { SetLogPublishingOptions(std::forward<LogPublishingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline const AwsElasticsearchDomainNodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const { return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    template<typename NodeToNodeEncryptionOptionsT = AwsElasticsearchDomainNodeToNodeEncryptionOptions>
    void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::forward<NodeToNodeEncryptionOptionsT>(value); }
    template<typename NodeToNodeEncryptionOptionsT = AwsElasticsearchDomainNodeToNodeEncryptionOptions>
    AwsElasticsearchDomainDetails& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { SetNodeToNodeEncryptionOptions(std::forward<NodeToNodeEncryptionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline const AwsElasticsearchDomainServiceSoftwareOptions& GetServiceSoftwareOptions() const { return m_serviceSoftwareOptions; }
    inline bool ServiceSoftwareOptionsHasBeenSet() const { return m_serviceSoftwareOptionsHasBeenSet; }
    template<typename ServiceSoftwareOptionsT = AwsElasticsearchDomainServiceSoftwareOptions>
    void SetServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::forward<ServiceSoftwareOptionsT>(value); }
    template<typename ServiceSoftwareOptionsT = AwsElasticsearchDomainServiceSoftwareOptions>
    AwsElasticsearchDomainDetails& WithServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { SetServiceSoftwareOptions(std::forward<ServiceSoftwareOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that OpenSearch derives based on <code>VPCOptions</code> for the
     * domain.</p>
     */
    inline const AwsElasticsearchDomainVPCOptions& GetVPCOptions() const { return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    template<typename VPCOptionsT = AwsElasticsearchDomainVPCOptions>
    void SetVPCOptions(VPCOptionsT&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::forward<VPCOptionsT>(value); }
    template<typename VPCOptionsT = AwsElasticsearchDomainVPCOptions>
    AwsElasticsearchDomainDetails& WithVPCOptions(VPCOptionsT&& value) { SetVPCOptions(std::forward<VPCOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    AwsElasticsearchDomainDomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::String m_elasticsearchVersion;
    bool m_elasticsearchVersionHasBeenSet = false;

    AwsElasticsearchDomainElasticsearchClusterConfigDetails m_elasticsearchClusterConfig;
    bool m_elasticsearchClusterConfigHasBeenSet = false;

    AwsElasticsearchDomainEncryptionAtRestOptions m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    AwsElasticsearchDomainLogPublishingOptions m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    AwsElasticsearchDomainNodeToNodeEncryptionOptions m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet = false;

    AwsElasticsearchDomainServiceSoftwareOptions m_serviceSoftwareOptions;
    bool m_serviceSoftwareOptionsHasBeenSet = false;

    AwsElasticsearchDomainVPCOptions m_vPCOptions;
    bool m_vPCOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
