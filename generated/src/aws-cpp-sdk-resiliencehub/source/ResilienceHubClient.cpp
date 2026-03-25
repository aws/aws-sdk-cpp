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
#include <aws/resiliencehub/ResilienceHubClient.h>
#include <aws/resiliencehub/ResilienceHubEndpointProvider.h>
#include <aws/resiliencehub/ResilienceHubErrorMarshaller.h>
#include <aws/resiliencehub/model/AcceptResourceGroupingRecommendationsRequest.h>
#include <aws/resiliencehub/model/AddDraftAppVersionResourceMappingsRequest.h>
#include <aws/resiliencehub/model/BatchUpdateRecommendationStatusRequest.h>
#include <aws/resiliencehub/model/CreateAppRequest.h>
#include <aws/resiliencehub/model/CreateAppVersionAppComponentRequest.h>
#include <aws/resiliencehub/model/CreateAppVersionResourceRequest.h>
#include <aws/resiliencehub/model/CreateRecommendationTemplateRequest.h>
#include <aws/resiliencehub/model/CreateResiliencyPolicyRequest.h>
#include <aws/resiliencehub/model/DeleteAppAssessmentRequest.h>
#include <aws/resiliencehub/model/DeleteAppInputSourceRequest.h>
#include <aws/resiliencehub/model/DeleteAppRequest.h>
#include <aws/resiliencehub/model/DeleteAppVersionAppComponentRequest.h>
#include <aws/resiliencehub/model/DeleteAppVersionResourceRequest.h>
#include <aws/resiliencehub/model/DeleteRecommendationTemplateRequest.h>
#include <aws/resiliencehub/model/DeleteResiliencyPolicyRequest.h>
#include <aws/resiliencehub/model/DescribeAppAssessmentRequest.h>
#include <aws/resiliencehub/model/DescribeAppRequest.h>
#include <aws/resiliencehub/model/DescribeAppVersionAppComponentRequest.h>
#include <aws/resiliencehub/model/DescribeAppVersionRequest.h>
#include <aws/resiliencehub/model/DescribeAppVersionResourceRequest.h>
#include <aws/resiliencehub/model/DescribeAppVersionResourcesResolutionStatusRequest.h>
#include <aws/resiliencehub/model/DescribeAppVersionTemplateRequest.h>
#include <aws/resiliencehub/model/DescribeDraftAppVersionResourcesImportStatusRequest.h>
#include <aws/resiliencehub/model/DescribeMetricsExportRequest.h>
#include <aws/resiliencehub/model/DescribeResiliencyPolicyRequest.h>
#include <aws/resiliencehub/model/DescribeResourceGroupingRecommendationTaskRequest.h>
#include <aws/resiliencehub/model/ImportResourcesToDraftAppVersionRequest.h>
#include <aws/resiliencehub/model/ListAlarmRecommendationsRequest.h>
#include <aws/resiliencehub/model/ListAppAssessmentComplianceDriftsRequest.h>
#include <aws/resiliencehub/model/ListAppAssessmentResourceDriftsRequest.h>
#include <aws/resiliencehub/model/ListAppAssessmentsRequest.h>
#include <aws/resiliencehub/model/ListAppComponentCompliancesRequest.h>
#include <aws/resiliencehub/model/ListAppComponentRecommendationsRequest.h>
#include <aws/resiliencehub/model/ListAppInputSourcesRequest.h>
#include <aws/resiliencehub/model/ListAppVersionAppComponentsRequest.h>
#include <aws/resiliencehub/model/ListAppVersionResourceMappingsRequest.h>
#include <aws/resiliencehub/model/ListAppVersionResourcesRequest.h>
#include <aws/resiliencehub/model/ListAppVersionsRequest.h>
#include <aws/resiliencehub/model/ListAppsRequest.h>
#include <aws/resiliencehub/model/ListMetricsRequest.h>
#include <aws/resiliencehub/model/ListRecommendationTemplatesRequest.h>
#include <aws/resiliencehub/model/ListResiliencyPoliciesRequest.h>
#include <aws/resiliencehub/model/ListResourceGroupingRecommendationsRequest.h>
#include <aws/resiliencehub/model/ListSopRecommendationsRequest.h>
#include <aws/resiliencehub/model/ListSuggestedResiliencyPoliciesRequest.h>
#include <aws/resiliencehub/model/ListTagsForResourceRequest.h>
#include <aws/resiliencehub/model/ListTestRecommendationsRequest.h>
#include <aws/resiliencehub/model/ListUnsupportedAppVersionResourcesRequest.h>
#include <aws/resiliencehub/model/PublishAppVersionRequest.h>
#include <aws/resiliencehub/model/PutDraftAppVersionTemplateRequest.h>
#include <aws/resiliencehub/model/RejectResourceGroupingRecommendationsRequest.h>
#include <aws/resiliencehub/model/RemoveDraftAppVersionResourceMappingsRequest.h>
#include <aws/resiliencehub/model/ResolveAppVersionResourcesRequest.h>
#include <aws/resiliencehub/model/StartAppAssessmentRequest.h>
#include <aws/resiliencehub/model/StartMetricsExportRequest.h>
#include <aws/resiliencehub/model/StartResourceGroupingRecommendationTaskRequest.h>
#include <aws/resiliencehub/model/TagResourceRequest.h>
#include <aws/resiliencehub/model/UntagResourceRequest.h>
#include <aws/resiliencehub/model/UpdateAppRequest.h>
#include <aws/resiliencehub/model/UpdateAppVersionAppComponentRequest.h>
#include <aws/resiliencehub/model/UpdateAppVersionRequest.h>
#include <aws/resiliencehub/model/UpdateAppVersionResourceRequest.h>
#include <aws/resiliencehub/model/UpdateResiliencyPolicyRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ResilienceHub;
using namespace Aws::ResilienceHub::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ResilienceHub {
const char SERVICE_NAME[] = "resiliencehub";
const char ALLOCATION_TAG[] = "ResilienceHubClient";
}  // namespace ResilienceHub
}  // namespace Aws
const char* ResilienceHubClient::GetServiceName() { return SERVICE_NAME; }
const char* ResilienceHubClient::GetAllocationTag() { return ALLOCATION_TAG; }

