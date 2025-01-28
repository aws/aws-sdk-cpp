/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
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

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

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
    const char ALLOCATION_TAG[] = "TimestreamQueryClient";
    const char SERVICE_NAME[] = "timestream";
  }
}
const char* TimestreamQueryClient::GetServiceName() {return SERVICE_NAME;}
const char* TimestreamQueryClient::GetAllocationTag() {return ALLOCATION_TAG;}

TimestreamQueryClient::TimestreamQueryClient(const TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration,
                           std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Timestream Query",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

TimestreamQueryClient::TimestreamQueryClient(const AWSCredentials& credentials,
                           std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider,
                           const TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Timestream Query",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

TimestreamQueryClient::TimestreamQueryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<TimestreamQueryEndpointProviderBase> endpointProvider,
                           const TimestreamQuery::TimestreamQueryClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Timestream Query",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
TimestreamQueryClient::TimestreamQueryClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Timestream Query",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

TimestreamQueryClient::TimestreamQueryClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Timestream Query",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

TimestreamQueryClient::TimestreamQueryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Timestream Query",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<TimestreamQueryEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

TimestreamQueryClient::~TimestreamQueryClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<TimestreamQueryEndpointProviderBase>& TimestreamQueryClient::accessEndpointProvider()
{
  return m_endpointProvider;
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelQueryOutcome>(
    [&]()-> CancelQueryOutcome {
      return CancelQueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateScheduledQueryOutcome TimestreamQueryClient::CreateScheduledQuery(const CreateScheduledQueryRequest& request) const
{
  AWS_OPERATION_GUARD(CreateScheduledQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateScheduledQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateScheduledQueryOutcome>(
    [&]()-> CreateScheduledQueryOutcome {
      return CreateScheduledQueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteScheduledQueryOutcome TimestreamQueryClient::DeleteScheduledQuery(const DeleteScheduledQueryRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteScheduledQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteScheduledQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteScheduledQueryOutcome>(
    [&]()-> DeleteScheduledQueryOutcome {
      return DeleteScheduledQueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAccountSettingsOutcome TimestreamQueryClient::DescribeAccountSettings(const DescribeAccountSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAccountSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeAccountSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeAccountSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeAccountSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeAccountSettingsOutcome>(
    [&]()-> DescribeAccountSettingsOutcome {
      return DescribeAccountSettingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeEndpointsOutcome TimestreamQueryClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeEndpoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeEndpointsOutcome>(
    [&]()-> DescribeEndpointsOutcome {
      return DescribeEndpointsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeScheduledQueryOutcome TimestreamQueryClient::DescribeScheduledQuery(const DescribeScheduledQueryRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeScheduledQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeScheduledQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeScheduledQueryOutcome>(
    [&]()-> DescribeScheduledQueryOutcome {
      return DescribeScheduledQueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExecuteScheduledQueryOutcome TimestreamQueryClient::ExecuteScheduledQuery(const ExecuteScheduledQueryRequest& request) const
{
  AWS_OPERATION_GUARD(ExecuteScheduledQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ExecuteScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExecuteScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExecuteScheduledQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExecuteScheduledQueryOutcome>(
    [&]()-> ExecuteScheduledQueryOutcome {
      return ExecuteScheduledQueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListScheduledQueriesOutcome TimestreamQueryClient::ListScheduledQueries(const ListScheduledQueriesRequest& request) const
{
  AWS_OPERATION_GUARD(ListScheduledQueries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListScheduledQueries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListScheduledQueries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListScheduledQueries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListScheduledQueries",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListScheduledQueriesOutcome>(
    [&]()-> ListScheduledQueriesOutcome {
      return ListScheduledQueriesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome TimestreamQueryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PrepareQueryOutcome TimestreamQueryClient::PrepareQuery(const PrepareQueryRequest& request) const
{
  AWS_OPERATION_GUARD(PrepareQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PrepareQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PrepareQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PrepareQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PrepareQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PrepareQueryOutcome>(
    [&]()-> PrepareQueryOutcome {
      return PrepareQueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

QueryOutcome TimestreamQueryClient::Query(const QueryRequest& request) const
{
  AWS_OPERATION_GUARD(Query);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Query, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, Query, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Query, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Query",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<QueryOutcome>(
    [&]()-> QueryOutcome {
      return QueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome TimestreamQueryClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome TimestreamQueryClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAccountSettingsOutcome TimestreamQueryClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAccountSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAccountSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAccountSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAccountSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAccountSettingsOutcome>(
    [&]()-> UpdateAccountSettingsOutcome {
      return UpdateAccountSettingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateScheduledQueryOutcome TimestreamQueryClient::UpdateScheduledQuery(const UpdateScheduledQueryRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateScheduledQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateScheduledQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateScheduledQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateScheduledQuery",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateScheduledQueryOutcome>(
    [&]()-> UpdateScheduledQueryOutcome {
      return UpdateScheduledQueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, true);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


void TimestreamQueryClient::OptionallyUpdateDescribeEndpointsCache(Aws::Endpoint::AWSEndpoint& resolvedEndpoint,
    const Aws::String& operationName,
    const Aws::String& endpointKey,
    const Aws::TimestreamQuery::Model::DescribeEndpointsRequest& endpointRequest,
    bool enforceDiscovery) const
{
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
  if (enableEndpointDiscovery)
  {
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
       AWS_LOGSTREAM_TRACE(operationName.c_str(), "Making request to cached endpoint: " << endpoint);
       endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
       resolvedEndpoint.SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE(operationName.c_str(), "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
         const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
         m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
         endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
         AWS_LOGSTREAM_TRACE(operationName.c_str(), "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
         resolvedEndpoint.SetURI(endpoint);
      }
      else
      {
         if(enforceDiscovery)
         {
            AWS_LOGSTREAM_ERROR(operationName.c_str(), "Failed to discover endpoints " << endpointOutcome.GetError());
         }
         else
         {
            AWS_LOGSTREAM_ERROR(operationName.c_str(), "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
         }
      }
    }
  }
}
