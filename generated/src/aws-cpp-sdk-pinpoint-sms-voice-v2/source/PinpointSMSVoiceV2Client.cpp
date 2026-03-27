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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateOriginationIdentityOutcome(result.GetResultWithOwnership())
                            : AssociateOriginationIdentityOutcome(std::move(result.GetError()));
}

AssociateProtectConfigurationOutcome PinpointSMSVoiceV2Client::AssociateProtectConfiguration(
    const AssociateProtectConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateProtectConfigurationOutcome(result.GetResultWithOwnership())
                            : AssociateProtectConfigurationOutcome(std::move(result.GetError()));
}

CarrierLookupOutcome PinpointSMSVoiceV2Client::CarrierLookup(const CarrierLookupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CarrierLookupOutcome(result.GetResultWithOwnership()) : CarrierLookupOutcome(std::move(result.GetError()));
}

CreateConfigurationSetOutcome PinpointSMSVoiceV2Client::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfigurationSetOutcome(result.GetResultWithOwnership())
                            : CreateConfigurationSetOutcome(std::move(result.GetError()));
}

CreateEventDestinationOutcome PinpointSMSVoiceV2Client::CreateEventDestination(const CreateEventDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventDestinationOutcome(result.GetResultWithOwnership())
                            : CreateEventDestinationOutcome(std::move(result.GetError()));
}

CreateOptOutListOutcome PinpointSMSVoiceV2Client::CreateOptOutList(const CreateOptOutListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOptOutListOutcome(result.GetResultWithOwnership())
                            : CreateOptOutListOutcome(std::move(result.GetError()));
}

CreatePoolOutcome PinpointSMSVoiceV2Client::CreatePool(const CreatePoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePoolOutcome(result.GetResultWithOwnership()) : CreatePoolOutcome(std::move(result.GetError()));
}

CreateProtectConfigurationOutcome PinpointSMSVoiceV2Client::CreateProtectConfiguration(
    const CreateProtectConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProtectConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateProtectConfigurationOutcome(std::move(result.GetError()));
}

CreateRegistrationOutcome PinpointSMSVoiceV2Client::CreateRegistration(const CreateRegistrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRegistrationOutcome(result.GetResultWithOwnership())
                            : CreateRegistrationOutcome(std::move(result.GetError()));
}

CreateRegistrationAssociationOutcome PinpointSMSVoiceV2Client::CreateRegistrationAssociation(
    const CreateRegistrationAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRegistrationAssociationOutcome(result.GetResultWithOwnership())
                            : CreateRegistrationAssociationOutcome(std::move(result.GetError()));
}

CreateRegistrationAttachmentOutcome PinpointSMSVoiceV2Client::CreateRegistrationAttachment(
    const CreateRegistrationAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRegistrationAttachmentOutcome(result.GetResultWithOwnership())
                            : CreateRegistrationAttachmentOutcome(std::move(result.GetError()));
}

CreateRegistrationVersionOutcome PinpointSMSVoiceV2Client::CreateRegistrationVersion(
    const CreateRegistrationVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRegistrationVersionOutcome(result.GetResultWithOwnership())
                            : CreateRegistrationVersionOutcome(std::move(result.GetError()));
}

CreateVerifiedDestinationNumberOutcome PinpointSMSVoiceV2Client::CreateVerifiedDestinationNumber(
    const CreateVerifiedDestinationNumberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVerifiedDestinationNumberOutcome(result.GetResultWithOwnership())
                            : CreateVerifiedDestinationNumberOutcome(std::move(result.GetError()));
}

DeleteAccountDefaultProtectConfigurationOutcome PinpointSMSVoiceV2Client::DeleteAccountDefaultProtectConfiguration(
    const DeleteAccountDefaultProtectConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccountDefaultProtectConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteAccountDefaultProtectConfigurationOutcome(std::move(result.GetError()));
}

DeleteConfigurationSetOutcome PinpointSMSVoiceV2Client::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConfigurationSetOutcome(result.GetResultWithOwnership())
                            : DeleteConfigurationSetOutcome(std::move(result.GetError()));
}

DeleteDefaultMessageTypeOutcome PinpointSMSVoiceV2Client::DeleteDefaultMessageType(const DeleteDefaultMessageTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDefaultMessageTypeOutcome(result.GetResultWithOwnership())
                            : DeleteDefaultMessageTypeOutcome(std::move(result.GetError()));
}

