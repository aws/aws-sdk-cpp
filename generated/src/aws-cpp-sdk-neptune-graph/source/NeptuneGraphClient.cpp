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
#include <aws/neptune-graph/NeptuneGraphClient.h>
#include <aws/neptune-graph/NeptuneGraphEndpointProvider.h>
#include <aws/neptune-graph/NeptuneGraphErrorMarshaller.h>
#include <aws/neptune-graph/model/CancelExportTaskRequest.h>
#include <aws/neptune-graph/model/CancelImportTaskRequest.h>
#include <aws/neptune-graph/model/CancelQueryRequest.h>
#include <aws/neptune-graph/model/CreateGraphRequest.h>
#include <aws/neptune-graph/model/CreateGraphSnapshotRequest.h>
#include <aws/neptune-graph/model/CreateGraphUsingImportTaskRequest.h>
#include <aws/neptune-graph/model/CreatePrivateGraphEndpointRequest.h>
#include <aws/neptune-graph/model/DeleteGraphRequest.h>
#include <aws/neptune-graph/model/DeleteGraphSnapshotRequest.h>
#include <aws/neptune-graph/model/DeletePrivateGraphEndpointRequest.h>
#include <aws/neptune-graph/model/ExecuteQueryRequest.h>
#include <aws/neptune-graph/model/GetExportTaskRequest.h>
#include <aws/neptune-graph/model/GetGraphRequest.h>
#include <aws/neptune-graph/model/GetGraphSnapshotRequest.h>
#include <aws/neptune-graph/model/GetGraphSummaryRequest.h>
#include <aws/neptune-graph/model/GetImportTaskRequest.h>
#include <aws/neptune-graph/model/GetPrivateGraphEndpointRequest.h>
#include <aws/neptune-graph/model/GetQueryRequest.h>
#include <aws/neptune-graph/model/ListExportTasksRequest.h>
#include <aws/neptune-graph/model/ListGraphSnapshotsRequest.h>
#include <aws/neptune-graph/model/ListGraphsRequest.h>
#include <aws/neptune-graph/model/ListImportTasksRequest.h>
#include <aws/neptune-graph/model/ListPrivateGraphEndpointsRequest.h>
#include <aws/neptune-graph/model/ListQueriesRequest.h>
#include <aws/neptune-graph/model/ListTagsForResourceRequest.h>
#include <aws/neptune-graph/model/ResetGraphRequest.h>
#include <aws/neptune-graph/model/RestoreGraphFromSnapshotRequest.h>
#include <aws/neptune-graph/model/StartExportTaskRequest.h>
#include <aws/neptune-graph/model/StartGraphRequest.h>
#include <aws/neptune-graph/model/StartImportTaskRequest.h>
#include <aws/neptune-graph/model/StopGraphRequest.h>
#include <aws/neptune-graph/model/TagResourceRequest.h>
#include <aws/neptune-graph/model/UntagResourceRequest.h>
#include <aws/neptune-graph/model/UpdateGraphRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::NeptuneGraph;
using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace NeptuneGraph {
const char SERVICE_NAME[] = "neptune-graph";
const char ALLOCATION_TAG[] = "NeptuneGraphClient";
}  // namespace NeptuneGraph
}  // namespace Aws
const char* NeptuneGraphClient::GetServiceName() { return SERVICE_NAME; }
const char* NeptuneGraphClient::GetAllocationTag() { return ALLOCATION_TAG; }

