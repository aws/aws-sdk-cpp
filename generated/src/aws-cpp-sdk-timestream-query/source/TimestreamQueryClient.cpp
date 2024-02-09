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

#include <aws/timestream-query/TimestreamQueryClient.h>
#include <aws/timestream-query/TimestreamQueryErrorMarshaller.h>
#include <aws/timestream-query/TimestreamQueryEndpointProvider.h>
#include <aws/timestream-query/model/CancelQueryRequest.h>
#include <aws/timestream-query/model/CreateScheduledQueryRequest.h>
#include <aws/timestream-query/model/DeleteScheduledQueryRequest.h>
#include <aws/timestream-query/model/DescribeEndpointsRequest.h>
#include <aws/timestream-query/model/DescribeScheduledQueryRequest.h>
#include <aws/timestream-query/model/ExecuteScheduledQueryRequest.h>
#include <aws/timestream-query/model/ListScheduledQueriesRequest.h>
#include <aws/timestream-query/model/ListTagsForResourceRequest.h>
#include <aws/timestream-query/model/PrepareQueryRequest.h>
#include <aws/timestream-query/model/QueryRequest.h>
#include <aws/timestream-query/model/TagResourceRequest.h>
#include <aws/timestream-query/model/UntagResourceRequest.h>
#include <aws/timestream-query/model/UpdateScheduledQueryRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TimestreamQuery;
using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace TimestreamQuery
  {
    const char SERVICE_NAME[] = "timestream";
    const char ALLOCATION_TAG[] = "TimestreamQueryClient";
  }
}
const char* TimestreamQueryClient::GetServiceName() {return SERVICE_NAME;}
const char* TimestreamQueryClient::GetAllocationTag() {return ALLOCATION_TAG;}

TimestreamQueryClient::TimestreamQueryClient(const TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration,
                                             std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TimestreamQueryClient::TimestreamQueryClient(const AWSCredentials& credentials,
                                             std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider,
                                             const TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TimestreamQueryClient::TimestreamQueryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider,
                                             const TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  TimestreamQueryClient::TimestreamQueryClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TimestreamQueryClient::TimestreamQueryClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TimestreamQueryClient::TimestreamQueryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
TimestreamQueryClient::~TimestreamQueryClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<TimestreamQueryEndpointProviderBase>& TimestreamQueryClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void TimestreamQueryClient::init(const TimestreamQuery::TimestreamQueryClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Timestream Query");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void TimestreamQueryClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelQueryOutcome TimestreamQueryClient::CancelQuery(const CancelQueryRequest& request) const
{
  AWS_OPERATION_GUARD(CancelQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CancelQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelQueryOutcome>(
    [&]()-> CancelQueryOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("CancelQuery", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("CancelQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("CancelQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("CancelQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return CancelQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "CancelQuery" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return CancelQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return CancelQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateScheduledQueryOutcome TimestreamQueryClient::CreateScheduledQuery(const CreateScheduledQueryRequest& request) const
{
  AWS_OPERATION_GUARD(CreateScheduledQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateScheduledQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateScheduledQueryOutcome>(
    [&]()-> CreateScheduledQueryOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("CreateScheduledQuery", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("CreateScheduledQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("CreateScheduledQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("CreateScheduledQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return CreateScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "CreateScheduledQuery" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return CreateScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return CreateScheduledQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteScheduledQueryOutcome TimestreamQueryClient::DeleteScheduledQuery(const DeleteScheduledQueryRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteScheduledQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteScheduledQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteScheduledQueryOutcome>(
    [&]()-> DeleteScheduledQueryOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DeleteScheduledQuery", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("DeleteScheduledQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("DeleteScheduledQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("DeleteScheduledQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return DeleteScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "DeleteScheduledQuery" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return DeleteScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DeleteScheduledQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeEndpointsOutcome TimestreamQueryClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
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

DescribeScheduledQueryOutcome TimestreamQueryClient::DescribeScheduledQuery(const DescribeScheduledQueryRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeScheduledQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeScheduledQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeScheduledQueryOutcome>(
    [&]()-> DescribeScheduledQueryOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeScheduledQuery", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("DescribeScheduledQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("DescribeScheduledQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("DescribeScheduledQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return DescribeScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "DescribeScheduledQuery" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return DescribeScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeScheduledQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExecuteScheduledQueryOutcome TimestreamQueryClient::ExecuteScheduledQuery(const ExecuteScheduledQueryRequest& request) const
{
  AWS_OPERATION_GUARD(ExecuteScheduledQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ExecuteScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExecuteScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExecuteScheduledQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExecuteScheduledQueryOutcome>(
    [&]()-> ExecuteScheduledQueryOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("ExecuteScheduledQuery", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("ExecuteScheduledQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("ExecuteScheduledQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("ExecuteScheduledQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return ExecuteScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "ExecuteScheduledQuery" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return ExecuteScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ExecuteScheduledQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListScheduledQueriesOutcome TimestreamQueryClient::ListScheduledQueries(const ListScheduledQueriesRequest& request) const
{
  AWS_OPERATION_GUARD(ListScheduledQueries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListScheduledQueries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListScheduledQueries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListScheduledQueries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListScheduledQueries",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListScheduledQueriesOutcome>(
    [&]()-> ListScheduledQueriesOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("ListScheduledQueries", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("ListScheduledQueries", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("ListScheduledQueries", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("ListScheduledQueries", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return ListScheduledQueriesOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "ListScheduledQueries" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return ListScheduledQueriesOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListScheduledQueries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListScheduledQueriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome TimestreamQueryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
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
                  return ListTagsForResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "ListTagsForResource" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return ListTagsForResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
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

PrepareQueryOutcome TimestreamQueryClient::PrepareQuery(const PrepareQueryRequest& request) const
{
  AWS_OPERATION_GUARD(PrepareQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PrepareQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PrepareQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PrepareQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PrepareQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PrepareQueryOutcome>(
    [&]()-> PrepareQueryOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("PrepareQuery", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("PrepareQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("PrepareQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("PrepareQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return PrepareQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "PrepareQuery" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return PrepareQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PrepareQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return PrepareQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

QueryOutcome TimestreamQueryClient::Query(const QueryRequest& request) const
{
  AWS_OPERATION_GUARD(Query);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Query, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, Query, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Query, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Query",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<QueryOutcome>(
    [&]()-> QueryOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("Query", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("Query", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("Query", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("Query", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return QueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "Query" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return QueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Query, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return QueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome TimestreamQueryClient::TagResource(const TagResourceRequest& request) const
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
                  return TagResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "TagResource" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return TagResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
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

UntagResourceOutcome TimestreamQueryClient::UntagResource(const UntagResourceRequest& request) const
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
                  return UntagResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "UntagResource" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return UntagResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
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

UpdateScheduledQueryOutcome TimestreamQueryClient::UpdateScheduledQuery(const UpdateScheduledQueryRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateScheduledQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateScheduledQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateScheduledQueryOutcome>(
    [&]()-> UpdateScheduledQueryOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UpdateScheduledQuery", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("UpdateScheduledQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("UpdateScheduledQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("UpdateScheduledQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
                  return UpdateScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
              }
          }
      }
      else
      {
          Aws::String errorMessage = R"(Unable to perform "UpdateScheduledQuery" without endpoint discovery. )"
              R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
              R"(your config file's variable "endpoint_discovery_enabled" and )"
              R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
          return UpdateScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateScheduledQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

