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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/neptunedata/NeptunedataClient.h>
#include <aws/neptunedata/NeptunedataEndpointProvider.h>
#include <aws/neptunedata/NeptunedataErrorMarshaller.h>
#include <aws/neptunedata/model/CancelGremlinQueryRequest.h>
#include <aws/neptunedata/model/CancelLoaderJobRequest.h>
#include <aws/neptunedata/model/CancelMLDataProcessingJobRequest.h>
#include <aws/neptunedata/model/CancelMLModelTrainingJobRequest.h>
#include <aws/neptunedata/model/CancelMLModelTransformJobRequest.h>
#include <aws/neptunedata/model/CancelOpenCypherQueryRequest.h>
#include <aws/neptunedata/model/CreateMLEndpointRequest.h>
#include <aws/neptunedata/model/DeleteMLEndpointRequest.h>
#include <aws/neptunedata/model/DeletePropertygraphStatisticsRequest.h>
#include <aws/neptunedata/model/DeleteSparqlStatisticsRequest.h>
#include <aws/neptunedata/model/ExecuteFastResetRequest.h>
#include <aws/neptunedata/model/ExecuteGremlinExplainQueryRequest.h>
#include <aws/neptunedata/model/ExecuteGremlinProfileQueryRequest.h>
#include <aws/neptunedata/model/ExecuteGremlinQueryRequest.h>
#include <aws/neptunedata/model/ExecuteOpenCypherExplainQueryRequest.h>
#include <aws/neptunedata/model/ExecuteOpenCypherQueryRequest.h>
#include <aws/neptunedata/model/GetEngineStatusRequest.h>
#include <aws/neptunedata/model/GetGremlinQueryStatusRequest.h>
#include <aws/neptunedata/model/GetLoaderJobStatusRequest.h>
#include <aws/neptunedata/model/GetMLDataProcessingJobRequest.h>
#include <aws/neptunedata/model/GetMLEndpointRequest.h>
#include <aws/neptunedata/model/GetMLModelTrainingJobRequest.h>
#include <aws/neptunedata/model/GetMLModelTransformJobRequest.h>
#include <aws/neptunedata/model/GetOpenCypherQueryStatusRequest.h>
#include <aws/neptunedata/model/GetPropertygraphStatisticsRequest.h>
#include <aws/neptunedata/model/GetPropertygraphStreamRequest.h>
#include <aws/neptunedata/model/GetPropertygraphSummaryRequest.h>
#include <aws/neptunedata/model/GetRDFGraphSummaryRequest.h>
#include <aws/neptunedata/model/GetSparqlStatisticsRequest.h>
#include <aws/neptunedata/model/GetSparqlStreamRequest.h>
#include <aws/neptunedata/model/ListGremlinQueriesRequest.h>
#include <aws/neptunedata/model/ListLoaderJobsRequest.h>
#include <aws/neptunedata/model/ListMLDataProcessingJobsRequest.h>
#include <aws/neptunedata/model/ListMLEndpointsRequest.h>
#include <aws/neptunedata/model/ListMLModelTrainingJobsRequest.h>
#include <aws/neptunedata/model/ListMLModelTransformJobsRequest.h>
#include <aws/neptunedata/model/ListOpenCypherQueriesRequest.h>
#include <aws/neptunedata/model/ManagePropertygraphStatisticsRequest.h>
#include <aws/neptunedata/model/ManageSparqlStatisticsRequest.h>
#include <aws/neptunedata/model/StartLoaderJobRequest.h>
#include <aws/neptunedata/model/StartMLDataProcessingJobRequest.h>
#include <aws/neptunedata/model/StartMLModelTrainingJobRequest.h>
#include <aws/neptunedata/model/StartMLModelTransformJobRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::neptunedata;
using namespace Aws::neptunedata::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace neptunedata {
const char SERVICE_NAME[] = "neptune-db";
const char ALLOCATION_TAG[] = "NeptunedataClient";
}  // namespace neptunedata
}  // namespace Aws
const char* NeptunedataClient::GetServiceName() { return SERVICE_NAME; }
const char* NeptunedataClient::GetAllocationTag() { return ALLOCATION_TAG; }

