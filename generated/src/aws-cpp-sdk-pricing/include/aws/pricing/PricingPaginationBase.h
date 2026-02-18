/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pricing/model/DescribeServicesPaginationTraits.h>
#include <aws/pricing/model/GetAttributeValuesPaginationTraits.h>
#include <aws/pricing/model/GetProductsPaginationTraits.h>
#include <aws/pricing/model/ListPriceListsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Pricing {

class PricingClient;

template <typename DerivedClient>
class PricingPaginationBase {
 public:
  /**
   * Create a paginator for DescribeServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServicesRequest,
                                    Pagination::DescribeServicesPaginationTraits<DerivedClient>>
  DescribeServicesPaginator(const Model::DescribeServicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServicesRequest,
                                             Pagination::DescribeServicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for GetAttributeValues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAttributeValuesRequest,
                                    Pagination::GetAttributeValuesPaginationTraits<DerivedClient>>
  GetAttributeValuesPaginator(const Model::GetAttributeValuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAttributeValuesRequest,
                                             Pagination::GetAttributeValuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetProducts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetProductsRequest, Pagination::GetProductsPaginationTraits<DerivedClient>>
  GetProductsPaginator(const Model::GetProductsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetProductsRequest,
                                             Pagination::GetProductsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListPriceLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPriceListsRequest, Pagination::ListPriceListsPaginationTraits<DerivedClient>>
  ListPriceListsPaginator(const Model::ListPriceListsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPriceListsRequest,
                                             Pagination::ListPriceListsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace Pricing
}  // namespace Aws
