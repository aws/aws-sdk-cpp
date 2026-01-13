/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pinpoint-email/model/GetDedicatedIpsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListConfigurationSetsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListDedicatedIpPoolsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListDeliverabilityTestReportsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListDomainDeliverabilityCampaignsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListEmailIdentitiesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace PinpointEmail {

class PinpointEmailClient;

template <typename DerivedClient>
class PinpointEmailPaginationBase {
 public:
  /**
   * Create a paginator for GetDedicatedIps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDedicatedIpsRequest,
                                    Pagination::GetDedicatedIpsPaginationTraits<DerivedClient>>
  GetDedicatedIpsPaginator(const Model::GetDedicatedIpsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDedicatedIpsRequest,
                                             Pagination::GetDedicatedIpsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListConfigurationSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationSetsRequest,
                                    Pagination::ListConfigurationSetsPaginationTraits<DerivedClient>>
  ListConfigurationSetsPaginator(const Model::ListConfigurationSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationSetsRequest,
                                             Pagination::ListConfigurationSetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDedicatedIpPools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDedicatedIpPoolsRequest,
                                    Pagination::ListDedicatedIpPoolsPaginationTraits<DerivedClient>>
  ListDedicatedIpPoolsPaginator(const Model::ListDedicatedIpPoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDedicatedIpPoolsRequest,
                                             Pagination::ListDedicatedIpPoolsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDeliverabilityTestReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeliverabilityTestReportsRequest,
                                    Pagination::ListDeliverabilityTestReportsPaginationTraits<DerivedClient>>
  ListDeliverabilityTestReportsPaginator(const Model::ListDeliverabilityTestReportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeliverabilityTestReportsRequest,
                                             Pagination::ListDeliverabilityTestReportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDomainDeliverabilityCampaigns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainDeliverabilityCampaignsRequest,
                                    Pagination::ListDomainDeliverabilityCampaignsPaginationTraits<DerivedClient>>
  ListDomainDeliverabilityCampaignsPaginator(const Model::ListDomainDeliverabilityCampaignsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainDeliverabilityCampaignsRequest,
                                             Pagination::ListDomainDeliverabilityCampaignsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEmailIdentities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEmailIdentitiesRequest,
                                    Pagination::ListEmailIdentitiesPaginationTraits<DerivedClient>>
  ListEmailIdentitiesPaginator(const Model::ListEmailIdentitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEmailIdentitiesRequest,
                                             Pagination::ListEmailIdentitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace PinpointEmail
}  // namespace Aws
