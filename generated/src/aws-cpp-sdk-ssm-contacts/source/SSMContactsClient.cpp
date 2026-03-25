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
#include <aws/ssm-contacts/SSMContactsClient.h>
#include <aws/ssm-contacts/SSMContactsEndpointProvider.h>
#include <aws/ssm-contacts/SSMContactsErrorMarshaller.h>
#include <aws/ssm-contacts/model/AcceptPageRequest.h>
#include <aws/ssm-contacts/model/ActivateContactChannelRequest.h>
#include <aws/ssm-contacts/model/CreateContactChannelRequest.h>
#include <aws/ssm-contacts/model/CreateContactRequest.h>
#include <aws/ssm-contacts/model/CreateRotationOverrideRequest.h>
#include <aws/ssm-contacts/model/CreateRotationRequest.h>
#include <aws/ssm-contacts/model/DeactivateContactChannelRequest.h>
#include <aws/ssm-contacts/model/DeleteContactChannelRequest.h>
#include <aws/ssm-contacts/model/DeleteContactRequest.h>
#include <aws/ssm-contacts/model/DeleteRotationOverrideRequest.h>
#include <aws/ssm-contacts/model/DeleteRotationRequest.h>
#include <aws/ssm-contacts/model/DescribeEngagementRequest.h>
#include <aws/ssm-contacts/model/DescribePageRequest.h>
#include <aws/ssm-contacts/model/GetContactChannelRequest.h>
#include <aws/ssm-contacts/model/GetContactPolicyRequest.h>
#include <aws/ssm-contacts/model/GetContactRequest.h>
#include <aws/ssm-contacts/model/GetRotationOverrideRequest.h>
#include <aws/ssm-contacts/model/GetRotationRequest.h>
#include <aws/ssm-contacts/model/ListContactChannelsRequest.h>
#include <aws/ssm-contacts/model/ListContactsRequest.h>
#include <aws/ssm-contacts/model/ListEngagementsRequest.h>
#include <aws/ssm-contacts/model/ListPageReceiptsRequest.h>
#include <aws/ssm-contacts/model/ListPageResolutionsRequest.h>
#include <aws/ssm-contacts/model/ListPagesByContactRequest.h>
#include <aws/ssm-contacts/model/ListPagesByEngagementRequest.h>
#include <aws/ssm-contacts/model/ListPreviewRotationShiftsRequest.h>
#include <aws/ssm-contacts/model/ListRotationOverridesRequest.h>
#include <aws/ssm-contacts/model/ListRotationShiftsRequest.h>
#include <aws/ssm-contacts/model/ListRotationsRequest.h>
#include <aws/ssm-contacts/model/ListTagsForResourceRequest.h>
#include <aws/ssm-contacts/model/PutContactPolicyRequest.h>
#include <aws/ssm-contacts/model/SendActivationCodeRequest.h>
#include <aws/ssm-contacts/model/StartEngagementRequest.h>
#include <aws/ssm-contacts/model/StopEngagementRequest.h>
#include <aws/ssm-contacts/model/TagResourceRequest.h>
#include <aws/ssm-contacts/model/UntagResourceRequest.h>
#include <aws/ssm-contacts/model/UpdateContactChannelRequest.h>
#include <aws/ssm-contacts/model/UpdateContactRequest.h>
#include <aws/ssm-contacts/model/UpdateRotationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSMContacts;
using namespace Aws::SSMContacts::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SSMContacts {
const char SERVICE_NAME[] = "ssm-contacts";
const char ALLOCATION_TAG[] = "SSMContactsClient";
}  // namespace SSMContacts
}  // namespace Aws
const char* SSMContactsClient::GetServiceName() { return SERVICE_NAME; }
const char* SSMContactsClient::GetAllocationTag() { return ALLOCATION_TAG; }

