/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ssm-incidents/model/GetResourcePoliciesPaginationTraits.h>
#include <aws/ssm-incidents/model/ListIncidentFindingsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListIncidentRecordsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListRelatedItemsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListReplicationSetsPaginationTraits.h>
#include <aws/ssm-incidents/model/ListResponsePlansPaginationTraits.h>
#include <aws/ssm-incidents/model/ListTimelineEventsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SSMIncidents {

class SSMIncidentsClient;

template <typename DerivedClient>
class SSMIncidentsPaginationBase {
 public:
  /**
   * Create a paginator for GetResourcePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcePoliciesRequest,
                                    Pagination::GetResourcePoliciesPaginationTraits<DerivedClient>>
  GetResourcePoliciesPaginator(const Model::GetResourcePoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcePoliciesRequest,
                                             Pagination::GetResourcePoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIncidentFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIncidentFindingsRequest,
                                    Pagination::ListIncidentFindingsPaginationTraits<DerivedClient>>
  ListIncidentFindingsPaginator(const Model::ListIncidentFindingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIncidentFindingsRequest,
                                             Pagination::ListIncidentFindingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIncidentRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIncidentRecordsRequest,
                                    Pagination::ListIncidentRecordsPaginationTraits<DerivedClient>>
  ListIncidentRecordsPaginator(const Model::ListIncidentRecordsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIncidentRecordsRequest,
                                             Pagination::ListIncidentRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRelatedItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRelatedItemsRequest,
                                    Pagination::ListRelatedItemsPaginationTraits<DerivedClient>>
  ListRelatedItemsPaginator(const Model::ListRelatedItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRelatedItemsRequest,
                                             Pagination::ListRelatedItemsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListReplicationSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReplicationSetsRequest,
                                    Pagination::ListReplicationSetsPaginationTraits<DerivedClient>>
  ListReplicationSetsPaginator(const Model::ListReplicationSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReplicationSetsRequest,
                                             Pagination::ListReplicationSetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResponsePlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResponsePlansRequest,
                                    Pagination::ListResponsePlansPaginationTraits<DerivedClient>>
  ListResponsePlansPaginator(const Model::ListResponsePlansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResponsePlansRequest,
                                             Pagination::ListResponsePlansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTimelineEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTimelineEventsRequest,
                                    Pagination::ListTimelineEventsPaginationTraits<DerivedClient>>
  ListTimelineEventsPaginator(const Model::ListTimelineEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTimelineEventsRequest,
                                             Pagination::ListTimelineEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SSMIncidents
}  // namespace Aws
