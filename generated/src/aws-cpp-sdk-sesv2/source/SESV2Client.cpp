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
#include <aws/sesv2/SESV2Client.h>
#include <aws/sesv2/SESV2EndpointProvider.h>
#include <aws/sesv2/SESV2ErrorMarshaller.h>
#include <aws/sesv2/model/BatchGetMetricDataRequest.h>
#include <aws/sesv2/model/CancelExportJobRequest.h>
#include <aws/sesv2/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/sesv2/model/CreateConfigurationSetRequest.h>
#include <aws/sesv2/model/CreateContactListRequest.h>
#include <aws/sesv2/model/CreateContactRequest.h>
#include <aws/sesv2/model/CreateCustomVerificationEmailTemplateRequest.h>
#include <aws/sesv2/model/CreateDedicatedIpPoolRequest.h>
#include <aws/sesv2/model/CreateDeliverabilityTestReportRequest.h>
#include <aws/sesv2/model/CreateEmailIdentityPolicyRequest.h>
#include <aws/sesv2/model/CreateEmailIdentityRequest.h>
#include <aws/sesv2/model/CreateEmailTemplateRequest.h>
#include <aws/sesv2/model/CreateExportJobRequest.h>
#include <aws/sesv2/model/CreateImportJobRequest.h>
#include <aws/sesv2/model/CreateMultiRegionEndpointRequest.h>
#include <aws/sesv2/model/CreateTenantRequest.h>
#include <aws/sesv2/model/CreateTenantResourceAssociationRequest.h>
#include <aws/sesv2/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/sesv2/model/DeleteConfigurationSetRequest.h>
#include <aws/sesv2/model/DeleteContactListRequest.h>
#include <aws/sesv2/model/DeleteContactRequest.h>
#include <aws/sesv2/model/DeleteCustomVerificationEmailTemplateRequest.h>
#include <aws/sesv2/model/DeleteDedicatedIpPoolRequest.h>
#include <aws/sesv2/model/DeleteEmailIdentityPolicyRequest.h>
#include <aws/sesv2/model/DeleteEmailIdentityRequest.h>
#include <aws/sesv2/model/DeleteEmailTemplateRequest.h>
#include <aws/sesv2/model/DeleteMultiRegionEndpointRequest.h>
#include <aws/sesv2/model/DeleteSuppressedDestinationRequest.h>
#include <aws/sesv2/model/DeleteTenantRequest.h>
#include <aws/sesv2/model/DeleteTenantResourceAssociationRequest.h>
#include <aws/sesv2/model/GetAccountRequest.h>
#include <aws/sesv2/model/GetBlacklistReportsRequest.h>
#include <aws/sesv2/model/GetConfigurationSetEventDestinationsRequest.h>
#include <aws/sesv2/model/GetConfigurationSetRequest.h>
#include <aws/sesv2/model/GetContactListRequest.h>
#include <aws/sesv2/model/GetContactRequest.h>
#include <aws/sesv2/model/GetCustomVerificationEmailTemplateRequest.h>
#include <aws/sesv2/model/GetDedicatedIpPoolRequest.h>
#include <aws/sesv2/model/GetDedicatedIpRequest.h>
#include <aws/sesv2/model/GetDedicatedIpsRequest.h>
#include <aws/sesv2/model/GetDeliverabilityDashboardOptionsRequest.h>
#include <aws/sesv2/model/GetDeliverabilityTestReportRequest.h>
#include <aws/sesv2/model/GetDomainDeliverabilityCampaignRequest.h>
#include <aws/sesv2/model/GetDomainStatisticsReportRequest.h>
#include <aws/sesv2/model/GetEmailAddressInsightsRequest.h>
#include <aws/sesv2/model/GetEmailIdentityPoliciesRequest.h>
#include <aws/sesv2/model/GetEmailIdentityRequest.h>
#include <aws/sesv2/model/GetEmailTemplateRequest.h>
#include <aws/sesv2/model/GetExportJobRequest.h>
#include <aws/sesv2/model/GetImportJobRequest.h>
#include <aws/sesv2/model/GetMessageInsightsRequest.h>
#include <aws/sesv2/model/GetMultiRegionEndpointRequest.h>
#include <aws/sesv2/model/GetReputationEntityRequest.h>
#include <aws/sesv2/model/GetSuppressedDestinationRequest.h>
#include <aws/sesv2/model/GetTenantRequest.h>
#include <aws/sesv2/model/ListConfigurationSetsRequest.h>
#include <aws/sesv2/model/ListContactListsRequest.h>
#include <aws/sesv2/model/ListContactsRequest.h>
#include <aws/sesv2/model/ListCustomVerificationEmailTemplatesRequest.h>
#include <aws/sesv2/model/ListDedicatedIpPoolsRequest.h>
#include <aws/sesv2/model/ListDeliverabilityTestReportsRequest.h>
#include <aws/sesv2/model/ListDomainDeliverabilityCampaignsRequest.h>
#include <aws/sesv2/model/ListEmailIdentitiesRequest.h>
#include <aws/sesv2/model/ListEmailTemplatesRequest.h>
#include <aws/sesv2/model/ListExportJobsRequest.h>
#include <aws/sesv2/model/ListImportJobsRequest.h>
#include <aws/sesv2/model/ListMultiRegionEndpointsRequest.h>
#include <aws/sesv2/model/ListRecommendationsRequest.h>
#include <aws/sesv2/model/ListReputationEntitiesRequest.h>
#include <aws/sesv2/model/ListResourceTenantsRequest.h>
#include <aws/sesv2/model/ListSuppressedDestinationsRequest.h>
#include <aws/sesv2/model/ListTagsForResourceRequest.h>
#include <aws/sesv2/model/ListTenantResourcesRequest.h>
#include <aws/sesv2/model/ListTenantsRequest.h>
#include <aws/sesv2/model/PutAccountDedicatedIpWarmupAttributesRequest.h>
#include <aws/sesv2/model/PutAccountDetailsRequest.h>
#include <aws/sesv2/model/PutAccountSendingAttributesRequest.h>
#include <aws/sesv2/model/PutAccountSuppressionAttributesRequest.h>
#include <aws/sesv2/model/PutAccountVdmAttributesRequest.h>
#include <aws/sesv2/model/PutConfigurationSetArchivingOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetDeliveryOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetReputationOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetSendingOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetSuppressionOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetTrackingOptionsRequest.h>
#include <aws/sesv2/model/PutConfigurationSetVdmOptionsRequest.h>
#include <aws/sesv2/model/PutDedicatedIpInPoolRequest.h>
#include <aws/sesv2/model/PutDedicatedIpPoolScalingAttributesRequest.h>
#include <aws/sesv2/model/PutDedicatedIpWarmupAttributesRequest.h>
#include <aws/sesv2/model/PutDeliverabilityDashboardOptionRequest.h>
#include <aws/sesv2/model/PutEmailIdentityConfigurationSetAttributesRequest.h>
#include <aws/sesv2/model/PutEmailIdentityDkimAttributesRequest.h>
#include <aws/sesv2/model/PutEmailIdentityDkimSigningAttributesRequest.h>
#include <aws/sesv2/model/PutEmailIdentityFeedbackAttributesRequest.h>
#include <aws/sesv2/model/PutEmailIdentityMailFromAttributesRequest.h>
#include <aws/sesv2/model/PutSuppressedDestinationRequest.h>
#include <aws/sesv2/model/SendBulkEmailRequest.h>
#include <aws/sesv2/model/SendCustomVerificationEmailRequest.h>
#include <aws/sesv2/model/SendEmailRequest.h>
#include <aws/sesv2/model/TagResourceRequest.h>
#include <aws/sesv2/model/TestRenderEmailTemplateRequest.h>
#include <aws/sesv2/model/UntagResourceRequest.h>
#include <aws/sesv2/model/UpdateConfigurationSetEventDestinationRequest.h>
#include <aws/sesv2/model/UpdateContactListRequest.h>
#include <aws/sesv2/model/UpdateContactRequest.h>
#include <aws/sesv2/model/UpdateCustomVerificationEmailTemplateRequest.h>
#include <aws/sesv2/model/UpdateEmailIdentityPolicyRequest.h>
#include <aws/sesv2/model/UpdateEmailTemplateRequest.h>
#include <aws/sesv2/model/UpdateReputationEntityCustomerManagedStatusRequest.h>
#include <aws/sesv2/model/UpdateReputationEntityPolicyRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SESV2;
using namespace Aws::SESV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SESV2 {
const char SERVICE_NAME[] = "ses";
const char ALLOCATION_TAG[] = "SESV2Client";
}  // namespace SESV2
}  // namespace Aws
const char* SESV2Client::GetServiceName() { return SERVICE_NAME; }
const char* SESV2Client::GetAllocationTag() { return ALLOCATION_TAG; }

