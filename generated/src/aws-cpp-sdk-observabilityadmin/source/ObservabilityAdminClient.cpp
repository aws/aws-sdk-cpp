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

  return CreateCentralizationRuleForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateS3TableIntegrationOutcome ObservabilityAdminClient::CreateS3TableIntegration(const CreateS3TableIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateS3TableIntegration");
  };

  return CreateS3TableIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTelemetryPipelineOutcome ObservabilityAdminClient::CreateTelemetryPipeline(const CreateTelemetryPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateTelemetryPipeline");
  };

  return CreateTelemetryPipelineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTelemetryRuleOutcome ObservabilityAdminClient::CreateTelemetryRule(const CreateTelemetryRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateTelemetryRule");
  };

  return CreateTelemetryRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTelemetryRuleForOrganizationOutcome ObservabilityAdminClient::CreateTelemetryRuleForOrganization(
    const CreateTelemetryRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateTelemetryRuleForOrganization");
  };

  return CreateTelemetryRuleForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCentralizationRuleForOrganizationOutcome ObservabilityAdminClient::DeleteCentralizationRuleForOrganization(
    const DeleteCentralizationRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteCentralizationRuleForOrganization");
  };

  return DeleteCentralizationRuleForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteS3TableIntegrationOutcome ObservabilityAdminClient::DeleteS3TableIntegration(const DeleteS3TableIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteS3TableIntegration");
  };

  return DeleteS3TableIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTelemetryPipelineOutcome ObservabilityAdminClient::DeleteTelemetryPipeline(const DeleteTelemetryPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteTelemetryPipeline");
  };

  return DeleteTelemetryPipelineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTelemetryRuleOutcome ObservabilityAdminClient::DeleteTelemetryRule(const DeleteTelemetryRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteTelemetryRule");
  };

  return DeleteTelemetryRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTelemetryRuleForOrganizationOutcome ObservabilityAdminClient::DeleteTelemetryRuleForOrganization(
    const DeleteTelemetryRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteTelemetryRuleForOrganization");
  };

  return DeleteTelemetryRuleForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCentralizationRuleForOrganizationOutcome ObservabilityAdminClient::GetCentralizationRuleForOrganization(
    const GetCentralizationRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetCentralizationRuleForOrganization");
  };

  return GetCentralizationRuleForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetS3TableIntegrationOutcome ObservabilityAdminClient::GetS3TableIntegration(const GetS3TableIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetS3TableIntegration");
  };

  return GetS3TableIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTelemetryEnrichmentStatusOutcome ObservabilityAdminClient::GetTelemetryEnrichmentStatus(
    const GetTelemetryEnrichmentStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryEnrichmentStatus");
  };

  return GetTelemetryEnrichmentStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTelemetryEvaluationStatusOutcome ObservabilityAdminClient::GetTelemetryEvaluationStatus(
    const GetTelemetryEvaluationStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryEvaluationStatus");
  };

  return GetTelemetryEvaluationStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTelemetryEvaluationStatusForOrganizationOutcome ObservabilityAdminClient::GetTelemetryEvaluationStatusForOrganization(
    const GetTelemetryEvaluationStatusForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryEvaluationStatusForOrganization");
  };

  return GetTelemetryEvaluationStatusForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTelemetryPipelineOutcome ObservabilityAdminClient::GetTelemetryPipeline(const GetTelemetryPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryPipeline");
  };

  return GetTelemetryPipelineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTelemetryRuleOutcome ObservabilityAdminClient::GetTelemetryRule(const GetTelemetryRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryRule");
  };

  return GetTelemetryRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTelemetryRuleForOrganizationOutcome ObservabilityAdminClient::GetTelemetryRuleForOrganization(
    const GetTelemetryRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTelemetryRuleForOrganization");
  };

  return GetTelemetryRuleForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCentralizationRulesForOrganizationOutcome ObservabilityAdminClient::ListCentralizationRulesForOrganization(
    const ListCentralizationRulesForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListCentralizationRulesForOrganization");
  };

  return ListCentralizationRulesForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceTelemetryOutcome ObservabilityAdminClient::ListResourceTelemetry(const ListResourceTelemetryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListResourceTelemetry");
  };

  return ListResourceTelemetryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceTelemetryForOrganizationOutcome ObservabilityAdminClient::ListResourceTelemetryForOrganization(
    const ListResourceTelemetryForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListResourceTelemetryForOrganization");
  };

  return ListResourceTelemetryForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListS3TableIntegrationsOutcome ObservabilityAdminClient::ListS3TableIntegrations(const ListS3TableIntegrationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListS3TableIntegrations");
  };

  return ListS3TableIntegrationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ObservabilityAdminClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTagsForResource");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTelemetryPipelinesOutcome ObservabilityAdminClient::ListTelemetryPipelines(const ListTelemetryPipelinesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTelemetryPipelines");
  };

  return ListTelemetryPipelinesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTelemetryRulesOutcome ObservabilityAdminClient::ListTelemetryRules(const ListTelemetryRulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTelemetryRules");
  };

  return ListTelemetryRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTelemetryRulesForOrganizationOutcome ObservabilityAdminClient::ListTelemetryRulesForOrganization(
    const ListTelemetryRulesForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTelemetryRulesForOrganization");
  };

  return ListTelemetryRulesForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTelemetryEnrichmentOutcome ObservabilityAdminClient::StartTelemetryEnrichment(const StartTelemetryEnrichmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartTelemetryEnrichment");
  };

  return StartTelemetryEnrichmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTelemetryEvaluationOutcome ObservabilityAdminClient::StartTelemetryEvaluation(const StartTelemetryEvaluationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartTelemetryEvaluation");
  };

  return StartTelemetryEvaluationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTelemetryEvaluationForOrganizationOutcome ObservabilityAdminClient::StartTelemetryEvaluationForOrganization(
    const StartTelemetryEvaluationForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartTelemetryEvaluationForOrganization");
  };

  return StartTelemetryEvaluationForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTelemetryEnrichmentOutcome ObservabilityAdminClient::StopTelemetryEnrichment(const StopTelemetryEnrichmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopTelemetryEnrichment");
  };

  return StopTelemetryEnrichmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTelemetryEvaluationOutcome ObservabilityAdminClient::StopTelemetryEvaluation(const StopTelemetryEvaluationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopTelemetryEvaluation");
  };

  return StopTelemetryEvaluationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTelemetryEvaluationForOrganizationOutcome ObservabilityAdminClient::StopTelemetryEvaluationForOrganization(
    const StopTelemetryEvaluationForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopTelemetryEvaluationForOrganization");
  };

  return StopTelemetryEvaluationForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ObservabilityAdminClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TagResource");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TestTelemetryPipelineOutcome ObservabilityAdminClient::TestTelemetryPipeline(const TestTelemetryPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TestTelemetryPipeline");
  };

  return TestTelemetryPipelineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ObservabilityAdminClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UntagResource");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCentralizationRuleForOrganizationOutcome ObservabilityAdminClient::UpdateCentralizationRuleForOrganization(
    const UpdateCentralizationRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateCentralizationRuleForOrganization");
  };

  return UpdateCentralizationRuleForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTelemetryPipelineOutcome ObservabilityAdminClient::UpdateTelemetryPipeline(const UpdateTelemetryPipelineRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTelemetryPipeline");
  };

  return UpdateTelemetryPipelineOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTelemetryRuleOutcome ObservabilityAdminClient::UpdateTelemetryRule(const UpdateTelemetryRuleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTelemetryRule");
  };

  return UpdateTelemetryRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTelemetryRuleForOrganizationOutcome ObservabilityAdminClient::UpdateTelemetryRuleForOrganization(
    const UpdateTelemetryRuleForOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTelemetryRuleForOrganization");
  };

  return UpdateTelemetryRuleForOrganizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ValidateTelemetryPipelineConfigurationOutcome ObservabilityAdminClient::ValidateTelemetryPipelineConfiguration(
    const ValidateTelemetryPipelineConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ValidateTelemetryPipelineConfiguration");
  };

  return ValidateTelemetryPipelineConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
