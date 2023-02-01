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
#include <aws/opensearch/model/SnapshotOptions.h>
#include <aws/opensearch/model/VPCDerivedInfo.h>
#include <aws/opensearch/model/CognitoOptions.h>
#include <aws/opensearch/model/EncryptionAtRestOptions.h>
#include <aws/opensearch/model/NodeToNodeEncryptionOptions.h>
#include <aws/opensearch/model/ServiceSoftwareOptions.h>
#include <aws/opensearch/model/DomainEndpointOptions.h>
#include <aws/opensearch/model/AdvancedSecurityOptions.h>
#include <aws/opensearch/model/AutoTuneOptionsOutput.h>
#include <aws/opensearch/model/ChangeProgressDetails.h>
#include <aws/opensearch/model/LogType.h>
#include <aws/opensearch/model/LogPublishingOption.h>
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
    AWS_OPENSEARCHSERVICE_API DomainStatus();
    AWS_OPENSEARCHSERVICE_API DomainStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for the domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>Unique identifier for the domain.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>Unique identifier for the domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>Unique identifier for the domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>Unique identifier for the domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>Unique identifier for the domain.</p>
     */
    inline DomainStatus& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>Unique identifier for the domain.</p>
     */
    inline DomainStatus& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the domain.</p>
     */
    inline DomainStatus& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>Name of the domain. Domain names are unique across all domains owned by the
     * same account within an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Name of the domain. Domain names are unique across all domains owned by the
     * same account within an Amazon Web Services Region.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Name of the domain. Domain names are unique across all domains owned by the
     * same account within an Amazon Web Services Region.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Name of the domain. Domain names are unique across all domains owned by the
     * same account within an Amazon Web Services Region.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Name of the domain. Domain names are unique across all domains owned by the
     * same account within an Amazon Web Services Region.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Name of the domain. Domain names are unique across all domains owned by the
     * same account within an Amazon Web Services Region.</p>
     */
    inline DomainStatus& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Name of the domain. Domain names are unique across all domains owned by the
     * same account within an Amazon Web Services Region.</p>
     */
    inline DomainStatus& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Name of the domain. Domain names are unique across all domains owned by the
     * same account within an Amazon Web Services Region.</p>
     */
    inline DomainStatus& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the domain. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * identifiers </a> in the <i>AWS Identity and Access Management User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * identifiers </a> in the <i>AWS Identity and Access Management User
     * Guide</i>.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * identifiers </a> in the <i>AWS Identity and Access Management User
     * Guide</i>.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * identifiers </a> in the <i>AWS Identity and Access Management User
     * Guide</i>.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * identifiers </a> in the <i>AWS Identity and Access Management User
     * Guide</i>.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * identifiers </a> in the <i>AWS Identity and Access Management User
     * Guide</i>.</p>
     */
    inline DomainStatus& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * identifiers </a> in the <i>AWS Identity and Access Management User
     * Guide</i>.</p>
     */
    inline DomainStatus& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * identifiers </a> in the <i>AWS Identity and Access Management User
     * Guide</i>.</p>
     */
    inline DomainStatus& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>Creation status of an OpenSearch Service domain. True if domain creation is
     * complete. False if domain creation is still in progress.</p>
     */
    inline bool GetCreated() const{ return m_created; }

    /**
     * <p>Creation status of an OpenSearch Service domain. True if domain creation is
     * complete. False if domain creation is still in progress.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>Creation status of an OpenSearch Service domain. True if domain creation is
     * complete. False if domain creation is still in progress.</p>
     */
    inline void SetCreated(bool value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>Creation status of an OpenSearch Service domain. True if domain creation is
     * complete. False if domain creation is still in progress.</p>
     */
    inline DomainStatus& WithCreated(bool value) { SetCreated(value); return *this;}


    /**
     * <p>Deletion status of an OpenSearch Service domain. True if domain deletion is
     * complete. False if domain deletion is still in progress. Once deletion is
     * complete, the status of the domain is no longer returned.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }

    /**
     * <p>Deletion status of an OpenSearch Service domain. True if domain deletion is
     * complete. False if domain deletion is still in progress. Once deletion is
     * complete, the status of the domain is no longer returned.</p>
     */
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }

    /**
     * <p>Deletion status of an OpenSearch Service domain. True if domain deletion is
     * complete. False if domain deletion is still in progress. Once deletion is
     * complete, the status of the domain is no longer returned.</p>
     */
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }

    /**
     * <p>Deletion status of an OpenSearch Service domain. True if domain deletion is
     * complete. False if domain deletion is still in progress. Once deletion is
     * complete, the status of the domain is no longer returned.</p>
     */
    inline DomainStatus& WithDeleted(bool value) { SetDeleted(value); return *this;}


    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to the domain.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to the domain.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to the domain.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to the domain.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to the domain.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to the domain.</p>
     */
    inline DomainStatus& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to the domain.</p>
     */
    inline DomainStatus& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to the domain.</p>
     */
    inline DomainStatus& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline void SetEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline void SetEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline DomainStatus& WithEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline DomainStatus& WithEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline DomainStatus& AddEndpoints(const Aws::String& key, const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline DomainStatus& AddEndpoints(Aws::String&& key, const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline DomainStatus& AddEndpoints(const Aws::String& key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline DomainStatus& AddEndpoints(Aws::String&& key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline DomainStatus& AddEndpoints(const char* key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline DomainStatus& AddEndpoints(Aws::String&& key, const char* value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pair that exists if the OpenSearch Service domain uses VPC
     * endpoints.. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline DomainStatus& AddEndpoints(const char* key, const char* value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }


    /**
     * <p>The status of the domain configuration. True if OpenSearch Service is
     * processing configuration changes. False if the configuration is active.</p>
     */
    inline bool GetProcessing() const{ return m_processing; }

    /**
     * <p>The status of the domain configuration. True if OpenSearch Service is
     * processing configuration changes. False if the configuration is active.</p>
     */
    inline bool ProcessingHasBeenSet() const { return m_processingHasBeenSet; }

    /**
     * <p>The status of the domain configuration. True if OpenSearch Service is
     * processing configuration changes. False if the configuration is active.</p>
     */
    inline void SetProcessing(bool value) { m_processingHasBeenSet = true; m_processing = value; }

    /**
     * <p>The status of the domain configuration. True if OpenSearch Service is
     * processing configuration changes. False if the configuration is active.</p>
     */
    inline DomainStatus& WithProcessing(bool value) { SetProcessing(value); return *this;}


    /**
     * <p>The status of a domain version upgrade to a new version of OpenSearch or
     * Elasticsearch. True if OpenSearch Service is in the process of a version
     * upgrade. False if the configuration is active.</p>
     */
    inline bool GetUpgradeProcessing() const{ return m_upgradeProcessing; }

    /**
     * <p>The status of a domain version upgrade to a new version of OpenSearch or
     * Elasticsearch. True if OpenSearch Service is in the process of a version
     * upgrade. False if the configuration is active.</p>
     */
    inline bool UpgradeProcessingHasBeenSet() const { return m_upgradeProcessingHasBeenSet; }

    /**
     * <p>The status of a domain version upgrade to a new version of OpenSearch or
     * Elasticsearch. True if OpenSearch Service is in the process of a version
     * upgrade. False if the configuration is active.</p>
     */
    inline void SetUpgradeProcessing(bool value) { m_upgradeProcessingHasBeenSet = true; m_upgradeProcessing = value; }

    /**
     * <p>The status of a domain version upgrade to a new version of OpenSearch or
     * Elasticsearch. True if OpenSearch Service is in the process of a version
     * upgrade. False if the configuration is active.</p>
     */
    inline DomainStatus& WithUpgradeProcessing(bool value) { SetUpgradeProcessing(value); return *this;}


    /**
     * <p>Version of OpenSearch or Elasticsearch that the domain is running, in the
     * format <code>Elasticsearch_X.Y</code> or <code>OpenSearch_X.Y</code>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Version of OpenSearch or Elasticsearch that the domain is running, in the
     * format <code>Elasticsearch_X.Y</code> or <code>OpenSearch_X.Y</code>.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>Version of OpenSearch or Elasticsearch that the domain is running, in the
     * format <code>Elasticsearch_X.Y</code> or <code>OpenSearch_X.Y</code>.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Version of OpenSearch or Elasticsearch that the domain is running, in the
     * format <code>Elasticsearch_X.Y</code> or <code>OpenSearch_X.Y</code>.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>Version of OpenSearch or Elasticsearch that the domain is running, in the
     * format <code>Elasticsearch_X.Y</code> or <code>OpenSearch_X.Y</code>.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Version of OpenSearch or Elasticsearch that the domain is running, in the
     * format <code>Elasticsearch_X.Y</code> or <code>OpenSearch_X.Y</code>.</p>
     */
    inline DomainStatus& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Version of OpenSearch or Elasticsearch that the domain is running, in the
     * format <code>Elasticsearch_X.Y</code> or <code>OpenSearch_X.Y</code>.</p>
     */
    inline DomainStatus& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Version of OpenSearch or Elasticsearch that the domain is running, in the
     * format <code>Elasticsearch_X.Y</code> or <code>OpenSearch_X.Y</code>.</p>
     */
    inline DomainStatus& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Container for the cluster configuration of the domain.</p>
     */
    inline const ClusterConfig& GetClusterConfig() const{ return m_clusterConfig; }

    /**
     * <p>Container for the cluster configuration of the domain.</p>
     */
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }

    /**
     * <p>Container for the cluster configuration of the domain.</p>
     */
    inline void SetClusterConfig(const ClusterConfig& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }

    /**
     * <p>Container for the cluster configuration of the domain.</p>
     */
    inline void SetClusterConfig(ClusterConfig&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }

    /**
     * <p>Container for the cluster configuration of the domain.</p>
     */
    inline DomainStatus& WithClusterConfig(const ClusterConfig& value) { SetClusterConfig(value); return *this;}

    /**
     * <p>Container for the cluster configuration of the domain.</p>
     */
    inline DomainStatus& WithClusterConfig(ClusterConfig&& value) { SetClusterConfig(std::move(value)); return *this;}


    /**
     * <p>Container for EBS-based storage settings for the domain.</p>
     */
    inline const EBSOptions& GetEBSOptions() const{ return m_eBSOptions; }

    /**
     * <p>Container for EBS-based storage settings for the domain.</p>
     */
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }

    /**
     * <p>Container for EBS-based storage settings for the domain.</p>
     */
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>Container for EBS-based storage settings for the domain.</p>
     */
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }

    /**
     * <p>Container for EBS-based storage settings for the domain.</p>
     */
    inline DomainStatus& WithEBSOptions(const EBSOptions& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>Container for EBS-based storage settings for the domain.</p>
     */
    inline DomainStatus& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(std::move(value)); return *this;}


    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the domain.</p>
     */
    inline const Aws::String& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the domain.</p>
     */
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the domain.</p>
     */
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the domain.</p>
     */
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the domain.</p>
     */
    inline void SetAccessPolicies(const char* value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies.assign(value); }

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the domain.</p>
     */
    inline DomainStatus& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the domain.</p>
     */
    inline DomainStatus& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the domain.</p>
     */
    inline DomainStatus& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}


    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const{ return m_snapshotOptions; }

    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }

    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }

    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline DomainStatus& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline DomainStatus& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(std::move(value)); return *this;}


    /**
     * <p>The VPC configuration for the domain.</p>
     */
    inline const VPCDerivedInfo& GetVPCOptions() const{ return m_vPCOptions; }

    /**
     * <p>The VPC configuration for the domain.</p>
     */
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }

    /**
     * <p>The VPC configuration for the domain.</p>
     */
    inline void SetVPCOptions(const VPCDerivedInfo& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }

    /**
     * <p>The VPC configuration for the domain.</p>
     */
    inline void SetVPCOptions(VPCDerivedInfo&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }

    /**
     * <p>The VPC configuration for the domain.</p>
     */
    inline DomainStatus& WithVPCOptions(const VPCDerivedInfo& value) { SetVPCOptions(value); return *this;}

    /**
     * <p>The VPC configuration for the domain.</p>
     */
    inline DomainStatus& WithVPCOptions(VPCDerivedInfo&& value) { SetVPCOptions(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline const CognitoOptions& GetCognitoOptions() const{ return m_cognitoOptions; }

    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline void SetCognitoOptions(const CognitoOptions& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }

    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline void SetCognitoOptions(CognitoOptions&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }

    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline DomainStatus& WithCognitoOptions(const CognitoOptions& value) { SetCognitoOptions(value); return *this;}

    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication for OpenSearch
     * Dashboards.</p>
     */
    inline DomainStatus& WithCognitoOptions(CognitoOptions&& value) { SetCognitoOptions(std::move(value)); return *this;}


    /**
     * <p>Encryption at rest settings for the domain.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>Encryption at rest settings for the domain.</p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>Encryption at rest settings for the domain.</p>
     */
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>Encryption at rest settings for the domain.</p>
     */
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>Encryption at rest settings for the domain.</p>
     */
    inline DomainStatus& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>Encryption at rest settings for the domain.</p>
     */
    inline DomainStatus& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline DomainStatus& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline DomainStatus& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline DomainStatus& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline DomainStatus& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline DomainStatus& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline DomainStatus& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline DomainStatus& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline DomainStatus& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline DomainStatus& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline DomainStatus& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs that specify advanced configuration options.</p>
     */
    inline DomainStatus& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }


    /**
     * <p>Log publishing options for the domain.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const{ return m_logPublishingOptions; }

    /**
     * <p>Log publishing options for the domain.</p>
     */
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }

    /**
     * <p>Log publishing options for the domain.</p>
     */
    inline void SetLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }

    /**
     * <p>Log publishing options for the domain.</p>
     */
    inline void SetLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }

    /**
     * <p>Log publishing options for the domain.</p>
     */
    inline DomainStatus& WithLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Log publishing options for the domain.</p>
     */
    inline DomainStatus& WithLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetLogPublishingOptions(std::move(value)); return *this;}

    /**
     * <p>Log publishing options for the domain.</p>
     */
    inline DomainStatus& AddLogPublishingOptions(const LogType& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this; }

    /**
     * <p>Log publishing options for the domain.</p>
     */
    inline DomainStatus& AddLogPublishingOptions(LogType&& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Log publishing options for the domain.</p>
     */
    inline DomainStatus& AddLogPublishingOptions(const LogType& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Log publishing options for the domain.</p>
     */
    inline DomainStatus& AddLogPublishingOptions(LogType&& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const{ return m_serviceSoftwareOptions; }

    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline bool ServiceSoftwareOptionsHasBeenSet() const { return m_serviceSoftwareOptionsHasBeenSet; }

    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline void SetServiceSoftwareOptions(const ServiceSoftwareOptions& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = value; }

    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline void SetServiceSoftwareOptions(ServiceSoftwareOptions&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::move(value); }

    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline DomainStatus& WithServiceSoftwareOptions(const ServiceSoftwareOptions& value) { SetServiceSoftwareOptions(value); return *this;}

    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline DomainStatus& WithServiceSoftwareOptions(ServiceSoftwareOptions&& value) { SetServiceSoftwareOptions(std::move(value)); return *this;}


    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline const DomainEndpointOptions& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline void SetDomainEndpointOptions(const DomainEndpointOptions& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline void SetDomainEndpointOptions(DomainEndpointOptions&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline DomainStatus& WithDomainEndpointOptions(const DomainEndpointOptions& value) { SetDomainEndpointOptions(value); return *this;}

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline DomainStatus& WithDomainEndpointOptions(DomainEndpointOptions&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}


    /**
     * <p>Settings for fine-grained access control.</p>
     */
    inline const AdvancedSecurityOptions& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }

    /**
     * <p>Settings for fine-grained access control.</p>
     */
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }

    /**
     * <p>Settings for fine-grained access control.</p>
     */
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptions& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }

    /**
     * <p>Settings for fine-grained access control.</p>
     */
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptions&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }

    /**
     * <p>Settings for fine-grained access control.</p>
     */
    inline DomainStatus& WithAdvancedSecurityOptions(const AdvancedSecurityOptions& value) { SetAdvancedSecurityOptions(value); return *this;}

    /**
     * <p>Settings for fine-grained access control.</p>
     */
    inline DomainStatus& WithAdvancedSecurityOptions(AdvancedSecurityOptions&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}


    /**
     * <p>Auto-Tune settings for the domain.</p>
     */
    inline const AutoTuneOptionsOutput& GetAutoTuneOptions() const{ return m_autoTuneOptions; }

    /**
     * <p>Auto-Tune settings for the domain.</p>
     */
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }

    /**
     * <p>Auto-Tune settings for the domain.</p>
     */
    inline void SetAutoTuneOptions(const AutoTuneOptionsOutput& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }

    /**
     * <p>Auto-Tune settings for the domain.</p>
     */
    inline void SetAutoTuneOptions(AutoTuneOptionsOutput&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }

    /**
     * <p>Auto-Tune settings for the domain.</p>
     */
    inline DomainStatus& WithAutoTuneOptions(const AutoTuneOptionsOutput& value) { SetAutoTuneOptions(value); return *this;}

    /**
     * <p>Auto-Tune settings for the domain.</p>
     */
    inline DomainStatus& WithAutoTuneOptions(AutoTuneOptionsOutput&& value) { SetAutoTuneOptions(std::move(value)); return *this;}


    /**
     * <p>Information about a configuration change happening on the domain.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const{ return m_changeProgressDetails; }

    /**
     * <p>Information about a configuration change happening on the domain.</p>
     */
    inline bool ChangeProgressDetailsHasBeenSet() const { return m_changeProgressDetailsHasBeenSet; }

    /**
     * <p>Information about a configuration change happening on the domain.</p>
     */
    inline void SetChangeProgressDetails(const ChangeProgressDetails& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = value; }

    /**
     * <p>Information about a configuration change happening on the domain.</p>
     */
    inline void SetChangeProgressDetails(ChangeProgressDetails&& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = std::move(value); }

    /**
     * <p>Information about a configuration change happening on the domain.</p>
     */
    inline DomainStatus& WithChangeProgressDetails(const ChangeProgressDetails& value) { SetChangeProgressDetails(value); return *this;}

    /**
     * <p>Information about a configuration change happening on the domain.</p>
     */
    inline DomainStatus& WithChangeProgressDetails(ChangeProgressDetails&& value) { SetChangeProgressDetails(std::move(value)); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    bool m_created;
    bool m_createdHasBeenSet = false;

    bool m_deleted;
    bool m_deletedHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    bool m_processing;
    bool m_processingHasBeenSet = false;

    bool m_upgradeProcessing;
    bool m_upgradeProcessingHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    ClusterConfig m_clusterConfig;
    bool m_clusterConfigHasBeenSet = false;

    EBSOptions m_eBSOptions;
    bool m_eBSOptionsHasBeenSet = false;

    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

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

    AutoTuneOptionsOutput m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet = false;

    ChangeProgressDetails m_changeProgressDetails;
    bool m_changeProgressDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
