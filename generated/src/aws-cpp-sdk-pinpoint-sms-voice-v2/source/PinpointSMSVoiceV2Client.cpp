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
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Client.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2EndpointProvider.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2ErrorMarshaller.h>
#include <aws/pinpoint-sms-voice-v2/model/AssociateOriginationIdentityRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/AssociateProtectConfigurationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CarrierLookupRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateConfigurationSetRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateEventDestinationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateOptOutListRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreatePoolRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateProtectConfigurationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateRegistrationAssociationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateRegistrationAttachmentRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateRegistrationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateRegistrationVersionRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateVerifiedDestinationNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteAccountDefaultProtectConfigurationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteConfigurationSetRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteDefaultMessageTypeRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteDefaultSenderIdRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteEventDestinationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteKeywordRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteMediaMessageSpendLimitOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteOptOutListRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteOptedOutNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeletePoolRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteProtectConfigurationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteProtectConfigurationRuleSetNumberOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteRegistrationAttachmentRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteRegistrationFieldValueRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteRegistrationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteResourcePolicyRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteTextMessageSpendLimitOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteVerifiedDestinationNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteVoiceMessageSpendLimitOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountAttributesRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountLimitsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeConfigurationSetsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeKeywordsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptOutListsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptedOutNumbersRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePhoneNumbersRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePoolsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeProtectConfigurationsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationAttachmentsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationFieldDefinitionsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationFieldValuesRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationSectionDefinitionsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationTypeDefinitionsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationVersionsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeRegistrationsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSenderIdsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSpendLimitsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeVerifiedDestinationNumbersRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DisassociateOriginationIdentityRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DisassociateProtectConfigurationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/DiscardRegistrationVersionRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/GetProtectConfigurationCountryRuleSetRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/GetResourcePolicyRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/ListPoolOriginationIdentitiesRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/ListProtectConfigurationRuleSetNumberOverridesRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/ListRegistrationAssociationsRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/ListTagsForResourceRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/PutKeywordRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/PutMessageFeedbackRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/PutOptedOutNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/PutProtectConfigurationRuleSetNumberOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/PutRegistrationFieldValueRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/PutResourcePolicyRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/ReleasePhoneNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/ReleaseSenderIdRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/RequestPhoneNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/RequestSenderIdRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SendDestinationNumberVerificationCodeRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SendMediaMessageRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SendTextMessageRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SendVoiceMessageRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SetAccountDefaultProtectConfigurationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SetDefaultMessageFeedbackEnabledRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SetDefaultMessageTypeRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SetDefaultSenderIdRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SetMediaMessageSpendLimitOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SetTextMessageSpendLimitOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SetVoiceMessageSpendLimitOverrideRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/SubmitRegistrationVersionRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/TagResourceRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/UntagResourceRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdateEventDestinationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdatePhoneNumberRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdatePoolRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdateProtectConfigurationCountryRuleSetRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdateProtectConfigurationRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdateSenderIdRequest.h>
#include <aws/pinpoint-sms-voice-v2/model/VerifyDestinationNumberRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PinpointSMSVoiceV2;
using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PinpointSMSVoiceV2 {
const char SERVICE_NAME[] = "sms-voice";
const char ALLOCATION_TAG[] = "PinpointSMSVoiceV2Client";
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
const char* PinpointSMSVoiceV2Client::GetServiceName() { return SERVICE_NAME; }
const char* PinpointSMSVoiceV2Client::GetAllocationTag() { return ALLOCATION_TAG; }

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PinpointSMSVoiceV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const AWSCredentials& credentials,
                                                   std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase> endpointProvider,
                                                   const PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PinpointSMSVoiceV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase> endpointProvider,
                                                   const PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PinpointSMSVoiceV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointSMSVoiceV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const AWSCredentials& credentials,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointSMSVoiceV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PinpointSMSVoiceV2Client::PinpointSMSVoiceV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PinpointSMSVoiceV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PinpointSMSVoiceV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PinpointSMSVoiceV2Client::~PinpointSMSVoiceV2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PinpointSMSVoiceV2EndpointProviderBase>& PinpointSMSVoiceV2Client::accessEndpointProvider() { return m_endpointProvider; }

void PinpointSMSVoiceV2Client::init(const PinpointSMSVoiceV2::PinpointSMSVoiceV2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("Pinpoint SMS Voice V2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "sms-voice");
}

void PinpointSMSVoiceV2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PinpointSMSVoiceV2Client::InvokeOperationOutcome PinpointSMSVoiceV2Client::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateOriginationIdentityOutcome PinpointSMSVoiceV2Client::AssociateOriginationIdentity(
    const AssociateOriginationIdentityRequest& request) const {
  return AssociateOriginationIdentityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateProtectConfigurationOutcome PinpointSMSVoiceV2Client::AssociateProtectConfiguration(
    const AssociateProtectConfigurationRequest& request) const {
  return AssociateProtectConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CarrierLookupOutcome PinpointSMSVoiceV2Client::CarrierLookup(const CarrierLookupRequest& request) const {
  return CarrierLookupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfigurationSetOutcome PinpointSMSVoiceV2Client::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const {
  return CreateConfigurationSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventDestinationOutcome PinpointSMSVoiceV2Client::CreateEventDestination(const CreateEventDestinationRequest& request) const {
  return CreateEventDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOptOutListOutcome PinpointSMSVoiceV2Client::CreateOptOutList(const CreateOptOutListRequest& request) const {
  return CreateOptOutListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePoolOutcome PinpointSMSVoiceV2Client::CreatePool(const CreatePoolRequest& request) const {
  return CreatePoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProtectConfigurationOutcome PinpointSMSVoiceV2Client::CreateProtectConfiguration(
    const CreateProtectConfigurationRequest& request) const {
  return CreateProtectConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRegistrationOutcome PinpointSMSVoiceV2Client::CreateRegistration(const CreateRegistrationRequest& request) const {
  return CreateRegistrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRegistrationAssociationOutcome PinpointSMSVoiceV2Client::CreateRegistrationAssociation(
    const CreateRegistrationAssociationRequest& request) const {
  return CreateRegistrationAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRegistrationAttachmentOutcome PinpointSMSVoiceV2Client::CreateRegistrationAttachment(
    const CreateRegistrationAttachmentRequest& request) const {
  return CreateRegistrationAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRegistrationVersionOutcome PinpointSMSVoiceV2Client::CreateRegistrationVersion(
    const CreateRegistrationVersionRequest& request) const {
  return CreateRegistrationVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVerifiedDestinationNumberOutcome PinpointSMSVoiceV2Client::CreateVerifiedDestinationNumber(
    const CreateVerifiedDestinationNumberRequest& request) const {
  return CreateVerifiedDestinationNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccountDefaultProtectConfigurationOutcome PinpointSMSVoiceV2Client::DeleteAccountDefaultProtectConfiguration(
    const DeleteAccountDefaultProtectConfigurationRequest& request) const {
  return DeleteAccountDefaultProtectConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConfigurationSetOutcome PinpointSMSVoiceV2Client::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const {
  return DeleteConfigurationSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDefaultMessageTypeOutcome PinpointSMSVoiceV2Client::DeleteDefaultMessageType(const DeleteDefaultMessageTypeRequest& request) const {
  return DeleteDefaultMessageTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDefaultSenderIdOutcome PinpointSMSVoiceV2Client::DeleteDefaultSenderId(const DeleteDefaultSenderIdRequest& request) const {
  return DeleteDefaultSenderIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEventDestinationOutcome PinpointSMSVoiceV2Client::DeleteEventDestination(const DeleteEventDestinationRequest& request) const {
  return DeleteEventDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteKeywordOutcome PinpointSMSVoiceV2Client::DeleteKeyword(const DeleteKeywordRequest& request) const {
  return DeleteKeywordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMediaMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::DeleteMediaMessageSpendLimitOverride(
    const DeleteMediaMessageSpendLimitOverrideRequest& request) const {
  return DeleteMediaMessageSpendLimitOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOptOutListOutcome PinpointSMSVoiceV2Client::DeleteOptOutList(const DeleteOptOutListRequest& request) const {
  return DeleteOptOutListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOptedOutNumberOutcome PinpointSMSVoiceV2Client::DeleteOptedOutNumber(const DeleteOptedOutNumberRequest& request) const {
  return DeleteOptedOutNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePoolOutcome PinpointSMSVoiceV2Client::DeletePool(const DeletePoolRequest& request) const {
  return DeletePoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProtectConfigurationOutcome PinpointSMSVoiceV2Client::DeleteProtectConfiguration(
    const DeleteProtectConfigurationRequest& request) const {
  return DeleteProtectConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProtectConfigurationRuleSetNumberOverrideOutcome PinpointSMSVoiceV2Client::DeleteProtectConfigurationRuleSetNumberOverride(
    const DeleteProtectConfigurationRuleSetNumberOverrideRequest& request) const {
  return DeleteProtectConfigurationRuleSetNumberOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRegistrationOutcome PinpointSMSVoiceV2Client::DeleteRegistration(const DeleteRegistrationRequest& request) const {
  return DeleteRegistrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRegistrationAttachmentOutcome PinpointSMSVoiceV2Client::DeleteRegistrationAttachment(
    const DeleteRegistrationAttachmentRequest& request) const {
  return DeleteRegistrationAttachmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRegistrationFieldValueOutcome PinpointSMSVoiceV2Client::DeleteRegistrationFieldValue(
    const DeleteRegistrationFieldValueRequest& request) const {
  return DeleteRegistrationFieldValueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome PinpointSMSVoiceV2Client::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTextMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::DeleteTextMessageSpendLimitOverride(
    const DeleteTextMessageSpendLimitOverrideRequest& request) const {
  return DeleteTextMessageSpendLimitOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVerifiedDestinationNumberOutcome PinpointSMSVoiceV2Client::DeleteVerifiedDestinationNumber(
    const DeleteVerifiedDestinationNumberRequest& request) const {
  return DeleteVerifiedDestinationNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVoiceMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::DeleteVoiceMessageSpendLimitOverride(
    const DeleteVoiceMessageSpendLimitOverrideRequest& request) const {
  return DeleteVoiceMessageSpendLimitOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountAttributesOutcome PinpointSMSVoiceV2Client::DescribeAccountAttributes(
    const DescribeAccountAttributesRequest& request) const {
  return DescribeAccountAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountLimitsOutcome PinpointSMSVoiceV2Client::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const {
  return DescribeAccountLimitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConfigurationSetsOutcome PinpointSMSVoiceV2Client::DescribeConfigurationSets(
    const DescribeConfigurationSetsRequest& request) const {
  return DescribeConfigurationSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeKeywordsOutcome PinpointSMSVoiceV2Client::DescribeKeywords(const DescribeKeywordsRequest& request) const {
  return DescribeKeywordsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOptOutListsOutcome PinpointSMSVoiceV2Client::DescribeOptOutLists(const DescribeOptOutListsRequest& request) const {
  return DescribeOptOutListsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOptedOutNumbersOutcome PinpointSMSVoiceV2Client::DescribeOptedOutNumbers(const DescribeOptedOutNumbersRequest& request) const {
  return DescribeOptedOutNumbersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePhoneNumbersOutcome PinpointSMSVoiceV2Client::DescribePhoneNumbers(const DescribePhoneNumbersRequest& request) const {
  return DescribePhoneNumbersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePoolsOutcome PinpointSMSVoiceV2Client::DescribePools(const DescribePoolsRequest& request) const {
  return DescribePoolsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeProtectConfigurationsOutcome PinpointSMSVoiceV2Client::DescribeProtectConfigurations(
    const DescribeProtectConfigurationsRequest& request) const {
  return DescribeProtectConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegistrationAttachmentsOutcome PinpointSMSVoiceV2Client::DescribeRegistrationAttachments(
    const DescribeRegistrationAttachmentsRequest& request) const {
  return DescribeRegistrationAttachmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegistrationFieldDefinitionsOutcome PinpointSMSVoiceV2Client::DescribeRegistrationFieldDefinitions(
    const DescribeRegistrationFieldDefinitionsRequest& request) const {
  return DescribeRegistrationFieldDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegistrationFieldValuesOutcome PinpointSMSVoiceV2Client::DescribeRegistrationFieldValues(
    const DescribeRegistrationFieldValuesRequest& request) const {
  return DescribeRegistrationFieldValuesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegistrationSectionDefinitionsOutcome PinpointSMSVoiceV2Client::DescribeRegistrationSectionDefinitions(
    const DescribeRegistrationSectionDefinitionsRequest& request) const {
  return DescribeRegistrationSectionDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegistrationTypeDefinitionsOutcome PinpointSMSVoiceV2Client::DescribeRegistrationTypeDefinitions(
    const DescribeRegistrationTypeDefinitionsRequest& request) const {
  return DescribeRegistrationTypeDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegistrationVersionsOutcome PinpointSMSVoiceV2Client::DescribeRegistrationVersions(
    const DescribeRegistrationVersionsRequest& request) const {
  return DescribeRegistrationVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegistrationsOutcome PinpointSMSVoiceV2Client::DescribeRegistrations(const DescribeRegistrationsRequest& request) const {
  return DescribeRegistrationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSenderIdsOutcome PinpointSMSVoiceV2Client::DescribeSenderIds(const DescribeSenderIdsRequest& request) const {
  return DescribeSenderIdsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSpendLimitsOutcome PinpointSMSVoiceV2Client::DescribeSpendLimits(const DescribeSpendLimitsRequest& request) const {
  return DescribeSpendLimitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVerifiedDestinationNumbersOutcome PinpointSMSVoiceV2Client::DescribeVerifiedDestinationNumbers(
    const DescribeVerifiedDestinationNumbersRequest& request) const {
  return DescribeVerifiedDestinationNumbersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateOriginationIdentityOutcome PinpointSMSVoiceV2Client::DisassociateOriginationIdentity(
    const DisassociateOriginationIdentityRequest& request) const {
  return DisassociateOriginationIdentityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateProtectConfigurationOutcome PinpointSMSVoiceV2Client::DisassociateProtectConfiguration(
    const DisassociateProtectConfigurationRequest& request) const {
  return DisassociateProtectConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DiscardRegistrationVersionOutcome PinpointSMSVoiceV2Client::DiscardRegistrationVersion(
    const DiscardRegistrationVersionRequest& request) const {
  return DiscardRegistrationVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetProtectConfigurationCountryRuleSetOutcome PinpointSMSVoiceV2Client::GetProtectConfigurationCountryRuleSet(
    const GetProtectConfigurationCountryRuleSetRequest& request) const {
  return GetProtectConfigurationCountryRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePolicyOutcome PinpointSMSVoiceV2Client::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  return GetResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPoolOriginationIdentitiesOutcome PinpointSMSVoiceV2Client::ListPoolOriginationIdentities(
    const ListPoolOriginationIdentitiesRequest& request) const {
  return ListPoolOriginationIdentitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProtectConfigurationRuleSetNumberOverridesOutcome PinpointSMSVoiceV2Client::ListProtectConfigurationRuleSetNumberOverrides(
    const ListProtectConfigurationRuleSetNumberOverridesRequest& request) const {
  return ListProtectConfigurationRuleSetNumberOverridesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRegistrationAssociationsOutcome PinpointSMSVoiceV2Client::ListRegistrationAssociations(
    const ListRegistrationAssociationsRequest& request) const {
  return ListRegistrationAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome PinpointSMSVoiceV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutKeywordOutcome PinpointSMSVoiceV2Client::PutKeyword(const PutKeywordRequest& request) const {
  return PutKeywordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutMessageFeedbackOutcome PinpointSMSVoiceV2Client::PutMessageFeedback(const PutMessageFeedbackRequest& request) const {
  return PutMessageFeedbackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutOptedOutNumberOutcome PinpointSMSVoiceV2Client::PutOptedOutNumber(const PutOptedOutNumberRequest& request) const {
  return PutOptedOutNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutProtectConfigurationRuleSetNumberOverrideOutcome PinpointSMSVoiceV2Client::PutProtectConfigurationRuleSetNumberOverride(
    const PutProtectConfigurationRuleSetNumberOverrideRequest& request) const {
  return PutProtectConfigurationRuleSetNumberOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRegistrationFieldValueOutcome PinpointSMSVoiceV2Client::PutRegistrationFieldValue(
    const PutRegistrationFieldValueRequest& request) const {
  return PutRegistrationFieldValueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome PinpointSMSVoiceV2Client::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReleasePhoneNumberOutcome PinpointSMSVoiceV2Client::ReleasePhoneNumber(const ReleasePhoneNumberRequest& request) const {
  return ReleasePhoneNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReleaseSenderIdOutcome PinpointSMSVoiceV2Client::ReleaseSenderId(const ReleaseSenderIdRequest& request) const {
  return ReleaseSenderIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RequestPhoneNumberOutcome PinpointSMSVoiceV2Client::RequestPhoneNumber(const RequestPhoneNumberRequest& request) const {
  return RequestPhoneNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RequestSenderIdOutcome PinpointSMSVoiceV2Client::RequestSenderId(const RequestSenderIdRequest& request) const {
  return RequestSenderIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendDestinationNumberVerificationCodeOutcome PinpointSMSVoiceV2Client::SendDestinationNumberVerificationCode(
    const SendDestinationNumberVerificationCodeRequest& request) const {
  return SendDestinationNumberVerificationCodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendMediaMessageOutcome PinpointSMSVoiceV2Client::SendMediaMessage(const SendMediaMessageRequest& request) const {
  return SendMediaMessageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendTextMessageOutcome PinpointSMSVoiceV2Client::SendTextMessage(const SendTextMessageRequest& request) const {
  return SendTextMessageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendVoiceMessageOutcome PinpointSMSVoiceV2Client::SendVoiceMessage(const SendVoiceMessageRequest& request) const {
  return SendVoiceMessageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetAccountDefaultProtectConfigurationOutcome PinpointSMSVoiceV2Client::SetAccountDefaultProtectConfiguration(
    const SetAccountDefaultProtectConfigurationRequest& request) const {
  return SetAccountDefaultProtectConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetDefaultMessageFeedbackEnabledOutcome PinpointSMSVoiceV2Client::SetDefaultMessageFeedbackEnabled(
    const SetDefaultMessageFeedbackEnabledRequest& request) const {
  return SetDefaultMessageFeedbackEnabledOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetDefaultMessageTypeOutcome PinpointSMSVoiceV2Client::SetDefaultMessageType(const SetDefaultMessageTypeRequest& request) const {
  return SetDefaultMessageTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetDefaultSenderIdOutcome PinpointSMSVoiceV2Client::SetDefaultSenderId(const SetDefaultSenderIdRequest& request) const {
  return SetDefaultSenderIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetMediaMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::SetMediaMessageSpendLimitOverride(
    const SetMediaMessageSpendLimitOverrideRequest& request) const {
  return SetMediaMessageSpendLimitOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetTextMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::SetTextMessageSpendLimitOverride(
    const SetTextMessageSpendLimitOverrideRequest& request) const {
  return SetTextMessageSpendLimitOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetVoiceMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::SetVoiceMessageSpendLimitOverride(
    const SetVoiceMessageSpendLimitOverrideRequest& request) const {
  return SetVoiceMessageSpendLimitOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SubmitRegistrationVersionOutcome PinpointSMSVoiceV2Client::SubmitRegistrationVersion(
    const SubmitRegistrationVersionRequest& request) const {
  return SubmitRegistrationVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome PinpointSMSVoiceV2Client::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PinpointSMSVoiceV2Client::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEventDestinationOutcome PinpointSMSVoiceV2Client::UpdateEventDestination(const UpdateEventDestinationRequest& request) const {
  return UpdateEventDestinationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePhoneNumberOutcome PinpointSMSVoiceV2Client::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const {
  return UpdatePhoneNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePoolOutcome PinpointSMSVoiceV2Client::UpdatePool(const UpdatePoolRequest& request) const {
  return UpdatePoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProtectConfigurationOutcome PinpointSMSVoiceV2Client::UpdateProtectConfiguration(
    const UpdateProtectConfigurationRequest& request) const {
  return UpdateProtectConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProtectConfigurationCountryRuleSetOutcome PinpointSMSVoiceV2Client::UpdateProtectConfigurationCountryRuleSet(
    const UpdateProtectConfigurationCountryRuleSetRequest& request) const {
  return UpdateProtectConfigurationCountryRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSenderIdOutcome PinpointSMSVoiceV2Client::UpdateSenderId(const UpdateSenderIdRequest& request) const {
  return UpdateSenderIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyDestinationNumberOutcome PinpointSMSVoiceV2Client::VerifyDestinationNumber(const VerifyDestinationNumberRequest& request) const {
  return VerifyDestinationNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
