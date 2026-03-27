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
#include <aws/partnercentral-selling/PartnerCentralSellingClient.h>
#include <aws/partnercentral-selling/PartnerCentralSellingEndpointProvider.h>
#include <aws/partnercentral-selling/PartnerCentralSellingErrorMarshaller.h>
#include <aws/partnercentral-selling/model/AcceptEngagementInvitationRequest.h>
#include <aws/partnercentral-selling/model/AssignOpportunityRequest.h>
#include <aws/partnercentral-selling/model/AssociateOpportunityRequest.h>
#include <aws/partnercentral-selling/model/CreateEngagementContextRequest.h>
#include <aws/partnercentral-selling/model/CreateEngagementInvitationRequest.h>
#include <aws/partnercentral-selling/model/CreateEngagementRequest.h>
#include <aws/partnercentral-selling/model/CreateOpportunityRequest.h>
#include <aws/partnercentral-selling/model/CreateResourceSnapshotJobRequest.h>
#include <aws/partnercentral-selling/model/CreateResourceSnapshotRequest.h>
#include <aws/partnercentral-selling/model/DeleteResourceSnapshotJobRequest.h>
#include <aws/partnercentral-selling/model/DisassociateOpportunityRequest.h>
#include <aws/partnercentral-selling/model/GetAwsOpportunitySummaryRequest.h>
#include <aws/partnercentral-selling/model/GetEngagementInvitationRequest.h>
#include <aws/partnercentral-selling/model/GetEngagementRequest.h>
#include <aws/partnercentral-selling/model/GetOpportunityRequest.h>
#include <aws/partnercentral-selling/model/GetResourceSnapshotJobRequest.h>
#include <aws/partnercentral-selling/model/GetResourceSnapshotRequest.h>
#include <aws/partnercentral-selling/model/GetSellingSystemSettingsRequest.h>
#include <aws/partnercentral-selling/model/ListEngagementByAcceptingInvitationTasksRequest.h>
#include <aws/partnercentral-selling/model/ListEngagementFromOpportunityTasksRequest.h>
#include <aws/partnercentral-selling/model/ListEngagementInvitationsRequest.h>
#include <aws/partnercentral-selling/model/ListEngagementMembersRequest.h>
#include <aws/partnercentral-selling/model/ListEngagementResourceAssociationsRequest.h>
#include <aws/partnercentral-selling/model/ListEngagementsRequest.h>
#include <aws/partnercentral-selling/model/ListOpportunitiesRequest.h>
#include <aws/partnercentral-selling/model/ListOpportunityFromEngagementTasksRequest.h>
#include <aws/partnercentral-selling/model/ListResourceSnapshotJobsRequest.h>
#include <aws/partnercentral-selling/model/ListResourceSnapshotsRequest.h>
#include <aws/partnercentral-selling/model/ListSolutionsRequest.h>
#include <aws/partnercentral-selling/model/ListTagsForResourceRequest.h>
#include <aws/partnercentral-selling/model/PutSellingSystemSettingsRequest.h>
#include <aws/partnercentral-selling/model/RejectEngagementInvitationRequest.h>
#include <aws/partnercentral-selling/model/StartEngagementByAcceptingInvitationTaskRequest.h>
#include <aws/partnercentral-selling/model/StartEngagementFromOpportunityTaskRequest.h>
#include <aws/partnercentral-selling/model/StartOpportunityFromEngagementTaskRequest.h>
#include <aws/partnercentral-selling/model/StartResourceSnapshotJobRequest.h>
#include <aws/partnercentral-selling/model/StopResourceSnapshotJobRequest.h>
#include <aws/partnercentral-selling/model/SubmitOpportunityRequest.h>
#include <aws/partnercentral-selling/model/TagResourceRequest.h>
#include <aws/partnercentral-selling/model/UntagResourceRequest.h>
#include <aws/partnercentral-selling/model/UpdateEngagementContextRequest.h>
#include <aws/partnercentral-selling/model/UpdateOpportunityRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PartnerCentralSelling;
using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PartnerCentralSelling {
const char SERVICE_NAME[] = "partnercentral-selling";
const char ALLOCATION_TAG[] = "PartnerCentralSellingClient";
}  // namespace PartnerCentralSelling
}  // namespace Aws
const char* PartnerCentralSellingClient::GetServiceName() { return SERVICE_NAME; }
const char* PartnerCentralSellingClient::GetAllocationTag() { return ALLOCATION_TAG; }