DeleteDefaultSenderIdOutcome PinpointSMSVoiceV2Client::DeleteDefaultSenderId(const DeleteDefaultSenderIdRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDefaultSenderIdOutcome(result.GetResultWithOwnership())
                            : DeleteDefaultSenderIdOutcome(std::move(result.GetError()));
}

DeleteEventDestinationOutcome PinpointSMSVoiceV2Client::DeleteEventDestination(const DeleteEventDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventDestinationOutcome(result.GetResultWithOwnership())
                            : DeleteEventDestinationOutcome(std::move(result.GetError()));
}

DeleteKeywordOutcome PinpointSMSVoiceV2Client::DeleteKeyword(const DeleteKeywordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteKeywordOutcome(result.GetResultWithOwnership()) : DeleteKeywordOutcome(std::move(result.GetError()));
}

DeleteMediaMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::DeleteMediaMessageSpendLimitOverride(
    const DeleteMediaMessageSpendLimitOverrideRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMediaMessageSpendLimitOverrideOutcome(result.GetResultWithOwnership())
                            : DeleteMediaMessageSpendLimitOverrideOutcome(std::move(result.GetError()));
}

DeleteOptOutListOutcome PinpointSMSVoiceV2Client::DeleteOptOutList(const DeleteOptOutListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOptOutListOutcome(result.GetResultWithOwnership())
                            : DeleteOptOutListOutcome(std::move(result.GetError()));
}

DeleteOptedOutNumberOutcome PinpointSMSVoiceV2Client::DeleteOptedOutNumber(const DeleteOptedOutNumberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOptedOutNumberOutcome(result.GetResultWithOwnership())
                            : DeleteOptedOutNumberOutcome(std::move(result.GetError()));
}

DeletePoolOutcome PinpointSMSVoiceV2Client::DeletePool(const DeletePoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePoolOutcome(result.GetResultWithOwnership()) : DeletePoolOutcome(std::move(result.GetError()));
}

DeleteProtectConfigurationOutcome PinpointSMSVoiceV2Client::DeleteProtectConfiguration(
    const DeleteProtectConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProtectConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteProtectConfigurationOutcome(std::move(result.GetError()));
}

DeleteProtectConfigurationRuleSetNumberOverrideOutcome PinpointSMSVoiceV2Client::DeleteProtectConfigurationRuleSetNumberOverride(
    const DeleteProtectConfigurationRuleSetNumberOverrideRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProtectConfigurationRuleSetNumberOverrideOutcome(result.GetResultWithOwnership())
                            : DeleteProtectConfigurationRuleSetNumberOverrideOutcome(std::move(result.GetError()));
}

DeleteRegistrationOutcome PinpointSMSVoiceV2Client::DeleteRegistration(const DeleteRegistrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRegistrationOutcome(result.GetResultWithOwnership())
                            : DeleteRegistrationOutcome(std::move(result.GetError()));
}

DeleteRegistrationAttachmentOutcome PinpointSMSVoiceV2Client::DeleteRegistrationAttachment(
    const DeleteRegistrationAttachmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRegistrationAttachmentOutcome(result.GetResultWithOwnership())
                            : DeleteRegistrationAttachmentOutcome(std::move(result.GetError()));
}

DeleteRegistrationFieldValueOutcome PinpointSMSVoiceV2Client::DeleteRegistrationFieldValue(
    const DeleteRegistrationFieldValueRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRegistrationFieldValueOutcome(result.GetResultWithOwnership())
                            : DeleteRegistrationFieldValueOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome PinpointSMSVoiceV2Client::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteTextMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::DeleteTextMessageSpendLimitOverride(
    const DeleteTextMessageSpendLimitOverrideRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTextMessageSpendLimitOverrideOutcome(result.GetResultWithOwnership())
                            : DeleteTextMessageSpendLimitOverrideOutcome(std::move(result.GetError()));
}

DeleteVerifiedDestinationNumberOutcome PinpointSMSVoiceV2Client::DeleteVerifiedDestinationNumber(
    const DeleteVerifiedDestinationNumberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVerifiedDestinationNumberOutcome(result.GetResultWithOwnership())
                            : DeleteVerifiedDestinationNumberOutcome(std::move(result.GetError()));
}

DeleteVoiceMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::DeleteVoiceMessageSpendLimitOverride(
    const DeleteVoiceMessageSpendLimitOverrideRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVoiceMessageSpendLimitOverrideOutcome(result.GetResultWithOwnership())
                            : DeleteVoiceMessageSpendLimitOverrideOutcome(std::move(result.GetError()));
}

DescribeAccountAttributesOutcome PinpointSMSVoiceV2Client::DescribeAccountAttributes(
    const DescribeAccountAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeAccountAttributesOutcome(std::move(result.GetError()));
}

DescribeAccountLimitsOutcome PinpointSMSVoiceV2Client::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountLimitsOutcome(result.GetResultWithOwnership())
                            : DescribeAccountLimitsOutcome(std::move(result.GetError()));
}

