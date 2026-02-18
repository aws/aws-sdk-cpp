/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53domains/model/ListDomainsPaginationTraits.h>
#include <aws/route53domains/model/ListOperationsPaginationTraits.h>
#include <aws/route53domains/model/ListPricesPaginationTraits.h>
#include <aws/route53domains/model/ViewBillingPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Route53Domains {

class Route53DomainsClient;

template <typename DerivedClient>
class Route53DomainsPaginationBase {
 public:
  /**
   * Create a paginator for ListDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<DerivedClient>>
  ListDomainsPaginator(const Model::ListDomainsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest,
                                             Pagination::ListDomainsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOperationsRequest, Pagination::ListOperationsPaginationTraits<DerivedClient>>
  ListOperationsPaginator(const Model::ListOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOperationsRequest,
                                             Pagination::ListOperationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListPrices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPricesRequest, Pagination::ListPricesPaginationTraits<DerivedClient>>
  ListPricesPaginator(const Model::ListPricesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPricesRequest,
                                             Pagination::ListPricesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ViewBilling operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ViewBillingRequest, Pagination::ViewBillingPaginationTraits<DerivedClient>>
  ViewBillingPaginator(const Model::ViewBillingRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ViewBillingRequest,
                                             Pagination::ViewBillingPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace Route53Domains
}  // namespace Aws
