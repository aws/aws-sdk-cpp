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
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainDetails();
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the OpenSearch Service domain.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the OpenSearch Service domain.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the OpenSearch Service domain.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the OpenSearch Service domain.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the OpenSearch Service domain.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the OpenSearch Service domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the OpenSearch Service domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the OpenSearch Service domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>IAM policy document that specifies the access policies for the OpenSearch
     * Service domain.</p>
     */
    inline const Aws::String& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>IAM policy document that specifies the access policies for the OpenSearch
     * Service domain.</p>
     */
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }

    /**
     * <p>IAM policy document that specifies the access policies for the OpenSearch
     * Service domain.</p>
     */
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p>IAM policy document that specifies the access policies for the OpenSearch
     * Service domain.</p>
     */
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }

    /**
     * <p>IAM policy document that specifies the access policies for the OpenSearch
     * Service domain.</p>
     */
    inline void SetAccessPolicies(const char* value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies.assign(value); }

    /**
     * <p>IAM policy document that specifies the access policies for the OpenSearch
     * Service domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>IAM policy document that specifies the access policies for the OpenSearch
     * Service domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}

    /**
     * <p>IAM policy document that specifies the access policies for the OpenSearch
     * Service domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}


    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The identifier of the domain.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the domain.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the domain.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the domain.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the domain.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The domain endpoint.</p>
     */
    inline const Aws::String& GetDomainEndpoint() const{ return m_domainEndpoint; }

    /**
     * <p>The domain endpoint.</p>
     */
    inline bool DomainEndpointHasBeenSet() const { return m_domainEndpointHasBeenSet; }

    /**
     * <p>The domain endpoint.</p>
     */
    inline void SetDomainEndpoint(const Aws::String& value) { m_domainEndpointHasBeenSet = true; m_domainEndpoint = value; }

    /**
     * <p>The domain endpoint.</p>
     */
    inline void SetDomainEndpoint(Aws::String&& value) { m_domainEndpointHasBeenSet = true; m_domainEndpoint = std::move(value); }

    /**
     * <p>The domain endpoint.</p>
     */
    inline void SetDomainEndpoint(const char* value) { m_domainEndpointHasBeenSet = true; m_domainEndpoint.assign(value); }

    /**
     * <p>The domain endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithDomainEndpoint(const Aws::String& value) { SetDomainEndpoint(value); return *this;}

    /**
     * <p>The domain endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithDomainEndpoint(Aws::String&& value) { SetDomainEndpoint(std::move(value)); return *this;}

    /**
     * <p>The domain endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithDomainEndpoint(const char* value) { SetDomainEndpoint(value); return *this;}


    /**
     * <p>The version of the domain engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the domain engine.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version of the domain engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the domain engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version of the domain engine.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the domain engine.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the domain engine.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the domain engine.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline const AwsOpenSearchServiceDomainEncryptionAtRestOptionsDetails& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline void SetEncryptionAtRestOptions(const AwsOpenSearchServiceDomainEncryptionAtRestOptionsDetails& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline void SetEncryptionAtRestOptions(AwsOpenSearchServiceDomainEncryptionAtRestOptionsDetails&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithEncryptionAtRestOptions(const AwsOpenSearchServiceDomainEncryptionAtRestOptionsDetails& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithEncryptionAtRestOptions(AwsOpenSearchServiceDomainEncryptionAtRestOptionsDetails&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline const AwsOpenSearchServiceDomainNodeToNodeEncryptionOptionsDetails& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(const AwsOpenSearchServiceDomainNodeToNodeEncryptionOptionsDetails& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(AwsOpenSearchServiceDomainNodeToNodeEncryptionOptionsDetails&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithNodeToNodeEncryptionOptions(const AwsOpenSearchServiceDomainNodeToNodeEncryptionOptionsDetails& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithNodeToNodeEncryptionOptions(AwsOpenSearchServiceDomainNodeToNodeEncryptionOptionsDetails&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline const AwsOpenSearchServiceDomainServiceSoftwareOptionsDetails& GetServiceSoftwareOptions() const{ return m_serviceSoftwareOptions; }

    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline bool ServiceSoftwareOptionsHasBeenSet() const { return m_serviceSoftwareOptionsHasBeenSet; }

    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline void SetServiceSoftwareOptions(const AwsOpenSearchServiceDomainServiceSoftwareOptionsDetails& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = value; }

    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline void SetServiceSoftwareOptions(AwsOpenSearchServiceDomainServiceSoftwareOptionsDetails&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::move(value); }

    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithServiceSoftwareOptions(const AwsOpenSearchServiceDomainServiceSoftwareOptionsDetails& value) { SetServiceSoftwareOptions(value); return *this;}

    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithServiceSoftwareOptions(AwsOpenSearchServiceDomainServiceSoftwareOptionsDetails&& value) { SetServiceSoftwareOptions(std::move(value)); return *this;}


    /**
     * <p>Details about the configuration of an OpenSearch cluster.</p>
     */
    inline const AwsOpenSearchServiceDomainClusterConfigDetails& GetClusterConfig() const{ return m_clusterConfig; }

    /**
     * <p>Details about the configuration of an OpenSearch cluster.</p>
     */
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }

    /**
     * <p>Details about the configuration of an OpenSearch cluster.</p>
     */
    inline void SetClusterConfig(const AwsOpenSearchServiceDomainClusterConfigDetails& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }

    /**
     * <p>Details about the configuration of an OpenSearch cluster.</p>
     */
    inline void SetClusterConfig(AwsOpenSearchServiceDomainClusterConfigDetails&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }

    /**
     * <p>Details about the configuration of an OpenSearch cluster.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithClusterConfig(const AwsOpenSearchServiceDomainClusterConfigDetails& value) { SetClusterConfig(value); return *this;}

    /**
     * <p>Details about the configuration of an OpenSearch cluster.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithClusterConfig(AwsOpenSearchServiceDomainClusterConfigDetails&& value) { SetClusterConfig(std::move(value)); return *this;}


    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline const AwsOpenSearchServiceDomainDomainEndpointOptionsDetails& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }

    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }

    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline void SetDomainEndpointOptions(const AwsOpenSearchServiceDomainDomainEndpointOptionsDetails& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }

    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline void SetDomainEndpointOptions(AwsOpenSearchServiceDomainDomainEndpointOptionsDetails&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }

    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithDomainEndpointOptions(const AwsOpenSearchServiceDomainDomainEndpointOptionsDetails& value) { SetDomainEndpointOptions(value); return *this;}

    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithDomainEndpointOptions(AwsOpenSearchServiceDomainDomainEndpointOptionsDetails&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}


    /**
     * <p>Information that OpenSearch Service derives based on <code>VPCOptions</code>
     * for the domain.</p>
     */
    inline const AwsOpenSearchServiceDomainVpcOptionsDetails& GetVpcOptions() const{ return m_vpcOptions; }

    /**
     * <p>Information that OpenSearch Service derives based on <code>VPCOptions</code>
     * for the domain.</p>
     */
    inline bool VpcOptionsHasBeenSet() const { return m_vpcOptionsHasBeenSet; }

    /**
     * <p>Information that OpenSearch Service derives based on <code>VPCOptions</code>
     * for the domain.</p>
     */
    inline void SetVpcOptions(const AwsOpenSearchServiceDomainVpcOptionsDetails& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = value; }

    /**
     * <p>Information that OpenSearch Service derives based on <code>VPCOptions</code>
     * for the domain.</p>
     */
    inline void SetVpcOptions(AwsOpenSearchServiceDomainVpcOptionsDetails&& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = std::move(value); }

    /**
     * <p>Information that OpenSearch Service derives based on <code>VPCOptions</code>
     * for the domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithVpcOptions(const AwsOpenSearchServiceDomainVpcOptionsDetails& value) { SetVpcOptions(value); return *this;}

    /**
     * <p>Information that OpenSearch Service derives based on <code>VPCOptions</code>
     * for the domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithVpcOptions(AwsOpenSearchServiceDomainVpcOptionsDetails&& value) { SetVpcOptions(std::move(value)); return *this;}


    /**
     * <p>Configures the CloudWatch Logs to publish for the OpenSearch domain.</p>
     */
    inline const AwsOpenSearchServiceDomainLogPublishingOptionsDetails& GetLogPublishingOptions() const{ return m_logPublishingOptions; }

    /**
     * <p>Configures the CloudWatch Logs to publish for the OpenSearch domain.</p>
     */
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }

    /**
     * <p>Configures the CloudWatch Logs to publish for the OpenSearch domain.</p>
     */
    inline void SetLogPublishingOptions(const AwsOpenSearchServiceDomainLogPublishingOptionsDetails& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }

    /**
     * <p>Configures the CloudWatch Logs to publish for the OpenSearch domain.</p>
     */
    inline void SetLogPublishingOptions(AwsOpenSearchServiceDomainLogPublishingOptionsDetails&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }

    /**
     * <p>Configures the CloudWatch Logs to publish for the OpenSearch domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithLogPublishingOptions(const AwsOpenSearchServiceDomainLogPublishingOptionsDetails& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Configures the CloudWatch Logs to publish for the OpenSearch domain.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithLogPublishingOptions(AwsOpenSearchServiceDomainLogPublishingOptionsDetails&& value) { SetLogPublishingOptions(std::move(value)); return *this;}


    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDomainEndpoints() const{ return m_domainEndpoints; }

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline bool DomainEndpointsHasBeenSet() const { return m_domainEndpointsHasBeenSet; }

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline void SetDomainEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { m_domainEndpointsHasBeenSet = true; m_domainEndpoints = value; }

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline void SetDomainEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { m_domainEndpointsHasBeenSet = true; m_domainEndpoints = std::move(value); }

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithDomainEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { SetDomainEndpoints(value); return *this;}

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithDomainEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { SetDomainEndpoints(std::move(value)); return *this;}

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& AddDomainEndpoints(const Aws::String& key, const Aws::String& value) { m_domainEndpointsHasBeenSet = true; m_domainEndpoints.emplace(key, value); return *this; }

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& AddDomainEndpoints(Aws::String&& key, const Aws::String& value) { m_domainEndpointsHasBeenSet = true; m_domainEndpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& AddDomainEndpoints(const Aws::String& key, Aws::String&& value) { m_domainEndpointsHasBeenSet = true; m_domainEndpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& AddDomainEndpoints(Aws::String&& key, Aws::String&& value) { m_domainEndpointsHasBeenSet = true; m_domainEndpoints.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& AddDomainEndpoints(const char* key, Aws::String&& value) { m_domainEndpointsHasBeenSet = true; m_domainEndpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& AddDomainEndpoints(Aws::String&& key, const char* value) { m_domainEndpointsHasBeenSet = true; m_domainEndpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>The domain endpoints. Used if the OpenSearch domain resides in a VPC.</p>
     * <p>This is a map of key-value pairs. The key is always <code>vpc</code>. The
     * value is the endpoint.</p>
     */
    inline AwsOpenSearchServiceDomainDetails& AddDomainEndpoints(const char* key, const char* value) { m_domainEndpointsHasBeenSet = true; m_domainEndpoints.emplace(key, value); return *this; }


    /**
     * <p>Specifies options for fine-grained access control. </p>
     */
    inline const AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }

    /**
     * <p>Specifies options for fine-grained access control. </p>
     */
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }

    /**
     * <p>Specifies options for fine-grained access control. </p>
     */
    inline void SetAdvancedSecurityOptions(const AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }

    /**
     * <p>Specifies options for fine-grained access control. </p>
     */
    inline void SetAdvancedSecurityOptions(AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }

    /**
     * <p>Specifies options for fine-grained access control. </p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithAdvancedSecurityOptions(const AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails& value) { SetAdvancedSecurityOptions(value); return *this;}

    /**
     * <p>Specifies options for fine-grained access control. </p>
     */
    inline AwsOpenSearchServiceDomainDetails& WithAdvancedSecurityOptions(AwsOpenSearchServiceDomainAdvancedSecurityOptionsDetails&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}

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
