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
#include <aws/osis/OSISClient.h>
#include <aws/osis/OSISEndpointProvider.h>
#include <aws/osis/OSISErrorMarshaller.h>
#include <aws/osis/model/CreatePipelineEndpointRequest.h>
#include <aws/osis/model/CreatePipelineRequest.h>
#include <aws/osis/model/DeletePipelineEndpointRequest.h>
#include <aws/osis/model/DeletePipelineRequest.h>
#include <aws/osis/model/DeleteResourcePolicyRequest.h>
#include <aws/osis/model/GetPipelineBlueprintRequest.h>
#include <aws/osis/model/GetPipelineChangeProgressRequest.h>
#include <aws/osis/model/GetPipelineRequest.h>
#include <aws/osis/model/GetResourcePolicyRequest.h>
#include <aws/osis/model/ListPipelineBlueprintsRequest.h>
#include <aws/osis/model/ListPipelineEndpointConnectionsRequest.h>
#include <aws/osis/model/ListPipelineEndpointsRequest.h>
#include <aws/osis/model/ListPipelinesRequest.h>
#include <aws/osis/model/ListTagsForResourceRequest.h>
#include <aws/osis/model/PutResourcePolicyRequest.h>
#include <aws/osis/model/RevokePipelineEndpointConnectionsRequest.h>
#include <aws/osis/model/StartPipelineRequest.h>
#include <aws/osis/model/StopPipelineRequest.h>
#include <aws/osis/model/TagResourceRequest.h>
#include <aws/osis/model/UntagResourceRequest.h>
#include <aws/osis/model/UpdatePipelineRequest.h>
#include <aws/osis/model/ValidatePipelineRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::OSIS;
using namespace Aws::OSIS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace OSIS {
const char SERVICE_NAME[] = "osis";
const char ALLOCATION_TAG[] = "OSISClient";
}  // namespace OSIS
}  // namespace Aws
const char* OSISClient::GetServiceName() { return SERVICE_NAME; }
const char* OSISClient::GetAllocationTag() { return ALLOCATION_TAG; }

