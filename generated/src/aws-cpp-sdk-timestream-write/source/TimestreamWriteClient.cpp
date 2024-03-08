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
#include <aws/core/platform/Environment.h>

#include <aws/timestream-write/TimestreamWriteClient.h>
#include <aws/timestream-write/TimestreamWriteErrorMarshaller.h>
#include <aws/timestream-write/TimestreamWriteEndpointProvider.h>
#include <aws/timestream-write/model/CreateBatchLoadTaskRequest.h>
#include <aws/timestream-write/model/CreateDatabaseRequest.h>
#include <aws/timestream-write/model/CreateTableRequest.h>
#include <aws/timestream-write/model/DeleteDatabaseRequest.h>
#include <aws/timestream-write/model/DeleteTableRequest.h>
#include <aws/timestream-write/model/DescribeBatchLoadTaskRequest.h>
#include <aws/timestream-write/model/DescribeDatabaseRequest.h>
#include <aws/timestream-write/model/DescribeEndpointsRequest.h>
#include <aws/timestream-write/model/DescribeTableRequest.h>
#include <aws/timestream-write/model/ListBatchLoadTasksRequest.h>
#include <aws/timestream-write/model/ListDatabasesRequest.h>
#include <aws/timestream-write/model/ListTablesRequest.h>
#include <aws/timestream-write/model/ListTagsForResourceRequest.h>
#include <aws/timestream-write/model/ResumeBatchLoadTaskRequest.h>
#include <aws/timestream-write/model/TagResourceRequest.h>
#include <aws/timestream-write/model/UntagResourceRequest.h>
#include <aws/timestream-write/model/UpdateDatabaseRequest.h>
#include <aws/timestream-write/model/UpdateTableRequest.h>
#include <aws/timestream-write/model/WriteRecordsRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TimestreamWrite;
using namespace Aws::TimestreamWrite::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace TimestreamWrite
  {
    const char SERVICE_NAME[] = "timestream";
    const char ALLOCATION_TAG[] = "TimestreamWriteClient";
  }
}
const char* TimestreamWriteClient::GetServiceName() {return SERVICE_NAME;}
const char* TimestreamWriteClient::GetAllocationTag() {return ALLOCATION_TAG;}

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
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG))
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
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG))
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
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TimestreamWriteEndpointProvider>(ALLOCATION_TAG))
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
  ShutdownSdkClient(this, -1);
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

