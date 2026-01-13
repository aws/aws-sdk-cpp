/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-benefits/model/ListBenefitAllocationsPaginationTraits.h>
#include <aws/partnercentral-benefits/model/ListBenefitApplicationsPaginationTraits.h>
#include <aws/partnercentral-benefits/model/ListBenefitsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace PartnerCentralBenefits {

class PartnerCentralBenefitsClient;

template <typename DerivedClient>
class PartnerCentralBenefitsPaginationBase {
 public:
  /**
   * Create a paginator for ListBenefitAllocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBenefitAllocationsRequest,
                                    Pagination::ListBenefitAllocationsPaginationTraits<DerivedClient>>
  ListBenefitAllocationsPaginator(const Model::ListBenefitAllocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBenefitAllocationsRequest,
                                             Pagination::ListBenefitAllocationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBenefitApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBenefitApplicationsRequest,
                                    Pagination::ListBenefitApplicationsPaginationTraits<DerivedClient>>
  ListBenefitApplicationsPaginator(const Model::ListBenefitApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBenefitApplicationsRequest,
                                             Pagination::ListBenefitApplicationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBenefits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBenefitsRequest, Pagination::ListBenefitsPaginationTraits<DerivedClient>>
  ListBenefitsPaginator(const Model::ListBenefitsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBenefitsRequest,
                                             Pagination::ListBenefitsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace PartnerCentralBenefits
}  // namespace Aws
