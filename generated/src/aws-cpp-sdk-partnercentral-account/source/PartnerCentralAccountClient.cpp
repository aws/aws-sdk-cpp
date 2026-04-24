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
#include <aws/partnercentral-account/PartnerCentralAccountClient.h>
#include <aws/partnercentral-account/PartnerCentralAccountEndpointProvider.h>
#include <aws/partnercentral-account/PartnerCentralAccountErrorMarshaller.h>
#include <aws/partnercentral-account/model/AcceptConnectionInvitationRequest.h>
#include <aws/partnercentral-account/model/AssociateAwsTrainingCertificationEmailDomainRequest.h>
#include <aws/partnercentral-account/model/CancelConnectionInvitationRequest.h>
#include <aws/partnercentral-account/model/CancelConnectionRequest.h>
#include <aws/partnercentral-account/model/CancelProfileUpdateTaskRequest.h>
#include <aws/partnercentral-account/model/CreateConnectionInvitationRequest.h>
#include <aws/partnercentral-account/model/CreatePartnerRequest.h>
#include <aws/partnercentral-account/model/DisassociateAwsTrainingCertificationEmailDomainRequest.h>
#include <aws/partnercentral-account/model/GetAllianceLeadContactRequest.h>
#include <aws/partnercentral-account/model/GetConnectionInvitationRequest.h>
#include <aws/partnercentral-account/model/GetConnectionPreferencesRequest.h>
#include <aws/partnercentral-account/model/GetConnectionRequest.h>
#include <aws/partnercentral-account/model/GetPartnerRequest.h>
#include <aws/partnercentral-account/model/GetProfileUpdateTaskRequest.h>
#include <aws/partnercentral-account/model/GetProfileVisibilityRequest.h>
#include <aws/partnercentral-account/model/GetVerificationRequest.h>
#include <aws/partnercentral-account/model/ListConnectionInvitationsRequest.h>
#include <aws/partnercentral-account/model/ListConnectionsRequest.h>
#include <aws/partnercentral-account/model/ListPartnersRequest.h>
#include <aws/partnercentral-account/model/ListTagsForResourceRequest.h>
#include <aws/partnercentral-account/model/PutAllianceLeadContactRequest.h>
#include <aws/partnercentral-account/model/PutProfileVisibilityRequest.h>
#include <aws/partnercentral-account/model/RejectConnectionInvitationRequest.h>
#include <aws/partnercentral-account/model/SendEmailVerificationCodeRequest.h>
#include <aws/partnercentral-account/model/StartProfileUpdateTaskRequest.h>
#include <aws/partnercentral-account/model/StartVerificationRequest.h>
#include <aws/partnercentral-account/model/TagResourceRequest.h>
#include <aws/partnercentral-account/model/UntagResourceRequest.h>
#include <aws/partnercentral-account/model/UpdateConnectionPreferencesRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PartnerCentralAccount;
using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PartnerCentralAccount {
const char SERVICE_NAME[] = "partnercentral-account";
const char ALLOCATION_TAG[] = "PartnerCentralAccountClient";
}  // namespace PartnerCentralAccount
}  // namespace Aws
const char* PartnerCentralAccountClient::GetServiceName() { return SERVICE_NAME; }
const char* PartnerCentralAccountClient::GetAllocationTag() { return ALLOCATION_TAG; }