SESV2Client::SESV2Client(const SESV2::SESV2ClientConfiguration& clientConfiguration,
                         std::shared_ptr<SESV2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SESV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SESV2Client::SESV2Client(const AWSCredentials& credentials, std::shared_ptr<SESV2EndpointProviderBase> endpointProvider,
                         const SESV2::SESV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SESV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SESV2Client::SESV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<SESV2EndpointProviderBase> endpointProvider,
                         const SESV2::SESV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SESV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SESV2Client::SESV2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SESV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SESV2Client::SESV2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SESV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SESV2Client::SESV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SESV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SESV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SESV2Client::~SESV2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SESV2EndpointProviderBase>& SESV2Client::accessEndpointProvider() { return m_endpointProvider; }

void SESV2Client::init(const SESV2::SESV2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("SESv2");
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

void SESV2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SESV2Client::InvokeOperationOutcome SESV2Client::InvokeServiceOperation(
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

BatchGetMetricDataOutcome SESV2Client::BatchGetMetricData(const BatchGetMetricDataRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/metrics/batch");
  };

  return BatchGetMetricDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelExportJobOutcome SESV2Client::CancelExportJob(const CancelExportJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelExportJob", "Required field: JobId, is not set");
    return CancelExportJobOutcome(
        Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/export-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  return CancelExportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateConfigurationSetOutcome SESV2Client::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets");
  };

  return CreateConfigurationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfigurationSetEventDestinationOutcome SESV2Client::CreateConfigurationSetEventDestination(
    const CreateConfigurationSetEventDestinationRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return CreateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations");
  };

  return CreateConfigurationSetEventDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContactOutcome SESV2Client::CreateContact(const CreateContactRequest& request) const {
  if (!request.ContactListNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateContact", "Required field: ContactListName, is not set");
    return CreateContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ContactListName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/contact-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactListName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contacts");
  };

  return CreateContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContactListOutcome SESV2Client::CreateContactList(const CreateContactListRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/contact-lists");
  };

  return CreateContactListOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomVerificationEmailTemplateOutcome SESV2Client::CreateCustomVerificationEmailTemplate(
    const CreateCustomVerificationEmailTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/custom-verification-email-templates");
  };

  return CreateCustomVerificationEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDedicatedIpPoolOutcome SESV2Client::CreateDedicatedIpPool(const CreateDedicatedIpPoolRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/dedicated-ip-pools");
  };

  return CreateDedicatedIpPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeliverabilityTestReportOutcome SESV2Client::CreateDeliverabilityTestReport(
    const CreateDeliverabilityTestReportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/deliverability-dashboard/test");
  };

  return CreateDeliverabilityTestReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEmailIdentityOutcome SESV2Client::CreateEmailIdentity(const CreateEmailIdentityRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities");
  };

  return CreateEmailIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEmailIdentityPolicyOutcome SESV2Client::CreateEmailIdentityPolicy(const CreateEmailIdentityPolicyRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEmailIdentityPolicy", "Required field: EmailIdentity, is not set");
    return CreateEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EmailIdentity]", false));
  }
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEmailIdentityPolicy", "Required field: PolicyName, is not set");
    return CreateEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PolicyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
  };

  return CreateEmailIdentityPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEmailTemplateOutcome SESV2Client::CreateEmailTemplate(const CreateEmailTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/templates");
  };

  return CreateEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExportJobOutcome SESV2Client::CreateExportJob(const CreateExportJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/export-jobs");
  };

  return CreateExportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateImportJobOutcome SESV2Client::CreateImportJob(const CreateImportJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/import-jobs");
  };

  return CreateImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMultiRegionEndpointOutcome SESV2Client::CreateMultiRegionEndpoint(const CreateMultiRegionEndpointRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/multi-region-endpoints");
  };

  return CreateMultiRegionEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTenantOutcome SESV2Client::CreateTenant(const CreateTenantRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/tenants");
  };

  return CreateTenantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTenantResourceAssociationOutcome SESV2Client::CreateTenantResourceAssociation(
    const CreateTenantResourceAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/tenants/resources");
  };

  return CreateTenantResourceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConfigurationSetOutcome SESV2Client::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  };

  return DeleteConfigurationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConfigurationSetEventDestinationOutcome SESV2Client::DeleteConfigurationSetEventDestination(
    const DeleteConfigurationSetEventDestinationRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventDestinationName());
  };

  return DeleteConfigurationSetEventDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteContactOutcome SESV2Client::DeleteContact(const DeleteContactRequest& request) const {
  if (!request.ContactListNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContact", "Required field: ContactListName, is not set");
    return DeleteContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ContactListName]", false));
  }
  if (!request.EmailAddressHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContact", "Required field: EmailAddress, is not set");
    return DeleteContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [EmailAddress]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/contact-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactListName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailAddress());
  };

  return DeleteContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteContactListOutcome SESV2Client::DeleteContactList(const DeleteContactListRequest& request) const {
  if (!request.ContactListNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteContactList", "Required field: ContactListName, is not set");
    return DeleteContactListOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ContactListName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/contact-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactListName());
  };

  return DeleteContactListOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCustomVerificationEmailTemplateOutcome SESV2Client::DeleteCustomVerificationEmailTemplate(
    const DeleteCustomVerificationEmailTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomVerificationEmailTemplate", "Required field: TemplateName, is not set");
    return DeleteCustomVerificationEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/custom-verification-email-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  };

  return DeleteCustomVerificationEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDedicatedIpPoolOutcome SESV2Client::DeleteDedicatedIpPool(const DeleteDedicatedIpPoolRequest& request) const {
  if (!request.PoolNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDedicatedIpPool", "Required field: PoolName, is not set");
    return DeleteDedicatedIpPoolOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [PoolName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/dedicated-ip-pools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPoolName());
  };

  return DeleteDedicatedIpPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEmailIdentityOutcome SESV2Client::DeleteEmailIdentity(const DeleteEmailIdentityRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEmailIdentity", "Required field: EmailIdentity, is not set");
    return DeleteEmailIdentityOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
  };

  return DeleteEmailIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEmailIdentityPolicyOutcome SESV2Client::DeleteEmailIdentityPolicy(const DeleteEmailIdentityPolicyRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEmailIdentityPolicy", "Required field: EmailIdentity, is not set");
    return DeleteEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EmailIdentity]", false));
  }
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEmailIdentityPolicy", "Required field: PolicyName, is not set");
    return DeleteEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PolicyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
  };

  return DeleteEmailIdentityPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEmailTemplateOutcome SESV2Client::DeleteEmailTemplate(const DeleteEmailTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEmailTemplate", "Required field: TemplateName, is not set");
    return DeleteEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  };

  return DeleteEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMultiRegionEndpointOutcome SESV2Client::DeleteMultiRegionEndpoint(const DeleteMultiRegionEndpointRequest& request) const {
  if (!request.EndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMultiRegionEndpoint", "Required field: EndpointName, is not set");
    return DeleteMultiRegionEndpointOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EndpointName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/multi-region-endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointName());
  };

  return DeleteMultiRegionEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSuppressedDestinationOutcome SESV2Client::DeleteSuppressedDestination(const DeleteSuppressedDestinationRequest& request) const {
  if (!request.EmailAddressHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSuppressedDestination", "Required field: EmailAddress, is not set");
    return DeleteSuppressedDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [EmailAddress]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/suppression/addresses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailAddress());
  };

  return DeleteSuppressedDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTenantOutcome SESV2Client::DeleteTenant(const DeleteTenantRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/tenants/delete");
  };

  return DeleteTenantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTenantResourceAssociationOutcome SESV2Client::DeleteTenantResourceAssociation(
    const DeleteTenantResourceAssociationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/tenants/resources/delete");
  };

  return DeleteTenantResourceAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountOutcome SESV2Client::GetAccount(const GetAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/account");
  };

  return GetAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBlacklistReportsOutcome SESV2Client::GetBlacklistReports(const GetBlacklistReportsRequest& request) const {
  if (!request.BlacklistItemNamesHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBlacklistReports", "Required field: BlacklistItemNames, is not set");
    return GetBlacklistReportsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [BlacklistItemNames]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/deliverability-dashboard/blacklist-report");
  };

  return GetBlacklistReportsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfigurationSetOutcome SESV2Client::GetConfigurationSet(const GetConfigurationSetRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  };

  return GetConfigurationSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConfigurationSetEventDestinationsOutcome SESV2Client::GetConfigurationSetEventDestinations(
    const GetConfigurationSetEventDestinationsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfigurationSetEventDestinations", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetEventDestinationsOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations");
  };

  return GetConfigurationSetEventDestinationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetContactOutcome SESV2Client::GetContact(const GetContactRequest& request) const {
  if (!request.ContactListNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContact", "Required field: ContactListName, is not set");
    return GetContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [ContactListName]", false));
  }
  if (!request.EmailAddressHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContact", "Required field: EmailAddress, is not set");
    return GetContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [EmailAddress]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/contact-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactListName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailAddress());
  };

  return GetContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetContactListOutcome SESV2Client::GetContactList(const GetContactListRequest& request) const {
  if (!request.ContactListNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetContactList", "Required field: ContactListName, is not set");
    return GetContactListOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ContactListName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/contact-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactListName());
  };

  return GetContactListOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCustomVerificationEmailTemplateOutcome SESV2Client::GetCustomVerificationEmailTemplate(
    const GetCustomVerificationEmailTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCustomVerificationEmailTemplate", "Required field: TemplateName, is not set");
    return GetCustomVerificationEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                        "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/custom-verification-email-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  };

  return GetCustomVerificationEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDedicatedIpOutcome SESV2Client::GetDedicatedIp(const GetDedicatedIpRequest& request) const {
  if (!request.IpHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDedicatedIp", "Required field: Ip, is not set");
    return GetDedicatedIpOutcome(
        Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/dedicated-ips/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIp());
  };

  return GetDedicatedIpOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDedicatedIpPoolOutcome SESV2Client::GetDedicatedIpPool(const GetDedicatedIpPoolRequest& request) const {
  if (!request.PoolNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDedicatedIpPool", "Required field: PoolName, is not set");
    return GetDedicatedIpPoolOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [PoolName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/dedicated-ip-pools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPoolName());
  };

  return GetDedicatedIpPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDedicatedIpsOutcome SESV2Client::GetDedicatedIps(const GetDedicatedIpsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/dedicated-ips");
  };

  return GetDedicatedIpsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeliverabilityDashboardOptionsOutcome SESV2Client::GetDeliverabilityDashboardOptions(
    const GetDeliverabilityDashboardOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/deliverability-dashboard");
  };

  return GetDeliverabilityDashboardOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDeliverabilityTestReportOutcome SESV2Client::GetDeliverabilityTestReport(const GetDeliverabilityTestReportRequest& request) const {
  if (!request.ReportIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDeliverabilityTestReport", "Required field: ReportId, is not set");
    return GetDeliverabilityTestReportOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ReportId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/deliverability-dashboard/test-reports/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportId());
  };

  return GetDeliverabilityTestReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainDeliverabilityCampaignOutcome SESV2Client::GetDomainDeliverabilityCampaign(
    const GetDomainDeliverabilityCampaignRequest& request) const {
  if (!request.CampaignIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainDeliverabilityCampaign", "Required field: CampaignId, is not set");
    return GetDomainDeliverabilityCampaignOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [CampaignId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/deliverability-dashboard/campaigns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  };

  return GetDomainDeliverabilityCampaignOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainStatisticsReportOutcome SESV2Client::GetDomainStatisticsReport(const GetDomainStatisticsReportRequest& request) const {
  if (!request.DomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: Domain, is not set");
    return GetDomainStatisticsReportOutcome(
        Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.StartDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: StartDate, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: EndDate, is not set");
    return GetDomainStatisticsReportOutcome(
        Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/deliverability-dashboard/statistics-report/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomain());
  };

  return GetDomainStatisticsReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEmailAddressInsightsOutcome SESV2Client::GetEmailAddressInsights(const GetEmailAddressInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/email-address-insights/");
  };

  return GetEmailAddressInsightsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEmailIdentityOutcome SESV2Client::GetEmailIdentity(const GetEmailIdentityRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEmailIdentity", "Required field: EmailIdentity, is not set");
    return GetEmailIdentityOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
  };

  return GetEmailIdentityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEmailIdentityPoliciesOutcome SESV2Client::GetEmailIdentityPolicies(const GetEmailIdentityPoliciesRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEmailIdentityPolicies", "Required field: EmailIdentity, is not set");
    return GetEmailIdentityPoliciesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies");
  };

  return GetEmailIdentityPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEmailTemplateOutcome SESV2Client::GetEmailTemplate(const GetEmailTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEmailTemplate", "Required field: TemplateName, is not set");
    return GetEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  };

  return GetEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetExportJobOutcome SESV2Client::GetExportJob(const GetExportJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetExportJob", "Required field: JobId, is not set");
    return GetExportJobOutcome(
        Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/export-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetExportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetImportJobOutcome SESV2Client::GetImportJob(const GetImportJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetImportJob", "Required field: JobId, is not set");
    return GetImportJobOutcome(
        Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/import-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMessageInsightsOutcome SESV2Client::GetMessageInsights(const GetMessageInsightsRequest& request) const {
  if (!request.MessageIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMessageInsights", "Required field: MessageId, is not set");
    return GetMessageInsightsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [MessageId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/insights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  };

  return GetMessageInsightsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMultiRegionEndpointOutcome SESV2Client::GetMultiRegionEndpoint(const GetMultiRegionEndpointRequest& request) const {
  if (!request.EndpointNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMultiRegionEndpoint", "Required field: EndpointName, is not set");
    return GetMultiRegionEndpointOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EndpointName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/multi-region-endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointName());
  };

  return GetMultiRegionEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReputationEntityOutcome SESV2Client::GetReputationEntity(const GetReputationEntityRequest& request) const {
  if (!request.ReputationEntityReferenceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReputationEntity", "Required field: ReputationEntityReference, is not set");
    return GetReputationEntityOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ReputationEntityReference]", false));
  }
  if (!request.ReputationEntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReputationEntity", "Required field: ReputationEntityType, is not set");
    return GetReputationEntityOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ReputationEntityType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/reputation/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ReputationEntityTypeMapper::GetNameForReputationEntityType(request.GetReputationEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReputationEntityReference());
  };

  return GetReputationEntityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSuppressedDestinationOutcome SESV2Client::GetSuppressedDestination(const GetSuppressedDestinationRequest& request) const {
  if (!request.EmailAddressHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSuppressedDestination", "Required field: EmailAddress, is not set");
    return GetSuppressedDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EmailAddress]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/suppression/addresses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailAddress());
  };

  return GetSuppressedDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTenantOutcome SESV2Client::GetTenant(const GetTenantRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/tenants/get");
  };

  return GetTenantOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConfigurationSetsOutcome SESV2Client::ListConfigurationSets(const ListConfigurationSetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets");
  };

  return ListConfigurationSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContactListsOutcome SESV2Client::ListContactLists(const ListContactListsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/contact-lists");
  };

  return ListContactListsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContactsOutcome SESV2Client::ListContacts(const ListContactsRequest& request) const {
  if (!request.ContactListNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContacts", "Required field: ContactListName, is not set");
    return ListContactsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ContactListName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/contact-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactListName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/list");
  };

  return ListContactsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCustomVerificationEmailTemplatesOutcome SESV2Client::ListCustomVerificationEmailTemplates(
    const ListCustomVerificationEmailTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/custom-verification-email-templates");
  };

  return ListCustomVerificationEmailTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDedicatedIpPoolsOutcome SESV2Client::ListDedicatedIpPools(const ListDedicatedIpPoolsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/dedicated-ip-pools");
  };

  return ListDedicatedIpPoolsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDeliverabilityTestReportsOutcome SESV2Client::ListDeliverabilityTestReports(const ListDeliverabilityTestReportsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/deliverability-dashboard/test-reports");
  };

  return ListDeliverabilityTestReportsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainDeliverabilityCampaignsOutcome SESV2Client::ListDomainDeliverabilityCampaigns(
    const ListDomainDeliverabilityCampaignsRequest& request) const {
  if (!request.StartDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: StartDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                       "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: EndDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(
        Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  if (!request.SubscribedDomainHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: SubscribedDomain, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                       "Missing required field [SubscribedDomain]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/deliverability-dashboard/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscribedDomain());
    endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns");
  };

  return ListDomainDeliverabilityCampaignsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEmailIdentitiesOutcome SESV2Client::ListEmailIdentities(const ListEmailIdentitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities");
  };

  return ListEmailIdentitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEmailTemplatesOutcome SESV2Client::ListEmailTemplates(const ListEmailTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/templates");
  };

  return ListEmailTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListExportJobsOutcome SESV2Client::ListExportJobs(const ListExportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/list-export-jobs");
  };

  return ListExportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListImportJobsOutcome SESV2Client::ListImportJobs(const ListImportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/import-jobs/list");
  };

  return ListImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMultiRegionEndpointsOutcome SESV2Client::ListMultiRegionEndpoints(const ListMultiRegionEndpointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/multi-region-endpoints");
  };

  return ListMultiRegionEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRecommendationsOutcome SESV2Client::ListRecommendations(const ListRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/vdm/recommendations");
  };

  return ListRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReputationEntitiesOutcome SESV2Client::ListReputationEntities(const ListReputationEntitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/reputation/entities");
  };

  return ListReputationEntitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceTenantsOutcome SESV2Client::ListResourceTenants(const ListResourceTenantsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/resources/tenants/list");
  };

  return ListResourceTenantsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSuppressedDestinationsOutcome SESV2Client::ListSuppressedDestinations(const ListSuppressedDestinationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/suppression/addresses");
  };

  return ListSuppressedDestinationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome SESV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/tags");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTenantResourcesOutcome SESV2Client::ListTenantResources(const ListTenantResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/tenants/resources/list");
  };

  return ListTenantResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTenantsOutcome SESV2Client::ListTenants(const ListTenantsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/tenants/list");
  };

  return ListTenantsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAccountDedicatedIpWarmupAttributesOutcome SESV2Client::PutAccountDedicatedIpWarmupAttributes(
    const PutAccountDedicatedIpWarmupAttributesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/account/dedicated-ips/warmup");
  };

  return PutAccountDedicatedIpWarmupAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutAccountDetailsOutcome SESV2Client::PutAccountDetails(const PutAccountDetailsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/account/details");
  };

  return PutAccountDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAccountSendingAttributesOutcome SESV2Client::PutAccountSendingAttributes(const PutAccountSendingAttributesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/account/sending");
  };

  return PutAccountSendingAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutAccountSuppressionAttributesOutcome SESV2Client::PutAccountSuppressionAttributes(
    const PutAccountSuppressionAttributesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/account/suppression");
  };

  return PutAccountSuppressionAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutAccountVdmAttributesOutcome SESV2Client::PutAccountVdmAttributes(const PutAccountVdmAttributesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/account/vdm");
  };

  return PutAccountVdmAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutConfigurationSetArchivingOptionsOutcome SESV2Client::PutConfigurationSetArchivingOptions(
    const PutConfigurationSetArchivingOptionsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetArchivingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetArchivingOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/archiving-options");
  };

  return PutConfigurationSetArchivingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutConfigurationSetDeliveryOptionsOutcome SESV2Client::PutConfigurationSetDeliveryOptions(
    const PutConfigurationSetDeliveryOptionsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetDeliveryOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetDeliveryOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/delivery-options");
  };

  return PutConfigurationSetDeliveryOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutConfigurationSetReputationOptionsOutcome SESV2Client::PutConfigurationSetReputationOptions(
    const PutConfigurationSetReputationOptionsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetReputationOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetReputationOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reputation-options");
  };

  return PutConfigurationSetReputationOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutConfigurationSetSendingOptionsOutcome SESV2Client::PutConfigurationSetSendingOptions(
    const PutConfigurationSetSendingOptionsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetSendingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetSendingOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sending");
  };

  return PutConfigurationSetSendingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutConfigurationSetSuppressionOptionsOutcome SESV2Client::PutConfigurationSetSuppressionOptions(
    const PutConfigurationSetSuppressionOptionsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetSuppressionOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetSuppressionOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/suppression-options");
  };

  return PutConfigurationSetSuppressionOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutConfigurationSetTrackingOptionsOutcome SESV2Client::PutConfigurationSetTrackingOptions(
    const PutConfigurationSetTrackingOptionsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetTrackingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetTrackingOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tracking-options");
  };

  return PutConfigurationSetTrackingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutConfigurationSetVdmOptionsOutcome SESV2Client::PutConfigurationSetVdmOptions(const PutConfigurationSetVdmOptionsRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetVdmOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetVdmOptionsOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [ConfigurationSetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vdm-options");
  };

  return PutConfigurationSetVdmOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutDedicatedIpInPoolOutcome SESV2Client::PutDedicatedIpInPool(const PutDedicatedIpInPoolRequest& request) const {
  if (!request.IpHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpInPool", "Required field: Ip, is not set");
    return PutDedicatedIpInPoolOutcome(
        Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/dedicated-ips/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIp());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pool");
  };

  return PutDedicatedIpInPoolOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutDedicatedIpPoolScalingAttributesOutcome SESV2Client::PutDedicatedIpPoolScalingAttributes(
    const PutDedicatedIpPoolScalingAttributesRequest& request) const {
  if (!request.PoolNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpPoolScalingAttributes", "Required field: PoolName, is not set");
    return PutDedicatedIpPoolScalingAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PoolName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/dedicated-ip-pools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPoolName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scaling");
  };

  return PutDedicatedIpPoolScalingAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutDedicatedIpWarmupAttributesOutcome SESV2Client::PutDedicatedIpWarmupAttributes(
    const PutDedicatedIpWarmupAttributesRequest& request) const {
  if (!request.IpHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpWarmupAttributes", "Required field: Ip, is not set");
    return PutDedicatedIpWarmupAttributesOutcome(
        Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/dedicated-ips/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIp());
    endpointResolutionOutcome.GetResult().AddPathSegments("/warmup");
  };

  return PutDedicatedIpWarmupAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutDeliverabilityDashboardOptionOutcome SESV2Client::PutDeliverabilityDashboardOption(
    const PutDeliverabilityDashboardOptionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/deliverability-dashboard");
  };

  return PutDeliverabilityDashboardOptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutEmailIdentityConfigurationSetAttributesOutcome SESV2Client::PutEmailIdentityConfigurationSetAttributes(
    const PutEmailIdentityConfigurationSetAttributesRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityConfigurationSetAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityConfigurationSetAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration-set");
  };

  return PutEmailIdentityConfigurationSetAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutEmailIdentityDkimAttributesOutcome SESV2Client::PutEmailIdentityDkimAttributes(
    const PutEmailIdentityDkimAttributesRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityDkimAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityDkimAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dkim");
  };

  return PutEmailIdentityDkimAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutEmailIdentityDkimSigningAttributesOutcome SESV2Client::PutEmailIdentityDkimSigningAttributes(
    const PutEmailIdentityDkimSigningAttributesRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityDkimSigningAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityDkimSigningAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dkim/signing");
  };

  return PutEmailIdentityDkimSigningAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutEmailIdentityFeedbackAttributesOutcome SESV2Client::PutEmailIdentityFeedbackAttributes(
    const PutEmailIdentityFeedbackAttributesRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityFeedbackAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityFeedbackAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                        "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  };

  return PutEmailIdentityFeedbackAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutEmailIdentityMailFromAttributesOutcome SESV2Client::PutEmailIdentityMailFromAttributes(
    const PutEmailIdentityMailFromAttributesRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityMailFromAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityMailFromAttributesOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                        "Missing required field [EmailIdentity]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/mail-from");
  };

  return PutEmailIdentityMailFromAttributesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutSuppressedDestinationOutcome SESV2Client::PutSuppressedDestination(const PutSuppressedDestinationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/suppression/addresses");
  };

  return PutSuppressedDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SendBulkEmailOutcome SESV2Client::SendBulkEmail(const SendBulkEmailRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/outbound-bulk-emails");
  };

  return SendBulkEmailOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendCustomVerificationEmailOutcome SESV2Client::SendCustomVerificationEmail(const SendCustomVerificationEmailRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/outbound-custom-verification-emails");
  };

  return SendCustomVerificationEmailOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendEmailOutcome SESV2Client::SendEmail(const SendEmailRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/outbound-emails");
  };

  return SendEmailOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SESV2Client::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/tags");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TestRenderEmailTemplateOutcome SESV2Client::TestRenderEmailTemplate(const TestRenderEmailTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TestRenderEmailTemplate", "Required field: TemplateName, is not set");
    return TestRenderEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/render");
  };

  return TestRenderEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SESV2Client::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/tags");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateConfigurationSetEventDestinationOutcome SESV2Client::UpdateConfigurationSetEventDestination(
    const UpdateConfigurationSetEventDestinationRequest& request) const {
  if (!request.ConfigurationSetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/configuration-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventDestinationName());
  };

  return UpdateConfigurationSetEventDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateContactOutcome SESV2Client::UpdateContact(const UpdateContactRequest& request) const {
  if (!request.ContactListNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContact", "Required field: ContactListName, is not set");
    return UpdateContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ContactListName]", false));
  }
  if (!request.EmailAddressHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContact", "Required field: EmailAddress, is not set");
    return UpdateContactOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [EmailAddress]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/contact-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactListName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contacts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailAddress());
  };

  return UpdateContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateContactListOutcome SESV2Client::UpdateContactList(const UpdateContactListRequest& request) const {
  if (!request.ContactListNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContactList", "Required field: ContactListName, is not set");
    return UpdateContactListOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ContactListName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/contact-lists/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactListName());
  };

  return UpdateContactListOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateCustomVerificationEmailTemplateOutcome SESV2Client::UpdateCustomVerificationEmailTemplate(
    const UpdateCustomVerificationEmailTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCustomVerificationEmailTemplate", "Required field: TemplateName, is not set");
    return UpdateCustomVerificationEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/custom-verification-email-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  };

  return UpdateCustomVerificationEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEmailIdentityPolicyOutcome SESV2Client::UpdateEmailIdentityPolicy(const UpdateEmailIdentityPolicyRequest& request) const {
  if (!request.EmailIdentityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEmailIdentityPolicy", "Required field: EmailIdentity, is not set");
    return UpdateEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EmailIdentity]", false));
  }
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEmailIdentityPolicy", "Required field: PolicyName, is not set");
    return UpdateEmailIdentityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PolicyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
  };

  return UpdateEmailIdentityPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEmailTemplateOutcome SESV2Client::UpdateEmailTemplate(const UpdateEmailTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEmailTemplate", "Required field: TemplateName, is not set");
    return UpdateEmailTemplateOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  };

  return UpdateEmailTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateReputationEntityCustomerManagedStatusOutcome SESV2Client::UpdateReputationEntityCustomerManagedStatus(
    const UpdateReputationEntityCustomerManagedStatusRequest& request) const {
  if (!request.ReputationEntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReputationEntityCustomerManagedStatus", "Required field: ReputationEntityType, is not set");
    return UpdateReputationEntityCustomerManagedStatusOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReputationEntityType]", false));
  }
  if (!request.ReputationEntityReferenceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReputationEntityCustomerManagedStatus", "Required field: ReputationEntityReference, is not set");
    return UpdateReputationEntityCustomerManagedStatusOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReputationEntityReference]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/reputation/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ReputationEntityTypeMapper::GetNameForReputationEntityType(request.GetReputationEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReputationEntityReference());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customer-managed-status");
  };

  return UpdateReputationEntityCustomerManagedStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateReputationEntityPolicyOutcome SESV2Client::UpdateReputationEntityPolicy(const UpdateReputationEntityPolicyRequest& request) const {
  if (!request.ReputationEntityTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReputationEntityPolicy", "Required field: ReputationEntityType, is not set");
    return UpdateReputationEntityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ReputationEntityType]", false));
  }
  if (!request.ReputationEntityReferenceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReputationEntityPolicy", "Required field: ReputationEntityReference, is not set");
    return UpdateReputationEntityPolicyOutcome(Aws::Client::AWSError<SESV2Errors>(
        SESV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReputationEntityReference]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/email/reputation/entities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ReputationEntityTypeMapper::GetNameForReputationEntityType(request.GetReputationEntityType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReputationEntityReference());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return UpdateReputationEntityPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
