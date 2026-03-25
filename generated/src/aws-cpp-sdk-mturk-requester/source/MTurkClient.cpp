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
#include <aws/mturk-requester/MTurkClient.h>
#include <aws/mturk-requester/MTurkEndpointProvider.h>
#include <aws/mturk-requester/MTurkErrorMarshaller.h>
#include <aws/mturk-requester/model/AcceptQualificationRequestRequest.h>
#include <aws/mturk-requester/model/ApproveAssignmentRequest.h>
#include <aws/mturk-requester/model/AssociateQualificationWithWorkerRequest.h>
#include <aws/mturk-requester/model/CreateAdditionalAssignmentsForHITRequest.h>
#include <aws/mturk-requester/model/CreateHITRequest.h>
#include <aws/mturk-requester/model/CreateHITTypeRequest.h>
#include <aws/mturk-requester/model/CreateHITWithHITTypeRequest.h>
#include <aws/mturk-requester/model/CreateQualificationTypeRequest.h>
#include <aws/mturk-requester/model/CreateWorkerBlockRequest.h>
#include <aws/mturk-requester/model/DeleteHITRequest.h>
#include <aws/mturk-requester/model/DeleteQualificationTypeRequest.h>
#include <aws/mturk-requester/model/DeleteWorkerBlockRequest.h>
#include <aws/mturk-requester/model/DisassociateQualificationFromWorkerRequest.h>
#include <aws/mturk-requester/model/GetAccountBalanceRequest.h>
#include <aws/mturk-requester/model/GetAssignmentRequest.h>
#include <aws/mturk-requester/model/GetFileUploadURLRequest.h>
#include <aws/mturk-requester/model/GetHITRequest.h>
#include <aws/mturk-requester/model/GetQualificationScoreRequest.h>
#include <aws/mturk-requester/model/GetQualificationTypeRequest.h>
#include <aws/mturk-requester/model/ListAssignmentsForHITRequest.h>
#include <aws/mturk-requester/model/ListBonusPaymentsRequest.h>
#include <aws/mturk-requester/model/ListHITsForQualificationTypeRequest.h>
#include <aws/mturk-requester/model/ListHITsRequest.h>
#include <aws/mturk-requester/model/ListQualificationRequestsRequest.h>
#include <aws/mturk-requester/model/ListQualificationTypesRequest.h>
#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITRequest.h>
#include <aws/mturk-requester/model/ListReviewableHITsRequest.h>
#include <aws/mturk-requester/model/ListWorkerBlocksRequest.h>
#include <aws/mturk-requester/model/ListWorkersWithQualificationTypeRequest.h>
#include <aws/mturk-requester/model/NotifyWorkersRequest.h>
#include <aws/mturk-requester/model/RejectAssignmentRequest.h>
#include <aws/mturk-requester/model/RejectQualificationRequestRequest.h>
#include <aws/mturk-requester/model/SendBonusRequest.h>
#include <aws/mturk-requester/model/SendTestEventNotificationRequest.h>
#include <aws/mturk-requester/model/UpdateExpirationForHITRequest.h>
#include <aws/mturk-requester/model/UpdateHITReviewStatusRequest.h>
#include <aws/mturk-requester/model/UpdateHITTypeOfHITRequest.h>
#include <aws/mturk-requester/model/UpdateNotificationSettingsRequest.h>
#include <aws/mturk-requester/model/UpdateQualificationTypeRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MTurk;
using namespace Aws::MTurk::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MTurk {
const char SERVICE_NAME[] = "mturk-requester";
const char ALLOCATION_TAG[] = "MTurkClient";
}  // namespace MTurk
}  // namespace Aws
const char* MTurkClient::GetServiceName() { return SERVICE_NAME; }
const char* MTurkClient::GetAllocationTag() { return ALLOCATION_TAG; }

