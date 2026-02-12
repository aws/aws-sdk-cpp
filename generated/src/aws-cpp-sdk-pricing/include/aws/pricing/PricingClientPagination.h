/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pricing/PricingClient.h>
#include <aws/pricing/model/DescribeServicesPaginationTraits.h>
#include <aws/pricing/model/GetAttributeValuesPaginationTraits.h>
#include <aws/pricing/model/GetProductsPaginationTraits.h>
#include <aws/pricing/model/ListPriceListsPaginationTraits.h>

namespace Aws {
namespace Pricing {

using DescribeServicesPaginator = Aws::Utils::Pagination::Paginator<PricingClient, Model::DescribeServicesRequest,
                                                                    Pagination::DescribeServicesPaginationTraits<PricingClient>>;
using GetAttributeValuesPaginator = Aws::Utils::Pagination::Paginator<PricingClient, Model::GetAttributeValuesRequest,
                                                                      Pagination::GetAttributeValuesPaginationTraits<PricingClient>>;
using GetProductsPaginator =
    Aws::Utils::Pagination::Paginator<PricingClient, Model::GetProductsRequest, Pagination::GetProductsPaginationTraits<PricingClient>>;
using ListPriceListsPaginator = Aws::Utils::Pagination::Paginator<PricingClient, Model::ListPriceListsRequest,
                                                                  Pagination::ListPriceListsPaginationTraits<PricingClient>>;

}  // namespace Pricing
}  // namespace Aws
