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
#include <aws/observabilityadmin/ObservabilityAdminClient.h>
#include <aws/observabilityadmin/ObservabilityAdminEndpointProvider.h>
#include <aws/observabilityadmin/ObservabilityAdminErrorMarshaller.h>
#include <aws/observabilityadmin/model/CreateCentralizationRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/CreateS3TableIntegrationRequest.h>
#include <aws/observabilityadmin/model/CreateTelemetryPipelineRequest.h>
#include <aws/observabilityadmin/model/CreateTelemetryRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/CreateTelemetryRuleRequest.h>
#include <aws/observabilityadmin/model/DeleteCentralizationRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/DeleteS3TableIntegrationRequest.h>
#include <aws/observabilityadmin/model/DeleteTelemetryPipelineRequest.h>
#include <aws/observabilityadmin/model/DeleteTelemetryRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/DeleteTelemetryRuleRequest.h>
#include <aws/observabilityadmin/model/GetCentralizationRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/GetS3TableIntegrationRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEnrichmentStatusRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusForOrganizationRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryEvaluationStatusRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryPipelineRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/GetTelemetryRuleRequest.h>
#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryRequest.h>
#include <aws/observabilityadmin/model/ListS3TableIntegrationsRequest.h>
#include <aws/observabilityadmin/model/ListTagsForResourceRequest.h>
#include <aws/observabilityadmin/model/ListTelemetryPipelinesRequest.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationRequest.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesRequest.h>
#include <aws/observabilityadmin/model/StartTelemetryEnrichmentRequest.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationForOrganizationRequest.h>
#include <aws/observabilityadmin/model/StartTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/StopTelemetryEnrichmentRequest.h>
#include <aws/observabilityadmin/model/StopTelemetryEvaluationForOrganizationRequest.h>
#include <aws/observabilityadmin/model/StopTelemetryEvaluationRequest.h>
#include <aws/observabilityadmin/model/TagResourceRequest.h>
#include <aws/observabilityadmin/model/TestTelemetryPipelineRequest.h>
#include <aws/observabilityadmin/model/UntagResourceRequest.h>
#include <aws/observabilityadmin/model/UpdateCentralizationRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/UpdateTelemetryPipelineRequest.h>
#include <aws/observabilityadmin/model/UpdateTelemetryRuleForOrganizationRequest.h>
#include <aws/observabilityadmin/model/UpdateTelemetryRuleRequest.h>
#include <aws/observabilityadmin/model/ValidateTelemetryPipelineConfigurationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ObservabilityAdmin;
using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ObservabilityAdmin {
const char SERVICE_NAME[] = "observabilityadmin";
const char ALLOCATION_TAG[] = "ObservabilityAdminClient";
}  // namespace ObservabilityAdmin
}  // namespace Aws
const char* ObservabilityAdminClient::GetServiceName() { return SERVICE_NAME; }
const char* ObservabilityAdminClient::GetAllocationTag() { return ALLOCATION_TAG; }