DescribeConfigurationSetsOutcome PinpointSMSVoiceV2Client::DescribeConfigurationSets(
    const DescribeConfigurationSetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConfigurationSetsOutcome(result.GetResultWithOwnership())
                            : DescribeConfigurationSetsOutcome(std::move(result.GetError()));
}

DescribeKeywordsOutcome PinpointSMSVoiceV2Client::DescribeKeywords(const DescribeKeywordsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeKeywordsOutcome(result.GetResultWithOwnership())
                            : DescribeKeywordsOutcome(std::move(result.GetError()));
}

DescribeOptOutListsOutcome PinpointSMSVoiceV2Client::DescribeOptOutLists(const DescribeOptOutListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOptOutListsOutcome(result.GetResultWithOwnership())
                            : DescribeOptOutListsOutcome(std::move(result.GetError()));
}

DescribeOptedOutNumbersOutcome PinpointSMSVoiceV2Client::DescribeOptedOutNumbers(const DescribeOptedOutNumbersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOptedOutNumbersOutcome(result.GetResultWithOwnership())
                            : DescribeOptedOutNumbersOutcome(std::move(result.GetError()));
}

DescribePhoneNumbersOutcome PinpointSMSVoiceV2Client::DescribePhoneNumbers(const DescribePhoneNumbersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePhoneNumbersOutcome(result.GetResultWithOwnership())
                            : DescribePhoneNumbersOutcome(std::move(result.GetError()));
}

DescribePoolsOutcome PinpointSMSVoiceV2Client::DescribePools(const DescribePoolsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePoolsOutcome(result.GetResultWithOwnership()) : DescribePoolsOutcome(std::move(result.GetError()));
}

DescribeProtectConfigurationsOutcome PinpointSMSVoiceV2Client::DescribeProtectConfigurations(
    const DescribeProtectConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeProtectConfigurationsOutcome(result.GetResultWithOwnership())
                            : DescribeProtectConfigurationsOutcome(std::move(result.GetError()));
}

DescribeRegistrationAttachmentsOutcome PinpointSMSVoiceV2Client::DescribeRegistrationAttachments(
    const DescribeRegistrationAttachmentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRegistrationAttachmentsOutcome(result.GetResultWithOwnership())
                            : DescribeRegistrationAttachmentsOutcome(std::move(result.GetError()));
}

DescribeRegistrationFieldDefinitionsOutcome PinpointSMSVoiceV2Client::DescribeRegistrationFieldDefinitions(
    const DescribeRegistrationFieldDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRegistrationFieldDefinitionsOutcome(result.GetResultWithOwnership())
                            : DescribeRegistrationFieldDefinitionsOutcome(std::move(result.GetError()));
}

DescribeRegistrationFieldValuesOutcome PinpointSMSVoiceV2Client::DescribeRegistrationFieldValues(
    const DescribeRegistrationFieldValuesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRegistrationFieldValuesOutcome(result.GetResultWithOwnership())
                            : DescribeRegistrationFieldValuesOutcome(std::move(result.GetError()));
}

DescribeRegistrationSectionDefinitionsOutcome PinpointSMSVoiceV2Client::DescribeRegistrationSectionDefinitions(
    const DescribeRegistrationSectionDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRegistrationSectionDefinitionsOutcome(result.GetResultWithOwnership())
                            : DescribeRegistrationSectionDefinitionsOutcome(std::move(result.GetError()));
}

