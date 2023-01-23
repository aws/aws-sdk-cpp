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

#include <aws/mq/MQClient.h>
#include <aws/mq/MQErrorMarshaller.h>
#include <aws/mq/MQEndpointProvider.h>
#include <aws/mq/model/CreateBrokerRequest.h>
#include <aws/mq/model/CreateConfigurationRequest.h>
#include <aws/mq/model/CreateTagsRequest.h>
#include <aws/mq/model/CreateUserRequest.h>
#include <aws/mq/model/DeleteBrokerRequest.h>
#include <aws/mq/model/DeleteTagsRequest.h>
#include <aws/mq/model/DeleteUserRequest.h>
#include <aws/mq/model/DescribeBrokerRequest.h>
#include <aws/mq/model/DescribeBrokerEngineTypesRequest.h>
#include <aws/mq/model/DescribeBrokerInstanceOptionsRequest.h>
#include <aws/mq/model/DescribeConfigurationRequest.h>
#include <aws/mq/model/DescribeConfigurationRevisionRequest.h>
#include <aws/mq/model/DescribeUserRequest.h>
#include <aws/mq/model/ListBrokersRequest.h>
#include <aws/mq/model/ListConfigurationRevisionsRequest.h>
#include <aws/mq/model/ListConfigurationsRequest.h>
#include <aws/mq/model/ListTagsRequest.h>
#include <aws/mq/model/ListUsersRequest.h>
#include <aws/mq/model/RebootBrokerRequest.h>
#include <aws/mq/model/UpdateBrokerRequest.h>
#include <aws/mq/model/UpdateConfigurationRequest.h>
#include <aws/mq/model/UpdateUserRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MQ;
using namespace Aws::MQ::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MQClient::SERVICE_NAME = "mq";
const char* MQClient::ALLOCATION_TAG = "MQClient";

MQClient::MQClient(const MQ::MQClientConfiguration& clientConfiguration,
                   std::shared_ptr<MQEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MQClient::MQClient(const AWSCredentials& credentials,
                   std::shared_ptr<MQEndpointProviderBase> endpointProvider,
                   const MQ::MQClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MQClient::MQClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<MQEndpointProviderBase> endpointProvider,
                   const MQ::MQClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MQClient::MQClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MQClient::MQClient(const AWSCredentials& credentials,
                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MQClient::MQClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MQClient::~MQClient()
{
}

std::shared_ptr<MQEndpointProviderBase>& MQClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MQClient::init(const MQ::MQClientConfiguration& config)
{
  AWSClient::SetServiceClientName("mq");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MQClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateBrokerOutcome MQClient::CreateBroker(const CreateBrokerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBroker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBroker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers");
  return CreateBrokerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfigurationOutcome MQClient::CreateConfiguration(const CreateConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations");
  return CreateConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTagsOutcome MQClient::CreateTags(const CreateTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTags", "Required field: ResourceArn, is not set");
    return CreateTagsOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return CreateTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcome MQClient::CreateUser(const CreateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrokerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: BrokerId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  if (!request.UsernameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: Username, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Username]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsername());
  return CreateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBrokerOutcome MQClient::DeleteBroker(const DeleteBrokerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBroker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrokerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBroker", "Required field: BrokerId, is not set");
    return DeleteBrokerOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBroker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  return DeleteBrokerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagsOutcome MQClient::DeleteTags(const DeleteTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: ResourceArn, is not set");
    return DeleteTagsOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: TagKeys, is not set");
    return DeleteTagsOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return DeleteTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcome MQClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrokerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: BrokerId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  if (!request.UsernameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: Username, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Username]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsername());
  return DeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribeBrokerOutcome MQClient::DescribeBroker(const DescribeBrokerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBroker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrokerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBroker", "Required field: BrokerId, is not set");
    return DescribeBrokerOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBroker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  return DescribeBrokerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBrokerEngineTypesOutcome MQClient::DescribeBrokerEngineTypes(const DescribeBrokerEngineTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBrokerEngineTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBrokerEngineTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/broker-engine-types");
  return DescribeBrokerEngineTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBrokerInstanceOptionsOutcome MQClient::DescribeBrokerInstanceOptions(const DescribeBrokerInstanceOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBrokerInstanceOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBrokerInstanceOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/broker-instance-options");
  return DescribeBrokerInstanceOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigurationOutcome MQClient::DescribeConfiguration(const DescribeConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeConfiguration", "Required field: ConfigurationId, is not set");
    return DescribeConfigurationOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationId());
  return DescribeConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeConfigurationRevisionOutcome MQClient::DescribeConfigurationRevision(const DescribeConfigurationRevisionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConfigurationRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeConfigurationRevision", "Required field: ConfigurationId, is not set");
    return DescribeConfigurationRevisionOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationId]", false));
  }
  if (!request.ConfigurationRevisionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeConfigurationRevision", "Required field: ConfigurationRevision, is not set");
    return DescribeConfigurationRevisionOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationRevision]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConfigurationRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationRevision());
  return DescribeConfigurationRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserOutcome MQClient::DescribeUser(const DescribeUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrokerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: BrokerId, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  if (!request.UsernameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: Username, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Username]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsername());
  return DescribeUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBrokersOutcome MQClient::ListBrokers(const ListBrokersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBrokers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBrokers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers");
  return ListBrokersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfigurationRevisionsOutcome MQClient::ListConfigurationRevisions(const ListConfigurationRevisionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfigurationRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConfigurationRevisions", "Required field: ConfigurationId, is not set");
    return ListConfigurationRevisionsOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConfigurationRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  return ListConfigurationRevisionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfigurationsOutcome MQClient::ListConfigurations(const ListConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations");
  return ListConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcome MQClient::ListTags(const ListTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ResourceArn, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcome MQClient::ListUsers(const ListUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrokerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: BrokerId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  return ListUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

RebootBrokerOutcome MQClient::RebootBroker(const RebootBrokerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootBroker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrokerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RebootBroker", "Required field: BrokerId, is not set");
    return RebootBrokerOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootBroker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reboot");
  return RebootBrokerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBrokerOutcome MQClient::UpdateBroker(const UpdateBrokerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBroker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrokerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBroker", "Required field: BrokerId, is not set");
    return UpdateBrokerOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBroker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  return UpdateBrokerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfigurationOutcome MQClient::UpdateConfiguration(const UpdateConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfiguration", "Required field: ConfigurationId, is not set");
    return UpdateConfigurationOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationId());
  return UpdateConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserOutcome MQClient::UpdateUser(const UpdateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrokerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: BrokerId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  if (!request.UsernameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: Username, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Username]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsername());
  return UpdateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

