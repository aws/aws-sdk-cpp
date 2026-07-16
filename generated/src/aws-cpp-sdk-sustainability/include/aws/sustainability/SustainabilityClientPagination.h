/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sustainability/SustainabilityClient.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsDimensionValuesPaginationTraits.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsPaginationTraits.h>
#include <aws/sustainability/model/GetEstimatedWaterAllocationDimensionValuesPaginationTraits.h>
#include <aws/sustainability/model/GetEstimatedWaterAllocationPaginationTraits.h>

namespace Aws {
namespace Sustainability {

using GetEstimatedCarbonEmissionsPaginator =
    Aws::Utils::Pagination::Paginator<SustainabilityClient, Model::GetEstimatedCarbonEmissionsRequest,
                                      Pagination::GetEstimatedCarbonEmissionsPaginationTraits<SustainabilityClient>>;
using GetEstimatedCarbonEmissionsDimensionValuesPaginator =
    Aws::Utils::Pagination::Paginator<SustainabilityClient, Model::GetEstimatedCarbonEmissionsDimensionValuesRequest,
                                      Pagination::GetEstimatedCarbonEmissionsDimensionValuesPaginationTraits<SustainabilityClient>>;
using GetEstimatedWaterAllocationPaginator =
    Aws::Utils::Pagination::Paginator<SustainabilityClient, Model::GetEstimatedWaterAllocationRequest,
                                      Pagination::GetEstimatedWaterAllocationPaginationTraits<SustainabilityClient>>;
using GetEstimatedWaterAllocationDimensionValuesPaginator =
    Aws::Utils::Pagination::Paginator<SustainabilityClient, Model::GetEstimatedWaterAllocationDimensionValuesRequest,
                                      Pagination::GetEstimatedWaterAllocationDimensionValuesPaginationTraits<SustainabilityClient>>;

}  // namespace Sustainability
}  // namespace Aws
