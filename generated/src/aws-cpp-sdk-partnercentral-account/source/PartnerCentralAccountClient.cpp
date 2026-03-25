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
  return AcceptConnectionInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateAwsTrainingCertificationEmailDomainOutcome PartnerCentralAccountClient::AssociateAwsTrainingCertificationEmailDomain(
    const AssociateAwsTrainingCertificationEmailDomainRequest& request) const {
  return AssociateAwsTrainingCertificationEmailDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelConnectionOutcome PartnerCentralAccountClient::CancelConnection(const CancelConnectionRequest& request) const {
  return CancelConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelConnectionInvitationOutcome PartnerCentralAccountClient::CancelConnectionInvitation(
    const CancelConnectionInvitationRequest& request) const {
  return CancelConnectionInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelProfileUpdateTaskOutcome PartnerCentralAccountClient::CancelProfileUpdateTask(const CancelProfileUpdateTaskRequest& request) const {
  return CancelProfileUpdateTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectionInvitationOutcome PartnerCentralAccountClient::CreateConnectionInvitation(
    const CreateConnectionInvitationRequest& request) const {
  return CreateConnectionInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePartnerOutcome PartnerCentralAccountClient::CreatePartner(const CreatePartnerRequest& request) const {
  return CreatePartnerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateAwsTrainingCertificationEmailDomainOutcome PartnerCentralAccountClient::DisassociateAwsTrainingCertificationEmailDomain(
    const DisassociateAwsTrainingCertificationEmailDomainRequest& request) const {
  return DisassociateAwsTrainingCertificationEmailDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAllianceLeadContactOutcome PartnerCentralAccountClient::GetAllianceLeadContact(const GetAllianceLeadContactRequest& request) const {
  return GetAllianceLeadContactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetConnectionOutcome PartnerCentralAccountClient::GetConnection(const GetConnectionRequest& request) const {
  return GetConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetConnectionInvitationOutcome PartnerCentralAccountClient::GetConnectionInvitation(const GetConnectionInvitationRequest& request) const {
  return GetConnectionInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetConnectionPreferencesOutcome PartnerCentralAccountClient::GetConnectionPreferences(
    const GetConnectionPreferencesRequest& request) const {
  return GetConnectionPreferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPartnerOutcome PartnerCentralAccountClient::GetPartner(const GetPartnerRequest& request) const {
  return GetPartnerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetProfileUpdateTaskOutcome PartnerCentralAccountClient::GetProfileUpdateTask(const GetProfileUpdateTaskRequest& request) const {
  return GetProfileUpdateTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetProfileVisibilityOutcome PartnerCentralAccountClient::GetProfileVisibility(const GetProfileVisibilityRequest& request) const {
  return GetProfileVisibilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetVerificationOutcome PartnerCentralAccountClient::GetVerification(const GetVerificationRequest& request) const {
  return GetVerificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConnectionInvitationsOutcome PartnerCentralAccountClient::ListConnectionInvitations(
    const ListConnectionInvitationsRequest& request) const {
  return ListConnectionInvitationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConnectionsOutcome PartnerCentralAccountClient::ListConnections(const ListConnectionsRequest& request) const {
  return ListConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPartnersOutcome PartnerCentralAccountClient::ListPartners(const ListPartnersRequest& request) const {
  return ListPartnersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome PartnerCentralAccountClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAllianceLeadContactOutcome PartnerCentralAccountClient::PutAllianceLeadContact(const PutAllianceLeadContactRequest& request) const {
  return PutAllianceLeadContactOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutProfileVisibilityOutcome PartnerCentralAccountClient::PutProfileVisibility(const PutProfileVisibilityRequest& request) const {
  return PutProfileVisibilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectConnectionInvitationOutcome PartnerCentralAccountClient::RejectConnectionInvitation(
    const RejectConnectionInvitationRequest& request) const {
  return RejectConnectionInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendEmailVerificationCodeOutcome PartnerCentralAccountClient::SendEmailVerificationCode(
    const SendEmailVerificationCodeRequest& request) const {
  return SendEmailVerificationCodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartProfileUpdateTaskOutcome PartnerCentralAccountClient::StartProfileUpdateTask(const StartProfileUpdateTaskRequest& request) const {
  return StartProfileUpdateTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartVerificationOutcome PartnerCentralAccountClient::StartVerification(const StartVerificationRequest& request) const {
  return StartVerificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome PartnerCentralAccountClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PartnerCentralAccountClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConnectionPreferencesOutcome PartnerCentralAccountClient::UpdateConnectionPreferences(
    const UpdateConnectionPreferencesRequest& request) const {
  return UpdateConnectionPreferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
