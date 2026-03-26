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
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsClient.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsEndpointProvider.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsErrorMarshaller.h>
#include <aws/migrationhubstrategy/model/GetApplicationComponentDetailsRequest.h>
#include <aws/migrationhubstrategy/model/GetApplicationComponentStrategiesRequest.h>
#include <aws/migrationhubstrategy/model/GetAssessmentRequest.h>
#include <aws/migrationhubstrategy/model/GetImportFileTaskRequest.h>
#include <aws/migrationhubstrategy/model/GetLatestAssessmentIdRequest.h>
#include <aws/migrationhubstrategy/model/GetPortfolioPreferencesRequest.h>
#include <aws/migrationhubstrategy/model/GetPortfolioSummaryRequest.h>
#include <aws/migrationhubstrategy/model/GetRecommendationReportDetailsRequest.h>
#include <aws/migrationhubstrategy/model/GetServerDetailsRequest.h>
#include <aws/migrationhubstrategy/model/GetServerStrategiesRequest.h>
#include <aws/migrationhubstrategy/model/ListAnalyzableServersRequest.h>
#include <aws/migrationhubstrategy/model/ListApplicationComponentsRequest.h>
#include <aws/migrationhubstrategy/model/ListCollectorsRequest.h>
#include <aws/migrationhubstrategy/model/ListImportFileTaskRequest.h>
#include <aws/migrationhubstrategy/model/ListServersRequest.h>
#include <aws/migrationhubstrategy/model/PutPortfolioPreferencesRequest.h>
#include <aws/migrationhubstrategy/model/StartAssessmentRequest.h>
#include <aws/migrationhubstrategy/model/StartImportFileTaskRequest.h>
#include <aws/migrationhubstrategy/model/StartRecommendationReportGenerationRequest.h>
#include <aws/migrationhubstrategy/model/StopAssessmentRequest.h>
#include <aws/migrationhubstrategy/model/UpdateApplicationComponentConfigRequest.h>
#include <aws/migrationhubstrategy/model/UpdateServerConfigRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MigrationHubStrategyRecommendations;
using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MigrationHubStrategyRecommendations {
const char SERVICE_NAME[] = "migrationhub-strategy";
const char ALLOCATION_TAG[] = "MigrationHubStrategyRecommendationsClient";
}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
const char* MigrationHubStrategyRecommendationsClient::GetServiceName() { return SERVICE_NAME; }
const char* MigrationHubStrategyRecommendationsClient::GetAllocationTag() { return ALLOCATION_TAG; }