NeptunedataClient::NeptunedataClient(const neptunedata::NeptunedataClientConfiguration& clientConfiguration,
                                     std::shared_ptr<NeptunedataEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptunedataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NeptunedataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptunedataClient::NeptunedataClient(const AWSCredentials& credentials, std::shared_ptr<NeptunedataEndpointProviderBase> endpointProvider,
                                     const neptunedata::NeptunedataClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptunedataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NeptunedataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptunedataClient::NeptunedataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<NeptunedataEndpointProviderBase> endpointProvider,
                                     const neptunedata::NeptunedataClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptunedataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NeptunedataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
NeptunedataClient::NeptunedataClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptunedataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NeptunedataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptunedataClient::NeptunedataClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptunedataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NeptunedataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptunedataClient::NeptunedataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptunedataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NeptunedataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
NeptunedataClient::~NeptunedataClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<NeptunedataEndpointProviderBase>& NeptunedataClient::accessEndpointProvider() { return m_endpointProvider; }

void NeptunedataClient::init(const neptunedata::NeptunedataClientConfiguration& config) {
  AWSClient::SetServiceClientName("neptunedata");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "neptune-db");
}

void NeptunedataClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
NeptunedataClient::InvokeOperationOutcome NeptunedataClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CancelGremlinQueryOutcome NeptunedataClient::CancelGremlinQuery(const CancelGremlinQueryRequest& request) const {
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelGremlinQuery", "Required field: QueryId, is not set");
    return CancelGremlinQueryOutcome(Aws::Client::AWSError<NeptunedataErrors>(NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gremlin/status/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
  };

  return CancelGremlinQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CancelLoaderJobOutcome NeptunedataClient::CancelLoaderJob(const CancelLoaderJobRequest& request) const {
  if (!request.LoadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelLoaderJob", "Required field: LoadId, is not set");
    return CancelLoaderJobOutcome(Aws::Client::AWSError<NeptunedataErrors>(NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [LoadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/loader/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoadId());
  };

  return CancelLoaderJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CancelMLDataProcessingJobOutcome NeptunedataClient::CancelMLDataProcessingJob(const CancelMLDataProcessingJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelMLDataProcessingJob", "Required field: Id, is not set");
    return CancelMLDataProcessingJobOutcome(Aws::Client::AWSError<NeptunedataErrors>(
        NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/dataprocessing/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return CancelMLDataProcessingJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CancelMLModelTrainingJobOutcome NeptunedataClient::CancelMLModelTrainingJob(const CancelMLModelTrainingJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelMLModelTrainingJob", "Required field: Id, is not set");
    return CancelMLModelTrainingJobOutcome(Aws::Client::AWSError<NeptunedataErrors>(
        NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/modeltraining/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return CancelMLModelTrainingJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CancelMLModelTransformJobOutcome NeptunedataClient::CancelMLModelTransformJob(const CancelMLModelTransformJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelMLModelTransformJob", "Required field: Id, is not set");
    return CancelMLModelTransformJobOutcome(Aws::Client::AWSError<NeptunedataErrors>(
        NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/modeltransform/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return CancelMLModelTransformJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CancelOpenCypherQueryOutcome NeptunedataClient::CancelOpenCypherQuery(const CancelOpenCypherQueryRequest& request) const {
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelOpenCypherQuery", "Required field: QueryId, is not set");
    return CancelOpenCypherQueryOutcome(Aws::Client::AWSError<NeptunedataErrors>(NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/opencypher/status/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
  };

  return CancelOpenCypherQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CreateMLEndpointOutcome NeptunedataClient::CreateMLEndpoint(const CreateMLEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/endpoints");
  };

  return CreateMLEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMLEndpointOutcome NeptunedataClient::DeleteMLEndpoint(const DeleteMLEndpointRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMLEndpoint", "Required field: Id, is not set");
    return DeleteMLEndpointOutcome(Aws::Client::AWSError<NeptunedataErrors>(NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteMLEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePropertygraphStatisticsOutcome NeptunedataClient::DeletePropertygraphStatistics(
    const DeletePropertygraphStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/propertygraph/statistics");
  };

  return DeletePropertygraphStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSparqlStatisticsOutcome NeptunedataClient::DeleteSparqlStatistics(const DeleteSparqlStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sparql/statistics");
  };

  return DeleteSparqlStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ExecuteFastResetOutcome NeptunedataClient::ExecuteFastReset(const ExecuteFastResetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/system");
  };

  return ExecuteFastResetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ExecuteGremlinExplainQueryOutcome NeptunedataClient::ExecuteGremlinExplainQuery(const ExecuteGremlinExplainQueryRequest& request) const {
  AWS_OPERATION_GUARD(ExecuteGremlinExplainQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteGremlinExplainQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ExecuteGremlinExplainQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExecuteGremlinExplainQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExecuteGremlinExplainQuery",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExecuteGremlinExplainQueryOutcome>(
      [&]() -> ExecuteGremlinExplainQueryOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteGremlinExplainQuery, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/gremlin/explain");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? ExecuteGremlinExplainQueryOutcome(ExecuteGremlinExplainQueryResult(result.GetResultWithOwnership()))
                                  : ExecuteGremlinExplainQueryOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExecuteGremlinProfileQueryOutcome NeptunedataClient::ExecuteGremlinProfileQuery(const ExecuteGremlinProfileQueryRequest& request) const {
  AWS_OPERATION_GUARD(ExecuteGremlinProfileQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteGremlinProfileQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ExecuteGremlinProfileQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExecuteGremlinProfileQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExecuteGremlinProfileQuery",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExecuteGremlinProfileQueryOutcome>(
      [&]() -> ExecuteGremlinProfileQueryOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteGremlinProfileQuery, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/gremlin/profile");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? ExecuteGremlinProfileQueryOutcome(ExecuteGremlinProfileQueryResult(result.GetResultWithOwnership()))
                                  : ExecuteGremlinProfileQueryOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExecuteGremlinQueryOutcome NeptunedataClient::ExecuteGremlinQuery(const ExecuteGremlinQueryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gremlin");
  };

  return ExecuteGremlinQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ExecuteOpenCypherExplainQueryOutcome NeptunedataClient::ExecuteOpenCypherExplainQuery(
    const ExecuteOpenCypherExplainQueryRequest& request) const {
  AWS_OPERATION_GUARD(ExecuteOpenCypherExplainQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteOpenCypherExplainQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ExecuteOpenCypherExplainQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExecuteOpenCypherExplainQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExecuteOpenCypherExplainQuery",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExecuteOpenCypherExplainQueryOutcome>(
      [&]() -> ExecuteOpenCypherExplainQueryOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteOpenCypherExplainQuery, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/opencypher/explain");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess()
                   ? ExecuteOpenCypherExplainQueryOutcome(ExecuteOpenCypherExplainQueryResult(result.GetResultWithOwnership()))
                   : ExecuteOpenCypherExplainQueryOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExecuteOpenCypherQueryOutcome NeptunedataClient::ExecuteOpenCypherQuery(const ExecuteOpenCypherQueryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/opencypher");
  };

  return ExecuteOpenCypherQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEngineStatusOutcome NeptunedataClient::GetEngineStatus(const GetEngineStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  return GetEngineStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGremlinQueryStatusOutcome NeptunedataClient::GetGremlinQueryStatus(const GetGremlinQueryStatusRequest& request) const {
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGremlinQueryStatus", "Required field: QueryId, is not set");
    return GetGremlinQueryStatusOutcome(Aws::Client::AWSError<NeptunedataErrors>(NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gremlin/status/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
  };

  return GetGremlinQueryStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLoaderJobStatusOutcome NeptunedataClient::GetLoaderJobStatus(const GetLoaderJobStatusRequest& request) const {
  if (!request.LoadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLoaderJobStatus", "Required field: LoadId, is not set");
    return GetLoaderJobStatusOutcome(Aws::Client::AWSError<NeptunedataErrors>(NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [LoadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/loader/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLoadId());
  };

  return GetLoaderJobStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMLDataProcessingJobOutcome NeptunedataClient::GetMLDataProcessingJob(const GetMLDataProcessingJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMLDataProcessingJob", "Required field: Id, is not set");
    return GetMLDataProcessingJobOutcome(Aws::Client::AWSError<NeptunedataErrors>(NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/dataprocessing/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetMLDataProcessingJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMLEndpointOutcome NeptunedataClient::GetMLEndpoint(const GetMLEndpointRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMLEndpoint", "Required field: Id, is not set");
    return GetMLEndpointOutcome(Aws::Client::AWSError<NeptunedataErrors>(NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetMLEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMLModelTrainingJobOutcome NeptunedataClient::GetMLModelTrainingJob(const GetMLModelTrainingJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMLModelTrainingJob", "Required field: Id, is not set");
    return GetMLModelTrainingJobOutcome(Aws::Client::AWSError<NeptunedataErrors>(NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/modeltraining/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetMLModelTrainingJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMLModelTransformJobOutcome NeptunedataClient::GetMLModelTransformJob(const GetMLModelTransformJobRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMLModelTransformJob", "Required field: Id, is not set");
    return GetMLModelTransformJobOutcome(Aws::Client::AWSError<NeptunedataErrors>(NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/modeltransform/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetMLModelTransformJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetOpenCypherQueryStatusOutcome NeptunedataClient::GetOpenCypherQueryStatus(const GetOpenCypherQueryStatusRequest& request) const {
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOpenCypherQueryStatus", "Required field: QueryId, is not set");
    return GetOpenCypherQueryStatusOutcome(Aws::Client::AWSError<NeptunedataErrors>(
        NeptunedataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/opencypher/status/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
  };

  return GetOpenCypherQueryStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPropertygraphStatisticsOutcome NeptunedataClient::GetPropertygraphStatistics(const GetPropertygraphStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/propertygraph/statistics");
  };

  return GetPropertygraphStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPropertygraphStreamOutcome NeptunedataClient::GetPropertygraphStream(const GetPropertygraphStreamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/propertygraph/stream");
  };

  return GetPropertygraphStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPropertygraphSummaryOutcome NeptunedataClient::GetPropertygraphSummary(const GetPropertygraphSummaryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/propertygraph/statistics/summary");
  };

  return GetPropertygraphSummaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRDFGraphSummaryOutcome NeptunedataClient::GetRDFGraphSummary(const GetRDFGraphSummaryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rdf/statistics/summary");
  };

  return GetRDFGraphSummaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSparqlStatisticsOutcome NeptunedataClient::GetSparqlStatistics(const GetSparqlStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sparql/statistics");
  };

  return GetSparqlStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSparqlStreamOutcome NeptunedataClient::GetSparqlStream(const GetSparqlStreamRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sparql/stream");
  };

  return GetSparqlStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGremlinQueriesOutcome NeptunedataClient::ListGremlinQueries(const ListGremlinQueriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/gremlin/status");
  };

  return ListGremlinQueriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLoaderJobsOutcome NeptunedataClient::ListLoaderJobs(const ListLoaderJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/loader");
  };

  return ListLoaderJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMLDataProcessingJobsOutcome NeptunedataClient::ListMLDataProcessingJobs(const ListMLDataProcessingJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/dataprocessing");
  };

  return ListMLDataProcessingJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMLEndpointsOutcome NeptunedataClient::ListMLEndpoints(const ListMLEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/endpoints");
  };

  return ListMLEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMLModelTrainingJobsOutcome NeptunedataClient::ListMLModelTrainingJobs(const ListMLModelTrainingJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/modeltraining");
  };

  return ListMLModelTrainingJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMLModelTransformJobsOutcome NeptunedataClient::ListMLModelTransformJobs(const ListMLModelTransformJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/modeltransform");
  };

  return ListMLModelTransformJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOpenCypherQueriesOutcome NeptunedataClient::ListOpenCypherQueries(const ListOpenCypherQueriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/opencypher/status");
  };

  return ListOpenCypherQueriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ManagePropertygraphStatisticsOutcome NeptunedataClient::ManagePropertygraphStatistics(
    const ManagePropertygraphStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/propertygraph/statistics");
  };

  return ManagePropertygraphStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ManageSparqlStatisticsOutcome NeptunedataClient::ManageSparqlStatistics(const ManageSparqlStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/sparql/statistics");
  };

  return ManageSparqlStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartLoaderJobOutcome NeptunedataClient::StartLoaderJob(const StartLoaderJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/loader");
  };

  return StartLoaderJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMLDataProcessingJobOutcome NeptunedataClient::StartMLDataProcessingJob(const StartMLDataProcessingJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/dataprocessing");
  };

  return StartMLDataProcessingJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMLModelTrainingJobOutcome NeptunedataClient::StartMLModelTrainingJob(const StartMLModelTrainingJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/modeltraining");
  };

  return StartMLModelTrainingJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMLModelTransformJobOutcome NeptunedataClient::StartMLModelTransformJob(const StartMLModelTransformJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ml/modeltransform");
  };

  return StartMLModelTransformJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
