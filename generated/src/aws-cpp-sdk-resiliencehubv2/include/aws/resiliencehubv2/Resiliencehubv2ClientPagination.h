/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/resiliencehubv2/Resiliencehubv2Client.h>
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

namespace Aws {
namespace resiliencehubv2 {

using ListAssertionsPaginator = Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListAssertionsRequest,
                                                                  Pagination::ListAssertionsPaginationTraits<Resiliencehubv2Client>>;
using ListDependenciesPaginator = Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListDependenciesRequest,
                                                                    Pagination::ListDependenciesPaginationTraits<Resiliencehubv2Client>>;
using ListFailureModeAssessmentsPaginator =
    Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListFailureModeAssessmentsRequest,
                                      Pagination::ListFailureModeAssessmentsPaginationTraits<Resiliencehubv2Client>>;
using ListFailureModeFindingsPaginator =
    Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListFailureModeFindingsRequest,
                                      Pagination::ListFailureModeFindingsPaginationTraits<Resiliencehubv2Client>>;
using ListInputSourcesPaginator = Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListInputSourcesRequest,
                                                                    Pagination::ListInputSourcesPaginationTraits<Resiliencehubv2Client>>;
using ListPoliciesPaginator = Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListPoliciesRequest,
                                                                Pagination::ListPoliciesPaginationTraits<Resiliencehubv2Client>>;
using ListReportsPaginator = Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListReportsRequest,
                                                               Pagination::ListReportsPaginationTraits<Resiliencehubv2Client>>;
using ListResourcesPaginator = Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListResourcesRequest,
                                                                 Pagination::ListResourcesPaginationTraits<Resiliencehubv2Client>>;
using ListServiceEventsPaginator = Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListServiceEventsRequest,
                                                                     Pagination::ListServiceEventsPaginationTraits<Resiliencehubv2Client>>;
using ListServiceFunctionsPaginator =
    Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListServiceFunctionsRequest,
                                      Pagination::ListServiceFunctionsPaginationTraits<Resiliencehubv2Client>>;
using ListServicesPaginator = Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListServicesRequest,
                                                                Pagination::ListServicesPaginationTraits<Resiliencehubv2Client>>;
using ListServiceTopologyEdgesPaginator =
    Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListServiceTopologyEdgesRequest,
                                      Pagination::ListServiceTopologyEdgesPaginationTraits<Resiliencehubv2Client>>;
using ListSystemEventsPaginator = Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListSystemEventsRequest,
                                                                    Pagination::ListSystemEventsPaginationTraits<Resiliencehubv2Client>>;
using ListSystemsPaginator = Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListSystemsRequest,
                                                               Pagination::ListSystemsPaginationTraits<Resiliencehubv2Client>>;
using ListUserJourneysPaginator = Aws::Utils::Pagination::Paginator<Resiliencehubv2Client, Model::ListUserJourneysRequest,
                                                                    Pagination::ListUserJourneysPaginationTraits<Resiliencehubv2Client>>;

}  // namespace resiliencehubv2
}  // namespace Aws