CreateBatchLoadTaskOutcome TimestreamWriteClient::CreateBatchLoadTask(const CreateBatchLoadTaskRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBatchLoadTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBatchLoadTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBatchLoadTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBatchLoadTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBatchLoadTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBatchLoadTaskOutcome>(
    [&]()-> CreateBatchLoadTaskOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("CreateBatchLoadTask", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("CreateBatchLoadTask", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("CreateBatchLoadTask", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("CreateBatchLoadTask", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return CreateBatchLoadTaskOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "CreateBatchLoadTask" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return CreateBatchLoadTaskOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBatchLoadTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return CreateBatchLoadTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDatabaseOutcome TimestreamWriteClient::CreateDatabase(const CreateDatabaseRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDatabase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDatabase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDatabaseOutcome>(
    [&]()-> CreateDatabaseOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("CreateDatabase", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return CreateDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTableOutcome TimestreamWriteClient::CreateTable(const CreateTableRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTableOutcome>(
    [&]()-> CreateTableOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("CreateTable", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return CreateTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDatabaseOutcome TimestreamWriteClient::DeleteDatabase(const DeleteDatabaseRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDatabase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDatabase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDatabaseOutcome>(
    [&]()-> DeleteDatabaseOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DeleteDatabase", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DeleteDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableOutcome TimestreamWriteClient::DeleteTable(const DeleteTableRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableOutcome>(
    [&]()-> DeleteTableOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DeleteTable", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DeleteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBatchLoadTaskOutcome TimestreamWriteClient::DescribeBatchLoadTask(const DescribeBatchLoadTaskRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBatchLoadTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBatchLoadTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeBatchLoadTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBatchLoadTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBatchLoadTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBatchLoadTaskOutcome>(
    [&]()-> DescribeBatchLoadTaskOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeBatchLoadTask", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("DescribeBatchLoadTask", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("DescribeBatchLoadTask", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("DescribeBatchLoadTask", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return DescribeBatchLoadTaskOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "DescribeBatchLoadTask" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return DescribeBatchLoadTaskOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBatchLoadTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeBatchLoadTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeDatabaseOutcome TimestreamWriteClient::DescribeDatabase(const DescribeDatabaseRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeDatabase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeDatabase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeDatabaseOutcome>(
    [&]()-> DescribeDatabaseOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeDatabase", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeEndpointsOutcome TimestreamWriteClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeEndpoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeEndpointsOutcome>(
    [&]()-> DescribeEndpointsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTableOutcome TimestreamWriteClient::DescribeTable(const DescribeTableRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTableOutcome>(
    [&]()-> DescribeTableOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeTable", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBatchLoadTasksOutcome TimestreamWriteClient::ListBatchLoadTasks(const ListBatchLoadTasksRequest& request) const
{
  AWS_OPERATION_GUARD(ListBatchLoadTasks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBatchLoadTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBatchLoadTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBatchLoadTasks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBatchLoadTasks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBatchLoadTasksOutcome>(
    [&]()-> ListBatchLoadTasksOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("ListBatchLoadTasks", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("ListBatchLoadTasks", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("ListBatchLoadTasks", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("ListBatchLoadTasks", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return ListBatchLoadTasksOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "ListBatchLoadTasks" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return ListBatchLoadTasksOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBatchLoadTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListBatchLoadTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDatabasesOutcome TimestreamWriteClient::ListDatabases(const ListDatabasesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDatabases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDatabases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDatabases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDatabases",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDatabasesOutcome>(
    [&]()-> ListDatabasesOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("ListDatabases", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListDatabasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTablesOutcome TimestreamWriteClient::ListTables(const ListTablesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTables",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTablesOutcome>(
    [&]()-> ListTablesOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("ListTables", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome TimestreamWriteClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("ListTagsForResource", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ResumeBatchLoadTaskOutcome TimestreamWriteClient::ResumeBatchLoadTask(const ResumeBatchLoadTaskRequest& request) const
{
  AWS_OPERATION_GUARD(ResumeBatchLoadTask);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResumeBatchLoadTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ResumeBatchLoadTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ResumeBatchLoadTask, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ResumeBatchLoadTask",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ResumeBatchLoadTaskOutcome>(
    [&]()-> ResumeBatchLoadTaskOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("ResumeBatchLoadTask", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("ResumeBatchLoadTask", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("ResumeBatchLoadTask", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("ResumeBatchLoadTask", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return ResumeBatchLoadTaskOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "ResumeBatchLoadTask" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return ResumeBatchLoadTaskOutcome(Aws::Client::AWSError<TimestreamWriteErrors>(TimestreamWriteErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResumeBatchLoadTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ResumeBatchLoadTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome TimestreamWriteClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("TagResource", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome TimestreamWriteClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UntagResource", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDatabaseOutcome TimestreamWriteClient::UpdateDatabase(const UpdateDatabaseRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDatabase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDatabase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDatabase",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDatabaseOutcome>(
    [&]()-> UpdateDatabaseOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UpdateDatabase", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTableOutcome TimestreamWriteClient::UpdateTable(const UpdateTableRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTableOutcome>(
    [&]()-> UpdateTableOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UpdateTable", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

WriteRecordsOutcome TimestreamWriteClient::WriteRecords(const WriteRecordsRequest& request) const
{
  AWS_OPERATION_GUARD(WriteRecords);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, WriteRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, WriteRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, WriteRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".WriteRecords",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<WriteRecordsOutcome>(
    [&]()-> WriteRecordsOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("WriteRecords", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, WriteRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return WriteRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

