/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53domains/Route53DomainsClient.h>
#include <aws/route53domains/model/ListDomainsPaginationTraits.h>
#include <aws/route53domains/model/ListOperationsPaginationTraits.h>
#include <aws/route53domains/model/ListPricesPaginationTraits.h>
#include <aws/route53domains/model/ViewBillingPaginationTraits.h>

namespace Aws {
namespace Route53Domains {

using ListDomainsPaginator = Aws::Utils::Pagination::Paginator<Route53DomainsClient, Model::ListDomainsRequest,
                                                               Pagination::ListDomainsPaginationTraits<Route53DomainsClient>>;
using ListOperationsPaginator = Aws::Utils::Pagination::Paginator<Route53DomainsClient, Model::ListOperationsRequest,
                                                                  Pagination::ListOperationsPaginationTraits<Route53DomainsClient>>;
using ListPricesPaginator = Aws::Utils::Pagination::Paginator<Route53DomainsClient, Model::ListPricesRequest,
                                                              Pagination::ListPricesPaginationTraits<Route53DomainsClient>>;
using ViewBillingPaginator = Aws::Utils::Pagination::Paginator<Route53DomainsClient, Model::ViewBillingRequest,
                                                               Pagination::ViewBillingPaginationTraits<Route53DomainsClient>>;

}  // namespace Route53Domains
}  // namespace Aws
