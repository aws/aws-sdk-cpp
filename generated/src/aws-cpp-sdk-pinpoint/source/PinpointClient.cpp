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
#include <aws/pinpoint/PinpointClient.h>
#include <aws/pinpoint/PinpointEndpointProvider.h>
#include <aws/pinpoint/PinpointErrorMarshaller.h>
#include <aws/pinpoint/model/CreateAppRequest.h>
#include <aws/pinpoint/model/CreateCampaignRequest.h>
#include <aws/pinpoint/model/CreateEmailTemplateRequest.h>
#include <aws/pinpoint/model/CreateExportJobRequest.h>
#include <aws/pinpoint/model/CreateImportJobRequest.h>
#include <aws/pinpoint/model/CreateInAppTemplateRequest.h>
#include <aws/pinpoint/model/CreateJourneyRequest.h>
#include <aws/pinpoint/model/CreatePushTemplateRequest.h>
#include <aws/pinpoint/model/CreateRecommenderConfigurationRequest.h>
#include <aws/pinpoint/model/CreateSegmentRequest.h>
#include <aws/pinpoint/model/CreateSmsTemplateRequest.h>
#include <aws/pinpoint/model/CreateVoiceTemplateRequest.h>
#include <aws/pinpoint/model/DeleteAdmChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsSandboxChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsVoipChannelRequest.h>
#include <aws/pinpoint/model/DeleteApnsVoipSandboxChannelRequest.h>
#include <aws/pinpoint/model/DeleteAppRequest.h>
#include <aws/pinpoint/model/DeleteBaiduChannelRequest.h>
#include <aws/pinpoint/model/DeleteCampaignRequest.h>
#include <aws/pinpoint/model/DeleteEmailChannelRequest.h>
#include <aws/pinpoint/model/DeleteEmailTemplateRequest.h>
#include <aws/pinpoint/model/DeleteEndpointRequest.h>
#include <aws/pinpoint/model/DeleteEventStreamRequest.h>
#include <aws/pinpoint/model/DeleteGcmChannelRequest.h>
#include <aws/pinpoint/model/DeleteInAppTemplateRequest.h>
#include <aws/pinpoint/model/DeleteJourneyRequest.h>
#include <aws/pinpoint/model/DeletePushTemplateRequest.h>
#include <aws/pinpoint/model/DeleteRecommenderConfigurationRequest.h>
#include <aws/pinpoint/model/DeleteSegmentRequest.h>
#include <aws/pinpoint/model/DeleteSmsChannelRequest.h>
#include <aws/pinpoint/model/DeleteSmsTemplateRequest.h>
#include <aws/pinpoint/model/DeleteUserEndpointsRequest.h>
#include <aws/pinpoint/model/DeleteVoiceChannelRequest.h>
#include <aws/pinpoint/model/DeleteVoiceTemplateRequest.h>
#include <aws/pinpoint/model/GetAdmChannelRequest.h>
#include <aws/pinpoint/model/GetApnsChannelRequest.h>
#include <aws/pinpoint/model/GetApnsSandboxChannelRequest.h>
#include <aws/pinpoint/model/GetApnsVoipChannelRequest.h>
#include <aws/pinpoint/model/GetApnsVoipSandboxChannelRequest.h>
#include <aws/pinpoint/model/GetAppRequest.h>
#include <aws/pinpoint/model/GetApplicationDateRangeKpiRequest.h>
#include <aws/pinpoint/model/GetApplicationSettingsRequest.h>
#include <aws/pinpoint/model/GetAppsRequest.h>
#include <aws/pinpoint/model/GetBaiduChannelRequest.h>
#include <aws/pinpoint/model/GetCampaignActivitiesRequest.h>
#include <aws/pinpoint/model/GetCampaignDateRangeKpiRequest.h>
#include <aws/pinpoint/model/GetCampaignRequest.h>
#include <aws/pinpoint/model/GetCampaignVersionRequest.h>
#include <aws/pinpoint/model/GetCampaignVersionsRequest.h>
#include <aws/pinpoint/model/GetCampaignsRequest.h>
#include <aws/pinpoint/model/GetChannelsRequest.h>
#include <aws/pinpoint/model/GetEmailChannelRequest.h>
#include <aws/pinpoint/model/GetEmailTemplateRequest.h>
#include <aws/pinpoint/model/GetEndpointRequest.h>
#include <aws/pinpoint/model/GetEventStreamRequest.h>
#include <aws/pinpoint/model/GetExportJobRequest.h>
#include <aws/pinpoint/model/GetExportJobsRequest.h>
#include <aws/pinpoint/model/GetGcmChannelRequest.h>
#include <aws/pinpoint/model/GetImportJobRequest.h>
#include <aws/pinpoint/model/GetImportJobsRequest.h>
#include <aws/pinpoint/model/GetInAppMessagesRequest.h>
#include <aws/pinpoint/model/GetInAppTemplateRequest.h>
#include <aws/pinpoint/model/GetJourneyDateRangeKpiRequest.h>
#include <aws/pinpoint/model/GetJourneyExecutionActivityMetricsRequest.h>
#include <aws/pinpoint/model/GetJourneyExecutionMetricsRequest.h>
#include <aws/pinpoint/model/GetJourneyRequest.h>
#include <aws/pinpoint/model/GetJourneyRunExecutionActivityMetricsRequest.h>
#include <aws/pinpoint/model/GetJourneyRunExecutionMetricsRequest.h>
#include <aws/pinpoint/model/GetJourneyRunsRequest.h>
#include <aws/pinpoint/model/GetPushTemplateRequest.h>
#include <aws/pinpoint/model/GetRecommenderConfigurationRequest.h>
#include <aws/pinpoint/model/GetRecommenderConfigurationsRequest.h>
#include <aws/pinpoint/model/GetSegmentExportJobsRequest.h>
#include <aws/pinpoint/model/GetSegmentImportJobsRequest.h>
#include <aws/pinpoint/model/GetSegmentRequest.h>
#include <aws/pinpoint/model/GetSegmentVersionRequest.h>
#include <aws/pinpoint/model/GetSegmentVersionsRequest.h>
#include <aws/pinpoint/model/GetSegmentsRequest.h>
#include <aws/pinpoint/model/GetSmsChannelRequest.h>
#include <aws/pinpoint/model/GetSmsTemplateRequest.h>
#include <aws/pinpoint/model/GetUserEndpointsRequest.h>
#include <aws/pinpoint/model/GetVoiceChannelRequest.h>
#include <aws/pinpoint/model/GetVoiceTemplateRequest.h>
#include <aws/pinpoint/model/ListJourneysRequest.h>
#include <aws/pinpoint/model/ListTagsForResourceRequest.h>
#include <aws/pinpoint/model/ListTemplateVersionsRequest.h>
#include <aws/pinpoint/model/ListTemplatesRequest.h>
#include <aws/pinpoint/model/PhoneNumberValidateRequest.h>
#include <aws/pinpoint/model/PutEventStreamRequest.h>
#include <aws/pinpoint/model/PutEventsRequest.h>
#include <aws/pinpoint/model/RemoveAttributesRequest.h>
#include <aws/pinpoint/model/SendMessagesRequest.h>
#include <aws/pinpoint/model/SendOTPMessageRequest.h>
#include <aws/pinpoint/model/SendUsersMessagesRequest.h>
#include <aws/pinpoint/model/TagResourceRequest.h>
#include <aws/pinpoint/model/UntagResourceRequest.h>
#include <aws/pinpoint/model/UpdateAdmChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsSandboxChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsVoipChannelRequest.h>
#include <aws/pinpoint/model/UpdateApnsVoipSandboxChannelRequest.h>
#include <aws/pinpoint/model/UpdateApplicationSettingsRequest.h>
#include <aws/pinpoint/model/UpdateBaiduChannelRequest.h>
#include <aws/pinpoint/model/UpdateCampaignRequest.h>
#include <aws/pinpoint/model/UpdateEmailChannelRequest.h>
#include <aws/pinpoint/model/UpdateEmailTemplateRequest.h>
#include <aws/pinpoint/model/UpdateEndpointRequest.h>
#include <aws/pinpoint/model/UpdateEndpointsBatchRequest.h>
#include <aws/pinpoint/model/UpdateGcmChannelRequest.h>
#include <aws/pinpoint/model/UpdateInAppTemplateRequest.h>
#include <aws/pinpoint/model/UpdateJourneyRequest.h>
#include <aws/pinpoint/model/UpdateJourneyStateRequest.h>
#include <aws/pinpoint/model/UpdatePushTemplateRequest.h>
#include <aws/pinpoint/model/UpdateRecommenderConfigurationRequest.h>
#include <aws/pinpoint/model/UpdateSegmentRequest.h>
#include <aws/pinpoint/model/UpdateSmsChannelRequest.h>
#include <aws/pinpoint/model/UpdateSmsTemplateRequest.h>
#include <aws/pinpoint/model/UpdateTemplateActiveVersionRequest.h>
#include <aws/pinpoint/model/UpdateVoiceChannelRequest.h>
#include <aws/pinpoint/model/UpdateVoiceTemplateRequest.h>
#include <aws/pinpoint/model/VerifyOTPMessageRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Pinpoint;
using namespace Aws::Pinpoint::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Pinpoint {
const char SERVICE_NAME[] = "mobiletargeting";
const char ALLOCATION_TAG[] = "PinpointClient";
}  // namespace Pinpoint
}  // namespace Aws
const char* PinpointClient::GetServiceName() { return SERVICE_NAME; }
const char* PinpointClient::GetAllocationTag() { return ALLOCATION_TAG; }