SSMContactsClient::SSMContactsClient(const SSMContacts::SSMContactsClientConfiguration& clientConfiguration,
                                     std::shared_ptr<SSMContactsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMContactsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMContactsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMContactsClient::SSMContactsClient(const AWSCredentials& credentials, std::shared_ptr<SSMContactsEndpointProviderBase> endpointProvider,
                                     const SSMContacts::SSMContactsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMContactsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMContactsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMContactsClient::SSMContactsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<SSMContactsEndpointProviderBase> endpointProvider,
                                     const SSMContacts::SSMContactsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMContactsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMContactsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SSMContactsClient::SSMContactsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMContactsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMContactsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMContactsClient::SSMContactsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMContactsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMContactsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMContactsClient::SSMContactsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMContactsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMContactsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SSMContactsClient::~SSMContactsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SSMContactsEndpointProviderBase>& SSMContactsClient::accessEndpointProvider() { return m_endpointProvider; }

void SSMContactsClient::init(const SSMContacts::SSMContactsClientConfiguration& config) {
  AWSClient::SetServiceClientName("SSM Contacts");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ssm-contacts");
}

void SSMContactsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SSMContactsClient::InvokeOperationOutcome SSMContactsClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AcceptPageOutcome SSMContactsClient::AcceptPage(const AcceptPageRequest& request) const {
  return AcceptPageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ActivateContactChannelOutcome SSMContactsClient::ActivateContactChannel(const ActivateContactChannelRequest& request) const {
  return ActivateContactChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContactOutcome SSMContactsClient::CreateContact(const CreateContactRequest& request) const {
  return CreateContactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContactChannelOutcome SSMContactsClient::CreateContactChannel(const CreateContactChannelRequest& request) const {
  return CreateContactChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRotationOutcome SSMContactsClient::CreateRotation(const CreateRotationRequest& request) const {
  return CreateRotationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRotationOverrideOutcome SSMContactsClient::CreateRotationOverride(const CreateRotationOverrideRequest& request) const {
  return CreateRotationOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeactivateContactChannelOutcome SSMContactsClient::DeactivateContactChannel(const DeactivateContactChannelRequest& request) const {
  return DeactivateContactChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteContactOutcome SSMContactsClient::DeleteContact(const DeleteContactRequest& request) const {
  return DeleteContactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteContactChannelOutcome SSMContactsClient::DeleteContactChannel(const DeleteContactChannelRequest& request) const {
  return DeleteContactChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRotationOutcome SSMContactsClient::DeleteRotation(const DeleteRotationRequest& request) const {
  return DeleteRotationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRotationOverrideOutcome SSMContactsClient::DeleteRotationOverride(const DeleteRotationOverrideRequest& request) const {
  return DeleteRotationOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEngagementOutcome SSMContactsClient::DescribeEngagement(const DescribeEngagementRequest& request) const {
  return DescribeEngagementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePageOutcome SSMContactsClient::DescribePage(const DescribePageRequest& request) const {
  return DescribePageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContactOutcome SSMContactsClient::GetContact(const GetContactRequest& request) const {
  return GetContactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContactChannelOutcome SSMContactsClient::GetContactChannel(const GetContactChannelRequest& request) const {
  return GetContactChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContactPolicyOutcome SSMContactsClient::GetContactPolicy(const GetContactPolicyRequest& request) const {
  return GetContactPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRotationOutcome SSMContactsClient::GetRotation(const GetRotationRequest& request) const {
  return GetRotationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRotationOverrideOutcome SSMContactsClient::GetRotationOverride(const GetRotationOverrideRequest& request) const {
  return GetRotationOverrideOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListContactChannelsOutcome SSMContactsClient::ListContactChannels(const ListContactChannelsRequest& request) const {
  return ListContactChannelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListContactsOutcome SSMContactsClient::ListContacts(const ListContactsRequest& request) const {
  return ListContactsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEngagementsOutcome SSMContactsClient::ListEngagements(const ListEngagementsRequest& request) const {
  return ListEngagementsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPageReceiptsOutcome SSMContactsClient::ListPageReceipts(const ListPageReceiptsRequest& request) const {
  return ListPageReceiptsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPageResolutionsOutcome SSMContactsClient::ListPageResolutions(const ListPageResolutionsRequest& request) const {
  return ListPageResolutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPagesByContactOutcome SSMContactsClient::ListPagesByContact(const ListPagesByContactRequest& request) const {
  return ListPagesByContactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPagesByEngagementOutcome SSMContactsClient::ListPagesByEngagement(const ListPagesByEngagementRequest& request) const {
  return ListPagesByEngagementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPreviewRotationShiftsOutcome SSMContactsClient::ListPreviewRotationShifts(const ListPreviewRotationShiftsRequest& request) const {
  return ListPreviewRotationShiftsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRotationOverridesOutcome SSMContactsClient::ListRotationOverrides(const ListRotationOverridesRequest& request) const {
  return ListRotationOverridesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRotationShiftsOutcome SSMContactsClient::ListRotationShifts(const ListRotationShiftsRequest& request) const {
  return ListRotationShiftsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRotationsOutcome SSMContactsClient::ListRotations(const ListRotationsRequest& request) const {
  return ListRotationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome SSMContactsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutContactPolicyOutcome SSMContactsClient::PutContactPolicy(const PutContactPolicyRequest& request) const {
  return PutContactPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendActivationCodeOutcome SSMContactsClient::SendActivationCode(const SendActivationCodeRequest& request) const {
  return SendActivationCodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartEngagementOutcome SSMContactsClient::StartEngagement(const StartEngagementRequest& request) const {
  return StartEngagementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopEngagementOutcome SSMContactsClient::StopEngagement(const StopEngagementRequest& request) const {
  return StopEngagementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SSMContactsClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SSMContactsClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateContactOutcome SSMContactsClient::UpdateContact(const UpdateContactRequest& request) const {
  return UpdateContactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateContactChannelOutcome SSMContactsClient::UpdateContactChannel(const UpdateContactChannelRequest& request) const {
  return UpdateContactChannelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRotationOutcome SSMContactsClient::UpdateRotation(const UpdateRotationRequest& request) const {
  return UpdateRotationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
