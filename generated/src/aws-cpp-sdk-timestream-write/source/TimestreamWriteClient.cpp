﻿/**
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
#include <aws/core/platform/Environment.h>

#include <aws/timestream-write/TimestreamWriteClient.h>
#include <aws/timestream-write/TimestreamWriteErrorMarshaller.h>
#include <aws/timestream-write/TimestreamWriteEndpointProvider.h>
#include <aws/timestream-write/model/CreateDatabaseRequest.h>
#include <aws/timestream-write/model/CreateTableRequest.h>
#include <aws/timestream-write/model/DeleteDatabaseRequest.h>
#include <aws/timestream-write/model/DeleteTableRequest.h>
#include <aws/timestream-write/model/DescribeDatabaseRequest.h>
#include <aws/timestream-write/model/DescribeEndpointsRequest.h>
#include <aws/timestream-write/model/DescribeTableRequest.h>
#include <aws/timestream-write/model/ListDatabasesRequest.h>
#include <aws/timestream-write/model/ListTablesRequest.h>
#include <aws/timestream-write/model/ListTagsForResourceRequest.h>
#include <aws/timestream-write/model/TagResourceRequest.h>
#include <aws/timestream-write/model/UntagResourceRequest.h>
#include <aws/timestream-write/model/UpdateDatabaseRequest.h>
#include <aws/timestream-write/model/UpdateTableRequest.h>
#include <aws/timestream-write/model/WriteRecordsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TimestreamWrite;
using namespace Aws::TimestreamWrite::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* TimestreamWriteClient::SERVICE_NAME = "timestream";
const char* TimestreamWriteClient::ALLOCATION_TAG = "TimestreamWriteClient";

TimestreamWriteClient::TimestreamWriteClient(const TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration,
                                             std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

TimestreamWriteClient::TimestreamWriteClient(const AWSCredentials& credentials,
                                             std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider,
                                             const TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

TimestreamWriteClient::TimestreamWriteClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<TimestreamWriteEndpointProviderBase> endpointProvider,
                                             const TimestreamWrite::TimestreamWriteClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  TimestreamWriteClient::TimestreamWriteClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TimestreamWriteClient::TimestreamWriteClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TimestreamWriteClient::TimestreamWriteClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamWriteErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
TimestreamWriteClient::~TimestreamWriteClient()
{
}

std::shared_ptr<TimestreamWriteEndpointProviderBase>& TimestreamWriteClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void TimestreamWriteClient::init(const TimestreamWrite::TimestreamWriteClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Timestream Write");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void TimestreamWriteClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateDatabaseOutcome TimestreamWriteClient::CreateDatabase(const CreateDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("CreateDatabase", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("CreateDatabase", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateDatabase", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("CreateDatabase", "Failed to discover endpoints " << endpointOutcome.GetError());
        return CreateDatabaseOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "CreateDatabase" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return CreateDatabaseOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTableOutcome TimestreamWriteClient::CreateTable(const CreateTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("CreateTable", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("CreateTable", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("CreateTable", "Failed to discover endpoints " << endpointOutcome.GetError());
        return CreateTableOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "CreateTable" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return CreateTableOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatabaseOutcome TimestreamWriteClient::DeleteDatabase(const DeleteDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DeleteDatabase", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DeleteDatabase", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteDatabase", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DeleteDatabase", "Failed to discover endpoints " << endpointOutcome.GetError());
        return DeleteDatabaseOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "DeleteDatabase" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return DeleteDatabaseOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTableOutcome TimestreamWriteClient::DeleteTable(const DeleteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DeleteTable", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DeleteTable", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DeleteTable", "Failed to discover endpoints " << endpointOutcome.GetError());
        return DeleteTableOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "DeleteTable" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return DeleteTableOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatabaseOutcome TimestreamWriteClient::DescribeDatabase(const DescribeDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeDatabase", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DescribeDatabase", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeDatabase", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeDatabase", "Failed to discover endpoints " << endpointOutcome.GetError());
        return DescribeDatabaseOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "DescribeDatabase" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return DescribeDatabaseOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointsOutcome TimestreamWriteClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableOutcome TimestreamWriteClient::DescribeTable(const DescribeTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeTable", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DescribeTable", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeTable", "Failed to discover endpoints " << endpointOutcome.GetError());
        return DescribeTableOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "DescribeTable" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return DescribeTableOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatabasesOutcome TimestreamWriteClient::ListDatabases(const ListDatabasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListDatabases", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("ListDatabases", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListDatabases", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListDatabases", "Failed to discover endpoints " << endpointOutcome.GetError());
        return ListDatabasesOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "ListDatabases" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return ListDatabasesOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatabasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTablesOutcome TimestreamWriteClient::ListTables(const ListTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListTables", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("ListTables", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListTables", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListTables", "Failed to discover endpoints " << endpointOutcome.GetError());
        return ListTablesOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "ListTables" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return ListTablesOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome TimestreamWriteClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListTagsForResource", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("ListTagsForResource", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListTagsForResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListTagsForResource", "Failed to discover endpoints " << endpointOutcome.GetError());
        return ListTagsForResourceOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "ListTagsForResource" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return ListTagsForResourceOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome TimestreamWriteClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("TagResource", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("TagResource", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("TagResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("TagResource", "Failed to discover endpoints " << endpointOutcome.GetError());
        return TagResourceOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "TagResource" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return TagResourceOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome TimestreamWriteClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UntagResource", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UntagResource", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UntagResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UntagResource", "Failed to discover endpoints " << endpointOutcome.GetError());
        return UntagResourceOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "UntagResource" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return UntagResourceOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatabaseOutcome TimestreamWriteClient::UpdateDatabase(const UpdateDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateDatabase", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UpdateDatabase", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateDatabase", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateDatabase", "Failed to discover endpoints " << endpointOutcome.GetError());
        return UpdateDatabaseOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "UpdateDatabase" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return UpdateDatabaseOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableOutcome TimestreamWriteClient::UpdateTable(const UpdateTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateTable", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UpdateTable", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateTable", "Failed to discover endpoints " << endpointOutcome.GetError());
        return UpdateTableOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "UpdateTable" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return UpdateTableOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

WriteRecordsOutcome TimestreamWriteClient::WriteRecords(const WriteRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, WriteRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value();
  if (enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("WriteRecords", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE("WriteRecords", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("WriteRecords", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("WriteRecords", "Failed to discover endpoints " << endpointOutcome.GetError());
        return WriteRecordsOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "WriteRecords" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return WriteRecordsOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, WriteRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return WriteRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