PartnerCentralSellingClient::PartnerCentralSellingClient(
    const PartnerCentralSelling::PartnerCentralSellingClientConfiguration& clientConfiguration,
    std::shared_ptr<PartnerCentralSellingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralSellingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralSellingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralSellingClient::PartnerCentralSellingClient(
    const AWSCredentials& credentials, std::shared_ptr<PartnerCentralSellingEndpointProviderBase> endpointProvider,
    const PartnerCentralSelling::PartnerCentralSellingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralSellingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralSellingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralSellingClient::PartnerCentralSellingClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<PartnerCentralSellingEndpointProviderBase> endpointProvider,
    const PartnerCentralSelling::PartnerCentralSellingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralSellingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralSellingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PartnerCentralSellingClient::PartnerCentralSellingClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralSellingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralSellingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralSellingClient::PartnerCentralSellingClient(const AWSCredentials& credentials,
                                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralSellingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralSellingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralSellingClient::PartnerCentralSellingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralSellingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralSellingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PartnerCentralSellingClient::~PartnerCentralSellingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PartnerCentralSellingEndpointProviderBase>& PartnerCentralSellingClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void PartnerCentralSellingClient::init(const PartnerCentralSelling::PartnerCentralSellingClientConfiguration& config) {
  AWSClient::SetServiceClientName("PartnerCentral Selling");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "partnercentral-selling");
}

void PartnerCentralSellingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PartnerCentralSellingClient::InvokeOperationOutcome PartnerCentralSellingClient::InvokeServiceOperation(
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

AcceptEngagementInvitationOutcome PartnerCentralSellingClient::AcceptEngagementInvitation(
    const AcceptEngagementInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptEngagementInvitationOutcome(result.GetResultWithOwnership())
                            : AcceptEngagementInvitationOutcome(std::move(result.GetError()));
}

AssignOpportunityOutcome PartnerCentralSellingClient::AssignOpportunity(const AssignOpportunityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssignOpportunityOutcome(result.GetResultWithOwnership())
                            : AssignOpportunityOutcome(std::move(result.GetError()));
}

AssociateOpportunityOutcome PartnerCentralSellingClient::AssociateOpportunity(const AssociateOpportunityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateOpportunityOutcome(result.GetResultWithOwnership())
                            : AssociateOpportunityOutcome(std::move(result.GetError()));
}

CreateEngagementOutcome PartnerCentralSellingClient::CreateEngagement(const CreateEngagementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEngagementOutcome(result.GetResultWithOwnership())
                            : CreateEngagementOutcome(std::move(result.GetError()));
}

CreateEngagementContextOutcome PartnerCentralSellingClient::CreateEngagementContext(const CreateEngagementContextRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEngagementContextOutcome(result.GetResultWithOwnership())
                            : CreateEngagementContextOutcome(std::move(result.GetError()));
}

CreateEngagementInvitationOutcome PartnerCentralSellingClient::CreateEngagementInvitation(
    const CreateEngagementInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEngagementInvitationOutcome(result.GetResultWithOwnership())
                            : CreateEngagementInvitationOutcome(std::move(result.GetError()));
}

CreateOpportunityOutcome PartnerCentralSellingClient::CreateOpportunity(const CreateOpportunityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOpportunityOutcome(result.GetResultWithOwnership())
                            : CreateOpportunityOutcome(std::move(result.GetError()));
}

CreateResourceSnapshotOutcome PartnerCentralSellingClient::CreateResourceSnapshot(const CreateResourceSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateResourceSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateResourceSnapshotOutcome(std::move(result.GetError()));
}

CreateResourceSnapshotJobOutcome PartnerCentralSellingClient::CreateResourceSnapshotJob(
    const CreateResourceSnapshotJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateResourceSnapshotJobOutcome(result.GetResultWithOwnership())
                            : CreateResourceSnapshotJobOutcome(std::move(result.GetError()));
}

DeleteResourceSnapshotJobOutcome PartnerCentralSellingClient::DeleteResourceSnapshotJob(
    const DeleteResourceSnapshotJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourceSnapshotJobOutcome(result.GetResultWithOwnership())
                            : DeleteResourceSnapshotJobOutcome(std::move(result.GetError()));
}

DisassociateOpportunityOutcome PartnerCentralSellingClient::DisassociateOpportunity(const DisassociateOpportunityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateOpportunityOutcome(result.GetResultWithOwnership())
                            : DisassociateOpportunityOutcome(std::move(result.GetError()));
}

GetAwsOpportunitySummaryOutcome PartnerCentralSellingClient::GetAwsOpportunitySummary(
    const GetAwsOpportunitySummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAwsOpportunitySummaryOutcome(result.GetResultWithOwnership())
                            : GetAwsOpportunitySummaryOutcome(std::move(result.GetError()));
}

GetEngagementOutcome PartnerCentralSellingClient::GetEngagement(const GetEngagementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEngagementOutcome(result.GetResultWithOwnership()) : GetEngagementOutcome(std::move(result.GetError()));
}

GetEngagementInvitationOutcome PartnerCentralSellingClient::GetEngagementInvitation(const GetEngagementInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEngagementInvitationOutcome(result.GetResultWithOwnership())
                            : GetEngagementInvitationOutcome(std::move(result.GetError()));
}

GetOpportunityOutcome PartnerCentralSellingClient::GetOpportunity(const GetOpportunityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOpportunityOutcome(result.GetResultWithOwnership()) : GetOpportunityOutcome(std::move(result.GetError()));
}

GetResourceSnapshotOutcome PartnerCentralSellingClient::GetResourceSnapshot(const GetResourceSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceSnapshotOutcome(result.GetResultWithOwnership())
                            : GetResourceSnapshotOutcome(std::move(result.GetError()));
}

GetResourceSnapshotJobOutcome PartnerCentralSellingClient::GetResourceSnapshotJob(const GetResourceSnapshotJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceSnapshotJobOutcome(result.GetResultWithOwnership())
                            : GetResourceSnapshotJobOutcome(std::move(result.GetError()));
}

GetSellingSystemSettingsOutcome PartnerCentralSellingClient::GetSellingSystemSettings(
    const GetSellingSystemSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSellingSystemSettingsOutcome(result.GetResultWithOwnership())
                            : GetSellingSystemSettingsOutcome(std::move(result.GetError()));
}

ListEngagementByAcceptingInvitationTasksOutcome PartnerCentralSellingClient::ListEngagementByAcceptingInvitationTasks(
    const ListEngagementByAcceptingInvitationTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEngagementByAcceptingInvitationTasksOutcome(result.GetResultWithOwnership())
                            : ListEngagementByAcceptingInvitationTasksOutcome(std::move(result.GetError()));
}

ListEngagementFromOpportunityTasksOutcome PartnerCentralSellingClient::ListEngagementFromOpportunityTasks(
    const ListEngagementFromOpportunityTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEngagementFromOpportunityTasksOutcome(result.GetResultWithOwnership())
                            : ListEngagementFromOpportunityTasksOutcome(std::move(result.GetError()));
}

ListEngagementInvitationsOutcome PartnerCentralSellingClient::ListEngagementInvitations(
    const ListEngagementInvitationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEngagementInvitationsOutcome(result.GetResultWithOwnership())
                            : ListEngagementInvitationsOutcome(std::move(result.GetError()));
}

ListEngagementMembersOutcome PartnerCentralSellingClient::ListEngagementMembers(const ListEngagementMembersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEngagementMembersOutcome(result.GetResultWithOwnership())
                            : ListEngagementMembersOutcome(std::move(result.GetError()));
}

ListEngagementResourceAssociationsOutcome PartnerCentralSellingClient::ListEngagementResourceAssociations(
    const ListEngagementResourceAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEngagementResourceAssociationsOutcome(result.GetResultWithOwnership())
                            : ListEngagementResourceAssociationsOutcome(std::move(result.GetError()));
}

ListEngagementsOutcome PartnerCentralSellingClient::ListEngagements(const ListEngagementsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEngagementsOutcome(result.GetResultWithOwnership())
                            : ListEngagementsOutcome(std::move(result.GetError()));
}

ListOpportunitiesOutcome PartnerCentralSellingClient::ListOpportunities(const ListOpportunitiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOpportunitiesOutcome(result.GetResultWithOwnership())
                            : ListOpportunitiesOutcome(std::move(result.GetError()));
}

ListOpportunityFromEngagementTasksOutcome PartnerCentralSellingClient::ListOpportunityFromEngagementTasks(
    const ListOpportunityFromEngagementTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOpportunityFromEngagementTasksOutcome(result.GetResultWithOwnership())
                            : ListOpportunityFromEngagementTasksOutcome(std::move(result.GetError()));
}

ListResourceSnapshotJobsOutcome PartnerCentralSellingClient::ListResourceSnapshotJobs(
    const ListResourceSnapshotJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceSnapshotJobsOutcome(result.GetResultWithOwnership())
                            : ListResourceSnapshotJobsOutcome(std::move(result.GetError()));
}

ListResourceSnapshotsOutcome PartnerCentralSellingClient::ListResourceSnapshots(const ListResourceSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceSnapshotsOutcome(result.GetResultWithOwnership())
                            : ListResourceSnapshotsOutcome(std::move(result.GetError()));
}

ListSolutionsOutcome PartnerCentralSellingClient::ListSolutions(const ListSolutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSolutionsOutcome(result.GetResultWithOwnership()) : ListSolutionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome PartnerCentralSellingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutSellingSystemSettingsOutcome PartnerCentralSellingClient::PutSellingSystemSettings(
    const PutSellingSystemSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutSellingSystemSettingsOutcome(result.GetResultWithOwnership())
                            : PutSellingSystemSettingsOutcome(std::move(result.GetError()));
}

RejectEngagementInvitationOutcome PartnerCentralSellingClient::RejectEngagementInvitation(
    const RejectEngagementInvitationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectEngagementInvitationOutcome(result.GetResultWithOwnership())
                            : RejectEngagementInvitationOutcome(std::move(result.GetError()));
}

StartEngagementByAcceptingInvitationTaskOutcome PartnerCentralSellingClient::StartEngagementByAcceptingInvitationTask(
    const StartEngagementByAcceptingInvitationTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartEngagementByAcceptingInvitationTaskOutcome(result.GetResultWithOwnership())
                            : StartEngagementByAcceptingInvitationTaskOutcome(std::move(result.GetError()));
}

StartEngagementFromOpportunityTaskOutcome PartnerCentralSellingClient::StartEngagementFromOpportunityTask(
    const StartEngagementFromOpportunityTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartEngagementFromOpportunityTaskOutcome(result.GetResultWithOwnership())
                            : StartEngagementFromOpportunityTaskOutcome(std::move(result.GetError()));
}

StartOpportunityFromEngagementTaskOutcome PartnerCentralSellingClient::StartOpportunityFromEngagementTask(
    const StartOpportunityFromEngagementTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartOpportunityFromEngagementTaskOutcome(result.GetResultWithOwnership())
                            : StartOpportunityFromEngagementTaskOutcome(std::move(result.GetError()));
}

StartResourceSnapshotJobOutcome PartnerCentralSellingClient::StartResourceSnapshotJob(
    const StartResourceSnapshotJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartResourceSnapshotJobOutcome(result.GetResultWithOwnership())
                            : StartResourceSnapshotJobOutcome(std::move(result.GetError()));
}

StopResourceSnapshotJobOutcome PartnerCentralSellingClient::StopResourceSnapshotJob(const StopResourceSnapshotJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopResourceSnapshotJobOutcome(result.GetResultWithOwnership())
                            : StopResourceSnapshotJobOutcome(std::move(result.GetError()));
}

SubmitOpportunityOutcome PartnerCentralSellingClient::SubmitOpportunity(const SubmitOpportunityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SubmitOpportunityOutcome(result.GetResultWithOwnership())
                            : SubmitOpportunityOutcome(std::move(result.GetError()));
}

TagResourceOutcome PartnerCentralSellingClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome PartnerCentralSellingClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateEngagementContextOutcome PartnerCentralSellingClient::UpdateEngagementContext(const UpdateEngagementContextRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEngagementContextOutcome(result.GetResultWithOwnership())
                            : UpdateEngagementContextOutcome(std::move(result.GetError()));
}

UpdateOpportunityOutcome PartnerCentralSellingClient::UpdateOpportunity(const UpdateOpportunityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateOpportunityOutcome(result.GetResultWithOwnership())
                            : UpdateOpportunityOutcome(std::move(result.GetError()));
}