MigrationHubStrategyRecommendationsClient::MigrationHubStrategyRecommendationsClient(
    const MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration,
    std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubStrategyRecommendationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubStrategyRecommendationsClient::MigrationHubStrategyRecommendationsClient(
    const AWSCredentials& credentials, std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider,
    const MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubStrategyRecommendationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubStrategyRecommendationsClient::MigrationHubStrategyRecommendationsClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider,
    const MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubStrategyRecommendationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MigrationHubStrategyRecommendationsClient::MigrationHubStrategyRecommendationsClient(
    const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubStrategyRecommendationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubStrategyRecommendationsClient::MigrationHubStrategyRecommendationsClient(
    const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubStrategyRecommendationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubStrategyRecommendationsClient::MigrationHubStrategyRecommendationsClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubStrategyRecommendationsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MigrationHubStrategyRecommendationsClient::~MigrationHubStrategyRecommendationsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase>&
MigrationHubStrategyRecommendationsClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void MigrationHubStrategyRecommendationsClient::init(
    const MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& config) {
  AWSClient::SetServiceClientName("MigrationHubStrategy");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "migrationhub-strategy");
}

void MigrationHubStrategyRecommendationsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MigrationHubStrategyRecommendationsClient::InvokeOperationOutcome MigrationHubStrategyRecommendationsClient::InvokeServiceOperation(
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

GetApplicationComponentDetailsOutcome MigrationHubStrategyRecommendationsClient::GetApplicationComponentDetails(
    const GetApplicationComponentDetailsRequest& request) const {
  if (!request.ApplicationComponentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplicationComponentDetails", "Required field: ApplicationComponentId, is not set");
    return GetApplicationComponentDetailsOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(
        MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
        "Missing required field [ApplicationComponentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-applicationcomponent-details/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationComponentId());
  };

  return GetApplicationComponentDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApplicationComponentStrategiesOutcome MigrationHubStrategyRecommendationsClient::GetApplicationComponentStrategies(
    const GetApplicationComponentStrategiesRequest& request) const {
  if (!request.ApplicationComponentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplicationComponentStrategies", "Required field: ApplicationComponentId, is not set");
    return GetApplicationComponentStrategiesOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(
        MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
        "Missing required field [ApplicationComponentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-applicationcomponent-strategies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationComponentId());
  };

  return GetApplicationComponentStrategiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssessmentOutcome MigrationHubStrategyRecommendationsClient::GetAssessment(const GetAssessmentRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssessment", "Required field: Id, is not set");
    return GetAssessmentOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(
        MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-assessment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImportFileTaskOutcome MigrationHubStrategyRecommendationsClient::GetImportFileTask(const GetImportFileTaskRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportFileTask", "Required field: Id, is not set");
    return GetImportFileTaskOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(
        MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-import-file-task/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetImportFileTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLatestAssessmentIdOutcome MigrationHubStrategyRecommendationsClient::GetLatestAssessmentId(
    const GetLatestAssessmentIdRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-latest-assessment-id");
  };

  return GetLatestAssessmentIdOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPortfolioPreferencesOutcome MigrationHubStrategyRecommendationsClient::GetPortfolioPreferences(
    const GetPortfolioPreferencesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-portfolio-preferences");
  };

  return GetPortfolioPreferencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPortfolioSummaryOutcome MigrationHubStrategyRecommendationsClient::GetPortfolioSummary(const GetPortfolioSummaryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-portfolio-summary");
  };

  return GetPortfolioSummaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRecommendationReportDetailsOutcome MigrationHubStrategyRecommendationsClient::GetRecommendationReportDetails(
    const GetRecommendationReportDetailsRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommendationReportDetails", "Required field: Id, is not set");
    return GetRecommendationReportDetailsOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(
        MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-recommendation-report-details/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetRecommendationReportDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServerDetailsOutcome MigrationHubStrategyRecommendationsClient::GetServerDetails(const GetServerDetailsRequest& request) const {
  if (!request.ServerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetServerDetails", "Required field: ServerId, is not set");
    return GetServerDetailsOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(
        MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-server-details/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServerId());
  };

  return GetServerDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetServerStrategiesOutcome MigrationHubStrategyRecommendationsClient::GetServerStrategies(const GetServerStrategiesRequest& request) const {
  if (!request.ServerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetServerStrategies", "Required field: ServerId, is not set");
    return GetServerStrategiesOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(
        MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/get-server-strategies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServerId());
  };

  return GetServerStrategiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAnalyzableServersOutcome MigrationHubStrategyRecommendationsClient::ListAnalyzableServers(
    const ListAnalyzableServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-analyzable-servers");
  };

  return ListAnalyzableServersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationComponentsOutcome MigrationHubStrategyRecommendationsClient::ListApplicationComponents(
    const ListApplicationComponentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-applicationcomponents");
  };

  return ListApplicationComponentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCollectorsOutcome MigrationHubStrategyRecommendationsClient::ListCollectors(const ListCollectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-collectors");
  };

  return ListCollectorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListImportFileTaskOutcome MigrationHubStrategyRecommendationsClient::ListImportFileTask(const ListImportFileTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-import-file-task");
  };

  return ListImportFileTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListServersOutcome MigrationHubStrategyRecommendationsClient::ListServers(const ListServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-servers");
  };

  return ListServersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPortfolioPreferencesOutcome MigrationHubStrategyRecommendationsClient::PutPortfolioPreferences(
    const PutPortfolioPreferencesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/put-portfolio-preferences");
  };

  return PutPortfolioPreferencesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAssessmentOutcome MigrationHubStrategyRecommendationsClient::StartAssessment(const StartAssessmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/start-assessment");
  };

  return StartAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartImportFileTaskOutcome MigrationHubStrategyRecommendationsClient::StartImportFileTask(const StartImportFileTaskRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/start-import-file-task");
  };

  return StartImportFileTaskOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRecommendationReportGenerationOutcome MigrationHubStrategyRecommendationsClient::StartRecommendationReportGeneration(
    const StartRecommendationReportGenerationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/start-recommendation-report-generation");
  };

  return StartRecommendationReportGenerationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopAssessmentOutcome MigrationHubStrategyRecommendationsClient::StopAssessment(const StopAssessmentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop-assessment");
  };

  return StopAssessmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateApplicationComponentConfigOutcome MigrationHubStrategyRecommendationsClient::UpdateApplicationComponentConfig(
    const UpdateApplicationComponentConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-applicationcomponent-config/");
  };

  return UpdateApplicationComponentConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateServerConfigOutcome MigrationHubStrategyRecommendationsClient::UpdateServerConfig(const UpdateServerConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-server-config/");
  };

  return UpdateServerConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
