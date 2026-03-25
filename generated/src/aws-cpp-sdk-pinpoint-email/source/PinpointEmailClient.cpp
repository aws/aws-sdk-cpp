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
#include <aws/pinpoint-email/PinpointEmailClient.h>
#include <aws/pinpoint-email/PinpointEmailEndpointProvider.h>
#include <aws/pinpoint-email/PinpointEmailErrorMarshaller.h>
#include <aws/pinpoint-email/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/pinpoint-email/model/CreateConfigurationSetRequest.h>
#include <aws/pinpoint-email/model/CreateDedicatedIpPoolRequest.h>
#include <aws/pinpoint-email/model/CreateDeliverabilityTestReportRequest.h>
#include <aws/pinpoint-email/model/CreateEmailIdentityRequest.h>
#include <aws/pinpoint-email/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/pinpoint-email/model/DeleteConfigurationSetRequest.h>
#include <aws/pinpoint-email/model/DeleteDedicatedIpPoolRequest.h>
#include <aws/pinpoint-email/model/DeleteEmailIdentityRequest.h>
#include <aws/pinpoint-email/model/GetAccountRequest.h>
#include <aws/pinpoint-email/model/GetBlacklistReportsRequest.h>
#include <aws/pinpoint-email/model/GetConfigurationSetEventDestinationsRequest.h>
#include <aws/pinpoint-email/model/GetConfigurationSetRequest.h>
#include <aws/pinpoint-email/model/GetDedicatedIpRequest.h>
#include <aws/pinpoint-email/model/GetDedicatedIpsRequest.h>
#include <aws/pinpoint-email/model/GetDeliverabilityDashboardOptionsRequest.h>
#include <aws/pinpoint-email/model/GetDeliverabilityTestReportRequest.h>
#include <aws/pinpoint-email/model/GetDomainDeliverabilityCampaignRequest.h>
#include <aws/pinpoint-email/model/GetDomainStatisticsReportRequest.h>
#include <aws/pinpoint-email/model/GetEmailIdentityRequest.h>
#include <aws/pinpoint-email/model/ListConfigurationSetsRequest.h>
#include <aws/pinpoint-email/model/ListDedicatedIpPoolsRequest.h>
#include <aws/pinpoint-email/model/ListDeliverabilityTestReportsRequest.h>
#include <aws/pinpoint-email/model/ListDomainDeliverabilityCampaignsRequest.h>
#include <aws/pinpoint-email/model/ListEmailIdentitiesRequest.h>
#include <aws/pinpoint-email/model/ListTagsForResourceRequest.h>
#include <aws/pinpoint-email/model/PutAccountDedicatedIpWarmupAttributesRequest.h>
#include <aws/pinpoint-email/model/PutAccountSendingAttributesRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetDeliveryOptionsRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetReputationOptionsRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetSendingOptionsRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetTrackingOptionsRequest.h>
#include <aws/pinpoint-email/model/PutDedicatedIpInPoolRequest.h>
#include <aws/pinpoint-email/model/PutDedicatedIpWarmupAttributesRequest.h>
#include <aws/pinpoint-email/model/PutDeliverabilityDashboardOptionRequest.h>
#include <aws/pinpoint-email/model/PutEmailIdentityDkimAttributesRequest.h>
#include <aws/pinpoint-email/model/PutEmailIdentityFeedbackAttributesRequest.h>
#include <aws/pinpoint-email/model/PutEmailIdentityMailFromAttributesRequest.h>
#include <aws/pinpoint-email/model/SendEmailRequest.h>
#include <aws/pinpoint-email/model/TagResourceRequest.h>
#include <aws/pinpoint-email/model/UntagResourceRequest.h>
#include <aws/pinpoint-email/model/UpdateConfigurationSetEventDestinationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PinpointEmail;
using namespace Aws::PinpointEmail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PinpointEmail {
const char SERVICE_NAME[] = "ses";
const char ALLOCATION_TAG[] = "PinpointEmailClient";
}  // namespace PinpointEmail
}  // namespace Aws
const char* PinpointEmailClient::GetServiceName() { return SERVICE_NAME; }
const char* PinpointEmailClient::GetAllocationTag() { return ALLOCATION_TAG; }