PartnerCentralAccountClient::PartnerCentralAccountClient(
    const PartnerCentralAccount::PartnerCentralAccountClientConfiguration& clientConfiguration,
    std::shared_ptr<PartnerCentralAccountEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralAccountErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralAccountEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralAccountClient::PartnerCentralAccountClient(
    const AWSCredentials& credentials, std::shared_ptr<PartnerCentralAccountEndpointProviderBase> endpointProvider,
    const PartnerCentralAccount::PartnerCentralAccountClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralAccountErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralAccountEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralAccountClient::PartnerCentralAccountClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<PartnerCentralAccountEndpointProviderBase> endpointProvider,
    const PartnerCentralAccount::PartnerCentralAccountClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralAccountErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralAccountEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PartnerCentralAccountClient::PartnerCentralAccountClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralAccountErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralAccountEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralAccountClient::PartnerCentralAccountClient(const AWSCredentials& credentials,
                                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralAccountErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralAccountEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralAccountClient::PartnerCentralAccountClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralAccountErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralAccountEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PartnerCentralAccountClient::~PartnerCentralAccountClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PartnerCentralAccountEndpointProviderBase>& PartnerCentralAccountClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void PartnerCentralAccountClient::init(const PartnerCentralAccount::PartnerCentralAccountClientConfiguration& config) {
  AWSClient::SetServiceClientName("PartnerCentral Account");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "partnercentral-account");
}

void PartnerCentralAccountClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PartnerCentralAccountClient::InvokeOperationOutcome PartnerCentralAccountClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

AcceptConnectionInvitationOutcome PartnerCentralAccountClient::AcceptConnectionInvitation(
    const AcceptConnectionInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptConnectionInvitationOutcome(result.GetResultWithOwnership())
                            : AcceptConnectionInvitationOutcome(std::move(result.GetError()));
}

AssociateAwsTrainingCertificationEmailDomainOutcome PartnerCentralAccountClient::AssociateAwsTrainingCertificationEmailDomain(
    const AssociateAwsTrainingCertificationEmailDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateAwsTrainingCertificationEmailDomainOutcome(result.GetResultWithOwnership())
                            : AssociateAwsTrainingCertificationEmailDomainOutcome(std::move(result.GetError()));
}

CancelConnectionOutcome PartnerCentralAccountClient::CancelConnection(const CancelConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelConnectionOutcome(result.GetResultWithOwnership())
                            : CancelConnectionOutcome(std::move(result.GetError()));
}

CancelConnectionInvitationOutcome PartnerCentralAccountClient::CancelConnectionInvitation(
    const CancelConnectionInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelConnectionInvitationOutcome(result.GetResultWithOwnership())
                            : CancelConnectionInvitationOutcome(std::move(result.GetError()));
}

CancelProfileUpdateTaskOutcome PartnerCentralAccountClient::CancelProfileUpdateTask(const CancelProfileUpdateTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelProfileUpdateTaskOutcome(result.GetResultWithOwnership())
                            : CancelProfileUpdateTaskOutcome(std::move(result.GetError()));
}

CreateConnectionInvitationOutcome PartnerCentralAccountClient::CreateConnectionInvitation(
    const CreateConnectionInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConnectionInvitationOutcome(result.GetResultWithOwnership())
                            : CreateConnectionInvitationOutcome(std::move(result.GetError()));
}

CreatePartnerOutcome PartnerCentralAccountClient::CreatePartner(const CreatePartnerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePartnerOutcome(result.GetResultWithOwnership()) : CreatePartnerOutcome(std::move(result.GetError()));
}

DisassociateAwsTrainingCertificationEmailDomainOutcome PartnerCentralAccountClient::DisassociateAwsTrainingCertificationEmailDomain(
    const DisassociateAwsTrainingCertificationEmailDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateAwsTrainingCertificationEmailDomainOutcome(result.GetResultWithOwnership())
                            : DisassociateAwsTrainingCertificationEmailDomainOutcome(std::move(result.GetError()));
}

GetAllianceLeadContactOutcome PartnerCentralAccountClient::GetAllianceLeadContact(const GetAllianceLeadContactRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAllianceLeadContactOutcome(result.GetResultWithOwnership())
                            : GetAllianceLeadContactOutcome(std::move(result.GetError()));
}

GetConnectionOutcome PartnerCentralAccountClient::GetConnection(const GetConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConnectionOutcome(result.GetResultWithOwnership()) : GetConnectionOutcome(std::move(result.GetError()));
}

GetConnectionInvitationOutcome PartnerCentralAccountClient::GetConnectionInvitation(const GetConnectionInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConnectionInvitationOutcome(result.GetResultWithOwnership())
                            : GetConnectionInvitationOutcome(std::move(result.GetError()));
}

GetConnectionPreferencesOutcome PartnerCentralAccountClient::GetConnectionPreferences(
    const GetConnectionPreferencesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConnectionPreferencesOutcome(result.GetResultWithOwnership())
                            : GetConnectionPreferencesOutcome(std::move(result.GetError()));
}

GetPartnerOutcome PartnerCentralAccountClient::GetPartner(const GetPartnerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPartnerOutcome(result.GetResultWithOwnership()) : GetPartnerOutcome(std::move(result.GetError()));
}

GetProfileUpdateTaskOutcome PartnerCentralAccountClient::GetProfileUpdateTask(const GetProfileUpdateTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetProfileUpdateTaskOutcome(result.GetResultWithOwnership())
                            : GetProfileUpdateTaskOutcome(std::move(result.GetError()));
}

GetProfileVisibilityOutcome PartnerCentralAccountClient::GetProfileVisibility(const GetProfileVisibilityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetProfileVisibilityOutcome(result.GetResultWithOwnership())
                            : GetProfileVisibilityOutcome(std::move(result.GetError()));
}

GetVerificationOutcome PartnerCentralAccountClient::GetVerification(const GetVerificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetVerificationOutcome(result.GetResultWithOwnership())
                            : GetVerificationOutcome(std::move(result.GetError()));
}

ListConnectionInvitationsOutcome PartnerCentralAccountClient::ListConnectionInvitations(
    const ListConnectionInvitationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConnectionInvitationsOutcome(result.GetResultWithOwnership())
                            : ListConnectionInvitationsOutcome(std::move(result.GetError()));
}

ListConnectionsOutcome PartnerCentralAccountClient::ListConnections(const ListConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConnectionsOutcome(result.GetResultWithOwnership())
                            : ListConnectionsOutcome(std::move(result.GetError()));
}

ListPartnersOutcome PartnerCentralAccountClient::ListPartners(const ListPartnersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPartnersOutcome(result.GetResultWithOwnership()) : ListPartnersOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome PartnerCentralAccountClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutAllianceLeadContactOutcome PartnerCentralAccountClient::PutAllianceLeadContact(const PutAllianceLeadContactRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutAllianceLeadContactOutcome(result.GetResultWithOwnership())
                            : PutAllianceLeadContactOutcome(std::move(result.GetError()));
}

PutProfileVisibilityOutcome PartnerCentralAccountClient::PutProfileVisibility(const PutProfileVisibilityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutProfileVisibilityOutcome(result.GetResultWithOwnership())
                            : PutProfileVisibilityOutcome(std::move(result.GetError()));
}

RejectConnectionInvitationOutcome PartnerCentralAccountClient::RejectConnectionInvitation(
    const RejectConnectionInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectConnectionInvitationOutcome(result.GetResultWithOwnership())
                            : RejectConnectionInvitationOutcome(std::move(result.GetError()));
}

SendEmailVerificationCodeOutcome PartnerCentralAccountClient::SendEmailVerificationCode(
    const SendEmailVerificationCodeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendEmailVerificationCodeOutcome(result.GetResultWithOwnership())
                            : SendEmailVerificationCodeOutcome(std::move(result.GetError()));
}

StartProfileUpdateTaskOutcome PartnerCentralAccountClient::StartProfileUpdateTask(const StartProfileUpdateTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartProfileUpdateTaskOutcome(result.GetResultWithOwnership())
                            : StartProfileUpdateTaskOutcome(std::move(result.GetError()));
}

StartVerificationOutcome PartnerCentralAccountClient::StartVerification(const StartVerificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartVerificationOutcome(result.GetResultWithOwnership())
                            : StartVerificationOutcome(std::move(result.GetError()));
}

TagResourceOutcome PartnerCentralAccountClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome PartnerCentralAccountClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateConnectionPreferencesOutcome PartnerCentralAccountClient::UpdateConnectionPreferences(
    const UpdateConnectionPreferencesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateConnectionPreferencesOutcome(result.GetResultWithOwnership())
                            : UpdateConnectionPreferencesOutcome(std::move(result.GetError()));
}