ObservabilityAdminClient::ObservabilityAdminClient(const ObservabilityAdmin::ObservabilityAdminClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<ObservabilityAdminEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ObservabilityAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ObservabilityAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ObservabilityAdminClient::ObservabilityAdminClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<ObservabilityAdminEndpointProviderBase> endpointProvider,
                                                   const ObservabilityAdmin::ObservabilityAdminClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ObservabilityAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ObservabilityAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ObservabilityAdminClient::ObservabilityAdminClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<ObservabilityAdminEndpointProviderBase> endpointProvider,
                                                   const ObservabilityAdmin::ObservabilityAdminClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ObservabilityAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ObservabilityAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ObservabilityAdminClient::ObservabilityAdminClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ObservabilityAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ObservabilityAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ObservabilityAdminClient::ObservabilityAdminClient(const AWSCredentials& credentials,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ObservabilityAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ObservabilityAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ObservabilityAdminClient::ObservabilityAdminClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ObservabilityAdminErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ObservabilityAdminEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ObservabilityAdminClient::~ObservabilityAdminClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ObservabilityAdminEndpointProviderBase>& ObservabilityAdminClient::accessEndpointProvider() { return m_endpointProvider; }

void ObservabilityAdminClient::init(const ObservabilityAdmin::ObservabilityAdminClientConfiguration& config) {
  AWSClient::SetServiceClientName("ObservabilityAdmin");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "observabilityadmin");
}

void ObservabilityAdminClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ObservabilityAdminClient::InvokeOperationOutcome ObservabilityAdminClient::InvokeServiceOperation(
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

CreateCentralizationRuleForOrganizationOutcome ObservabilityAdminClient::CreateCentralizationRuleForOrganization(
    const CreateCentralizationRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateCentralizationRuleForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCentralizationRuleForOrganizationOutcome(result.GetResultWithOwnership())
                            : CreateCentralizationRuleForOrganizationOutcome(std::move(result.GetError()));
}

CreateS3TableIntegrationOutcome ObservabilityAdminClient::CreateS3TableIntegration(const CreateS3TableIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateS3TableIntegration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateS3TableIntegrationOutcome(result.GetResultWithOwnership())
                            : CreateS3TableIntegrationOutcome(std::move(result.GetError()));
}

CreateTelemetryPipelineOutcome ObservabilityAdminClient::CreateTelemetryPipeline(const CreateTelemetryPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateTelemetryPipeline");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTelemetryPipelineOutcome(result.GetResultWithOwnership())
                            : CreateTelemetryPipelineOutcome(std::move(result.GetError()));
}

CreateTelemetryRuleOutcome ObservabilityAdminClient::CreateTelemetryRule(const CreateTelemetryRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateTelemetryRule");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTelemetryRuleOutcome(result.GetResultWithOwnership())
                            : CreateTelemetryRuleOutcome(std::move(result.GetError()));
}

CreateTelemetryRuleForOrganizationOutcome ObservabilityAdminClient::CreateTelemetryRuleForOrganization(
    const CreateTelemetryRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateTelemetryRuleForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTelemetryRuleForOrganizationOutcome(result.GetResultWithOwnership())
                            : CreateTelemetryRuleForOrganizationOutcome(std::move(result.GetError()));
}

DeleteCentralizationRuleForOrganizationOutcome ObservabilityAdminClient::DeleteCentralizationRuleForOrganization(
    const DeleteCentralizationRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteCentralizationRuleForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCentralizationRuleForOrganizationOutcome(result.GetResultWithOwnership())
                            : DeleteCentralizationRuleForOrganizationOutcome(std::move(result.GetError()));
}

DeleteS3TableIntegrationOutcome ObservabilityAdminClient::DeleteS3TableIntegration(const DeleteS3TableIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteS3TableIntegration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteS3TableIntegrationOutcome(result.GetResultWithOwnership())
                            : DeleteS3TableIntegrationOutcome(std::move(result.GetError()));
}

DeleteTelemetryPipelineOutcome ObservabilityAdminClient::DeleteTelemetryPipeline(const DeleteTelemetryPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteTelemetryPipeline");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTelemetryPipelineOutcome(result.GetResultWithOwnership())
                            : DeleteTelemetryPipelineOutcome(std::move(result.GetError()));
}

DeleteTelemetryRuleOutcome ObservabilityAdminClient::DeleteTelemetryRule(const DeleteTelemetryRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteTelemetryRule");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTelemetryRuleOutcome(result.GetResultWithOwnership())
                            : DeleteTelemetryRuleOutcome(std::move(result.GetError()));
}

DeleteTelemetryRuleForOrganizationOutcome ObservabilityAdminClient::DeleteTelemetryRuleForOrganization(
    const DeleteTelemetryRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteTelemetryRuleForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTelemetryRuleForOrganizationOutcome(result.GetResultWithOwnership())
                            : DeleteTelemetryRuleForOrganizationOutcome(std::move(result.GetError()));
}

GetCentralizationRuleForOrganizationOutcome ObservabilityAdminClient::GetCentralizationRuleForOrganization(
    const GetCentralizationRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetCentralizationRuleForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCentralizationRuleForOrganizationOutcome(result.GetResultWithOwnership())
                            : GetCentralizationRuleForOrganizationOutcome(std::move(result.GetError()));
}

GetS3TableIntegrationOutcome ObservabilityAdminClient::GetS3TableIntegration(const GetS3TableIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetS3TableIntegration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetS3TableIntegrationOutcome(result.GetResultWithOwnership())
                            : GetS3TableIntegrationOutcome(std::move(result.GetError()));
}

GetTelemetryEnrichmentStatusOutcome ObservabilityAdminClient::GetTelemetryEnrichmentStatus(
    const GetTelemetryEnrichmentStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryEnrichmentStatus");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTelemetryEnrichmentStatusOutcome(result.GetResultWithOwnership())
                            : GetTelemetryEnrichmentStatusOutcome(std::move(result.GetError()));
}

GetTelemetryEvaluationStatusOutcome ObservabilityAdminClient::GetTelemetryEvaluationStatus(
    const GetTelemetryEvaluationStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryEvaluationStatus");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTelemetryEvaluationStatusOutcome(result.GetResultWithOwnership())
                            : GetTelemetryEvaluationStatusOutcome(std::move(result.GetError()));
}

GetTelemetryEvaluationStatusForOrganizationOutcome ObservabilityAdminClient::GetTelemetryEvaluationStatusForOrganization(
    const GetTelemetryEvaluationStatusForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryEvaluationStatusForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTelemetryEvaluationStatusForOrganizationOutcome(result.GetResultWithOwnership())
                            : GetTelemetryEvaluationStatusForOrganizationOutcome(std::move(result.GetError()));
}

GetTelemetryPipelineOutcome ObservabilityAdminClient::GetTelemetryPipeline(const GetTelemetryPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryPipeline");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTelemetryPipelineOutcome(result.GetResultWithOwnership())
                            : GetTelemetryPipelineOutcome(std::move(result.GetError()));
}

GetTelemetryRuleOutcome ObservabilityAdminClient::GetTelemetryRule(const GetTelemetryRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryRule");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTelemetryRuleOutcome(result.GetResultWithOwnership())
                            : GetTelemetryRuleOutcome(std::move(result.GetError()));
}

GetTelemetryRuleForOrganizationOutcome ObservabilityAdminClient::GetTelemetryRuleForOrganization(
    const GetTelemetryRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryRuleForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTelemetryRuleForOrganizationOutcome(result.GetResultWithOwnership())
                            : GetTelemetryRuleForOrganizationOutcome(std::move(result.GetError()));
}

ListCentralizationRulesForOrganizationOutcome ObservabilityAdminClient::ListCentralizationRulesForOrganization(
    const ListCentralizationRulesForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListCentralizationRulesForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCentralizationRulesForOrganizationOutcome(result.GetResultWithOwnership())
                            : ListCentralizationRulesForOrganizationOutcome(std::move(result.GetError()));
}

ListResourceTelemetryOutcome ObservabilityAdminClient::ListResourceTelemetry(const ListResourceTelemetryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListResourceTelemetry");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceTelemetryOutcome(result.GetResultWithOwnership())
                            : ListResourceTelemetryOutcome(std::move(result.GetError()));
}

ListResourceTelemetryForOrganizationOutcome ObservabilityAdminClient::ListResourceTelemetryForOrganization(
    const ListResourceTelemetryForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListResourceTelemetryForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceTelemetryForOrganizationOutcome(result.GetResultWithOwnership())
                            : ListResourceTelemetryForOrganizationOutcome(std::move(result.GetError()));
}

ListS3TableIntegrationsOutcome ObservabilityAdminClient::ListS3TableIntegrations(const ListS3TableIntegrationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListS3TableIntegrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListS3TableIntegrationsOutcome(result.GetResultWithOwnership())
                            : ListS3TableIntegrationsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ObservabilityAdminClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTagsForResource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTelemetryPipelinesOutcome ObservabilityAdminClient::ListTelemetryPipelines(const ListTelemetryPipelinesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTelemetryPipelines");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTelemetryPipelinesOutcome(result.GetResultWithOwnership())
                            : ListTelemetryPipelinesOutcome(std::move(result.GetError()));
}

ListTelemetryRulesOutcome ObservabilityAdminClient::ListTelemetryRules(const ListTelemetryRulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTelemetryRules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTelemetryRulesOutcome(result.GetResultWithOwnership())
                            : ListTelemetryRulesOutcome(std::move(result.GetError()));
}

ListTelemetryRulesForOrganizationOutcome ObservabilityAdminClient::ListTelemetryRulesForOrganization(
    const ListTelemetryRulesForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTelemetryRulesForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTelemetryRulesForOrganizationOutcome(result.GetResultWithOwnership())
                            : ListTelemetryRulesForOrganizationOutcome(std::move(result.GetError()));
}

StartTelemetryEnrichmentOutcome ObservabilityAdminClient::StartTelemetryEnrichment(const StartTelemetryEnrichmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartTelemetryEnrichment");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartTelemetryEnrichmentOutcome(result.GetResultWithOwnership())
                            : StartTelemetryEnrichmentOutcome(std::move(result.GetError()));
}

StartTelemetryEvaluationOutcome ObservabilityAdminClient::StartTelemetryEvaluation(const StartTelemetryEvaluationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartTelemetryEvaluation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartTelemetryEvaluationOutcome(result.GetResultWithOwnership())
                            : StartTelemetryEvaluationOutcome(std::move(result.GetError()));
}

StartTelemetryEvaluationForOrganizationOutcome ObservabilityAdminClient::StartTelemetryEvaluationForOrganization(
    const StartTelemetryEvaluationForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartTelemetryEvaluationForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartTelemetryEvaluationForOrganizationOutcome(result.GetResultWithOwnership())
                            : StartTelemetryEvaluationForOrganizationOutcome(std::move(result.GetError()));
}

StopTelemetryEnrichmentOutcome ObservabilityAdminClient::StopTelemetryEnrichment(const StopTelemetryEnrichmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopTelemetryEnrichment");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopTelemetryEnrichmentOutcome(result.GetResultWithOwnership())
                            : StopTelemetryEnrichmentOutcome(std::move(result.GetError()));
}

StopTelemetryEvaluationOutcome ObservabilityAdminClient::StopTelemetryEvaluation(const StopTelemetryEvaluationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopTelemetryEvaluation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopTelemetryEvaluationOutcome(result.GetResultWithOwnership())
                            : StopTelemetryEvaluationOutcome(std::move(result.GetError()));
}

StopTelemetryEvaluationForOrganizationOutcome ObservabilityAdminClient::StopTelemetryEvaluationForOrganization(
    const StopTelemetryEvaluationForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopTelemetryEvaluationForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopTelemetryEvaluationForOrganizationOutcome(result.GetResultWithOwnership())
                            : StopTelemetryEvaluationForOrganizationOutcome(std::move(result.GetError()));
}

TagResourceOutcome ObservabilityAdminClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TagResource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TestTelemetryPipelineOutcome ObservabilityAdminClient::TestTelemetryPipeline(const TestTelemetryPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TestTelemetryPipeline");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestTelemetryPipelineOutcome(result.GetResultWithOwnership())
                            : TestTelemetryPipelineOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ObservabilityAdminClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UntagResource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateCentralizationRuleForOrganizationOutcome ObservabilityAdminClient::UpdateCentralizationRuleForOrganization(
    const UpdateCentralizationRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateCentralizationRuleForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCentralizationRuleForOrganizationOutcome(result.GetResultWithOwnership())
                            : UpdateCentralizationRuleForOrganizationOutcome(std::move(result.GetError()));
}

UpdateTelemetryPipelineOutcome ObservabilityAdminClient::UpdateTelemetryPipeline(const UpdateTelemetryPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTelemetryPipeline");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTelemetryPipelineOutcome(result.GetResultWithOwnership())
                            : UpdateTelemetryPipelineOutcome(std::move(result.GetError()));
}

UpdateTelemetryRuleOutcome ObservabilityAdminClient::UpdateTelemetryRule(const UpdateTelemetryRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTelemetryRule");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTelemetryRuleOutcome(result.GetResultWithOwnership())
                            : UpdateTelemetryRuleOutcome(std::move(result.GetError()));
}

UpdateTelemetryRuleForOrganizationOutcome ObservabilityAdminClient::UpdateTelemetryRuleForOrganization(
    const UpdateTelemetryRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTelemetryRuleForOrganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTelemetryRuleForOrganizationOutcome(result.GetResultWithOwnership())
                            : UpdateTelemetryRuleForOrganizationOutcome(std::move(result.GetError()));
}

ValidateTelemetryPipelineConfigurationOutcome ObservabilityAdminClient::ValidateTelemetryPipelineConfiguration(
    const ValidateTelemetryPipelineConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ValidateTelemetryPipelineConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ValidateTelemetryPipelineConfigurationOutcome(result.GetResultWithOwnership())
                            : ValidateTelemetryPipelineConfigurationOutcome(std::move(result.GetError()));
}
