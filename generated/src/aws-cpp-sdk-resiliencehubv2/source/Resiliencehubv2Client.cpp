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
#include <aws/resiliencehubv2/Resiliencehubv2Client.h>
#include <aws/resiliencehubv2/Resiliencehubv2EndpointProvider.h>
#include <aws/resiliencehubv2/Resiliencehubv2ErrorMarshaller.h>
#include <aws/resiliencehubv2/model/CreateAssertionRequest.h>
#include <aws/resiliencehubv2/model/CreateInputSourceRequest.h>
#include <aws/resiliencehubv2/model/CreatePolicyRequest.h>
#include <aws/resiliencehubv2/model/CreateReportRequest.h>
#include <aws/resiliencehubv2/model/CreateServiceFunctionRequest.h>
#include <aws/resiliencehubv2/model/CreateServiceFunctionResourcesRequest.h>
#include <aws/resiliencehubv2/model/CreateServiceRequest.h>
#include <aws/resiliencehubv2/model/CreateSystemRequest.h>
#include <aws/resiliencehubv2/model/CreateUserJourneyRequest.h>
#include <aws/resiliencehubv2/model/DeleteAssertionRequest.h>
#include <aws/resiliencehubv2/model/DeleteInputSourceRequest.h>
#include <aws/resiliencehubv2/model/DeletePolicyRequest.h>
#include <aws/resiliencehubv2/model/DeleteServiceFunctionRequest.h>
#include <aws/resiliencehubv2/model/DeleteServiceFunctionResourcesRequest.h>
#include <aws/resiliencehubv2/model/DeleteServiceRequest.h>
#include <aws/resiliencehubv2/model/DeleteSystemRequest.h>
#include <aws/resiliencehubv2/model/DeleteUserJourneyRequest.h>
#include <aws/resiliencehubv2/model/GetFailureModeFindingRequest.h>
#include <aws/resiliencehubv2/model/GetPolicyRequest.h>
#include <aws/resiliencehubv2/model/GetServiceRequest.h>
#include <aws/resiliencehubv2/model/GetSystemRequest.h>
#include <aws/resiliencehubv2/model/GetUserJourneyRequest.h>
#include <aws/resiliencehubv2/model/ImportAppRequest.h>
#include <aws/resiliencehubv2/model/ImportPolicyRequest.h>
#include <aws/resiliencehubv2/model/ListAssertionsRequest.h>
#include <aws/resiliencehubv2/model/ListDependenciesRequest.h>
#include <aws/resiliencehubv2/model/ListFailureModeAssessmentsRequest.h>
#include <aws/resiliencehubv2/model/ListFailureModeFindingsRequest.h>
#include <aws/resiliencehubv2/model/ListInputSourcesRequest.h>
#include <aws/resiliencehubv2/model/ListPoliciesRequest.h>
#include <aws/resiliencehubv2/model/ListReportsRequest.h>
#include <aws/resiliencehubv2/model/ListResourcesRequest.h>
#include <aws/resiliencehubv2/model/ListServiceEventsRequest.h>
#include <aws/resiliencehubv2/model/ListServiceFunctionsRequest.h>
#include <aws/resiliencehubv2/model/ListServiceTopologyEdgesRequest.h>
#include <aws/resiliencehubv2/model/ListServicesRequest.h>
#include <aws/resiliencehubv2/model/ListSystemEventsRequest.h>
#include <aws/resiliencehubv2/model/ListSystemsRequest.h>
#include <aws/resiliencehubv2/model/ListTagsForResourceRequest.h>
#include <aws/resiliencehubv2/model/ListUserJourneysRequest.h>
#include <aws/resiliencehubv2/model/StartFailureModeAssessmentRequest.h>
#include <aws/resiliencehubv2/model/TagResourceRequest.h>
#include <aws/resiliencehubv2/model/UntagResourceRequest.h>
#include <aws/resiliencehubv2/model/UpdateAssertionRequest.h>
#include <aws/resiliencehubv2/model/UpdateDependencyRequest.h>
#include <aws/resiliencehubv2/model/UpdateFailureModeFindingRequest.h>
#include <aws/resiliencehubv2/model/UpdatePolicyRequest.h>
#include <aws/resiliencehubv2/model/UpdateServiceFunctionRequest.h>
#include <aws/resiliencehubv2/model/UpdateServiceRequest.h>
#include <aws/resiliencehubv2/model/UpdateSystemRequest.h>
#include <aws/resiliencehubv2/model/UpdateUserJourneyRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::resiliencehubv2;
using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace resiliencehubv2 {
const char SERVICE_NAME[] = "resiliencehub";
const char ALLOCATION_TAG[] = "Resiliencehubv2Client";
}  // namespace resiliencehubv2
}  // namespace Aws
const char* Resiliencehubv2Client::GetServiceName() { return SERVICE_NAME; }
const char* Resiliencehubv2Client::GetAllocationTag() { return ALLOCATION_TAG; }

