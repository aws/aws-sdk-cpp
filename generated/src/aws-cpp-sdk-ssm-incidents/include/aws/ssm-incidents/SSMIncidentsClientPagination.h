/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ssm-incidents/SSMIncidentsClient.h>
#include <aws/ssm-incidents/model/GetResourcePoliciesPaginationTraits.h>
#include <aws/ssm-incidents/model/ListIncidentFindingsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListIncidentRecordsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListRelatedItemsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListReplicationSetsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListResponsePlansPaginationTraits.h>
#include <aws/ssm-incidents/model/ListTimelineEventsPaginationTraits.h>

namespace Aws {
namespace SSMIncidents {

using GetResourcePoliciesPaginator = Aws::Utils::Pagination::Paginator<SSMIncidentsClient, Model::GetResourcePoliciesRequest,
                                                                       Pagination::GetResourcePoliciesPaginationTraits<SSMIncidentsClient>>;
using ListIncidentFindingsPaginator =
    Aws::Utils::Pagination::Paginator<SSMIncidentsClient, Model::ListIncidentFindingsRequest,
                                      Pagination::ListIncidentFindingsPaginationTraits<SSMIncidentsClient>>;
using ListIncidentRecordsPaginator = Aws::Utils::Pagination::Paginator<SSMIncidentsClient, Model::ListIncidentRecordsRequest,
                                                                       Pagination::ListIncidentRecordsPaginationTraits<SSMIncidentsClient>>;
using ListRelatedItemsPaginator = Aws::Utils::Pagination::Paginator<SSMIncidentsClient, Model::ListRelatedItemsRequest,
                                                                    Pagination::ListRelatedItemsPaginationTraits<SSMIncidentsClient>>;
using ListReplicationSetsPaginator = Aws::Utils::Pagination::Paginator<SSMIncidentsClient, Model::ListReplicationSetsRequest,
                                                                       Pagination::ListReplicationSetsPaginationTraits<SSMIncidentsClient>>;
using ListResponsePlansPaginator = Aws::Utils::Pagination::Paginator<SSMIncidentsClient, Model::ListResponsePlansRequest,
                                                                     Pagination::ListResponsePlansPaginationTraits<SSMIncidentsClient>>;
using ListTimelineEventsPaginator = Aws::Utils::Pagination::Paginator<SSMIncidentsClient, Model::ListTimelineEventsRequest,
                                                                      Pagination::ListTimelineEventsPaginationTraits<SSMIncidentsClient>>;

}  // namespace SSMIncidents
}  // namespace Aws
