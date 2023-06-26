/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/opensearchserverless/OpenSearchServerlessClient.h>
#include <aws/opensearchserverless/OpenSearchServerlessErrorMarshaller.h>
#include <aws/opensearchserverless/OpenSearchServerlessEndpointProvider.h>
#include <aws/opensearchserverless/model/BatchGetCollectionRequest.h>
#include <aws/opensearchserverless/model/BatchGetVpcEndpointRequest.h>
#include <aws/opensearchserverless/model/CreateAccessPolicyRequest.h>
#include <aws/opensearchserverless/model/CreateCollectionRequest.h>
#include <aws/opensearchserverless/model/CreateSecurityConfigRequest.h>
#include <aws/opensearchserverless/model/CreateSecurityPolicyRequest.h>
#include <aws/opensearchserverless/model/CreateVpcEndpointRequest.h>
#include <aws/opensearchserverless/model/DeleteAccessPolicyRequest.h>
#include <aws/opensearchserverless/model/DeleteCollectionRequest.h>
#include <aws/opensearchserverless/model/DeleteSecurityConfigRequest.h>
#include <aws/opensearchserverless/model/DeleteSecurityPolicyRequest.h>
#include <aws/opensearchserverless/model/DeleteVpcEndpointRequest.h>
#include <aws/opensearchserverless/model/GetAccessPolicyRequest.h>
#include <aws/opensearchserverless/model/GetAccountSettingsRequest.h>
#include <aws/opensearchserverless/model/GetPoliciesStatsRequest.h>
#include <aws/opensearchserverless/model/GetSecurityConfigRequest.h>
#include <aws/opensearchserverless/model/GetSecurityPolicyRequest.h>
#include <aws/opensearchserverless/model/ListAccessPoliciesRequest.h>
#include <aws/opensearchserverless/model/ListCollectionsRequest.h>
#include <aws/opensearchserverless/model/ListSecurityConfigsRequest.h>
#include <aws/opensearchserverless/model/ListSecurityPoliciesRequest.h>
#include <aws/opensearchserverless/model/ListTagsForResourceRequest.h>
#include <aws/opensearchserverless/model/ListVpcEndpointsRequest.h>
#include <aws/opensearchserverless/model/TagResourceRequest.h>
#include <aws/opensearchserverless/model/UntagResourceRequest.h>
#include <aws/opensearchserverless/model/UpdateAccessPolicyRequest.h>
#include <aws/opensearchserverless/model/UpdateAccountSettingsRequest.h>
#include <aws/opensearchserverless/model/UpdateCollectionRequest.h>
#include <aws/opensearchserverless/model/UpdateSecurityConfigRequest.h>
#include <aws/opensearchserverless/model/UpdateSecurityPolicyRequest.h>
#include <aws/opensearchserverless/model/UpdateVpcEndpointRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OpenSearchServerless;
using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* OpenSearchServerlessClient::SERVICE_NAME = "aoss";
const char* OpenSearchServerlessClient::ALLOCATION_TAG = "OpenSearchServerlessClient";