Resiliencehubv2Client::Resiliencehubv2Client(const resiliencehubv2::Resiliencehubv2ClientConfiguration& clientConfiguration,
                                             std::shared_ptr<Resiliencehubv2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Resiliencehubv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Resiliencehubv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Resiliencehubv2Client::Resiliencehubv2Client(const AWSCredentials& credentials,
                                             std::shared_ptr<Resiliencehubv2EndpointProviderBase> endpointProvider,
                                             const resiliencehubv2::Resiliencehubv2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Resiliencehubv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Resiliencehubv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Resiliencehubv2Client::Resiliencehubv2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<Resiliencehubv2EndpointProviderBase> endpointProvider,
                                             const resiliencehubv2::Resiliencehubv2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Resiliencehubv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<Resiliencehubv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Resiliencehubv2Client::Resiliencehubv2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Resiliencehubv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Resiliencehubv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Resiliencehubv2Client::Resiliencehubv2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Resiliencehubv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Resiliencehubv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

Resiliencehubv2Client::Resiliencehubv2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<Resiliencehubv2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<Resiliencehubv2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
Resiliencehubv2Client::~Resiliencehubv2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<Resiliencehubv2EndpointProviderBase>& Resiliencehubv2Client::accessEndpointProvider() { return m_endpointProvider; }

void Resiliencehubv2Client::init(const resiliencehubv2::Resiliencehubv2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("resiliencehubv2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "resiliencehub");
}

void Resiliencehubv2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
Resiliencehubv2Client::InvokeOperationOutcome Resiliencehubv2Client::InvokeServiceOperation(
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

CreateAssertionOutcome Resiliencehubv2Client::CreateAssertion(const CreateAssertionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/create-assertion");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAssertionOutcome(result.GetResultWithOwnership())
                            : CreateAssertionOutcome(std::move(result.GetError()));
}

CreateInputSourceOutcome Resiliencehubv2Client::CreateInputSource(const CreateInputSourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/create-input-source");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInputSourceOutcome(result.GetResultWithOwnership())
                            : CreateInputSourceOutcome(std::move(result.GetError()));
}

CreatePolicyOutcome Resiliencehubv2Client::CreatePolicy(const CreatePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/create-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyOutcome(result.GetResultWithOwnership()) : CreatePolicyOutcome(std::move(result.GetError()));
}

CreateReportOutcome Resiliencehubv2Client::CreateReport(const CreateReportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/create-report");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReportOutcome(result.GetResultWithOwnership()) : CreateReportOutcome(std::move(result.GetError()));
}

CreateServiceOutcome Resiliencehubv2Client::CreateService(const CreateServiceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/create-service");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateServiceOutcome(result.GetResultWithOwnership()) : CreateServiceOutcome(std::move(result.GetError()));
}

CreateServiceFunctionOutcome Resiliencehubv2Client::CreateServiceFunction(const CreateServiceFunctionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/create-service-function");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateServiceFunctionOutcome(result.GetResultWithOwnership())
                            : CreateServiceFunctionOutcome(std::move(result.GetError()));
}

CreateServiceFunctionResourcesOutcome Resiliencehubv2Client::CreateServiceFunctionResources(
    const CreateServiceFunctionResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/create-service-function-resources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateServiceFunctionResourcesOutcome(result.GetResultWithOwnership())
                            : CreateServiceFunctionResourcesOutcome(std::move(result.GetError()));
}

CreateSystemOutcome Resiliencehubv2Client::CreateSystem(const CreateSystemRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/create-system");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSystemOutcome(result.GetResultWithOwnership()) : CreateSystemOutcome(std::move(result.GetError()));
}

CreateUserJourneyOutcome Resiliencehubv2Client::CreateUserJourney(const CreateUserJourneyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/create-user-journey");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserJourneyOutcome(result.GetResultWithOwnership())
                            : CreateUserJourneyOutcome(std::move(result.GetError()));
}

DeleteAssertionOutcome Resiliencehubv2Client::DeleteAssertion(const DeleteAssertionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/delete-assertion");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAssertionOutcome(result.GetResultWithOwnership())
                            : DeleteAssertionOutcome(std::move(result.GetError()));
}

DeleteInputSourceOutcome Resiliencehubv2Client::DeleteInputSource(const DeleteInputSourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/delete-input-source");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInputSourceOutcome(result.GetResultWithOwnership())
                            : DeleteInputSourceOutcome(std::move(result.GetError()));
}

DeletePolicyOutcome Resiliencehubv2Client::DeletePolicy(const DeletePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/delete-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePolicyOutcome(result.GetResultWithOwnership()) : DeletePolicyOutcome(std::move(result.GetError()));
}

DeleteServiceOutcome Resiliencehubv2Client::DeleteService(const DeleteServiceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/delete-service");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServiceOutcome(result.GetResultWithOwnership()) : DeleteServiceOutcome(std::move(result.GetError()));
}

DeleteServiceFunctionOutcome Resiliencehubv2Client::DeleteServiceFunction(const DeleteServiceFunctionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/delete-function");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServiceFunctionOutcome(result.GetResultWithOwnership())
                            : DeleteServiceFunctionOutcome(std::move(result.GetError()));
}

DeleteServiceFunctionResourcesOutcome Resiliencehubv2Client::DeleteServiceFunctionResources(
    const DeleteServiceFunctionResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/delete-service-function-resources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServiceFunctionResourcesOutcome(result.GetResultWithOwnership())
                            : DeleteServiceFunctionResourcesOutcome(std::move(result.GetError()));
}

DeleteSystemOutcome Resiliencehubv2Client::DeleteSystem(const DeleteSystemRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/delete-system");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSystemOutcome(result.GetResultWithOwnership()) : DeleteSystemOutcome(std::move(result.GetError()));
}

DeleteUserJourneyOutcome Resiliencehubv2Client::DeleteUserJourney(const DeleteUserJourneyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/delete-user-journey");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserJourneyOutcome(result.GetResultWithOwnership())
                            : DeleteUserJourneyOutcome(std::move(result.GetError()));
}

GetFailureModeFindingOutcome Resiliencehubv2Client::GetFailureModeFinding(const GetFailureModeFindingRequest& request) const {
  if (!request.FindingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFailureModeFinding", "Required field: FindingId, is not set");
    return GetFailureModeFindingOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(
        Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }
  if (!request.ServiceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFailureModeFinding", "Required field: ServiceArn, is not set");
    return GetFailureModeFindingOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(
        Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/get-failure-mode-finding");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFailureModeFindingOutcome(result.GetResultWithOwnership())
                            : GetFailureModeFindingOutcome(std::move(result.GetError()));
}

GetPolicyOutcome Resiliencehubv2Client::GetPolicy(const GetPolicyRequest& request) const {
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: PolicyArn, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [PolicyArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/get-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPolicyOutcome(result.GetResultWithOwnership()) : GetPolicyOutcome(std::move(result.GetError()));
}

GetServiceOutcome Resiliencehubv2Client::GetService(const GetServiceRequest& request) const {
  if (!request.ServiceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: ServiceArn, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ServiceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/get-service");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetServiceOutcome(result.GetResultWithOwnership()) : GetServiceOutcome(std::move(result.GetError()));
}

GetSystemOutcome Resiliencehubv2Client::GetSystem(const GetSystemRequest& request) const {
  if (!request.SystemArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSystem", "Required field: SystemArn, is not set");
    return GetSystemOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SystemArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/get-system");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSystemOutcome(result.GetResultWithOwnership()) : GetSystemOutcome(std::move(result.GetError()));
}

GetUserJourneyOutcome Resiliencehubv2Client::GetUserJourney(const GetUserJourneyRequest& request) const {
  if (!request.SystemArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUserJourney", "Required field: SystemArn, is not set");
    return GetUserJourneyOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [SystemArn]", false));
  }
  if (!request.UserJourneyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUserJourney", "Required field: UserJourneyId, is not set");
    return GetUserJourneyOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [UserJourneyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/get-user-journey");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetUserJourneyOutcome(result.GetResultWithOwnership()) : GetUserJourneyOutcome(std::move(result.GetError()));
}

ImportAppOutcome Resiliencehubv2Client::ImportApp(const ImportAppRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/import-app");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportAppOutcome(result.GetResultWithOwnership()) : ImportAppOutcome(std::move(result.GetError()));
}

ImportPolicyOutcome Resiliencehubv2Client::ImportPolicy(const ImportPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/import-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportPolicyOutcome(result.GetResultWithOwnership()) : ImportPolicyOutcome(std::move(result.GetError()));
}

ListAssertionsOutcome Resiliencehubv2Client::ListAssertions(const ListAssertionsRequest& request) const {
  if (!request.ServiceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssertions", "Required field: ServiceArn, is not set");
    return ListAssertionsOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ServiceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-assertions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAssertionsOutcome(result.GetResultWithOwnership()) : ListAssertionsOutcome(std::move(result.GetError()));
}

ListDependenciesOutcome Resiliencehubv2Client::ListDependencies(const ListDependenciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-dependencies");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDependenciesOutcome(result.GetResultWithOwnership())
                            : ListDependenciesOutcome(std::move(result.GetError()));
}

ListFailureModeAssessmentsOutcome Resiliencehubv2Client::ListFailureModeAssessments(
    const ListFailureModeAssessmentsRequest& request) const {
  if (!request.ServiceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFailureModeAssessments", "Required field: ServiceArn, is not set");
    return ListFailureModeAssessmentsOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(
        Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-failure-mode-assessments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFailureModeAssessmentsOutcome(result.GetResultWithOwnership())
                            : ListFailureModeAssessmentsOutcome(std::move(result.GetError()));
}

ListFailureModeFindingsOutcome Resiliencehubv2Client::ListFailureModeFindings(const ListFailureModeFindingsRequest& request) const {
  if (!request.ServiceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFailureModeFindings", "Required field: ServiceArn, is not set");
    return ListFailureModeFindingsOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(
        Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-failure-mode-findings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFailureModeFindingsOutcome(result.GetResultWithOwnership())
                            : ListFailureModeFindingsOutcome(std::move(result.GetError()));
}

ListInputSourcesOutcome Resiliencehubv2Client::ListInputSources(const ListInputSourcesRequest& request) const {
  if (!request.ServiceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInputSources", "Required field: ServiceArn, is not set");
    return ListInputSourcesOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(
        Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-input-sources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInputSourcesOutcome(result.GetResultWithOwnership())
                            : ListInputSourcesOutcome(std::move(result.GetError()));
}

ListPoliciesOutcome Resiliencehubv2Client::ListPolicies(const ListPoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-policies");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPoliciesOutcome(result.GetResultWithOwnership()) : ListPoliciesOutcome(std::move(result.GetError()));
}

ListReportsOutcome Resiliencehubv2Client::ListReports(const ListReportsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-reports");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListReportsOutcome(result.GetResultWithOwnership()) : ListReportsOutcome(std::move(result.GetError()));
}

ListResourcesOutcome Resiliencehubv2Client::ListResources(const ListResourcesRequest& request) const {
  if (!request.ServiceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListResources", "Required field: ServiceArn, is not set");
    return ListResourcesOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ServiceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-resources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListResourcesOutcome(result.GetResultWithOwnership()) : ListResourcesOutcome(std::move(result.GetError()));
}

ListServiceEventsOutcome Resiliencehubv2Client::ListServiceEvents(const ListServiceEventsRequest& request) const {
  if (!request.ServiceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServiceEvents", "Required field: ServiceArn, is not set");
    return ListServiceEventsOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(
        Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-service-events");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListServiceEventsOutcome(result.GetResultWithOwnership())
                            : ListServiceEventsOutcome(std::move(result.GetError()));
}

ListServiceFunctionsOutcome Resiliencehubv2Client::ListServiceFunctions(const ListServiceFunctionsRequest& request) const {
  if (!request.ServiceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServiceFunctions", "Required field: ServiceArn, is not set");
    return ListServiceFunctionsOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(
        Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-functions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListServiceFunctionsOutcome(result.GetResultWithOwnership())
                            : ListServiceFunctionsOutcome(std::move(result.GetError()));
}

ListServiceTopologyEdgesOutcome Resiliencehubv2Client::ListServiceTopologyEdges(const ListServiceTopologyEdgesRequest& request) const {
  if (!request.ServiceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServiceTopologyEdges", "Required field: ServiceArn, is not set");
    return ListServiceTopologyEdgesOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(
        Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServiceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-service-topology-edges");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListServiceTopologyEdgesOutcome(result.GetResultWithOwnership())
                            : ListServiceTopologyEdgesOutcome(std::move(result.GetError()));
}

ListServicesOutcome Resiliencehubv2Client::ListServices(const ListServicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-services");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListServicesOutcome(result.GetResultWithOwnership()) : ListServicesOutcome(std::move(result.GetError()));
}

ListSystemEventsOutcome Resiliencehubv2Client::ListSystemEvents(const ListSystemEventsRequest& request) const {
  if (!request.SystemArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSystemEvents", "Required field: SystemArn, is not set");
    return ListSystemEventsOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(
        Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SystemArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-system-events");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSystemEventsOutcome(result.GetResultWithOwnership())
                            : ListSystemEventsOutcome(std::move(result.GetError()));
}

ListSystemsOutcome Resiliencehubv2Client::ListSystems(const ListSystemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-systems");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSystemsOutcome(result.GetResultWithOwnership()) : ListSystemsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome Resiliencehubv2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(
        Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListUserJourneysOutcome Resiliencehubv2Client::ListUserJourneys(const ListUserJourneysRequest& request) const {
  if (!request.SystemArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUserJourneys", "Required field: SystemArn, is not set");
    return ListUserJourneysOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(
        Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SystemArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/list-user-journeys");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListUserJourneysOutcome(result.GetResultWithOwnership())
                            : ListUserJourneysOutcome(std::move(result.GetError()));
}

StartFailureModeAssessmentOutcome Resiliencehubv2Client::StartFailureModeAssessment(
    const StartFailureModeAssessmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/start-failure-mode-assessment");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartFailureModeAssessmentOutcome(result.GetResultWithOwnership())
                            : StartFailureModeAssessmentOutcome(std::move(result.GetError()));
}

TagResourceOutcome Resiliencehubv2Client::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome Resiliencehubv2Client::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Resiliencehubv2Errors>(Resiliencehubv2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAssertionOutcome Resiliencehubv2Client::UpdateAssertion(const UpdateAssertionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/update-assertion");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAssertionOutcome(result.GetResultWithOwnership())
                            : UpdateAssertionOutcome(std::move(result.GetError()));
}

UpdateDependencyOutcome Resiliencehubv2Client::UpdateDependency(const UpdateDependencyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/update-dependency");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDependencyOutcome(result.GetResultWithOwnership())
                            : UpdateDependencyOutcome(std::move(result.GetError()));
}

UpdateFailureModeFindingOutcome Resiliencehubv2Client::UpdateFailureModeFinding(const UpdateFailureModeFindingRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/update-failure-mode-finding");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFailureModeFindingOutcome(result.GetResultWithOwnership())
                            : UpdateFailureModeFindingOutcome(std::move(result.GetError()));
}

UpdatePolicyOutcome Resiliencehubv2Client::UpdatePolicy(const UpdatePolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/update-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePolicyOutcome(result.GetResultWithOwnership()) : UpdatePolicyOutcome(std::move(result.GetError()));
}

UpdateServiceOutcome Resiliencehubv2Client::UpdateService(const UpdateServiceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/update-service");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateServiceOutcome(result.GetResultWithOwnership()) : UpdateServiceOutcome(std::move(result.GetError()));
}

UpdateServiceFunctionOutcome Resiliencehubv2Client::UpdateServiceFunction(const UpdateServiceFunctionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/update-function");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateServiceFunctionOutcome(result.GetResultWithOwnership())
                            : UpdateServiceFunctionOutcome(std::move(result.GetError()));
}

UpdateSystemOutcome Resiliencehubv2Client::UpdateSystem(const UpdateSystemRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/update-system");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSystemOutcome(result.GetResultWithOwnership()) : UpdateSystemOutcome(std::move(result.GetError()));
}

UpdateUserJourneyOutcome Resiliencehubv2Client::UpdateUserJourney(const UpdateUserJourneyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/update-user-journey");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserJourneyOutcome(result.GetResultWithOwnership())
                            : UpdateUserJourneyOutcome(std::move(result.GetError()));
}