MTurkClient::MTurkClient(const MTurk::MTurkClientConfiguration& clientConfiguration,
                         std::shared_ptr<MTurkEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MTurkEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MTurkClient::MTurkClient(const AWSCredentials& credentials, std::shared_ptr<MTurkEndpointProviderBase> endpointProvider,
                         const MTurk::MTurkClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MTurkEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MTurkClient::MTurkClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<MTurkEndpointProviderBase> endpointProvider,
                         const MTurk::MTurkClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MTurkEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MTurkClient::MTurkClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MTurkEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MTurkClient::MTurkClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MTurkEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MTurkClient::MTurkClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MTurkErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MTurkEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MTurkClient::~MTurkClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MTurkEndpointProviderBase>& MTurkClient::accessEndpointProvider() { return m_endpointProvider; }

void MTurkClient::init(const MTurk::MTurkClientConfiguration& config) {
  AWSClient::SetServiceClientName("MTurk");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mturk-requester");
}

void MTurkClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MTurkClient::InvokeOperationOutcome MTurkClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AcceptQualificationRequestOutcome MTurkClient::AcceptQualificationRequest(const AcceptQualificationRequestRequest& request) const {
  return AcceptQualificationRequestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ApproveAssignmentOutcome MTurkClient::ApproveAssignment(const ApproveAssignmentRequest& request) const {
  return ApproveAssignmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateQualificationWithWorkerOutcome MTurkClient::AssociateQualificationWithWorker(
    const AssociateQualificationWithWorkerRequest& request) const {
  return AssociateQualificationWithWorkerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAdditionalAssignmentsForHITOutcome MTurkClient::CreateAdditionalAssignmentsForHIT(
    const CreateAdditionalAssignmentsForHITRequest& request) const {
  return CreateAdditionalAssignmentsForHITOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHITOutcome MTurkClient::CreateHIT(const CreateHITRequest& request) const {
  return CreateHITOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHITTypeOutcome MTurkClient::CreateHITType(const CreateHITTypeRequest& request) const {
  return CreateHITTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHITWithHITTypeOutcome MTurkClient::CreateHITWithHITType(const CreateHITWithHITTypeRequest& request) const {
  return CreateHITWithHITTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateQualificationTypeOutcome MTurkClient::CreateQualificationType(const CreateQualificationTypeRequest& request) const {
  return CreateQualificationTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkerBlockOutcome MTurkClient::CreateWorkerBlock(const CreateWorkerBlockRequest& request) const {
  return CreateWorkerBlockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteHITOutcome MTurkClient::DeleteHIT(const DeleteHITRequest& request) const {
  return DeleteHITOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteQualificationTypeOutcome MTurkClient::DeleteQualificationType(const DeleteQualificationTypeRequest& request) const {
  return DeleteQualificationTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkerBlockOutcome MTurkClient::DeleteWorkerBlock(const DeleteWorkerBlockRequest& request) const {
  return DeleteWorkerBlockOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateQualificationFromWorkerOutcome MTurkClient::DisassociateQualificationFromWorker(
    const DisassociateQualificationFromWorkerRequest& request) const {
  return DisassociateQualificationFromWorkerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountBalanceOutcome MTurkClient::GetAccountBalance(const GetAccountBalanceRequest& request) const {
  return GetAccountBalanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAssignmentOutcome MTurkClient::GetAssignment(const GetAssignmentRequest& request) const {
  return GetAssignmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFileUploadURLOutcome MTurkClient::GetFileUploadURL(const GetFileUploadURLRequest& request) const {
  return GetFileUploadURLOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetHITOutcome MTurkClient::GetHIT(const GetHITRequest& request) const {
  return GetHITOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQualificationScoreOutcome MTurkClient::GetQualificationScore(const GetQualificationScoreRequest& request) const {
  return GetQualificationScoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQualificationTypeOutcome MTurkClient::GetQualificationType(const GetQualificationTypeRequest& request) const {
  return GetQualificationTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssignmentsForHITOutcome MTurkClient::ListAssignmentsForHIT(const ListAssignmentsForHITRequest& request) const {
  return ListAssignmentsForHITOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBonusPaymentsOutcome MTurkClient::ListBonusPayments(const ListBonusPaymentsRequest& request) const {
  return ListBonusPaymentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHITsOutcome MTurkClient::ListHITs(const ListHITsRequest& request) const {
  return ListHITsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListHITsForQualificationTypeOutcome MTurkClient::ListHITsForQualificationType(const ListHITsForQualificationTypeRequest& request) const {
  return ListHITsForQualificationTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListQualificationRequestsOutcome MTurkClient::ListQualificationRequests(const ListQualificationRequestsRequest& request) const {
  return ListQualificationRequestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListQualificationTypesOutcome MTurkClient::ListQualificationTypes(const ListQualificationTypesRequest& request) const {
  return ListQualificationTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReviewPolicyResultsForHITOutcome MTurkClient::ListReviewPolicyResultsForHIT(const ListReviewPolicyResultsForHITRequest& request) const {
  return ListReviewPolicyResultsForHITOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListReviewableHITsOutcome MTurkClient::ListReviewableHITs(const ListReviewableHITsRequest& request) const {
  return ListReviewableHITsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkerBlocksOutcome MTurkClient::ListWorkerBlocks(const ListWorkerBlocksRequest& request) const {
  return ListWorkerBlocksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkersWithQualificationTypeOutcome MTurkClient::ListWorkersWithQualificationType(
    const ListWorkersWithQualificationTypeRequest& request) const {
  return ListWorkersWithQualificationTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

NotifyWorkersOutcome MTurkClient::NotifyWorkers(const NotifyWorkersRequest& request) const {
  return NotifyWorkersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectAssignmentOutcome MTurkClient::RejectAssignment(const RejectAssignmentRequest& request) const {
  return RejectAssignmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectQualificationRequestOutcome MTurkClient::RejectQualificationRequest(const RejectQualificationRequestRequest& request) const {
  return RejectQualificationRequestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendBonusOutcome MTurkClient::SendBonus(const SendBonusRequest& request) const {
  return SendBonusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendTestEventNotificationOutcome MTurkClient::SendTestEventNotification(const SendTestEventNotificationRequest& request) const {
  return SendTestEventNotificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateExpirationForHITOutcome MTurkClient::UpdateExpirationForHIT(const UpdateExpirationForHITRequest& request) const {
  return UpdateExpirationForHITOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateHITReviewStatusOutcome MTurkClient::UpdateHITReviewStatus(const UpdateHITReviewStatusRequest& request) const {
  return UpdateHITReviewStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateHITTypeOfHITOutcome MTurkClient::UpdateHITTypeOfHIT(const UpdateHITTypeOfHITRequest& request) const {
  return UpdateHITTypeOfHITOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNotificationSettingsOutcome MTurkClient::UpdateNotificationSettings(const UpdateNotificationSettingsRequest& request) const {
  return UpdateNotificationSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateQualificationTypeOutcome MTurkClient::UpdateQualificationType(const UpdateQualificationTypeRequest& request) const {
  return UpdateQualificationTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
