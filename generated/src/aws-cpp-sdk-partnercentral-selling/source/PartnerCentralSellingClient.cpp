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
  return AcceptEngagementInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssignOpportunityOutcome PartnerCentralSellingClient::AssignOpportunity(const AssignOpportunityRequest& request) const {
  return AssignOpportunityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateOpportunityOutcome PartnerCentralSellingClient::AssociateOpportunity(const AssociateOpportunityRequest& request) const {
  return AssociateOpportunityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEngagementOutcome PartnerCentralSellingClient::CreateEngagement(const CreateEngagementRequest& request) const {
  return CreateEngagementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEngagementContextOutcome PartnerCentralSellingClient::CreateEngagementContext(const CreateEngagementContextRequest& request) const {
  return CreateEngagementContextOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEngagementInvitationOutcome PartnerCentralSellingClient::CreateEngagementInvitation(
    const CreateEngagementInvitationRequest& request) const {
  return CreateEngagementInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOpportunityOutcome PartnerCentralSellingClient::CreateOpportunity(const CreateOpportunityRequest& request) const {
  return CreateOpportunityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceSnapshotOutcome PartnerCentralSellingClient::CreateResourceSnapshot(const CreateResourceSnapshotRequest& request) const {
  return CreateResourceSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceSnapshotJobOutcome PartnerCentralSellingClient::CreateResourceSnapshotJob(
    const CreateResourceSnapshotJobRequest& request) const {
  return CreateResourceSnapshotJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourceSnapshotJobOutcome PartnerCentralSellingClient::DeleteResourceSnapshotJob(
    const DeleteResourceSnapshotJobRequest& request) const {
  return DeleteResourceSnapshotJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateOpportunityOutcome PartnerCentralSellingClient::DisassociateOpportunity(const DisassociateOpportunityRequest& request) const {
  return DisassociateOpportunityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAwsOpportunitySummaryOutcome PartnerCentralSellingClient::GetAwsOpportunitySummary(
    const GetAwsOpportunitySummaryRequest& request) const {
  return GetAwsOpportunitySummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEngagementOutcome PartnerCentralSellingClient::GetEngagement(const GetEngagementRequest& request) const {
  return GetEngagementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEngagementInvitationOutcome PartnerCentralSellingClient::GetEngagementInvitation(const GetEngagementInvitationRequest& request) const {
  return GetEngagementInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOpportunityOutcome PartnerCentralSellingClient::GetOpportunity(const GetOpportunityRequest& request) const {
  return GetOpportunityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourceSnapshotOutcome PartnerCentralSellingClient::GetResourceSnapshot(const GetResourceSnapshotRequest& request) const {
  return GetResourceSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourceSnapshotJobOutcome PartnerCentralSellingClient::GetResourceSnapshotJob(const GetResourceSnapshotJobRequest& request) const {
  return GetResourceSnapshotJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSellingSystemSettingsOutcome PartnerCentralSellingClient::GetSellingSystemSettings(
    const GetSellingSystemSettingsRequest& request) const {
  return GetSellingSystemSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEngagementByAcceptingInvitationTasksOutcome PartnerCentralSellingClient::ListEngagementByAcceptingInvitationTasks(
    const ListEngagementByAcceptingInvitationTasksRequest& request) const {
  return ListEngagementByAcceptingInvitationTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEngagementFromOpportunityTasksOutcome PartnerCentralSellingClient::ListEngagementFromOpportunityTasks(
    const ListEngagementFromOpportunityTasksRequest& request) const {
  return ListEngagementFromOpportunityTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEngagementInvitationsOutcome PartnerCentralSellingClient::ListEngagementInvitations(
    const ListEngagementInvitationsRequest& request) const {
  return ListEngagementInvitationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEngagementMembersOutcome PartnerCentralSellingClient::ListEngagementMembers(const ListEngagementMembersRequest& request) const {
  return ListEngagementMembersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEngagementResourceAssociationsOutcome PartnerCentralSellingClient::ListEngagementResourceAssociations(
    const ListEngagementResourceAssociationsRequest& request) const {
  return ListEngagementResourceAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEngagementsOutcome PartnerCentralSellingClient::ListEngagements(const ListEngagementsRequest& request) const {
  return ListEngagementsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOpportunitiesOutcome PartnerCentralSellingClient::ListOpportunities(const ListOpportunitiesRequest& request) const {
  return ListOpportunitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOpportunityFromEngagementTasksOutcome PartnerCentralSellingClient::ListOpportunityFromEngagementTasks(
    const ListOpportunityFromEngagementTasksRequest& request) const {
  return ListOpportunityFromEngagementTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceSnapshotJobsOutcome PartnerCentralSellingClient::ListResourceSnapshotJobs(
    const ListResourceSnapshotJobsRequest& request) const {
  return ListResourceSnapshotJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceSnapshotsOutcome PartnerCentralSellingClient::ListResourceSnapshots(const ListResourceSnapshotsRequest& request) const {
  return ListResourceSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSolutionsOutcome PartnerCentralSellingClient::ListSolutions(const ListSolutionsRequest& request) const {
  return ListSolutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome PartnerCentralSellingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutSellingSystemSettingsOutcome PartnerCentralSellingClient::PutSellingSystemSettings(
    const PutSellingSystemSettingsRequest& request) const {
  return PutSellingSystemSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectEngagementInvitationOutcome PartnerCentralSellingClient::RejectEngagementInvitation(
    const RejectEngagementInvitationRequest& request) const {
  return RejectEngagementInvitationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartEngagementByAcceptingInvitationTaskOutcome PartnerCentralSellingClient::StartEngagementByAcceptingInvitationTask(
    const StartEngagementByAcceptingInvitationTaskRequest& request) const {
  return StartEngagementByAcceptingInvitationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartEngagementFromOpportunityTaskOutcome PartnerCentralSellingClient::StartEngagementFromOpportunityTask(
    const StartEngagementFromOpportunityTaskRequest& request) const {
  return StartEngagementFromOpportunityTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartOpportunityFromEngagementTaskOutcome PartnerCentralSellingClient::StartOpportunityFromEngagementTask(
    const StartOpportunityFromEngagementTaskRequest& request) const {
  return StartOpportunityFromEngagementTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartResourceSnapshotJobOutcome PartnerCentralSellingClient::StartResourceSnapshotJob(
    const StartResourceSnapshotJobRequest& request) const {
  return StartResourceSnapshotJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopResourceSnapshotJobOutcome PartnerCentralSellingClient::StopResourceSnapshotJob(const StopResourceSnapshotJobRequest& request) const {
  return StopResourceSnapshotJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SubmitOpportunityOutcome PartnerCentralSellingClient::SubmitOpportunity(const SubmitOpportunityRequest& request) const {
  return SubmitOpportunityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome PartnerCentralSellingClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PartnerCentralSellingClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEngagementContextOutcome PartnerCentralSellingClient::UpdateEngagementContext(const UpdateEngagementContextRequest& request) const {
  return UpdateEngagementContextOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateOpportunityOutcome PartnerCentralSellingClient::UpdateOpportunity(const UpdateOpportunityRequest& request) const {
  return UpdateOpportunityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
