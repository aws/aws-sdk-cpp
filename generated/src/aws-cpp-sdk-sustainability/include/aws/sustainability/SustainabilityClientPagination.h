/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sustainability/SustainabilityClient.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsDimensionValuesPaginationTraits.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsPaginationTraits.h>

namespace Aws {
namespace Sustainability {

using GetEstimatedCarbonEmissionsPaginator =
    Aws::Utils::Pagination::Paginator<SustainabilityClient, Model::GetEstimatedCarbonEmissionsRequest,
                                      Pagination::GetEstimatedCarbonEmissionsPaginationTraits<SustainabilityClient>>;
using GetEstimatedCarbonEmissionsDimensionValuesPaginator =
    Aws::Utils::Pagination::Paginator<SustainabilityClient, Model::GetEstimatedCarbonEmissionsDimensionValuesRequest,
                                      Pagination::GetEstimatedCarbonEmissionsDimensionValuesPaginationTraits<SustainabilityClient>>;

}  // namespace Sustainability
}  // namespace Aws