PinpointEmailClient::PinpointEmailClient(const PinpointEmail::PinpointEmailClientConfiguration& clientConfiguration,
                                         std::shared_ptr<PinpointEmailEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointEmailClient::PinpointEmailClient(const AWSCredentials& credentials,
                                         std::shared_ptr<PinpointEmailEndpointProviderBase> endpointProvider,
                                         const PinpointEmail::PinpointEmailClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointEmailClient::PinpointEmailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<PinpointEmailEndpointProviderBase> endpointProvider,
                                         const PinpointEmail::PinpointEmailClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PinpointEmailClient::PinpointEmailClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointEmailClient::PinpointEmailClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointEmailClient::PinpointEmailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PinpointEmailClient::~PinpointEmailClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PinpointEmailEndpointProviderBase>& PinpointEmailClient::accessEndpointProvider() { return m_endpointProvider; }

void PinpointEmailClient::init(const PinpointEmail::PinpointEmailClientConfiguration& config) {
  AWSClient::SetServiceClientName("Pinpoint Email");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ses");
}

void PinpointEmailClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PinpointEmailClient::InvokeOperationOutcome PinpointEmailClient::InvokeServiceOperation(
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

CreateConfigurationSetOutcome PinpointEmailClient::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets");
  };

  return CreateConfigurationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfigurationSetEventDestinationOutcome PinpointEmailClient::CreateConfigurationSetEventDestination(
    const CreateConfigurationSetEventDestinationRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return CreateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations");
  };

  return CreateConfigurationSetEventDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDedicatedIpPoolOutcome PinpointEmailClient::CreateDedicatedIpPool(const CreateDedicatedIpPoolRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ip-pools");
  };

  return CreateDedicatedIpPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeliverabilityTestReportOutcome PinpointEmailClient::CreateDeliverabilityTestReport(
    const CreateDeliverabilityTestReportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/test");
  };

  return CreateDeliverabilityTestReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEmailIdentityOutcome PinpointEmailClient::CreateEmailIdentity(const CreateEmailIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities");
  };

  return CreateEmailIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConfigurationSetOutcome PinpointEmailClient::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  };

  return DeleteConfigurationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConfigurationSetEventDestinationOutcome PinpointEmailClient::DeleteConfigurationSetEventDestination(
    const DeleteConfigurationSetEventDestinationRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventDestinationName());
  };

  return DeleteConfigurationSetEventDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDedicatedIpPoolOutcome PinpointEmailClient::DeleteDedicatedIpPool(const DeleteDedicatedIpPoolRequest& request) const {
  if (!request.PoolNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDedicatedIpPool", "Required field: PoolName, is not set");
    return DeleteDedicatedIpPoolOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PoolName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ip-pools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPoolName());
  };

  return DeleteDedicatedIpPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEmailIdentityOutcome PinpointEmailClient::DeleteEmailIdentity(const DeleteEmailIdentityRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEmailIdentity", "Required field: EmailIdentity, is not set");
    return DeleteEmailIdentityOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
  };

  return DeleteEmailIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetAccountOutcome PinpointEmailClient::GetAccount(const GetAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/account");
  };

  return GetAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBlacklistReportsOutcome PinpointEmailClient::GetBlacklistReports(const GetBlacklistReportsRequest& request) const {
  if (!request.BlacklistItemNamesHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBlacklistReports", "Required field: BlacklistItemNames, is not set");
    return GetBlacklistReportsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlacklistItemNames]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/blacklist-report");
  };

  return GetBlacklistReportsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfigurationSetOutcome PinpointEmailClient::GetConfigurationSet(const GetConfigurationSetRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  };

  return GetConfigurationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfigurationSetEventDestinationsOutcome PinpointEmailClient::GetConfigurationSetEventDestinations(
    const GetConfigurationSetEventDestinationsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationSetEventDestinations", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetEventDestinationsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations");
  };

  return GetConfigurationSetEventDestinationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDedicatedIpOutcome PinpointEmailClient::GetDedicatedIp(const GetDedicatedIpRequest& request) const {
  if (!request.IpHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDedicatedIp", "Required field: Ip, is not set");
    return GetDedicatedIpOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Ip]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ips/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIp());
  };

  return GetDedicatedIpOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDedicatedIpsOutcome PinpointEmailClient::GetDedicatedIps(const GetDedicatedIpsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ips");
  };

  return GetDedicatedIpsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeliverabilityDashboardOptionsOutcome PinpointEmailClient::GetDeliverabilityDashboardOptions(
    const GetDeliverabilityDashboardOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard");
  };

  return GetDeliverabilityDashboardOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeliverabilityTestReportOutcome PinpointEmailClient::GetDeliverabilityTestReport(
    const GetDeliverabilityTestReportRequest& request) const {
  if (!request.ReportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeliverabilityTestReport", "Required field: ReportId, is not set");
    return GetDeliverabilityTestReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/test-reports/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportId());
  };

  return GetDeliverabilityTestReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainDeliverabilityCampaignOutcome PinpointEmailClient::GetDomainDeliverabilityCampaign(
    const GetDomainDeliverabilityCampaignRequest& request) const {
  if (!request.CampaignIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainDeliverabilityCampaign", "Required field: CampaignId, is not set");
    return GetDomainDeliverabilityCampaignOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  };

  return GetDomainDeliverabilityCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainStatisticsReportOutcome PinpointEmailClient::GetDomainStatisticsReport(const GetDomainStatisticsReportRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: Domain, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.StartDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: StartDate, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: EndDate, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/statistics-report/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomain());
  };

  return GetDomainStatisticsReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEmailIdentityOutcome PinpointEmailClient::GetEmailIdentity(const GetEmailIdentityRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEmailIdentity", "Required field: EmailIdentity, is not set");
    return GetEmailIdentityOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
  };

  return GetEmailIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfigurationSetsOutcome PinpointEmailClient::ListConfigurationSets(const ListConfigurationSetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets");
  };

  return ListConfigurationSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDedicatedIpPoolsOutcome PinpointEmailClient::ListDedicatedIpPools(const ListDedicatedIpPoolsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ip-pools");
  };

  return ListDedicatedIpPoolsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDeliverabilityTestReportsOutcome PinpointEmailClient::ListDeliverabilityTestReports(
    const ListDeliverabilityTestReportsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/test-reports");
  };

  return ListDeliverabilityTestReportsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainDeliverabilityCampaignsOutcome PinpointEmailClient::ListDomainDeliverabilityCampaigns(
    const ListDomainDeliverabilityCampaignsRequest& request) const {
  if (!request.StartDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: StartDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: EndDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  if (!request.SubscribedDomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: SubscribedDomain, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscribedDomain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscribedDomain());
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns");
  };

  return ListDomainDeliverabilityCampaignsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEmailIdentitiesOutcome PinpointEmailClient::ListEmailIdentities(const ListEmailIdentitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities");
  };

  return ListEmailIdentitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome PinpointEmailClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/tags");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutAccountDedicatedIpWarmupAttributesOutcome PinpointEmailClient::PutAccountDedicatedIpWarmupAttributes(
    const PutAccountDedicatedIpWarmupAttributesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/account/dedicated-ips/warmup");
  };

  return PutAccountDedicatedIpWarmupAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutAccountSendingAttributesOutcome PinpointEmailClient::PutAccountSendingAttributes(
    const PutAccountSendingAttributesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/account/sending");
  };

  return PutAccountSendingAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutConfigurationSetDeliveryOptionsOutcome PinpointEmailClient::PutConfigurationSetDeliveryOptions(
    const PutConfigurationSetDeliveryOptionsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetDeliveryOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetDeliveryOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/delivery-options");
  };

  return PutConfigurationSetDeliveryOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutConfigurationSetReputationOptionsOutcome PinpointEmailClient::PutConfigurationSetReputationOptions(
    const PutConfigurationSetReputationOptionsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetReputationOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetReputationOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reputation-options");
  };

  return PutConfigurationSetReputationOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutConfigurationSetSendingOptionsOutcome PinpointEmailClient::PutConfigurationSetSendingOptions(
    const PutConfigurationSetSendingOptionsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetSendingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetSendingOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sending");
  };

  return PutConfigurationSetSendingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutConfigurationSetTrackingOptionsOutcome PinpointEmailClient::PutConfigurationSetTrackingOptions(
    const PutConfigurationSetTrackingOptionsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetTrackingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetTrackingOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking-options");
  };

  return PutConfigurationSetTrackingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutDedicatedIpInPoolOutcome PinpointEmailClient::PutDedicatedIpInPool(const PutDedicatedIpInPoolRequest& request) const {
  if (!request.IpHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpInPool", "Required field: Ip, is not set");
    return PutDedicatedIpInPoolOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ips/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIp());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pool");
  };

  return PutDedicatedIpInPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutDedicatedIpWarmupAttributesOutcome PinpointEmailClient::PutDedicatedIpWarmupAttributes(
    const PutDedicatedIpWarmupAttributesRequest& request) const {
  if (!request.IpHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpWarmupAttributes", "Required field: Ip, is not set");
    return PutDedicatedIpWarmupAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ips/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIp());
    endpointResolutionOutcome.GetResult().AddPathSegments("/warmup");
  };

  return PutDedicatedIpWarmupAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutDeliverabilityDashboardOptionOutcome PinpointEmailClient::PutDeliverabilityDashboardOption(
    const PutDeliverabilityDashboardOptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard");
  };

  return PutDeliverabilityDashboardOptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutEmailIdentityDkimAttributesOutcome PinpointEmailClient::PutEmailIdentityDkimAttributes(
    const PutEmailIdentityDkimAttributesRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityDkimAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityDkimAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dkim");
  };

  return PutEmailIdentityDkimAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutEmailIdentityFeedbackAttributesOutcome PinpointEmailClient::PutEmailIdentityFeedbackAttributes(
    const PutEmailIdentityFeedbackAttributesRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityFeedbackAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityFeedbackAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  };

  return PutEmailIdentityFeedbackAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutEmailIdentityMailFromAttributesOutcome PinpointEmailClient::PutEmailIdentityMailFromAttributes(
    const PutEmailIdentityMailFromAttributesRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityMailFromAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityMailFromAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/mail-from");
  };

  return PutEmailIdentityMailFromAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SendEmailOutcome PinpointEmailClient::SendEmail(const SendEmailRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/outbound-emails");
  };

  return SendEmailOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome PinpointEmailClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/tags");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PinpointEmailClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/tags");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateConfigurationSetEventDestinationOutcome PinpointEmailClient::UpdateConfigurationSetEventDestination(
    const UpdateConfigurationSetEventDestinationRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(
        PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventDestinationName());
  };

  return UpdateConfigurationSetEventDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