OSISClient::OSISClient(const OSIS::OSISClientConfiguration& clientConfiguration, std::shared_ptr<OSISEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OSISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OSISClient::OSISClient(const AWSCredentials& credentials, std::shared_ptr<OSISEndpointProviderBase> endpointProvider,
                       const OSIS::OSISClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OSISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OSISClient::OSISClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<OSISEndpointProviderBase> endpointProvider, const OSIS::OSISClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<OSISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
OSISClient::OSISClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OSISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OSISClient::OSISClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OSISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

OSISClient::OSISClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<OSISErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<OSISEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
OSISClient::~OSISClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<OSISEndpointProviderBase>& OSISClient::accessEndpointProvider() { return m_endpointProvider; }

void OSISClient::init(const OSIS::OSISClientConfiguration& config) {
  AWSClient::SetServiceClientName("OSIS");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "osis");
}

void OSISClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
OSISClient::InvokeOperationOutcome OSISClient::InvokeServiceOperation(
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

CreatePipelineOutcome OSISClient::CreatePipeline(const CreatePipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/createPipeline");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePipelineOutcome(result.GetResultWithOwnership()) : CreatePipelineOutcome(std::move(result.GetError()));
}

CreatePipelineEndpointOutcome OSISClient::CreatePipelineEndpoint(const CreatePipelineEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/createPipelineEndpoint");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePipelineEndpointOutcome(result.GetResultWithOwnership())
                            : CreatePipelineEndpointOutcome(std::move(result.GetError()));
}

DeletePipelineOutcome OSISClient::DeletePipeline(const DeletePipelineRequest& request) const {
  if (!request.PipelineNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePipeline", "Required field: PipelineName, is not set");
    return DeletePipelineOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [PipelineName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/deletePipeline/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePipelineOutcome(result.GetResultWithOwnership()) : DeletePipelineOutcome(std::move(result.GetError()));
}

DeletePipelineEndpointOutcome OSISClient::DeletePipelineEndpoint(const DeletePipelineEndpointRequest& request) const {
  if (!request.EndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePipelineEndpoint", "Required field: EndpointId, is not set");
    return DeletePipelineEndpointOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EndpointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/deletePipelineEndpoint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePipelineEndpointOutcome(result.GetResultWithOwnership())
                            : DeletePipelineEndpointOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome OSISClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/resourcePolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

GetPipelineOutcome OSISClient::GetPipeline(const GetPipelineRequest& request) const {
  if (!request.PipelineNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPipeline", "Required field: PipelineName, is not set");
    return GetPipelineOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [PipelineName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/getPipeline/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPipelineOutcome(result.GetResultWithOwnership()) : GetPipelineOutcome(std::move(result.GetError()));
}

GetPipelineBlueprintOutcome OSISClient::GetPipelineBlueprint(const GetPipelineBlueprintRequest& request) const {
  if (!request.BlueprintNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPipelineBlueprint", "Required field: BlueprintName, is not set");
    return GetPipelineBlueprintOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [BlueprintName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/getPipelineBlueprint/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBlueprintName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPipelineBlueprintOutcome(result.GetResultWithOwnership())
                            : GetPipelineBlueprintOutcome(std::move(result.GetError()));
}

GetPipelineChangeProgressOutcome OSISClient::GetPipelineChangeProgress(const GetPipelineChangeProgressRequest& request) const {
  if (!request.PipelineNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPipelineChangeProgress", "Required field: PipelineName, is not set");
    return GetPipelineChangeProgressOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [PipelineName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/getPipelineChangeProgress/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPipelineChangeProgressOutcome(result.GetResultWithOwnership())
                            : GetPipelineChangeProgressOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome OSISClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: ResourceArn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/resourcePolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

ListPipelineBlueprintsOutcome OSISClient::ListPipelineBlueprints(const ListPipelineBlueprintsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/listPipelineBlueprints");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPipelineBlueprintsOutcome(result.GetResultWithOwnership())
                            : ListPipelineBlueprintsOutcome(std::move(result.GetError()));
}

ListPipelineEndpointConnectionsOutcome OSISClient::ListPipelineEndpointConnections(
    const ListPipelineEndpointConnectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/listPipelineEndpointConnections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPipelineEndpointConnectionsOutcome(result.GetResultWithOwnership())
                            : ListPipelineEndpointConnectionsOutcome(std::move(result.GetError()));
}

ListPipelineEndpointsOutcome OSISClient::ListPipelineEndpoints(const ListPipelineEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/listPipelineEndpoints");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPipelineEndpointsOutcome(result.GetResultWithOwnership())
                            : ListPipelineEndpointsOutcome(std::move(result.GetError()));
}

ListPipelinesOutcome OSISClient::ListPipelines(const ListPipelinesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/listPipelines");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPipelinesOutcome(result.GetResultWithOwnership()) : ListPipelinesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome OSISClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: Arn, is not set");
    return ListTagsForResourceOutcome(
        Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/listTagsForResource/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutResourcePolicyOutcome OSISClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutResourcePolicy", "Required field: ResourceArn, is not set");
    return PutResourcePolicyOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/resourcePolicy/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

RevokePipelineEndpointConnectionsOutcome OSISClient::RevokePipelineEndpointConnections(
    const RevokePipelineEndpointConnectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/revokePipelineEndpointConnections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokePipelineEndpointConnectionsOutcome(result.GetResultWithOwnership())
                            : RevokePipelineEndpointConnectionsOutcome(std::move(result.GetError()));
}

StartPipelineOutcome OSISClient::StartPipeline(const StartPipelineRequest& request) const {
  if (!request.PipelineNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartPipeline", "Required field: PipelineName, is not set");
    return StartPipelineOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [PipelineName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/startPipeline/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartPipelineOutcome(result.GetResultWithOwnership()) : StartPipelineOutcome(std::move(result.GetError()));
}

StopPipelineOutcome OSISClient::StopPipeline(const StopPipelineRequest& request) const {
  if (!request.PipelineNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopPipeline", "Required field: PipelineName, is not set");
    return StopPipelineOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [PipelineName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/stopPipeline/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StopPipelineOutcome(result.GetResultWithOwnership()) : StopPipelineOutcome(std::move(result.GetError()));
}

TagResourceOutcome OSISClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Arn, is not set");
    return TagResourceOutcome(
        Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/tagResource/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome OSISClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/untagResource/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdatePipelineOutcome OSISClient::UpdatePipeline(const UpdatePipelineRequest& request) const {
  if (!request.PipelineNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePipeline", "Required field: PipelineName, is not set");
    return UpdatePipelineOutcome(Aws::Client::AWSError<OSISErrors>(OSISErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [PipelineName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/updatePipeline/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdatePipelineOutcome(result.GetResultWithOwnership()) : UpdatePipelineOutcome(std::move(result.GetError()));
}

ValidatePipelineOutcome OSISClient::ValidatePipeline(const ValidatePipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2022-01-01/osis/validatePipeline");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ValidatePipelineOutcome(result.GetResultWithOwnership())
                            : ValidatePipelineOutcome(std::move(result.GetError()));
}
