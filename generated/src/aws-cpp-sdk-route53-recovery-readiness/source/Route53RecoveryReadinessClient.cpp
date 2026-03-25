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
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessClient.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessEndpointProvider.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessErrorMarshaller.h>
#include <aws/route53-recovery-readiness/model/CreateCellRequest.h>
#include <aws/route53-recovery-readiness/model/CreateCrossAccountAuthorizationRequest.h>
#include <aws/route53-recovery-readiness/model/CreateReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/CreateRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/CreateResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteCellRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteCrossAccountAuthorizationRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/GetArchitectureRecommendationsRequest.h>
#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryRequest.h>
#include <aws/route53-recovery-readiness/model/GetCellRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResourceStatusRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckStatusRequest.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupReadinessSummaryRequest.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/GetResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/ListCellsRequest.h>
#include <aws/route53-recovery-readiness/model/ListCrossAccountAuthorizationsRequest.h>
#include <aws/route53-recovery-readiness/model/ListReadinessChecksRequest.h>
#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsRequest.h>
#include <aws/route53-recovery-readiness/model/ListResourceSetsRequest.h>
#include <aws/route53-recovery-readiness/model/ListRulesRequest.h>
#include <aws/route53-recovery-readiness/model/ListTagsForResourcesRequest.h>
#include <aws/route53-recovery-readiness/model/TagResourceRequest.h>
#include <aws/route53-recovery-readiness/model/UntagResourceRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateCellRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateResourceSetRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53RecoveryReadiness;
using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Route53RecoveryReadiness {
const char SERVICE_NAME[] = "route53-recovery-readiness";
const char ALLOCATION_TAG[] = "Route53RecoveryReadinessClient";
}  // namespace Route53RecoveryReadiness
}  // namespace Aws
const char* Route53RecoveryReadinessClient::GetServiceName() { return SERVICE_NAME; }
const char* Route53RecoveryReadinessClient::GetAllocationTag() { return ALLOCATION_TAG; }

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(
    const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration,
    std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(
    const AWSCredentials& credentials, std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider,
    const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider,
    const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const AWSCredentials& credentials,
                                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Route53RecoveryReadinessClient::~Route53RecoveryReadinessClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase>& Route53RecoveryReadinessClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void Route53RecoveryReadinessClient::init(const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& config) {
  AWSClient::SetServiceClientName("Route53 Recovery Readiness");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "route53-recovery-readiness");
}

void Route53RecoveryReadinessClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Route53RecoveryReadinessClient::InvokeOperationOutcome Route53RecoveryReadinessClient::InvokeServiceOperation(
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

CreateCellOutcome Route53RecoveryReadinessClient::CreateCell(const CreateCellRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cells");
  };

  return CreateCellOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCrossAccountAuthorizationOutcome Route53RecoveryReadinessClient::CreateCrossAccountAuthorization(
    const CreateCrossAccountAuthorizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crossaccountauthorizations");
  };

  return CreateCrossAccountAuthorizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReadinessCheckOutcome Route53RecoveryReadinessClient::CreateReadinessCheck(const CreateReadinessCheckRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks");
  };

  return CreateReadinessCheckOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRecoveryGroupOutcome Route53RecoveryReadinessClient::CreateRecoveryGroup(const CreateRecoveryGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups");
  };

  return CreateRecoveryGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceSetOutcome Route53RecoveryReadinessClient::CreateResourceSet(const CreateResourceSetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets");
  };

  return CreateResourceSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCellOutcome Route53RecoveryReadinessClient::DeleteCell(const DeleteCellRequest& request) const {
  if (!request.CellNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCell", "Required field: CellName, is not set");
    return DeleteCellOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cells/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  };

  return DeleteCellOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCrossAccountAuthorizationOutcome Route53RecoveryReadinessClient::DeleteCrossAccountAuthorization(
    const DeleteCrossAccountAuthorizationRequest& request) const {
  if (!request.CrossAccountAuthorizationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCrossAccountAuthorization", "Required field: CrossAccountAuthorization, is not set");
    return DeleteCrossAccountAuthorizationOutcome(
        Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                              "Missing required field [CrossAccountAuthorization]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crossaccountauthorizations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrossAccountAuthorization());
  };

  return DeleteCrossAccountAuthorizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteReadinessCheckOutcome Route53RecoveryReadinessClient::DeleteReadinessCheck(const DeleteReadinessCheckRequest& request) const {
  if (!request.ReadinessCheckNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReadinessCheck", "Required field: ReadinessCheckName, is not set");
    return DeleteReadinessCheckOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  };

  return DeleteReadinessCheckOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRecoveryGroupOutcome Route53RecoveryReadinessClient::DeleteRecoveryGroup(const DeleteRecoveryGroupRequest& request) const {
  if (!request.RecoveryGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecoveryGroup", "Required field: RecoveryGroupName, is not set");
    return DeleteRecoveryGroupOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  };

  return DeleteRecoveryGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourceSetOutcome Route53RecoveryReadinessClient::DeleteResourceSet(const DeleteResourceSetRequest& request) const {
  if (!request.ResourceSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourceSet", "Required field: ResourceSetName, is not set");
    return DeleteResourceSetOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceSetName());
  };

  return DeleteResourceSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetArchitectureRecommendationsOutcome Route53RecoveryReadinessClient::GetArchitectureRecommendations(
    const GetArchitectureRecommendationsRequest& request) const {
  if (!request.RecoveryGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetArchitectureRecommendations", "Required field: RecoveryGroupName, is not set");
    return GetArchitectureRecommendationsOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/architectureRecommendations");
  };

  return GetArchitectureRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCellOutcome Route53RecoveryReadinessClient::GetCell(const GetCellRequest& request) const {
  if (!request.CellNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCell", "Required field: CellName, is not set");
    return GetCellOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cells/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  };

  return GetCellOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCellReadinessSummaryOutcome Route53RecoveryReadinessClient::GetCellReadinessSummary(
    const GetCellReadinessSummaryRequest& request) const {
  if (!request.CellNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCellReadinessSummary", "Required field: CellName, is not set");
    return GetCellReadinessSummaryOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cellreadiness/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  };

  return GetCellReadinessSummaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReadinessCheckOutcome Route53RecoveryReadinessClient::GetReadinessCheck(const GetReadinessCheckRequest& request) const {
  if (!request.ReadinessCheckNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadinessCheck", "Required field: ReadinessCheckName, is not set");
    return GetReadinessCheckOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  };

  return GetReadinessCheckOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReadinessCheckResourceStatusOutcome Route53RecoveryReadinessClient::GetReadinessCheckResourceStatus(
    const GetReadinessCheckResourceStatusRequest& request) const {
  if (!request.ReadinessCheckNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadinessCheckResourceStatus", "Required field: ReadinessCheckName, is not set");
    return GetReadinessCheckResourceStatusOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadinessCheckResourceStatus", "Required field: ResourceIdentifier, is not set");
    return GetReadinessCheckResourceStatusOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  return GetReadinessCheckResourceStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReadinessCheckStatusOutcome Route53RecoveryReadinessClient::GetReadinessCheckStatus(
    const GetReadinessCheckStatusRequest& request) const {
  if (!request.ReadinessCheckNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReadinessCheckStatus", "Required field: ReadinessCheckName, is not set");
    return GetReadinessCheckStatusOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  return GetReadinessCheckStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRecoveryGroupOutcome Route53RecoveryReadinessClient::GetRecoveryGroup(const GetRecoveryGroupRequest& request) const {
  if (!request.RecoveryGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecoveryGroup", "Required field: RecoveryGroupName, is not set");
    return GetRecoveryGroupOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  };

  return GetRecoveryGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRecoveryGroupReadinessSummaryOutcome Route53RecoveryReadinessClient::GetRecoveryGroupReadinessSummary(
    const GetRecoveryGroupReadinessSummaryRequest& request) const {
  if (!request.RecoveryGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecoveryGroupReadinessSummary", "Required field: RecoveryGroupName, is not set");
    return GetRecoveryGroupReadinessSummaryOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroupreadiness/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  };

  return GetRecoveryGroupReadinessSummaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourceSetOutcome Route53RecoveryReadinessClient::GetResourceSet(const GetResourceSetRequest& request) const {
  if (!request.ResourceSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceSet", "Required field: ResourceSetName, is not set");
    return GetResourceSetOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceSetName());
  };

  return GetResourceSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCellsOutcome Route53RecoveryReadinessClient::ListCells(const ListCellsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cells");
  };

  return ListCellsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCrossAccountAuthorizationsOutcome Route53RecoveryReadinessClient::ListCrossAccountAuthorizations(
    const ListCrossAccountAuthorizationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/crossaccountauthorizations");
  };

  return ListCrossAccountAuthorizationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListReadinessChecksOutcome Route53RecoveryReadinessClient::ListReadinessChecks(const ListReadinessChecksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks");
  };

  return ListReadinessChecksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRecoveryGroupsOutcome Route53RecoveryReadinessClient::ListRecoveryGroups(const ListRecoveryGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups");
  };

  return ListRecoveryGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResourceSetsOutcome Route53RecoveryReadinessClient::ListResourceSets(const ListResourceSetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets");
  };

  return ListResourceSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRulesOutcome Route53RecoveryReadinessClient::ListRules(const ListRulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  };

  return ListRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourcesOutcome Route53RecoveryReadinessClient::ListTagsForResources(const ListTagsForResourcesRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResources", "Required field: ResourceArn, is not set");
    return ListTagsForResourcesOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

TagResourceOutcome Route53RecoveryReadinessClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome Route53RecoveryReadinessClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateCellOutcome Route53RecoveryReadinessClient::UpdateCell(const UpdateCellRequest& request) const {
  if (!request.CellNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCell", "Required field: CellName, is not set");
    return UpdateCellOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cells/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  };

  return UpdateCellOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateReadinessCheckOutcome Route53RecoveryReadinessClient::UpdateReadinessCheck(const UpdateReadinessCheckRequest& request) const {
  if (!request.ReadinessCheckNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReadinessCheck", "Required field: ReadinessCheckName, is not set");
    return UpdateReadinessCheckOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  };

  return UpdateReadinessCheckOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRecoveryGroupOutcome Route53RecoveryReadinessClient::UpdateRecoveryGroup(const UpdateRecoveryGroupRequest& request) const {
  if (!request.RecoveryGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecoveryGroup", "Required field: RecoveryGroupName, is not set");
    return UpdateRecoveryGroupOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  };

  return UpdateRecoveryGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateResourceSetOutcome Route53RecoveryReadinessClient::UpdateResourceSet(const UpdateResourceSetRequest& request) const {
  if (!request.ResourceSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourceSet", "Required field: ResourceSetName, is not set");
    return UpdateResourceSetOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(
        Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceSetName());
  };

  return UpdateResourceSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