NeptuneGraphClient::NeptuneGraphClient(const NeptuneGraph::NeptuneGraphClientConfiguration& clientConfiguration,
                                       std::shared_ptr<NeptuneGraphEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneGraphErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NeptuneGraphEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptuneGraphClient::NeptuneGraphClient(const AWSCredentials& credentials,
                                       std::shared_ptr<NeptuneGraphEndpointProviderBase> endpointProvider,
                                       const NeptuneGraph::NeptuneGraphClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneGraphErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NeptuneGraphEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptuneGraphClient::NeptuneGraphClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<NeptuneGraphEndpointProviderBase> endpointProvider,
                                       const NeptuneGraph::NeptuneGraphClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneGraphErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NeptuneGraphEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
NeptuneGraphClient::NeptuneGraphClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneGraphErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NeptuneGraphEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptuneGraphClient::NeptuneGraphClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneGraphErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NeptuneGraphEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NeptuneGraphClient::NeptuneGraphClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NeptuneGraphErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NeptuneGraphEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
NeptuneGraphClient::~NeptuneGraphClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<NeptuneGraphEndpointProviderBase>& NeptuneGraphClient::accessEndpointProvider() { return m_endpointProvider; }

void NeptuneGraphClient::init(const NeptuneGraph::NeptuneGraphClientConfiguration& config) {
  AWSClient::SetServiceClientName("Neptune Graph");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "neptune-graph");
}

void NeptuneGraphClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
NeptuneGraphClient::InvokeOperationOutcome NeptuneGraphClient::InvokeServiceOperation(
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

CancelExportTaskOutcome NeptuneGraphClient::CancelExportTask(const CancelExportTaskRequest& request) const {
  if (!request.TaskIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelExportTask", "Required field: TaskIdentifier, is not set");
    return CancelExportTaskOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TaskIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/exporttasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? CancelExportTaskOutcome(result.GetResultWithOwnership())
                            : CancelExportTaskOutcome(std::move(result.GetError()));
}

CancelImportTaskOutcome NeptuneGraphClient::CancelImportTask(const CancelImportTaskRequest& request) const {
  if (!request.TaskIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelImportTask", "Required field: TaskIdentifier, is not set");
    return CancelImportTaskOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TaskIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/importtasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? CancelImportTaskOutcome(result.GetResultWithOwnership())
                            : CancelImportTaskOutcome(std::move(result.GetError()));
}

CancelQueryOutcome NeptuneGraphClient::CancelQuery(const CancelQueryRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelQuery", "Required field: GraphIdentifier, is not set");
    return CancelQueryOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [GraphIdentifier]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelQuery", "Required field: QueryId, is not set");
    return CancelQueryOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? CancelQueryOutcome(result.GetResultWithOwnership()) : CancelQueryOutcome(std::move(result.GetError()));
}

CreateGraphOutcome NeptuneGraphClient::CreateGraph(const CreateGraphRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGraphOutcome(result.GetResultWithOwnership()) : CreateGraphOutcome(std::move(result.GetError()));
}

CreateGraphSnapshotOutcome NeptuneGraphClient::CreateGraphSnapshot(const CreateGraphSnapshotRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGraphSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateGraphSnapshotOutcome(std::move(result.GetError()));
}

CreateGraphUsingImportTaskOutcome NeptuneGraphClient::CreateGraphUsingImportTask(const CreateGraphUsingImportTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/importtasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGraphUsingImportTaskOutcome(result.GetResultWithOwnership())
                            : CreateGraphUsingImportTaskOutcome(std::move(result.GetError()));
}

CreatePrivateGraphEndpointOutcome NeptuneGraphClient::CreatePrivateGraphEndpoint(const CreatePrivateGraphEndpointRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePrivateGraphEndpoint", "Required field: GraphIdentifier, is not set");
    return CreatePrivateGraphEndpointOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(
        NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GraphIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGraphIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePrivateGraphEndpointOutcome(result.GetResultWithOwnership())
                            : CreatePrivateGraphEndpointOutcome(std::move(result.GetError()));
}

DeleteGraphOutcome NeptuneGraphClient::DeleteGraph(const DeleteGraphRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGraph", "Required field: GraphIdentifier, is not set");
    return DeleteGraphOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [GraphIdentifier]", false));
  }
  if (!request.SkipSnapshotHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGraph", "Required field: SkipSnapshot, is not set");
    return DeleteGraphOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SkipSnapshot]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGraphIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGraphOutcome(result.GetResultWithOwnership()) : DeleteGraphOutcome(std::move(result.GetError()));
}

DeleteGraphSnapshotOutcome NeptuneGraphClient::DeleteGraphSnapshot(const DeleteGraphSnapshotRequest& request) const {
  if (!request.SnapshotIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGraphSnapshot", "Required field: SnapshotIdentifier, is not set");
    return DeleteGraphSnapshotOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [SnapshotIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteGraphSnapshotOutcome(result.GetResultWithOwnership())
                            : DeleteGraphSnapshotOutcome(std::move(result.GetError()));
}

DeletePrivateGraphEndpointOutcome NeptuneGraphClient::DeletePrivateGraphEndpoint(const DeletePrivateGraphEndpointRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePrivateGraphEndpoint", "Required field: GraphIdentifier, is not set");
    return DeletePrivateGraphEndpointOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(
        NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GraphIdentifier]", false));
  }
  if (!request.VpcIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePrivateGraphEndpoint", "Required field: VpcId, is not set");
    return DeletePrivateGraphEndpointOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(
        NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGraphIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePrivateGraphEndpointOutcome(result.GetResultWithOwnership())
                            : DeletePrivateGraphEndpointOutcome(std::move(result.GetError()));
}

ExecuteQueryOutcome NeptuneGraphClient::ExecuteQuery(const ExecuteQueryRequest& request) const {
  AWS_OPERATION_GUARD(ExecuteQuery);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExecuteQuery", "Required field: GraphIdentifier, is not set");
    return ExecuteQueryOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [GraphIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ExecuteQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExecuteQuery, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExecuteQuery",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExecuteQueryOutcome>(
      [&]() -> ExecuteQueryOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("" + request.GetGraphIdentifier() + ".");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ExecuteQueryOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/queries");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? ExecuteQueryOutcome(result.GetResultWithOwnership())
                                  : ExecuteQueryOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetExportTaskOutcome NeptuneGraphClient::GetExportTask(const GetExportTaskRequest& request) const {
  if (!request.TaskIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExportTask", "Required field: TaskIdentifier, is not set");
    return GetExportTaskOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TaskIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/exporttasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetExportTaskOutcome(result.GetResultWithOwnership()) : GetExportTaskOutcome(std::move(result.GetError()));
}

GetGraphOutcome NeptuneGraphClient::GetGraph(const GetGraphRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGraph", "Required field: GraphIdentifier, is not set");
    return GetGraphOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [GraphIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGraphIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGraphOutcome(result.GetResultWithOwnership()) : GetGraphOutcome(std::move(result.GetError()));
}

GetGraphSnapshotOutcome NeptuneGraphClient::GetGraphSnapshot(const GetGraphSnapshotRequest& request) const {
  if (!request.SnapshotIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGraphSnapshot", "Required field: SnapshotIdentifier, is not set");
    return GetGraphSnapshotOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SnapshotIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGraphSnapshotOutcome(result.GetResultWithOwnership())
                            : GetGraphSnapshotOutcome(std::move(result.GetError()));
}

GetGraphSummaryOutcome NeptuneGraphClient::GetGraphSummary(const GetGraphSummaryRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGraphSummary", "Required field: GraphIdentifier, is not set");
    return GetGraphSummaryOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [GraphIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/summary");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetGraphSummaryOutcome(result.GetResultWithOwnership())
                            : GetGraphSummaryOutcome(std::move(result.GetError()));
}

GetImportTaskOutcome NeptuneGraphClient::GetImportTask(const GetImportTaskRequest& request) const {
  if (!request.TaskIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportTask", "Required field: TaskIdentifier, is not set");
    return GetImportTaskOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TaskIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/importtasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetImportTaskOutcome(result.GetResultWithOwnership()) : GetImportTaskOutcome(std::move(result.GetError()));
}

GetPrivateGraphEndpointOutcome NeptuneGraphClient::GetPrivateGraphEndpoint(const GetPrivateGraphEndpointRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPrivateGraphEndpoint", "Required field: GraphIdentifier, is not set");
    return GetPrivateGraphEndpointOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(
        NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GraphIdentifier]", false));
  }
  if (!request.VpcIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPrivateGraphEndpoint", "Required field: VpcId, is not set");
    return GetPrivateGraphEndpointOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(
        NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGraphIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPrivateGraphEndpointOutcome(result.GetResultWithOwnership())
                            : GetPrivateGraphEndpointOutcome(std::move(result.GetError()));
}

GetQueryOutcome NeptuneGraphClient::GetQuery(const GetQueryRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQuery", "Required field: GraphIdentifier, is not set");
    return GetQueryOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [GraphIdentifier]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQuery", "Required field: QueryId, is not set");
    return GetQueryOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueryOutcome(result.GetResultWithOwnership()) : GetQueryOutcome(std::move(result.GetError()));
}

ListExportTasksOutcome NeptuneGraphClient::ListExportTasks(const ListExportTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/exporttasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListExportTasksOutcome(result.GetResultWithOwnership())
                            : ListExportTasksOutcome(std::move(result.GetError()));
}

ListGraphSnapshotsOutcome NeptuneGraphClient::ListGraphSnapshots(const ListGraphSnapshotsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGraphSnapshotsOutcome(result.GetResultWithOwnership())
                            : ListGraphSnapshotsOutcome(std::move(result.GetError()));
}

ListGraphsOutcome NeptuneGraphClient::ListGraphs(const ListGraphsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGraphsOutcome(result.GetResultWithOwnership()) : ListGraphsOutcome(std::move(result.GetError()));
}

ListImportTasksOutcome NeptuneGraphClient::ListImportTasks(const ListImportTasksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/importtasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListImportTasksOutcome(result.GetResultWithOwnership())
                            : ListImportTasksOutcome(std::move(result.GetError()));
}

ListPrivateGraphEndpointsOutcome NeptuneGraphClient::ListPrivateGraphEndpoints(const ListPrivateGraphEndpointsRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPrivateGraphEndpoints", "Required field: GraphIdentifier, is not set");
    return ListPrivateGraphEndpointsOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(
        NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GraphIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGraphIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPrivateGraphEndpointsOutcome(result.GetResultWithOwnership())
                            : ListPrivateGraphEndpointsOutcome(std::move(result.GetError()));
}

ListQueriesOutcome NeptuneGraphClient::ListQueries(const ListQueriesRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueries", "Required field: GraphIdentifier, is not set");
    return ListQueriesOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [GraphIdentifier]", false));
  }
  if (!request.MaxResultsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQueries", "Required field: MaxResults, is not set");
    return ListQueriesOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [MaxResults]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListQueriesOutcome(result.GetResultWithOwnership()) : ListQueriesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome NeptuneGraphClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ResetGraphOutcome NeptuneGraphClient::ResetGraph(const ResetGraphRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ResetGraph", "Required field: GraphIdentifier, is not set");
    return ResetGraphOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [GraphIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGraphIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? ResetGraphOutcome(result.GetResultWithOwnership()) : ResetGraphOutcome(std::move(result.GetError()));
}

RestoreGraphFromSnapshotOutcome NeptuneGraphClient::RestoreGraphFromSnapshot(const RestoreGraphFromSnapshotRequest& request) const {
  if (!request.SnapshotIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestoreGraphFromSnapshot", "Required field: SnapshotIdentifier, is not set");
    return RestoreGraphFromSnapshotOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(
        NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshots/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreGraphFromSnapshotOutcome(result.GetResultWithOwnership())
                            : RestoreGraphFromSnapshotOutcome(std::move(result.GetError()));
}

StartExportTaskOutcome NeptuneGraphClient::StartExportTask(const StartExportTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/exporttasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartExportTaskOutcome(result.GetResultWithOwnership())
                            : StartExportTaskOutcome(std::move(result.GetError()));
}

StartGraphOutcome NeptuneGraphClient::StartGraph(const StartGraphRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartGraph", "Required field: GraphIdentifier, is not set");
    return StartGraphOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [GraphIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGraphIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartGraphOutcome(result.GetResultWithOwnership()) : StartGraphOutcome(std::move(result.GetError()));
}

StartImportTaskOutcome NeptuneGraphClient::StartImportTask(const StartImportTaskRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartImportTask", "Required field: GraphIdentifier, is not set");
    return StartImportTaskOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [GraphIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGraphIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/importtasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartImportTaskOutcome(result.GetResultWithOwnership())
                            : StartImportTaskOutcome(std::move(result.GetError()));
}

StopGraphOutcome NeptuneGraphClient::StopGraph(const StopGraphRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopGraph", "Required field: GraphIdentifier, is not set");
    return StopGraphOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [GraphIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGraphIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopGraphOutcome(result.GetResultWithOwnership()) : StopGraphOutcome(std::move(result.GetError()));
}

TagResourceOutcome NeptuneGraphClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome NeptuneGraphClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateGraphOutcome NeptuneGraphClient::UpdateGraph(const UpdateGraphRequest& request) const {
  if (!request.GraphIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGraph", "Required field: GraphIdentifier, is not set");
    return UpdateGraphOutcome(Aws::Client::AWSError<NeptuneGraphErrors>(NeptuneGraphErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [GraphIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/graphs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGraphIdentifier());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateGraphOutcome(result.GetResultWithOwnership()) : UpdateGraphOutcome(std::move(result.GetError()));
}