DescribeRegistrationTypeDefinitionsOutcome PinpointSMSVoiceV2Client::DescribeRegistrationTypeDefinitions(
    const DescribeRegistrationTypeDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRegistrationTypeDefinitionsOutcome(result.GetResultWithOwnership())
                            : DescribeRegistrationTypeDefinitionsOutcome(std::move(result.GetError()));
}

DescribeRegistrationVersionsOutcome PinpointSMSVoiceV2Client::DescribeRegistrationVersions(
    const DescribeRegistrationVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRegistrationVersionsOutcome(result.GetResultWithOwnership())
                            : DescribeRegistrationVersionsOutcome(std::move(result.GetError()));
}

DescribeRegistrationsOutcome PinpointSMSVoiceV2Client::DescribeRegistrations(const DescribeRegistrationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRegistrationsOutcome(result.GetResultWithOwnership())
                            : DescribeRegistrationsOutcome(std::move(result.GetError()));
}

DescribeSenderIdsOutcome PinpointSMSVoiceV2Client::DescribeSenderIds(const DescribeSenderIdsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSenderIdsOutcome(result.GetResultWithOwnership())
                            : DescribeSenderIdsOutcome(std::move(result.GetError()));
}

DescribeSpendLimitsOutcome PinpointSMSVoiceV2Client::DescribeSpendLimits(const DescribeSpendLimitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSpendLimitsOutcome(result.GetResultWithOwnership())
                            : DescribeSpendLimitsOutcome(std::move(result.GetError()));
}

DescribeVerifiedDestinationNumbersOutcome PinpointSMSVoiceV2Client::DescribeVerifiedDestinationNumbers(
    const DescribeVerifiedDestinationNumbersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVerifiedDestinationNumbersOutcome(result.GetResultWithOwnership())
                            : DescribeVerifiedDestinationNumbersOutcome(std::move(result.GetError()));
}

DisassociateOriginationIdentityOutcome PinpointSMSVoiceV2Client::DisassociateOriginationIdentity(
    const DisassociateOriginationIdentityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateOriginationIdentityOutcome(result.GetResultWithOwnership())
                            : DisassociateOriginationIdentityOutcome(std::move(result.GetError()));
}

DisassociateProtectConfigurationOutcome PinpointSMSVoiceV2Client::DisassociateProtectConfiguration(
    const DisassociateProtectConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateProtectConfigurationOutcome(result.GetResultWithOwnership())
                            : DisassociateProtectConfigurationOutcome(std::move(result.GetError()));
}

DiscardRegistrationVersionOutcome PinpointSMSVoiceV2Client::DiscardRegistrationVersion(
    const DiscardRegistrationVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DiscardRegistrationVersionOutcome(result.GetResultWithOwnership())
                            : DiscardRegistrationVersionOutcome(std::move(result.GetError()));
}