ResilienceHubClient::ResilienceHubClient(const ResilienceHub::ResilienceHubClientConfiguration& clientConfiguration,
                                         std::shared_ptr<ResilienceHubEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResilienceHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ResilienceHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResilienceHubClient::ResilienceHubClient(const AWSCredentials& credentials,
                                         std::shared_ptr<ResilienceHubEndpointProviderBase> endpointProvider,
                                         const ResilienceHub::ResilienceHubClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResilienceHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ResilienceHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResilienceHubClient::ResilienceHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<ResilienceHubEndpointProviderBase> endpointProvider,
                                         const ResilienceHub::ResilienceHubClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResilienceHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ResilienceHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ResilienceHubClient::ResilienceHubClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResilienceHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ResilienceHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResilienceHubClient::ResilienceHubClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResilienceHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ResilienceHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ResilienceHubClient::ResilienceHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ResilienceHubErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ResilienceHubEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ResilienceHubClient::~ResilienceHubClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ResilienceHubEndpointProviderBase>& ResilienceHubClient::accessEndpointProvider() { return m_endpointProvider; }

void ResilienceHubClient::init(const ResilienceHub::ResilienceHubClientConfiguration& config) {
  AWSClient::SetServiceClientName("resiliencehub");
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

void ResilienceHubClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ResilienceHubClient::InvokeOperationOutcome ResilienceHubClient::InvokeServiceOperation(
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

AcceptResourceGroupingRecommendationsOutcome ResilienceHubClient::AcceptResourceGroupingRecommendations(
    const AcceptResourceGroupingRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accept-resource-grouping-recommendations");
  };

  return AcceptResourceGroupingRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AddDraftAppVersionResourceMappingsOutcome ResilienceHubClient::AddDraftAppVersionResourceMappings(
    const AddDraftAppVersionResourceMappingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/add-draft-app-version-resource-mappings");
  };

  return AddDraftAppVersionResourceMappingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateRecommendationStatusOutcome ResilienceHubClient::BatchUpdateRecommendationStatus(
    const BatchUpdateRecommendationStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-update-recommendation-status");
  };

  return BatchUpdateRecommendationStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAppOutcome ResilienceHubClient::CreateApp(const CreateAppRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-app");
  };

  return CreateAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAppVersionAppComponentOutcome ResilienceHubClient::CreateAppVersionAppComponent(
    const CreateAppVersionAppComponentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-app-version-app-component");
  };

  return CreateAppVersionAppComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAppVersionResourceOutcome ResilienceHubClient::CreateAppVersionResource(const CreateAppVersionResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-app-version-resource");
  };

  return CreateAppVersionResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRecommendationTemplateOutcome ResilienceHubClient::CreateRecommendationTemplate(
    const CreateRecommendationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-recommendation-template");
  };

  return CreateRecommendationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResiliencyPolicyOutcome ResilienceHubClient::CreateResiliencyPolicy(const CreateResiliencyPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/create-resiliency-policy");
  };

  return CreateResiliencyPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppOutcome ResilienceHubClient::DeleteApp(const DeleteAppRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-app");
  };

  return DeleteAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppAssessmentOutcome ResilienceHubClient::DeleteAppAssessment(const DeleteAppAssessmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-app-assessment");
  };

  return DeleteAppAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppInputSourceOutcome ResilienceHubClient::DeleteAppInputSource(const DeleteAppInputSourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-app-input-source");
  };

  return DeleteAppInputSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppVersionAppComponentOutcome ResilienceHubClient::DeleteAppVersionAppComponent(
    const DeleteAppVersionAppComponentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-app-version-app-component");
  };

  return DeleteAppVersionAppComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppVersionResourceOutcome ResilienceHubClient::DeleteAppVersionResource(const DeleteAppVersionResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-app-version-resource");
  };

  return DeleteAppVersionResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRecommendationTemplateOutcome ResilienceHubClient::DeleteRecommendationTemplate(
    const DeleteRecommendationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-recommendation-template");
  };

  return DeleteRecommendationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResiliencyPolicyOutcome ResilienceHubClient::DeleteResiliencyPolicy(const DeleteResiliencyPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/delete-resiliency-policy");
  };

  return DeleteResiliencyPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppOutcome ResilienceHubClient::DescribeApp(const DescribeAppRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-app");
  };

  return DescribeAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppAssessmentOutcome ResilienceHubClient::DescribeAppAssessment(const DescribeAppAssessmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-app-assessment");
  };

  return DescribeAppAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppVersionOutcome ResilienceHubClient::DescribeAppVersion(const DescribeAppVersionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-app-version");
  };

  return DescribeAppVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppVersionAppComponentOutcome ResilienceHubClient::DescribeAppVersionAppComponent(
    const DescribeAppVersionAppComponentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-app-version-app-component");
  };

  return DescribeAppVersionAppComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppVersionResourceOutcome ResilienceHubClient::DescribeAppVersionResource(const DescribeAppVersionResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-app-version-resource");
  };

  return DescribeAppVersionResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppVersionResourcesResolutionStatusOutcome ResilienceHubClient::DescribeAppVersionResourcesResolutionStatus(
    const DescribeAppVersionResourcesResolutionStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-app-version-resources-resolution-status");
  };

  return DescribeAppVersionResourcesResolutionStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAppVersionTemplateOutcome ResilienceHubClient::DescribeAppVersionTemplate(const DescribeAppVersionTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-app-version-template");
  };

  return DescribeAppVersionTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDraftAppVersionResourcesImportStatusOutcome ResilienceHubClient::DescribeDraftAppVersionResourcesImportStatus(
    const DescribeDraftAppVersionResourcesImportStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-draft-app-version-resources-import-status");
  };

  return DescribeDraftAppVersionResourcesImportStatusOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetricsExportOutcome ResilienceHubClient::DescribeMetricsExport(const DescribeMetricsExportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-metrics-export");
  };

  return DescribeMetricsExportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResiliencyPolicyOutcome ResilienceHubClient::DescribeResiliencyPolicy(const DescribeResiliencyPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-resiliency-policy");
  };

  return DescribeResiliencyPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResourceGroupingRecommendationTaskOutcome ResilienceHubClient::DescribeResourceGroupingRecommendationTask(
    const DescribeResourceGroupingRecommendationTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/describe-resource-grouping-recommendation-task");
  };

  return DescribeResourceGroupingRecommendationTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportResourcesToDraftAppVersionOutcome ResilienceHubClient::ImportResourcesToDraftAppVersion(
    const ImportResourcesToDraftAppVersionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/import-resources-to-draft-app-version");
  };

  return ImportResourcesToDraftAppVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAlarmRecommendationsOutcome ResilienceHubClient::ListAlarmRecommendations(const ListAlarmRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-alarm-recommendations");
  };

  return ListAlarmRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppAssessmentComplianceDriftsOutcome ResilienceHubClient::ListAppAssessmentComplianceDrifts(
    const ListAppAssessmentComplianceDriftsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-app-assessment-compliance-drifts");
  };

  return ListAppAssessmentComplianceDriftsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppAssessmentResourceDriftsOutcome ResilienceHubClient::ListAppAssessmentResourceDrifts(
    const ListAppAssessmentResourceDriftsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-app-assessment-resource-drifts");
  };

  return ListAppAssessmentResourceDriftsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppAssessmentsOutcome ResilienceHubClient::ListAppAssessments(const ListAppAssessmentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-app-assessments");
  };

  return ListAppAssessmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAppComponentCompliancesOutcome ResilienceHubClient::ListAppComponentCompliances(
    const ListAppComponentCompliancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-app-component-compliances");
  };

  return ListAppComponentCompliancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppComponentRecommendationsOutcome ResilienceHubClient::ListAppComponentRecommendations(
    const ListAppComponentRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-app-component-recommendations");
  };

  return ListAppComponentRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppInputSourcesOutcome ResilienceHubClient::ListAppInputSources(const ListAppInputSourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-app-input-sources");
  };

  return ListAppInputSourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppVersionAppComponentsOutcome ResilienceHubClient::ListAppVersionAppComponents(
    const ListAppVersionAppComponentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-app-version-app-components");
  };

  return ListAppVersionAppComponentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppVersionResourceMappingsOutcome ResilienceHubClient::ListAppVersionResourceMappings(
    const ListAppVersionResourceMappingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-app-version-resource-mappings");
  };

  return ListAppVersionResourceMappingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppVersionResourcesOutcome ResilienceHubClient::ListAppVersionResources(const ListAppVersionResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-app-version-resources");
  };

  return ListAppVersionResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppVersionsOutcome ResilienceHubClient::ListAppVersions(const ListAppVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-app-versions");
  };

  return ListAppVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAppsOutcome ResilienceHubClient::ListApps(const ListAppsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-apps");
  };

  return ListAppsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMetricsOutcome ResilienceHubClient::ListMetrics(const ListMetricsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-metrics");
  };

  return ListMetricsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRecommendationTemplatesOutcome ResilienceHubClient::ListRecommendationTemplates(
    const ListRecommendationTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-recommendation-templates");
  };

  return ListRecommendationTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResiliencyPoliciesOutcome ResilienceHubClient::ListResiliencyPolicies(const ListResiliencyPoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-resiliency-policies");
  };

  return ListResiliencyPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListResourceGroupingRecommendationsOutcome ResilienceHubClient::ListResourceGroupingRecommendations(
    const ListResourceGroupingRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-resource-grouping-recommendations");
  };

  return ListResourceGroupingRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSopRecommendationsOutcome ResilienceHubClient::ListSopRecommendations(const ListSopRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-sop-recommendations");
  };

  return ListSopRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSuggestedResiliencyPoliciesOutcome ResilienceHubClient::ListSuggestedResiliencyPolicies(
    const ListSuggestedResiliencyPoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-suggested-resiliency-policies");
  };

  return ListSuggestedResiliencyPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome ResilienceHubClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ResilienceHubErrors>(
        ResilienceHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTestRecommendationsOutcome ResilienceHubClient::ListTestRecommendations(const ListTestRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-test-recommendations");
  };

  return ListTestRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUnsupportedAppVersionResourcesOutcome ResilienceHubClient::ListUnsupportedAppVersionResources(
    const ListUnsupportedAppVersionResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-unsupported-app-version-resources");
  };

  return ListUnsupportedAppVersionResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PublishAppVersionOutcome ResilienceHubClient::PublishAppVersion(const PublishAppVersionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/publish-app-version");
  };

  return PublishAppVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDraftAppVersionTemplateOutcome ResilienceHubClient::PutDraftAppVersionTemplate(const PutDraftAppVersionTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/put-draft-app-version-template");
  };

  return PutDraftAppVersionTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectResourceGroupingRecommendationsOutcome ResilienceHubClient::RejectResourceGroupingRecommendations(
    const RejectResourceGroupingRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reject-resource-grouping-recommendations");
  };

  return RejectResourceGroupingRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveDraftAppVersionResourceMappingsOutcome ResilienceHubClient::RemoveDraftAppVersionResourceMappings(
    const RemoveDraftAppVersionResourceMappingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/remove-draft-app-version-resource-mappings");
  };

  return RemoveDraftAppVersionResourceMappingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ResolveAppVersionResourcesOutcome ResilienceHubClient::ResolveAppVersionResources(const ResolveAppVersionResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resolve-app-version-resources");
  };

  return ResolveAppVersionResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAppAssessmentOutcome ResilienceHubClient::StartAppAssessment(const StartAppAssessmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/start-app-assessment");
  };

  return StartAppAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMetricsExportOutcome ResilienceHubClient::StartMetricsExport(const StartMetricsExportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/start-metrics-export");
  };

  return StartMetricsExportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartResourceGroupingRecommendationTaskOutcome ResilienceHubClient::StartResourceGroupingRecommendationTask(
    const StartResourceGroupingRecommendationTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/start-resource-grouping-recommendation-task");
  };

  return StartResourceGroupingRecommendationTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ResilienceHubClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ResilienceHubErrors>(ResilienceHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ResilienceHubClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ResilienceHubErrors>(ResilienceHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ResilienceHubErrors>(ResilienceHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAppOutcome ResilienceHubClient::UpdateApp(const UpdateAppRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-app");
  };

  return UpdateAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAppVersionOutcome ResilienceHubClient::UpdateAppVersion(const UpdateAppVersionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-app-version");
  };

  return UpdateAppVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAppVersionAppComponentOutcome ResilienceHubClient::UpdateAppVersionAppComponent(
    const UpdateAppVersionAppComponentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-app-version-app-component");
  };

  return UpdateAppVersionAppComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAppVersionResourceOutcome ResilienceHubClient::UpdateAppVersionResource(const UpdateAppVersionResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-app-version-resource");
  };

  return UpdateAppVersionResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResiliencyPolicyOutcome ResilienceHubClient::UpdateResiliencyPolicy(const UpdateResiliencyPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-resiliency-policy");
  };

  return UpdateResiliencyPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
