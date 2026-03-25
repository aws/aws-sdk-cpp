/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/timestream-query/TimestreamQueryClient.h>
#include <aws/timestream-query/TimestreamQueryEndpointProvider.h>
#include <aws/timestream-query/TimestreamQueryErrorMarshaller.h>
#include <aws/timestream-query/model/CancelQueryRequest.h>
#include <aws/timestream-query/model/CreateScheduledQueryRequest.h>
#include <aws/timestream-query/model/DeleteScheduledQueryRequest.h>
#include <aws/timestream-query/model/DescribeAccountSettingsRequest.h>
#include <aws/timestream-query/model/DescribeEndpointsRequest.h>
#include <aws/timestream-query/model/DescribeScheduledQueryRequest.h>
#include <aws/timestream-query/model/ExecuteScheduledQueryRequest.h>
#include <aws/timestream-query/model/ListScheduledQueriesRequest.h>
#include <aws/timestream-query/model/ListTagsForResourceRequest.h>
#include <aws/timestream-query/model/PrepareQueryRequest.h>
#include <aws/timestream-query/model/QueryRequest.h>
#include <aws/timestream-query/model/TagResourceRequest.h>
#include <aws/timestream-query/model/UntagResourceRequest.h>
#include <aws/timestream-query/model/UpdateAccountSettingsRequest.h>
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

namespace Aws {
namespace TimestreamQuery {
const char SERVICE_NAME[] = "timestream";
const char ALLOCATION_TAG[] = "TimestreamQueryClient";
}  // namespace TimestreamQuery
}  // namespace Aws
const char* TimestreamQueryClient::GetServiceName() { return SERVICE_NAME; }
const char* TimestreamQueryClient::GetAllocationTag() { return ALLOCATION_TAG; }

TimestreamQueryClient::TimestreamQueryClient(const TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration,
                                             std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamQueryClient::TimestreamQueryClient(const AWSCredentials& credentials,
                                             std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider,
                                             const TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamQueryClient::TimestreamQueryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider,
                                             const TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
TimestreamQueryClient::TimestreamQueryClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamQueryClient::TimestreamQueryClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

TimestreamQueryClient::TimestreamQueryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
TimestreamQueryClient::~TimestreamQueryClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<TimestreamQueryEndpointProviderBase>& TimestreamQueryClient::accessEndpointProvider() { return m_endpointProvider; }

void TimestreamQueryClient::init(const TimestreamQuery::TimestreamQueryClientConfiguration& config) {
  AWSClient::SetServiceClientName("Timestream Query");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "timestream");
}

void TimestreamQueryClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
TimestreamQueryClient::InvokeOperationOutcome TimestreamQueryClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                            Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CancelQueryOutcome TimestreamQueryClient::CancelQuery(const CancelQueryRequest& request) const {
  return CancelQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateScheduledQueryOutcome TimestreamQueryClient::CreateScheduledQuery(const CreateScheduledQueryRequest& request) const {
  return CreateScheduledQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteScheduledQueryOutcome TimestreamQueryClient::DeleteScheduledQuery(const DeleteScheduledQueryRequest& request) const {
  return DeleteScheduledQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountSettingsOutcome TimestreamQueryClient::DescribeAccountSettings(const DescribeAccountSettingsRequest& request) const {
  return DescribeAccountSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEndpointsOutcome TimestreamQueryClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const {
  return DescribeEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScheduledQueryOutcome TimestreamQueryClient::DescribeScheduledQuery(const DescribeScheduledQueryRequest& request) const {
  return DescribeScheduledQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExecuteScheduledQueryOutcome TimestreamQueryClient::ExecuteScheduledQuery(const ExecuteScheduledQueryRequest& request) const {
  return ExecuteScheduledQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListScheduledQueriesOutcome TimestreamQueryClient::ListScheduledQueries(const ListScheduledQueriesRequest& request) const {
  return ListScheduledQueriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome TimestreamQueryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PrepareQueryOutcome TimestreamQueryClient::PrepareQuery(const PrepareQueryRequest& request) const {
  return PrepareQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

QueryOutcome TimestreamQueryClient::Query(const QueryRequest& request) const {
  return QueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome TimestreamQueryClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome TimestreamQueryClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAccountSettingsOutcome TimestreamQueryClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const {
  return UpdateAccountSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateScheduledQueryOutcome TimestreamQueryClient::UpdateScheduledQuery(const UpdateScheduledQueryRequest& request) const {
  return UpdateScheduledQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