GetProtectConfigurationCountryRuleSetOutcome PinpointSMSVoiceV2Client::GetProtectConfigurationCountryRuleSet(
    const GetProtectConfigurationCountryRuleSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetProtectConfigurationCountryRuleSetOutcome(result.GetResultWithOwnership())
                            : GetProtectConfigurationCountryRuleSetOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome PinpointSMSVoiceV2Client::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

ListPoolOriginationIdentitiesOutcome PinpointSMSVoiceV2Client::ListPoolOriginationIdentities(
    const ListPoolOriginationIdentitiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPoolOriginationIdentitiesOutcome(result.GetResultWithOwnership())
                            : ListPoolOriginationIdentitiesOutcome(std::move(result.GetError()));
}

ListProtectConfigurationRuleSetNumberOverridesOutcome PinpointSMSVoiceV2Client::ListProtectConfigurationRuleSetNumberOverrides(
    const ListProtectConfigurationRuleSetNumberOverridesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProtectConfigurationRuleSetNumberOverridesOutcome(result.GetResultWithOwnership())
                            : ListProtectConfigurationRuleSetNumberOverridesOutcome(std::move(result.GetError()));
}

ListRegistrationAssociationsOutcome PinpointSMSVoiceV2Client::ListRegistrationAssociations(
    const ListRegistrationAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRegistrationAssociationsOutcome(result.GetResultWithOwnership())
                            : ListRegistrationAssociationsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome PinpointSMSVoiceV2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutKeywordOutcome PinpointSMSVoiceV2Client::PutKeyword(const PutKeywordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutKeywordOutcome(result.GetResultWithOwnership()) : PutKeywordOutcome(std::move(result.GetError()));
}

PutMessageFeedbackOutcome PinpointSMSVoiceV2Client::PutMessageFeedback(const PutMessageFeedbackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutMessageFeedbackOutcome(result.GetResultWithOwnership())
                            : PutMessageFeedbackOutcome(std::move(result.GetError()));
}

PutOptedOutNumberOutcome PinpointSMSVoiceV2Client::PutOptedOutNumber(const PutOptedOutNumberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutOptedOutNumberOutcome(result.GetResultWithOwnership())
                            : PutOptedOutNumberOutcome(std::move(result.GetError()));
}

PutProtectConfigurationRuleSetNumberOverrideOutcome PinpointSMSVoiceV2Client::PutProtectConfigurationRuleSetNumberOverride(
    const PutProtectConfigurationRuleSetNumberOverrideRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutProtectConfigurationRuleSetNumberOverrideOutcome(result.GetResultWithOwnership())
                            : PutProtectConfigurationRuleSetNumberOverrideOutcome(std::move(result.GetError()));
}

PutRegistrationFieldValueOutcome PinpointSMSVoiceV2Client::PutRegistrationFieldValue(
    const PutRegistrationFieldValueRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRegistrationFieldValueOutcome(result.GetResultWithOwnership())
                            : PutRegistrationFieldValueOutcome(std::move(result.GetError()));
}

PutResourcePolicyOutcome PinpointSMSVoiceV2Client::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

ReleasePhoneNumberOutcome PinpointSMSVoiceV2Client::ReleasePhoneNumber(const ReleasePhoneNumberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReleasePhoneNumberOutcome(result.GetResultWithOwnership())
                            : ReleasePhoneNumberOutcome(std::move(result.GetError()));
}

ReleaseSenderIdOutcome PinpointSMSVoiceV2Client::ReleaseSenderId(const ReleaseSenderIdRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReleaseSenderIdOutcome(result.GetResultWithOwnership())
                            : ReleaseSenderIdOutcome(std::move(result.GetError()));
}

RequestPhoneNumberOutcome PinpointSMSVoiceV2Client::RequestPhoneNumber(const RequestPhoneNumberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RequestPhoneNumberOutcome(result.GetResultWithOwnership())
                            : RequestPhoneNumberOutcome(std::move(result.GetError()));
}

RequestSenderIdOutcome PinpointSMSVoiceV2Client::RequestSenderId(const RequestSenderIdRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RequestSenderIdOutcome(result.GetResultWithOwnership())
                            : RequestSenderIdOutcome(std::move(result.GetError()));
}

SendDestinationNumberVerificationCodeOutcome PinpointSMSVoiceV2Client::SendDestinationNumberVerificationCode(
    const SendDestinationNumberVerificationCodeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendDestinationNumberVerificationCodeOutcome(result.GetResultWithOwnership())
                            : SendDestinationNumberVerificationCodeOutcome(std::move(result.GetError()));
}

SendMediaMessageOutcome PinpointSMSVoiceV2Client::SendMediaMessage(const SendMediaMessageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendMediaMessageOutcome(result.GetResultWithOwnership())
                            : SendMediaMessageOutcome(std::move(result.GetError()));
}

SendTextMessageOutcome PinpointSMSVoiceV2Client::SendTextMessage(const SendTextMessageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendTextMessageOutcome(result.GetResultWithOwnership())
                            : SendTextMessageOutcome(std::move(result.GetError()));
}

SendVoiceMessageOutcome PinpointSMSVoiceV2Client::SendVoiceMessage(const SendVoiceMessageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendVoiceMessageOutcome(result.GetResultWithOwnership())
                            : SendVoiceMessageOutcome(std::move(result.GetError()));
}

SetAccountDefaultProtectConfigurationOutcome PinpointSMSVoiceV2Client::SetAccountDefaultProtectConfiguration(
    const SetAccountDefaultProtectConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetAccountDefaultProtectConfigurationOutcome(result.GetResultWithOwnership())
                            : SetAccountDefaultProtectConfigurationOutcome(std::move(result.GetError()));
}

SetDefaultMessageFeedbackEnabledOutcome PinpointSMSVoiceV2Client::SetDefaultMessageFeedbackEnabled(
    const SetDefaultMessageFeedbackEnabledRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetDefaultMessageFeedbackEnabledOutcome(result.GetResultWithOwnership())
                            : SetDefaultMessageFeedbackEnabledOutcome(std::move(result.GetError()));
}

SetDefaultMessageTypeOutcome PinpointSMSVoiceV2Client::SetDefaultMessageType(const SetDefaultMessageTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetDefaultMessageTypeOutcome(result.GetResultWithOwnership())
                            : SetDefaultMessageTypeOutcome(std::move(result.GetError()));
}

SetDefaultSenderIdOutcome PinpointSMSVoiceV2Client::SetDefaultSenderId(const SetDefaultSenderIdRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetDefaultSenderIdOutcome(result.GetResultWithOwnership())
                            : SetDefaultSenderIdOutcome(std::move(result.GetError()));
}

SetMediaMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::SetMediaMessageSpendLimitOverride(
    const SetMediaMessageSpendLimitOverrideRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetMediaMessageSpendLimitOverrideOutcome(result.GetResultWithOwnership())
                            : SetMediaMessageSpendLimitOverrideOutcome(std::move(result.GetError()));
}

SetTextMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::SetTextMessageSpendLimitOverride(
    const SetTextMessageSpendLimitOverrideRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetTextMessageSpendLimitOverrideOutcome(result.GetResultWithOwnership())
                            : SetTextMessageSpendLimitOverrideOutcome(std::move(result.GetError()));
}

SetVoiceMessageSpendLimitOverrideOutcome PinpointSMSVoiceV2Client::SetVoiceMessageSpendLimitOverride(
    const SetVoiceMessageSpendLimitOverrideRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetVoiceMessageSpendLimitOverrideOutcome(result.GetResultWithOwnership())
                            : SetVoiceMessageSpendLimitOverrideOutcome(std::move(result.GetError()));
}

SubmitRegistrationVersionOutcome PinpointSMSVoiceV2Client::SubmitRegistrationVersion(
    const SubmitRegistrationVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SubmitRegistrationVersionOutcome(result.GetResultWithOwnership())
                            : SubmitRegistrationVersionOutcome(std::move(result.GetError()));
}

TagResourceOutcome PinpointSMSVoiceV2Client::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome PinpointSMSVoiceV2Client::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateEventDestinationOutcome PinpointSMSVoiceV2Client::UpdateEventDestination(const UpdateEventDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEventDestinationOutcome(result.GetResultWithOwnership())
                            : UpdateEventDestinationOutcome(std::move(result.GetError()));
}

UpdatePhoneNumberOutcome PinpointSMSVoiceV2Client::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePhoneNumberOutcome(result.GetResultWithOwnership())
                            : UpdatePhoneNumberOutcome(std::move(result.GetError()));
}

UpdatePoolOutcome PinpointSMSVoiceV2Client::UpdatePool(const UpdatePoolRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePoolOutcome(result.GetResultWithOwnership()) : UpdatePoolOutcome(std::move(result.GetError()));
}

UpdateProtectConfigurationOutcome PinpointSMSVoiceV2Client::UpdateProtectConfiguration(
    const UpdateProtectConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProtectConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateProtectConfigurationOutcome(std::move(result.GetError()));
}

UpdateProtectConfigurationCountryRuleSetOutcome PinpointSMSVoiceV2Client::UpdateProtectConfigurationCountryRuleSet(
    const UpdateProtectConfigurationCountryRuleSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProtectConfigurationCountryRuleSetOutcome(result.GetResultWithOwnership())
                            : UpdateProtectConfigurationCountryRuleSetOutcome(std::move(result.GetError()));
}

UpdateSenderIdOutcome PinpointSMSVoiceV2Client::UpdateSenderId(const UpdateSenderIdRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSenderIdOutcome(result.GetResultWithOwnership()) : UpdateSenderIdOutcome(std::move(result.GetError()));
}

VerifyDestinationNumberOutcome PinpointSMSVoiceV2Client::VerifyDestinationNumber(const VerifyDestinationNumberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? VerifyDestinationNumberOutcome(result.GetResultWithOwnership())
                            : VerifyDestinationNumberOutcome(std::move(result.GetError()));
}
