/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2EndpointProvider.h>
#include <aws/resiliencehubv2/Resiliencehubv2Errors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in Resiliencehubv2Client header */
#include <aws/resiliencehubv2/model/CreateAssertionResult.h>
#include <aws/resiliencehubv2/model/CreateInputSourceResult.h>
#include <aws/resiliencehubv2/model/CreatePolicyResult.h>
#include <aws/resiliencehubv2/model/CreateReportResult.h>
#include <aws/resiliencehubv2/model/CreateServiceFunctionResourcesResult.h>
#include <aws/resiliencehubv2/model/CreateServiceFunctionResult.h>
#include <aws/resiliencehubv2/model/CreateServiceResult.h>
#include <aws/resiliencehubv2/model/CreateSystemResult.h>
#include <aws/resiliencehubv2/model/CreateUserJourneyResult.h>
#include <aws/resiliencehubv2/model/DeleteAssertionResult.h>
#include <aws/resiliencehubv2/model/DeleteInputSourceResult.h>
#include <aws/resiliencehubv2/model/DeletePolicyResult.h>
#include <aws/resiliencehubv2/model/DeleteServiceFunctionResourcesResult.h>
#include <aws/resiliencehubv2/model/DeleteServiceFunctionResult.h>
#include <aws/resiliencehubv2/model/DeleteServiceResult.h>
#include <aws/resiliencehubv2/model/DeleteSystemResult.h>
#include <aws/resiliencehubv2/model/DeleteUserJourneyResult.h>
#include <aws/resiliencehubv2/model/GetFailureModeFindingResult.h>
#include <aws/resiliencehubv2/model/GetPolicyResult.h>
#include <aws/resiliencehubv2/model/GetServiceResult.h>
#include <aws/resiliencehubv2/model/GetSystemResult.h>
#include <aws/resiliencehubv2/model/GetUserJourneyResult.h>
#include <aws/resiliencehubv2/model/ImportAppResult.h>
#include <aws/resiliencehubv2/model/ImportPolicyResult.h>
#include <aws/resiliencehubv2/model/ListAssertionsResult.h>
#include <aws/resiliencehubv2/model/ListDependenciesRequest.h>
#include <aws/resiliencehubv2/model/ListDependenciesResult.h>
#include <aws/resiliencehubv2/model/ListFailureModeAssessmentsResult.h>
#include <aws/resiliencehubv2/model/ListFailureModeFindingsResult.h>
#include <aws/resiliencehubv2/model/ListInputSourcesResult.h>
#include <aws/resiliencehubv2/model/ListPoliciesRequest.h>
#include <aws/resiliencehubv2/model/ListPoliciesResult.h>
#include <aws/resiliencehubv2/model/ListReportsRequest.h>
#include <aws/resiliencehubv2/model/ListReportsResult.h>
#include <aws/resiliencehubv2/model/ListResourcesResult.h>
#include <aws/resiliencehubv2/model/ListServiceEventsResult.h>
#include <aws/resiliencehubv2/model/ListServiceFunctionsResult.h>
#include <aws/resiliencehubv2/model/ListServiceTopologyEdgesResult.h>
#include <aws/resiliencehubv2/model/ListServicesRequest.h>
#include <aws/resiliencehubv2/model/ListServicesResult.h>
#include <aws/resiliencehubv2/model/ListSystemEventsResult.h>
#include <aws/resiliencehubv2/model/ListSystemsRequest.h>
#include <aws/resiliencehubv2/model/ListSystemsResult.h>
#include <aws/resiliencehubv2/model/ListTagsForResourceResult.h>
#include <aws/resiliencehubv2/model/ListUserJourneysResult.h>
#include <aws/resiliencehubv2/model/StartFailureModeAssessmentResult.h>
#include <aws/resiliencehubv2/model/TagResourceResult.h>
#include <aws/resiliencehubv2/model/UntagResourceResult.h>
#include <aws/resiliencehubv2/model/UpdateAssertionResult.h>
#include <aws/resiliencehubv2/model/UpdateDependencyResult.h>
#include <aws/resiliencehubv2/model/UpdateFailureModeFindingResult.h>
#include <aws/resiliencehubv2/model/UpdatePolicyResult.h>
#include <aws/resiliencehubv2/model/UpdateServiceFunctionResult.h>
#include <aws/resiliencehubv2/model/UpdateServiceResult.h>
#include <aws/resiliencehubv2/model/UpdateSystemResult.h>
#include <aws/resiliencehubv2/model/UpdateUserJourneyResult.h>
/* End of service model headers required in Resiliencehubv2Client header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace resiliencehubv2 {
using Resiliencehubv2ClientConfiguration = Aws::Client::GenericClientConfiguration;
using Resiliencehubv2EndpointProviderBase = Aws::resiliencehubv2::Endpoint::Resiliencehubv2EndpointProviderBase;
using Resiliencehubv2EndpointProvider = Aws::resiliencehubv2::Endpoint::Resiliencehubv2EndpointProvider;

namespace Model {
/* Service model forward declarations required in Resiliencehubv2Client header */
class CreateAssertionRequest;
class CreateInputSourceRequest;
class CreatePolicyRequest;
class CreateReportRequest;
class CreateServiceRequest;
class CreateServiceFunctionRequest;
class CreateServiceFunctionResourcesRequest;
class CreateSystemRequest;
class CreateUserJourneyRequest;
class DeleteAssertionRequest;
class DeleteInputSourceRequest;
class DeletePolicyRequest;
class DeleteServiceRequest;
class DeleteServiceFunctionRequest;
class DeleteServiceFunctionResourcesRequest;
class DeleteSystemRequest;
class DeleteUserJourneyRequest;
class GetFailureModeFindingRequest;
class GetPolicyRequest;
class GetServiceRequest;
class GetSystemRequest;
class GetUserJourneyRequest;
class ImportAppRequest;
class ImportPolicyRequest;
class ListAssertionsRequest;
class ListDependenciesRequest;
class ListFailureModeAssessmentsRequest;
class ListFailureModeFindingsRequest;
class ListInputSourcesRequest;
class ListPoliciesRequest;
class ListReportsRequest;
class ListResourcesRequest;
class ListServiceEventsRequest;
class ListServiceFunctionsRequest;
class ListServiceTopologyEdgesRequest;
class ListServicesRequest;
class ListSystemEventsRequest;
class ListSystemsRequest;
class ListTagsForResourceRequest;
class ListUserJourneysRequest;
class StartFailureModeAssessmentRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateAssertionRequest;
class UpdateDependencyRequest;
class UpdateFailureModeFindingRequest;
class UpdatePolicyRequest;
class UpdateServiceRequest;
class UpdateServiceFunctionRequest;
class UpdateSystemRequest;
class UpdateUserJourneyRequest;
/* End of service model forward declarations required in Resiliencehubv2Client header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateAssertionResult, Resiliencehubv2Error> CreateAssertionOutcome;
typedef Aws::Utils::Outcome<CreateInputSourceResult, Resiliencehubv2Error> CreateInputSourceOutcome;
typedef Aws::Utils::Outcome<CreatePolicyResult, Resiliencehubv2Error> CreatePolicyOutcome;
typedef Aws::Utils::Outcome<CreateReportResult, Resiliencehubv2Error> CreateReportOutcome;
typedef Aws::Utils::Outcome<CreateServiceResult, Resiliencehubv2Error> CreateServiceOutcome;
typedef Aws::Utils::Outcome<CreateServiceFunctionResult, Resiliencehubv2Error> CreateServiceFunctionOutcome;
typedef Aws::Utils::Outcome<CreateServiceFunctionResourcesResult, Resiliencehubv2Error> CreateServiceFunctionResourcesOutcome;
typedef Aws::Utils::Outcome<CreateSystemResult, Resiliencehubv2Error> CreateSystemOutcome;
typedef Aws::Utils::Outcome<CreateUserJourneyResult, Resiliencehubv2Error> CreateUserJourneyOutcome;
typedef Aws::Utils::Outcome<DeleteAssertionResult, Resiliencehubv2Error> DeleteAssertionOutcome;
typedef Aws::Utils::Outcome<DeleteInputSourceResult, Resiliencehubv2Error> DeleteInputSourceOutcome;
typedef Aws::Utils::Outcome<DeletePolicyResult, Resiliencehubv2Error> DeletePolicyOutcome;
typedef Aws::Utils::Outcome<DeleteServiceResult, Resiliencehubv2Error> DeleteServiceOutcome;
typedef Aws::Utils::Outcome<DeleteServiceFunctionResult, Resiliencehubv2Error> DeleteServiceFunctionOutcome;
typedef Aws::Utils::Outcome<DeleteServiceFunctionResourcesResult, Resiliencehubv2Error> DeleteServiceFunctionResourcesOutcome;
typedef Aws::Utils::Outcome<DeleteSystemResult, Resiliencehubv2Error> DeleteSystemOutcome;
typedef Aws::Utils::Outcome<DeleteUserJourneyResult, Resiliencehubv2Error> DeleteUserJourneyOutcome;
typedef Aws::Utils::Outcome<GetFailureModeFindingResult, Resiliencehubv2Error> GetFailureModeFindingOutcome;
typedef Aws::Utils::Outcome<GetPolicyResult, Resiliencehubv2Error> GetPolicyOutcome;
typedef Aws::Utils::Outcome<GetServiceResult, Resiliencehubv2Error> GetServiceOutcome;
typedef Aws::Utils::Outcome<GetSystemResult, Resiliencehubv2Error> GetSystemOutcome;
typedef Aws::Utils::Outcome<GetUserJourneyResult, Resiliencehubv2Error> GetUserJourneyOutcome;
typedef Aws::Utils::Outcome<ImportAppResult, Resiliencehubv2Error> ImportAppOutcome;
typedef Aws::Utils::Outcome<ImportPolicyResult, Resiliencehubv2Error> ImportPolicyOutcome;
typedef Aws::Utils::Outcome<ListAssertionsResult, Resiliencehubv2Error> ListAssertionsOutcome;
typedef Aws::Utils::Outcome<ListDependenciesResult, Resiliencehubv2Error> ListDependenciesOutcome;
typedef Aws::Utils::Outcome<ListFailureModeAssessmentsResult, Resiliencehubv2Error> ListFailureModeAssessmentsOutcome;
typedef Aws::Utils::Outcome<ListFailureModeFindingsResult, Resiliencehubv2Error> ListFailureModeFindingsOutcome;
typedef Aws::Utils::Outcome<ListInputSourcesResult, Resiliencehubv2Error> ListInputSourcesOutcome;
typedef Aws::Utils::Outcome<ListPoliciesResult, Resiliencehubv2Error> ListPoliciesOutcome;
typedef Aws::Utils::Outcome<ListReportsResult, Resiliencehubv2Error> ListReportsOutcome;
typedef Aws::Utils::Outcome<ListResourcesResult, Resiliencehubv2Error> ListResourcesOutcome;
typedef Aws::Utils::Outcome<ListServiceEventsResult, Resiliencehubv2Error> ListServiceEventsOutcome;
typedef Aws::Utils::Outcome<ListServiceFunctionsResult, Resiliencehubv2Error> ListServiceFunctionsOutcome;
typedef Aws::Utils::Outcome<ListServiceTopologyEdgesResult, Resiliencehubv2Error> ListServiceTopologyEdgesOutcome;
typedef Aws::Utils::Outcome<ListServicesResult, Resiliencehubv2Error> ListServicesOutcome;
typedef Aws::Utils::Outcome<ListSystemEventsResult, Resiliencehubv2Error> ListSystemEventsOutcome;
typedef Aws::Utils::Outcome<ListSystemsResult, Resiliencehubv2Error> ListSystemsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, Resiliencehubv2Error> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<ListUserJourneysResult, Resiliencehubv2Error> ListUserJourneysOutcome;
typedef Aws::Utils::Outcome<StartFailureModeAssessmentResult, Resiliencehubv2Error> StartFailureModeAssessmentOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, Resiliencehubv2Error> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, Resiliencehubv2Error> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateAssertionResult, Resiliencehubv2Error> UpdateAssertionOutcome;
typedef Aws::Utils::Outcome<UpdateDependencyResult, Resiliencehubv2Error> UpdateDependencyOutcome;
typedef Aws::Utils::Outcome<UpdateFailureModeFindingResult, Resiliencehubv2Error> UpdateFailureModeFindingOutcome;
typedef Aws::Utils::Outcome<UpdatePolicyResult, Resiliencehubv2Error> UpdatePolicyOutcome;
typedef Aws::Utils::Outcome<UpdateServiceResult, Resiliencehubv2Error> UpdateServiceOutcome;
typedef Aws::Utils::Outcome<UpdateServiceFunctionResult, Resiliencehubv2Error> UpdateServiceFunctionOutcome;
typedef Aws::Utils::Outcome<UpdateSystemResult, Resiliencehubv2Error> UpdateSystemOutcome;
typedef Aws::Utils::Outcome<UpdateUserJourneyResult, Resiliencehubv2Error> UpdateUserJourneyOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateAssertionOutcome> CreateAssertionOutcomeCallable;
typedef std::future<CreateInputSourceOutcome> CreateInputSourceOutcomeCallable;
typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
typedef std::future<CreateReportOutcome> CreateReportOutcomeCallable;
typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
typedef std::future<CreateServiceFunctionOutcome> CreateServiceFunctionOutcomeCallable;
typedef std::future<CreateServiceFunctionResourcesOutcome> CreateServiceFunctionResourcesOutcomeCallable;
typedef std::future<CreateSystemOutcome> CreateSystemOutcomeCallable;
typedef std::future<CreateUserJourneyOutcome> CreateUserJourneyOutcomeCallable;
typedef std::future<DeleteAssertionOutcome> DeleteAssertionOutcomeCallable;
typedef std::future<DeleteInputSourceOutcome> DeleteInputSourceOutcomeCallable;
typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
typedef std::future<DeleteServiceFunctionOutcome> DeleteServiceFunctionOutcomeCallable;
typedef std::future<DeleteServiceFunctionResourcesOutcome> DeleteServiceFunctionResourcesOutcomeCallable;
typedef std::future<DeleteSystemOutcome> DeleteSystemOutcomeCallable;
typedef std::future<DeleteUserJourneyOutcome> DeleteUserJourneyOutcomeCallable;
typedef std::future<GetFailureModeFindingOutcome> GetFailureModeFindingOutcomeCallable;
typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
typedef std::future<GetServiceOutcome> GetServiceOutcomeCallable;
typedef std::future<GetSystemOutcome> GetSystemOutcomeCallable;
typedef std::future<GetUserJourneyOutcome> GetUserJourneyOutcomeCallable;
typedef std::future<ImportAppOutcome> ImportAppOutcomeCallable;
typedef std::future<ImportPolicyOutcome> ImportPolicyOutcomeCallable;
typedef std::future<ListAssertionsOutcome> ListAssertionsOutcomeCallable;
typedef std::future<ListDependenciesOutcome> ListDependenciesOutcomeCallable;
typedef std::future<ListFailureModeAssessmentsOutcome> ListFailureModeAssessmentsOutcomeCallable;
typedef std::future<ListFailureModeFindingsOutcome> ListFailureModeFindingsOutcomeCallable;
typedef std::future<ListInputSourcesOutcome> ListInputSourcesOutcomeCallable;
typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
typedef std::future<ListReportsOutcome> ListReportsOutcomeCallable;
typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
typedef std::future<ListServiceEventsOutcome> ListServiceEventsOutcomeCallable;
typedef std::future<ListServiceFunctionsOutcome> ListServiceFunctionsOutcomeCallable;
typedef std::future<ListServiceTopologyEdgesOutcome> ListServiceTopologyEdgesOutcomeCallable;
typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
typedef std::future<ListSystemEventsOutcome> ListSystemEventsOutcomeCallable;
typedef std::future<ListSystemsOutcome> ListSystemsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<ListUserJourneysOutcome> ListUserJourneysOutcomeCallable;
typedef std::future<StartFailureModeAssessmentOutcome> StartFailureModeAssessmentOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateAssertionOutcome> UpdateAssertionOutcomeCallable;
typedef std::future<UpdateDependencyOutcome> UpdateDependencyOutcomeCallable;
typedef std::future<UpdateFailureModeFindingOutcome> UpdateFailureModeFindingOutcomeCallable;
typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
typedef std::future<UpdateServiceFunctionOutcome> UpdateServiceFunctionOutcomeCallable;
typedef std::future<UpdateSystemOutcome> UpdateSystemOutcomeCallable;
typedef std::future<UpdateUserJourneyOutcome> UpdateUserJourneyOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class Resiliencehubv2Client;

/* Service model async handlers definitions */
typedef std::function<void(const Resiliencehubv2Client*, const Model::CreateAssertionRequest&, const Model::CreateAssertionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAssertionResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::CreateInputSourceRequest&, const Model::CreateInputSourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateInputSourceResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::CreatePolicyRequest&, const Model::CreatePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePolicyResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::CreateReportRequest&, const Model::CreateReportOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateReportResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateServiceResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::CreateServiceFunctionRequest&,
                           const Model::CreateServiceFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateServiceFunctionResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::CreateServiceFunctionResourcesRequest&,
                           const Model::CreateServiceFunctionResourcesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateServiceFunctionResourcesResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::CreateSystemRequest&, const Model::CreateSystemOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateSystemResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::CreateUserJourneyRequest&, const Model::CreateUserJourneyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateUserJourneyResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::DeleteAssertionRequest&, const Model::DeleteAssertionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAssertionResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::DeleteInputSourceRequest&, const Model::DeleteInputSourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteInputSourceResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePolicyResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteServiceResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::DeleteServiceFunctionRequest&,
                           const Model::DeleteServiceFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteServiceFunctionResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::DeleteServiceFunctionResourcesRequest&,
                           const Model::DeleteServiceFunctionResourcesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteServiceFunctionResourcesResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::DeleteSystemRequest&, const Model::DeleteSystemOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteSystemResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::DeleteUserJourneyRequest&, const Model::DeleteUserJourneyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteUserJourneyResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::GetFailureModeFindingRequest&,
                           const Model::GetFailureModeFindingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFailureModeFindingResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPolicyResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::GetServiceRequest&, const Model::GetServiceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetServiceResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::GetSystemRequest&, const Model::GetSystemOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetSystemResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::GetUserJourneyRequest&, const Model::GetUserJourneyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetUserJourneyResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ImportAppRequest&, const Model::ImportAppOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ImportAppResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ImportPolicyRequest&, const Model::ImportPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ImportPolicyResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListAssertionsRequest&, const Model::ListAssertionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAssertionsResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListDependenciesRequest&, const Model::ListDependenciesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDependenciesResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListFailureModeAssessmentsRequest&,
                           const Model::ListFailureModeAssessmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFailureModeAssessmentsResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListFailureModeFindingsRequest&,
                           const Model::ListFailureModeFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFailureModeFindingsResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListInputSourcesRequest&, const Model::ListInputSourcesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListInputSourcesResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPoliciesResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListReportsRequest&, const Model::ListReportsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListReportsResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListResourcesRequest&, const Model::ListResourcesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListResourcesResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListServiceEventsRequest&, const Model::ListServiceEventsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListServiceEventsResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListServiceFunctionsRequest&,
                           const Model::ListServiceFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListServiceFunctionsResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListServiceTopologyEdgesRequest&,
                           const Model::ListServiceTopologyEdgesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListServiceTopologyEdgesResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListServicesResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListSystemEventsRequest&, const Model::ListSystemEventsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSystemEventsResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListSystemsRequest&, const Model::ListSystemsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSystemsResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::ListUserJourneysRequest&, const Model::ListUserJourneysOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListUserJourneysResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::StartFailureModeAssessmentRequest&,
                           const Model::StartFailureModeAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartFailureModeAssessmentResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::UpdateAssertionRequest&, const Model::UpdateAssertionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAssertionResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::UpdateDependencyRequest&, const Model::UpdateDependencyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDependencyResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::UpdateFailureModeFindingRequest&,
                           const Model::UpdateFailureModeFindingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateFailureModeFindingResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::UpdatePolicyRequest&, const Model::UpdatePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePolicyResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::UpdateServiceRequest&, const Model::UpdateServiceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateServiceResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::UpdateServiceFunctionRequest&,
                           const Model::UpdateServiceFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateServiceFunctionResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::UpdateSystemRequest&, const Model::UpdateSystemOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateSystemResponseReceivedHandler;
typedef std::function<void(const Resiliencehubv2Client*, const Model::UpdateUserJourneyRequest&, const Model::UpdateUserJourneyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateUserJourneyResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace resiliencehubv2
}  // namespace Aws
