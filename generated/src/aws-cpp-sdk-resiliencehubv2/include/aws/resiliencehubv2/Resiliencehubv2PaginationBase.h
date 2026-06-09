/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/resiliencehubv2/model/ListAssertionsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListDependenciesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListFailureModeAssessmentsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListFailureModeFindingsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListInputSourcesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListPoliciesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListReportsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListResourcesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListServiceEventsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListServiceFunctionsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListServiceTopologyEdgesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListServicesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListSystemEventsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListSystemsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListUserJourneysPaginationTraits.h>

#include <memory>

namespace Aws {
namespace resiliencehubv2 {

template <typename DerivedClient>
class Resiliencehubv2PaginationBase {
 public:
  /**
   * Create a paginator for ListAssertions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssertionsRequest, Pagination::ListAssertionsPaginationTraits<DerivedClient>>
  ListAssertionsPaginator(const Model::ListAssertionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssertionsRequest,
                                             Pagination::ListAssertionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListDependencies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDependenciesRequest,
                                    Pagination::ListDependenciesPaginationTraits<DerivedClient>>
  ListDependenciesPaginator(const Model::ListDependenciesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDependenciesRequest,
                                             Pagination::ListDependenciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListFailureModeAssessments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFailureModeAssessmentsRequest,
                                    Pagination::ListFailureModeAssessmentsPaginationTraits<DerivedClient>>
  ListFailureModeAssessmentsPaginator(const Model::ListFailureModeAssessmentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFailureModeAssessmentsRequest,
                                             Pagination::ListFailureModeAssessmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFailureModeFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFailureModeFindingsRequest,
                                    Pagination::ListFailureModeFindingsPaginationTraits<DerivedClient>>
  ListFailureModeFindingsPaginator(const Model::ListFailureModeFindingsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFailureModeFindingsRequest,
                                             Pagination::ListFailureModeFindingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInputSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInputSourcesRequest,
                                    Pagination::ListInputSourcesPaginationTraits<DerivedClient>>
  ListInputSourcesPaginator(const Model::ListInputSourcesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInputSourcesRequest,
                                             Pagination::ListInputSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<DerivedClient>>
  ListPoliciesPaginator(const Model::ListPoliciesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest,
                                             Pagination::ListPoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportsRequest, Pagination::ListReportsPaginationTraits<DerivedClient>>
  ListReportsPaginator(const Model::ListReportsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportsRequest,
                                             Pagination::ListReportsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesRequest, Pagination::ListResourcesPaginationTraits<DerivedClient>>
  ListResourcesPaginator(const Model::ListResourcesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesRequest,
                                             Pagination::ListResourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListServiceEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceEventsRequest,
                                    Pagination::ListServiceEventsPaginationTraits<DerivedClient>>
  ListServiceEventsPaginator(const Model::ListServiceEventsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceEventsRequest,
                                             Pagination::ListServiceEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceFunctions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceFunctionsRequest,
                                    Pagination::ListServiceFunctionsPaginationTraits<DerivedClient>>
  ListServiceFunctionsPaginator(const Model::ListServiceFunctionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceFunctionsRequest,
                                             Pagination::ListServiceFunctionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest, Pagination::ListServicesPaginationTraits<DerivedClient>>
  ListServicesPaginator(const Model::ListServicesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest,
                                             Pagination::ListServicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListServiceTopologyEdges operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceTopologyEdgesRequest,
                                    Pagination::ListServiceTopologyEdgesPaginationTraits<DerivedClient>>
  ListServiceTopologyEdgesPaginator(const Model::ListServiceTopologyEdgesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceTopologyEdgesRequest,
                                             Pagination::ListServiceTopologyEdgesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSystemEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSystemEventsRequest,
                                    Pagination::ListSystemEventsPaginationTraits<DerivedClient>>
  ListSystemEventsPaginator(const Model::ListSystemEventsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSystemEventsRequest,
                                             Pagination::ListSystemEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListSystems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSystemsRequest, Pagination::ListSystemsPaginationTraits<DerivedClient>>
  ListSystemsPaginator(const Model::ListSystemsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSystemsRequest,
                                             Pagination::ListSystemsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListUserJourneys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserJourneysRequest,
                                    Pagination::ListUserJourneysPaginationTraits<DerivedClient>>
  ListUserJourneysPaginator(const Model::ListUserJourneysRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserJourneysRequest,
                                             Pagination::ListUserJourneysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace resiliencehubv2
}  // namespace Aws