OpenSearchServerlessClient::OpenSearchServerlessClient(const OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration,
                                                       std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

OpenSearchServerlessClient::OpenSearchServerlessClient(const AWSCredentials& credentials,
                                                       std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider,
                                                       const OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

OpenSearchServerlessClient::OpenSearchServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       std::shared_ptr<OpenSearchServerlessEndpointProviderBase> endpointProvider,
                                                       const OpenSearchServerless::OpenSearchServerlessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  OpenSearchServerlessClient::OpenSearchServerlessClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

OpenSearchServerlessClient::OpenSearchServerlessClient(const AWSCredentials& credentials,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

OpenSearchServerlessClient::OpenSearchServerlessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OpenSearchServerlessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<OpenSearchServerlessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
OpenSearchServerlessClient::~OpenSearchServerlessClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<OpenSearchServerlessEndpointProviderBase>& OpenSearchServerlessClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void OpenSearchServerlessClient::init(const OpenSearchServerless::OpenSearchServerlessClientConfiguration& config)
{
  AWSClient::SetServiceClientName("OpenSearchServerless");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void OpenSearchServerlessClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchGetCollectionOutcome OpenSearchServerlessClient::BatchGetCollection(const BatchGetCollectionRequest& request) const
{
  AWS_OPERATION_GUARD(BatchGetCollection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetVpcEndpointOutcome OpenSearchServerlessClient::BatchGetVpcEndpoint(const BatchGetVpcEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(BatchGetVpcEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccessPolicyOutcome OpenSearchServerlessClient::CreateAccessPolicy(const CreateAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAccessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCollectionOutcome OpenSearchServerlessClient::CreateCollection(const CreateCollectionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateCollection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSecurityConfigOutcome OpenSearchServerlessClient::CreateSecurityConfig(const CreateSecurityConfigRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSecurityConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSecurityConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSecurityConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSecurityConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSecurityPolicyOutcome OpenSearchServerlessClient::CreateSecurityPolicy(const CreateSecurityPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSecurityPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSecurityPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSecurityPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSecurityPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVpcEndpointOutcome OpenSearchServerlessClient::CreateVpcEndpoint(const CreateVpcEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVpcEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccessPolicyOutcome OpenSearchServerlessClient::DeleteAccessPolicy(const DeleteAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAccessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCollectionOutcome OpenSearchServerlessClient::DeleteCollection(const DeleteCollectionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteCollection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSecurityConfigOutcome OpenSearchServerlessClient::DeleteSecurityConfig(const DeleteSecurityConfigRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSecurityConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSecurityConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSecurityConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSecurityConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSecurityPolicyOutcome OpenSearchServerlessClient::DeleteSecurityPolicy(const DeleteSecurityPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSecurityPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSecurityPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSecurityPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSecurityPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVpcEndpointOutcome OpenSearchServerlessClient::DeleteVpcEndpoint(const DeleteVpcEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVpcEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccessPolicyOutcome OpenSearchServerlessClient::GetAccessPolicy(const GetAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAccessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccountSettingsOutcome OpenSearchServerlessClient::GetAccountSettings(const GetAccountSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(GetAccountSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAccountSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPoliciesStatsOutcome OpenSearchServerlessClient::GetPoliciesStats(const GetPoliciesStatsRequest& request) const
{
  AWS_OPERATION_GUARD(GetPoliciesStats);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPoliciesStats, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPoliciesStats, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetPoliciesStatsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSecurityConfigOutcome OpenSearchServerlessClient::GetSecurityConfig(const GetSecurityConfigRequest& request) const
{
  AWS_OPERATION_GUARD(GetSecurityConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSecurityConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSecurityConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSecurityConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSecurityPolicyOutcome OpenSearchServerlessClient::GetSecurityPolicy(const GetSecurityPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetSecurityPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSecurityPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSecurityPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSecurityPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccessPoliciesOutcome OpenSearchServerlessClient::ListAccessPolicies(const ListAccessPoliciesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAccessPolicies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccessPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAccessPoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCollectionsOutcome OpenSearchServerlessClient::ListCollections(const ListCollectionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCollections);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCollections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCollections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCollectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityConfigsOutcome OpenSearchServerlessClient::ListSecurityConfigs(const ListSecurityConfigsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSecurityConfigs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecurityConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSecurityConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSecurityPoliciesOutcome OpenSearchServerlessClient::ListSecurityPolicies(const ListSecurityPoliciesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSecurityPolicies);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSecurityPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSecurityPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSecurityPoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome OpenSearchServerlessClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVpcEndpointsOutcome OpenSearchServerlessClient::ListVpcEndpoints(const ListVpcEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVpcEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVpcEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListVpcEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome OpenSearchServerlessClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome OpenSearchServerlessClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccessPolicyOutcome OpenSearchServerlessClient::UpdateAccessPolicy(const UpdateAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAccessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccountSettingsOutcome OpenSearchServerlessClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAccountSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAccountSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCollectionOutcome OpenSearchServerlessClient::UpdateCollection(const UpdateCollectionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateCollection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCollection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateCollectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecurityConfigOutcome OpenSearchServerlessClient::UpdateSecurityConfig(const UpdateSecurityConfigRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSecurityConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSecurityConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSecurityConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSecurityConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecurityPolicyOutcome OpenSearchServerlessClient::UpdateSecurityPolicy(const UpdateSecurityPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSecurityPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSecurityPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSecurityPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSecurityPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVpcEndpointOutcome OpenSearchServerlessClient::UpdateVpcEndpoint(const UpdateVpcEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVpcEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVpcEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateVpcEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