PinpointClient::PinpointClient(const Pinpoint::PinpointClientConfiguration& clientConfiguration,
                               std::shared_ptr<PinpointEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointClient::PinpointClient(const AWSCredentials& credentials, std::shared_ptr<PinpointEndpointProviderBase> endpointProvider,
                               const Pinpoint::PinpointClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointClient::PinpointClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<PinpointEndpointProviderBase> endpointProvider,
                               const Pinpoint::PinpointClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PinpointClient::PinpointClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointClient::PinpointClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointClient::PinpointClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PinpointClient::~PinpointClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PinpointEndpointProviderBase>& PinpointClient::accessEndpointProvider() { return m_endpointProvider; }

void PinpointClient::init(const Pinpoint::PinpointClientConfiguration& config) {
  AWSClient::SetServiceClientName("Pinpoint");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mobiletargeting");
}

void PinpointClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PinpointClient::InvokeOperationOutcome PinpointClient::InvokeServiceOperation(
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

CreateAppOutcome PinpointClient::CreateApp(const CreateAppRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps");
  };

  return CreateAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCampaignOutcome PinpointClient::CreateCampaign(const CreateCampaignRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCampaign", "Required field: ApplicationId, is not set");
    return CreateCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns");
  };

  return CreateCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEmailTemplateOutcome PinpointClient::CreateEmailTemplate(const CreateEmailTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEmailTemplate", "Required field: TemplateName, is not set");
    return CreateEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/email");
  };

  return CreateEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExportJobOutcome PinpointClient::CreateExportJob(const CreateExportJobRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateExportJob", "Required field: ApplicationId, is not set");
    return CreateExportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/export");
  };

  return CreateExportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateImportJobOutcome PinpointClient::CreateImportJob(const CreateImportJobRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateImportJob", "Required field: ApplicationId, is not set");
    return CreateImportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/import");
  };

  return CreateImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInAppTemplateOutcome PinpointClient::CreateInAppTemplate(const CreateInAppTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateInAppTemplate", "Required field: TemplateName, is not set");
    return CreateInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inapp");
  };

  return CreateInAppTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateJourneyOutcome PinpointClient::CreateJourney(const CreateJourneyRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateJourney", "Required field: ApplicationId, is not set");
    return CreateJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys");
  };

  return CreateJourneyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePushTemplateOutcome PinpointClient::CreatePushTemplate(const CreatePushTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePushTemplate", "Required field: TemplateName, is not set");
    return CreatePushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/push");
  };

  return CreatePushTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRecommenderConfigurationOutcome PinpointClient::CreateRecommenderConfiguration(
    const CreateRecommenderConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommenders");
  };

  return CreateRecommenderConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSegmentOutcome PinpointClient::CreateSegment(const CreateSegmentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSegment", "Required field: ApplicationId, is not set");
    return CreateSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments");
  };

  return CreateSegmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSmsTemplateOutcome PinpointClient::CreateSmsTemplate(const CreateSmsTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSmsTemplate", "Required field: TemplateName, is not set");
    return CreateSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sms");
  };

  return CreateSmsTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVoiceTemplateOutcome PinpointClient::CreateVoiceTemplate(const CreateVoiceTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVoiceTemplate", "Required field: TemplateName, is not set");
    return CreateVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice");
  };

  return CreateVoiceTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAdmChannelOutcome PinpointClient::DeleteAdmChannel(const DeleteAdmChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAdmChannel", "Required field: ApplicationId, is not set");
    return DeleteAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/adm");
  };

  return DeleteAdmChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteApnsChannelOutcome PinpointClient::DeleteApnsChannel(const DeleteApnsChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApnsChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns");
  };

  return DeleteApnsChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteApnsSandboxChannelOutcome PinpointClient::DeleteApnsSandboxChannel(const DeleteApnsSandboxChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_sandbox");
  };

  return DeleteApnsSandboxChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteApnsVoipChannelOutcome PinpointClient::DeleteApnsVoipChannel(const DeleteApnsVoipChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApnsVoipChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip");
  };

  return DeleteApnsVoipChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteApnsVoipSandboxChannelOutcome PinpointClient::DeleteApnsVoipSandboxChannel(const DeleteApnsVoipSandboxChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return DeleteApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip_sandbox");
  };

  return DeleteApnsVoipSandboxChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAppOutcome PinpointClient::DeleteApp(const DeleteAppRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApp", "Required field: ApplicationId, is not set");
    return DeleteAppOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  return DeleteAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteBaiduChannelOutcome PinpointClient::DeleteBaiduChannel(const DeleteBaiduChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBaiduChannel", "Required field: ApplicationId, is not set");
    return DeleteBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/baidu");
  };

  return DeleteBaiduChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCampaignOutcome PinpointClient::DeleteCampaign(const DeleteCampaignRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCampaign", "Required field: ApplicationId, is not set");
    return DeleteCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCampaign", "Required field: CampaignId, is not set");
    return DeleteCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CampaignId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  };

  return DeleteCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEmailChannelOutcome PinpointClient::DeleteEmailChannel(const DeleteEmailChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEmailChannel", "Required field: ApplicationId, is not set");
    return DeleteEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/email");
  };

  return DeleteEmailChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEmailTemplateOutcome PinpointClient::DeleteEmailTemplate(const DeleteEmailTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEmailTemplate", "Required field: TemplateName, is not set");
    return DeleteEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/email");
  };

  return DeleteEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEndpointOutcome PinpointClient::DeleteEndpoint(const DeleteEndpointRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEndpoint", "Required field: ApplicationId, is not set");
    return DeleteEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }
  if (!request.EndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEndpoint", "Required field: EndpointId, is not set");
    return DeleteEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EndpointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointId());
  };

  return DeleteEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEventStreamOutcome PinpointClient::DeleteEventStream(const DeleteEventStreamRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventStream", "Required field: ApplicationId, is not set");
    return DeleteEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/eventstream");
  };

  return DeleteEventStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGcmChannelOutcome PinpointClient::DeleteGcmChannel(const DeleteGcmChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGcmChannel", "Required field: ApplicationId, is not set");
    return DeleteGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/gcm");
  };

  return DeleteGcmChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteInAppTemplateOutcome PinpointClient::DeleteInAppTemplate(const DeleteInAppTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInAppTemplate", "Required field: TemplateName, is not set");
    return DeleteInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inapp");
  };

  return DeleteInAppTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteJourneyOutcome PinpointClient::DeleteJourney(const DeleteJourneyRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJourney", "Required field: ApplicationId, is not set");
    return DeleteJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJourney", "Required field: JourneyId, is not set");
    return DeleteJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [JourneyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
  };

  return DeleteJourneyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePushTemplateOutcome PinpointClient::DeletePushTemplate(const DeletePushTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePushTemplate", "Required field: TemplateName, is not set");
    return DeletePushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/push");
  };

  return DeletePushTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRecommenderConfigurationOutcome PinpointClient::DeleteRecommenderConfiguration(
    const DeleteRecommenderConfigurationRequest& request) const {
  if (!request.RecommenderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecommenderConfiguration", "Required field: RecommenderId, is not set");
    return DeleteRecommenderConfigurationOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommenders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderId());
  };

  return DeleteRecommenderConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSegmentOutcome PinpointClient::DeleteSegment(const DeleteSegmentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSegment", "Required field: ApplicationId, is not set");
    return DeleteSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSegment", "Required field: SegmentId, is not set");
    return DeleteSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [SegmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
  };

  return DeleteSegmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSmsChannelOutcome PinpointClient::DeleteSmsChannel(const DeleteSmsChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSmsChannel", "Required field: ApplicationId, is not set");
    return DeleteSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/sms");
  };

  return DeleteSmsChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSmsTemplateOutcome PinpointClient::DeleteSmsTemplate(const DeleteSmsTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSmsTemplate", "Required field: TemplateName, is not set");
    return DeleteSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sms");
  };

  return DeleteSmsTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUserEndpointsOutcome PinpointClient::DeleteUserEndpoints(const DeleteUserEndpointsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserEndpoints", "Required field: ApplicationId, is not set");
    return DeleteUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserEndpoints", "Required field: UserId, is not set");
    return DeleteUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  return DeleteUserEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceChannelOutcome PinpointClient::DeleteVoiceChannel(const DeleteVoiceChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceChannel", "Required field: ApplicationId, is not set");
    return DeleteVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/voice");
  };

  return DeleteVoiceChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVoiceTemplateOutcome PinpointClient::DeleteVoiceTemplate(const DeleteVoiceTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVoiceTemplate", "Required field: TemplateName, is not set");
    return DeleteVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice");
  };

  return DeleteVoiceTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetAdmChannelOutcome PinpointClient::GetAdmChannel(const GetAdmChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAdmChannel", "Required field: ApplicationId, is not set");
    return GetAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/adm");
  };

  return GetAdmChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApnsChannelOutcome PinpointClient::GetApnsChannel(const GetApnsChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApnsChannel", "Required field: ApplicationId, is not set");
    return GetApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns");
  };

  return GetApnsChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApnsSandboxChannelOutcome PinpointClient::GetApnsSandboxChannel(const GetApnsSandboxChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return GetApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_sandbox");
  };

  return GetApnsSandboxChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApnsVoipChannelOutcome PinpointClient::GetApnsVoipChannel(const GetApnsVoipChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApnsVoipChannel", "Required field: ApplicationId, is not set");
    return GetApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip");
  };

  return GetApnsVoipChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApnsVoipSandboxChannelOutcome PinpointClient::GetApnsVoipSandboxChannel(const GetApnsVoipSandboxChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return GetApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip_sandbox");
  };

  return GetApnsVoipSandboxChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAppOutcome PinpointClient::GetApp(const GetAppRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApp", "Required field: ApplicationId, is not set");
    return GetAppOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  return GetAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApplicationDateRangeKpiOutcome PinpointClient::GetApplicationDateRangeKpi(const GetApplicationDateRangeKpiRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplicationDateRangeKpi", "Required field: ApplicationId, is not set");
    return GetApplicationDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [ApplicationId]", false));
  }
  if (!request.KpiNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplicationDateRangeKpi", "Required field: KpiName, is not set");
    return GetApplicationDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [KpiName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/kpis/daterange/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKpiName());
  };

  return GetApplicationDateRangeKpiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetApplicationSettingsOutcome PinpointClient::GetApplicationSettings(const GetApplicationSettingsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplicationSettings", "Required field: ApplicationId, is not set");
    return GetApplicationSettingsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return GetApplicationSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAppsOutcome PinpointClient::GetApps(const GetAppsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps");
  };

  return GetAppsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBaiduChannelOutcome PinpointClient::GetBaiduChannel(const GetBaiduChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBaiduChannel", "Required field: ApplicationId, is not set");
    return GetBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/baidu");
  };

  return GetBaiduChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCampaignOutcome PinpointClient::GetCampaign(const GetCampaignRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaign", "Required field: ApplicationId, is not set");
    return GetCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaign", "Required field: CampaignId, is not set");
    return GetCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [CampaignId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  };

  return GetCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCampaignActivitiesOutcome PinpointClient::GetCampaignActivities(const GetCampaignActivitiesRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignActivities", "Required field: ApplicationId, is not set");
    return GetCampaignActivitiesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignActivities", "Required field: CampaignId, is not set");
    return GetCampaignActivitiesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [CampaignId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activities");
  };

  return GetCampaignActivitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCampaignDateRangeKpiOutcome PinpointClient::GetCampaignDateRangeKpi(const GetCampaignDateRangeKpiRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignDateRangeKpi", "Required field: ApplicationId, is not set");
    return GetCampaignDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignDateRangeKpi", "Required field: CampaignId, is not set");
    return GetCampaignDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [CampaignId]", false));
  }
  if (!request.KpiNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignDateRangeKpi", "Required field: KpiName, is not set");
    return GetCampaignDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [KpiName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/kpis/daterange/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKpiName());
  };

  return GetCampaignDateRangeKpiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCampaignVersionOutcome PinpointClient::GetCampaignVersion(const GetCampaignVersionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignVersion", "Required field: ApplicationId, is not set");
    return GetCampaignVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignVersion", "Required field: CampaignId, is not set");
    return GetCampaignVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [CampaignId]", false));
  }
  if (!request.VersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignVersion", "Required field: Version, is not set");
    return GetCampaignVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Version]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  };

  return GetCampaignVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCampaignVersionsOutcome PinpointClient::GetCampaignVersions(const GetCampaignVersionsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignVersions", "Required field: ApplicationId, is not set");
    return GetCampaignVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaignVersions", "Required field: CampaignId, is not set");
    return GetCampaignVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [CampaignId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return GetCampaignVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCampaignsOutcome PinpointClient::GetCampaigns(const GetCampaignsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCampaigns", "Required field: ApplicationId, is not set");
    return GetCampaignsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns");
  };

  return GetCampaignsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetChannelsOutcome PinpointClient::GetChannels(const GetChannelsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChannels", "Required field: ApplicationId, is not set");
    return GetChannelsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  return GetChannelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEmailChannelOutcome PinpointClient::GetEmailChannel(const GetEmailChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEmailChannel", "Required field: ApplicationId, is not set");
    return GetEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/email");
  };

  return GetEmailChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEmailTemplateOutcome PinpointClient::GetEmailTemplate(const GetEmailTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEmailTemplate", "Required field: TemplateName, is not set");
    return GetEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/email");
  };

  return GetEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEndpointOutcome PinpointClient::GetEndpoint(const GetEndpointRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEndpoint", "Required field: ApplicationId, is not set");
    return GetEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApplicationId]", false));
  }
  if (!request.EndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEndpoint", "Required field: EndpointId, is not set");
    return GetEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [EndpointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointId());
  };

  return GetEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEventStreamOutcome PinpointClient::GetEventStream(const GetEventStreamRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventStream", "Required field: ApplicationId, is not set");
    return GetEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/eventstream");
  };

  return GetEventStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetExportJobOutcome PinpointClient::GetExportJob(const GetExportJobRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExportJob", "Required field: ApplicationId, is not set");
    return GetExportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExportJob", "Required field: JobId, is not set");
    return GetExportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/export/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetExportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetExportJobsOutcome PinpointClient::GetExportJobs(const GetExportJobsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExportJobs", "Required field: ApplicationId, is not set");
    return GetExportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/export");
  };

  return GetExportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGcmChannelOutcome PinpointClient::GetGcmChannel(const GetGcmChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetGcmChannel", "Required field: ApplicationId, is not set");
    return GetGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/gcm");
  };

  return GetGcmChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImportJobOutcome PinpointClient::GetImportJob(const GetImportJobRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: ApplicationId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: JobId, is not set");
    return GetImportJobOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/import/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImportJobsOutcome PinpointClient::GetImportJobs(const GetImportJobsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportJobs", "Required field: ApplicationId, is not set");
    return GetImportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/import");
  };

  return GetImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetInAppMessagesOutcome PinpointClient::GetInAppMessages(const GetInAppMessagesRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInAppMessages", "Required field: ApplicationId, is not set");
    return GetInAppMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }
  if (!request.EndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInAppMessages", "Required field: EndpointId, is not set");
    return GetInAppMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EndpointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inappmessages");
  };

  return GetInAppMessagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetInAppTemplateOutcome PinpointClient::GetInAppTemplate(const GetInAppTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInAppTemplate", "Required field: TemplateName, is not set");
    return GetInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inapp");
  };

  return GetInAppTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJourneyOutcome PinpointClient::GetJourney(const GetJourneyRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourney", "Required field: ApplicationId, is not set");
    return GetJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourney", "Required field: JourneyId, is not set");
    return GetJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [JourneyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
  };

  return GetJourneyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJourneyDateRangeKpiOutcome PinpointClient::GetJourneyDateRangeKpi(const GetJourneyDateRangeKpiRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyDateRangeKpi", "Required field: ApplicationId, is not set");
    return GetJourneyDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyDateRangeKpi", "Required field: JourneyId, is not set");
    return GetJourneyDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [JourneyId]", false));
  }
  if (!request.KpiNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyDateRangeKpi", "Required field: KpiName, is not set");
    return GetJourneyDateRangeKpiOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [KpiName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/kpis/daterange/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKpiName());
  };

  return GetJourneyDateRangeKpiOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJourneyExecutionActivityMetricsOutcome PinpointClient::GetJourneyExecutionActivityMetrics(
    const GetJourneyExecutionActivityMetricsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyExecutionActivityMetrics", "Required field: ApplicationId, is not set");
    return GetJourneyExecutionActivityMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyActivityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyExecutionActivityMetrics", "Required field: JourneyActivityId, is not set");
    return GetJourneyExecutionActivityMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyActivityId]", false));
  }
  if (!request.JourneyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyExecutionActivityMetrics", "Required field: JourneyId, is not set");
    return GetJourneyExecutionActivityMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyActivityId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/execution-metrics");
  };

  return GetJourneyExecutionActivityMetricsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJourneyExecutionMetricsOutcome PinpointClient::GetJourneyExecutionMetrics(const GetJourneyExecutionMetricsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyExecutionMetrics", "Required field: ApplicationId, is not set");
    return GetJourneyExecutionMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyExecutionMetrics", "Required field: JourneyId, is not set");
    return GetJourneyExecutionMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [JourneyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/execution-metrics");
  };

  return GetJourneyExecutionMetricsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJourneyRunExecutionActivityMetricsOutcome PinpointClient::GetJourneyRunExecutionActivityMetrics(
    const GetJourneyRunExecutionActivityMetricsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyRunExecutionActivityMetrics", "Required field: ApplicationId, is not set");
    return GetJourneyRunExecutionActivityMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyActivityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyRunExecutionActivityMetrics", "Required field: JourneyActivityId, is not set");
    return GetJourneyRunExecutionActivityMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyActivityId]", false));
  }
  if (!request.JourneyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyRunExecutionActivityMetrics", "Required field: JourneyId, is not set");
    return GetJourneyRunExecutionActivityMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyId]", false));
  }
  if (!request.RunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyRunExecutionActivityMetrics", "Required field: RunId, is not set");
    return GetJourneyRunExecutionActivityMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRunId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyActivityId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/execution-metrics");
  };

  return GetJourneyRunExecutionActivityMetricsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJourneyRunExecutionMetricsOutcome PinpointClient::GetJourneyRunExecutionMetrics(
    const GetJourneyRunExecutionMetricsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyRunExecutionMetrics", "Required field: ApplicationId, is not set");
    return GetJourneyRunExecutionMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyRunExecutionMetrics", "Required field: JourneyId, is not set");
    return GetJourneyRunExecutionMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JourneyId]", false));
  }
  if (!request.RunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyRunExecutionMetrics", "Required field: RunId, is not set");
    return GetJourneyRunExecutionMetricsOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRunId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/execution-metrics");
  };

  return GetJourneyRunExecutionMetricsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJourneyRunsOutcome PinpointClient::GetJourneyRuns(const GetJourneyRunsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyRuns", "Required field: ApplicationId, is not set");
    return GetJourneyRunsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJourneyRuns", "Required field: JourneyId, is not set");
    return GetJourneyRunsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [JourneyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/runs");
  };

  return GetJourneyRunsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetPushTemplateOutcome PinpointClient::GetPushTemplate(const GetPushTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPushTemplate", "Required field: TemplateName, is not set");
    return GetPushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/push");
  };

  return GetPushTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRecommenderConfigurationOutcome PinpointClient::GetRecommenderConfiguration(const GetRecommenderConfigurationRequest& request) const {
  if (!request.RecommenderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommenderConfiguration", "Required field: RecommenderId, is not set");
    return GetRecommenderConfigurationOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [RecommenderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommenders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderId());
  };

  return GetRecommenderConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRecommenderConfigurationsOutcome PinpointClient::GetRecommenderConfigurations(const GetRecommenderConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommenders");
  };

  return GetRecommenderConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSegmentOutcome PinpointClient::GetSegment(const GetSegmentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegment", "Required field: ApplicationId, is not set");
    return GetSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegment", "Required field: SegmentId, is not set");
    return GetSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [SegmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
  };

  return GetSegmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSegmentExportJobsOutcome PinpointClient::GetSegmentExportJobs(const GetSegmentExportJobsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentExportJobs", "Required field: ApplicationId, is not set");
    return GetSegmentExportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentExportJobs", "Required field: SegmentId, is not set");
    return GetSegmentExportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SegmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/export");
  };

  return GetSegmentExportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSegmentImportJobsOutcome PinpointClient::GetSegmentImportJobs(const GetSegmentImportJobsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentImportJobs", "Required field: ApplicationId, is not set");
    return GetSegmentImportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentImportJobs", "Required field: SegmentId, is not set");
    return GetSegmentImportJobsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SegmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/import");
  };

  return GetSegmentImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSegmentVersionOutcome PinpointClient::GetSegmentVersion(const GetSegmentVersionRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentVersion", "Required field: ApplicationId, is not set");
    return GetSegmentVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentVersion", "Required field: SegmentId, is not set");
    return GetSegmentVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SegmentId]", false));
  }
  if (!request.VersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentVersion", "Required field: Version, is not set");
    return GetSegmentVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Version]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersion());
  };

  return GetSegmentVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSegmentVersionsOutcome PinpointClient::GetSegmentVersions(const GetSegmentVersionsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentVersions", "Required field: ApplicationId, is not set");
    return GetSegmentVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegmentVersions", "Required field: SegmentId, is not set");
    return GetSegmentVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SegmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return GetSegmentVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSegmentsOutcome PinpointClient::GetSegments(const GetSegmentsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSegments", "Required field: ApplicationId, is not set");
    return GetSegmentsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments");
  };

  return GetSegmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSmsChannelOutcome PinpointClient::GetSmsChannel(const GetSmsChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSmsChannel", "Required field: ApplicationId, is not set");
    return GetSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/sms");
  };

  return GetSmsChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSmsTemplateOutcome PinpointClient::GetSmsTemplate(const GetSmsTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSmsTemplate", "Required field: TemplateName, is not set");
    return GetSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sms");
  };

  return GetSmsTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUserEndpointsOutcome PinpointClient::GetUserEndpoints(const GetUserEndpointsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUserEndpoints", "Required field: ApplicationId, is not set");
    return GetUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUserEndpoints", "Required field: UserId, is not set");
    return GetUserEndpointsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  return GetUserEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceChannelOutcome PinpointClient::GetVoiceChannel(const GetVoiceChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceChannel", "Required field: ApplicationId, is not set");
    return GetVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/voice");
  };

  return GetVoiceChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetVoiceTemplateOutcome PinpointClient::GetVoiceTemplate(const GetVoiceTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetVoiceTemplate", "Required field: TemplateName, is not set");
    return GetVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice");
  };

  return GetVoiceTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJourneysOutcome PinpointClient::ListJourneys(const ListJourneysRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJourneys", "Required field: ApplicationId, is not set");
    return ListJourneysOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys");
  };

  return ListJourneysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome PinpointClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTemplateVersionsOutcome PinpointClient::ListTemplateVersions(const ListTemplateVersionsRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: TemplateName, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TemplateName]", false));
  }
  if (!request.TemplateTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: TemplateType, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TemplateType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateType());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return ListTemplateVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTemplatesOutcome PinpointClient::ListTemplates(const ListTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates");
  };

  return ListTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PhoneNumberValidateOutcome PinpointClient::PhoneNumberValidate(const PhoneNumberValidateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/phone/number/validate");
  };

  return PhoneNumberValidateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEventStreamOutcome PinpointClient::PutEventStream(const PutEventStreamRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEventStream", "Required field: ApplicationId, is not set");
    return PutEventStreamOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/eventstream");
  };

  return PutEventStreamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEventsOutcome PinpointClient::PutEvents(const PutEventsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEvents", "Required field: ApplicationId, is not set");
    return PutEventsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  };

  return PutEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveAttributesOutcome PinpointClient::RemoveAttributes(const RemoveAttributesRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveAttributes", "Required field: ApplicationId, is not set");
    return RemoveAttributesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }
  if (!request.AttributeTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveAttributes", "Required field: AttributeType, is not set");
    return RemoveAttributesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AttributeType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/attributes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeType());
  };

  return RemoveAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SendMessagesOutcome PinpointClient::SendMessages(const SendMessagesRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendMessages", "Required field: ApplicationId, is not set");
    return SendMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/messages");
  };

  return SendMessagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendOTPMessageOutcome PinpointClient::SendOTPMessage(const SendOTPMessageRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendOTPMessage", "Required field: ApplicationId, is not set");
    return SendOTPMessageOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/otp");
  };

  return SendOTPMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendUsersMessagesOutcome PinpointClient::SendUsersMessages(const SendUsersMessagesRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendUsersMessages", "Required field: ApplicationId, is not set");
    return SendUsersMessagesOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users-messages");
  };

  return SendUsersMessagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome PinpointClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PinpointClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAdmChannelOutcome PinpointClient::UpdateAdmChannel(const UpdateAdmChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAdmChannel", "Required field: ApplicationId, is not set");
    return UpdateAdmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/adm");
  };

  return UpdateAdmChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateApnsChannelOutcome PinpointClient::UpdateApnsChannel(const UpdateApnsChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApnsChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns");
  };

  return UpdateApnsChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateApnsSandboxChannelOutcome PinpointClient::UpdateApnsSandboxChannel(const UpdateApnsSandboxChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApnsSandboxChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_sandbox");
  };

  return UpdateApnsSandboxChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateApnsVoipChannelOutcome PinpointClient::UpdateApnsVoipChannel(const UpdateApnsVoipChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApnsVoipChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsVoipChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip");
  };

  return UpdateApnsVoipChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateApnsVoipSandboxChannelOutcome PinpointClient::UpdateApnsVoipSandboxChannel(const UpdateApnsVoipSandboxChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApnsVoipSandboxChannel", "Required field: ApplicationId, is not set");
    return UpdateApnsVoipSandboxChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/apns_voip_sandbox");
  };

  return UpdateApnsVoipSandboxChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateApplicationSettingsOutcome PinpointClient::UpdateApplicationSettings(const UpdateApplicationSettingsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApplicationSettings", "Required field: ApplicationId, is not set");
    return UpdateApplicationSettingsOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return UpdateApplicationSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateBaiduChannelOutcome PinpointClient::UpdateBaiduChannel(const UpdateBaiduChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBaiduChannel", "Required field: ApplicationId, is not set");
    return UpdateBaiduChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/baidu");
  };

  return UpdateBaiduChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateCampaignOutcome PinpointClient::UpdateCampaign(const UpdateCampaignRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaign", "Required field: ApplicationId, is not set");
    return UpdateCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }
  if (!request.CampaignIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCampaign", "Required field: CampaignId, is not set");
    return UpdateCampaignOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CampaignId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  };

  return UpdateCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEmailChannelOutcome PinpointClient::UpdateEmailChannel(const UpdateEmailChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEmailChannel", "Required field: ApplicationId, is not set");
    return UpdateEmailChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/email");
  };

  return UpdateEmailChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEmailTemplateOutcome PinpointClient::UpdateEmailTemplate(const UpdateEmailTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEmailTemplate", "Required field: TemplateName, is not set");
    return UpdateEmailTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/email");
  };

  return UpdateEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEndpointOutcome PinpointClient::UpdateEndpoint(const UpdateEndpointRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEndpoint", "Required field: ApplicationId, is not set");
    return UpdateEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ApplicationId]", false));
  }
  if (!request.EndpointIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEndpoint", "Required field: EndpointId, is not set");
    return UpdateEndpointOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [EndpointId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointId());
  };

  return UpdateEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEndpointsBatchOutcome PinpointClient::UpdateEndpointsBatch(const UpdateEndpointsBatchRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEndpointsBatch", "Required field: ApplicationId, is not set");
    return UpdateEndpointsBatchOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints");
  };

  return UpdateEndpointsBatchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateGcmChannelOutcome PinpointClient::UpdateGcmChannel(const UpdateGcmChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGcmChannel", "Required field: ApplicationId, is not set");
    return UpdateGcmChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/gcm");
  };

  return UpdateGcmChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateInAppTemplateOutcome PinpointClient::UpdateInAppTemplate(const UpdateInAppTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateInAppTemplate", "Required field: TemplateName, is not set");
    return UpdateInAppTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inapp");
  };

  return UpdateInAppTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateJourneyOutcome PinpointClient::UpdateJourney(const UpdateJourneyRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJourney", "Required field: ApplicationId, is not set");
    return UpdateJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJourney", "Required field: JourneyId, is not set");
    return UpdateJourneyOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [JourneyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
  };

  return UpdateJourneyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateJourneyStateOutcome PinpointClient::UpdateJourneyState(const UpdateJourneyStateRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJourneyState", "Required field: ApplicationId, is not set");
    return UpdateJourneyStateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }
  if (!request.JourneyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateJourneyState", "Required field: JourneyId, is not set");
    return UpdateJourneyStateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [JourneyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journeys/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJourneyId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/state");
  };

  return UpdateJourneyStateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdatePushTemplateOutcome PinpointClient::UpdatePushTemplate(const UpdatePushTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePushTemplate", "Required field: TemplateName, is not set");
    return UpdatePushTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/push");
  };

  return UpdatePushTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRecommenderConfigurationOutcome PinpointClient::UpdateRecommenderConfiguration(
    const UpdateRecommenderConfigurationRequest& request) const {
  if (!request.RecommenderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecommenderConfiguration", "Required field: RecommenderId, is not set");
    return UpdateRecommenderConfigurationOutcome(Aws::Client::AWSError<PinpointErrors>(
        PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommenderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/recommenders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommenderId());
  };

  return UpdateRecommenderConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSegmentOutcome PinpointClient::UpdateSegment(const UpdateSegmentRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSegment", "Required field: ApplicationId, is not set");
    return UpdateSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ApplicationId]", false));
  }
  if (!request.SegmentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSegment", "Required field: SegmentId, is not set");
    return UpdateSegmentOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [SegmentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegmentId());
  };

  return UpdateSegmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSmsChannelOutcome PinpointClient::UpdateSmsChannel(const UpdateSmsChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSmsChannel", "Required field: ApplicationId, is not set");
    return UpdateSmsChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/sms");
  };

  return UpdateSmsChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSmsTemplateOutcome PinpointClient::UpdateSmsTemplate(const UpdateSmsTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSmsTemplate", "Required field: TemplateName, is not set");
    return UpdateSmsTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sms");
  };

  return UpdateSmsTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateTemplateActiveVersionOutcome PinpointClient::UpdateTemplateActiveVersion(const UpdateTemplateActiveVersionRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplateActiveVersion", "Required field: TemplateName, is not set");
    return UpdateTemplateActiveVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [TemplateName]", false));
  }
  if (!request.TemplateTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplateActiveVersion", "Required field: TemplateType, is not set");
    return UpdateTemplateActiveVersionOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [TemplateType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateType());
    endpointResolutionOutcome.GetResult().AddPathSegments("/active-version");
  };

  return UpdateTemplateActiveVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateVoiceChannelOutcome PinpointClient::UpdateVoiceChannel(const UpdateVoiceChannelRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVoiceChannel", "Required field: ApplicationId, is not set");
    return UpdateVoiceChannelOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/voice");
  };

  return UpdateVoiceChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateVoiceTemplateOutcome PinpointClient::UpdateVoiceTemplate(const UpdateVoiceTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVoiceTemplate", "Required field: TemplateName, is not set");
    return UpdateVoiceTemplateOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/voice");
  };

  return UpdateVoiceTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

VerifyOTPMessageOutcome PinpointClient::VerifyOTPMessage(const VerifyOTPMessageRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("VerifyOTPMessage", "Required field: ApplicationId, is not set");
    return VerifyOTPMessageOutcome(Aws::Client::AWSError<PinpointErrors>(PinpointErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/verify-otp");
  };

  return VerifyOTPMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
