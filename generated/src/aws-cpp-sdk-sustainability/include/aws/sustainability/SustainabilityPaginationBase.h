/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsDimensionValuesPaginationTraits.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsPaginationTraits.h>
#include <aws/sustainability/model/GetEstimatedWaterAllocationDimensionValuesPaginationTraits.h>
#include <aws/sustainability/model/GetEstimatedWaterAllocationPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Sustainability {

template <typename DerivedClient>
class SustainabilityPaginationBase {
 public:
  /**
   * Create a paginator for GetEstimatedCarbonEmissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEstimatedCarbonEmissionsRequest,
                                    Pagination::GetEstimatedCarbonEmissionsPaginationTraits<DerivedClient>>
  GetEstimatedCarbonEmissionsPaginator(const Model::GetEstimatedCarbonEmissionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEstimatedCarbonEmissionsRequest,
                                             Pagination::GetEstimatedCarbonEmissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetEstimatedCarbonEmissionsDimensionValues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEstimatedCarbonEmissionsDimensionValuesRequest,
                                    Pagination::GetEstimatedCarbonEmissionsDimensionValuesPaginationTraits<DerivedClient>>
  GetEstimatedCarbonEmissionsDimensionValuesPaginator(const Model::GetEstimatedCarbonEmissionsDimensionValuesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEstimatedCarbonEmissionsDimensionValuesRequest,
                                             Pagination::GetEstimatedCarbonEmissionsDimensionValuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetEstimatedWaterAllocation operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEstimatedWaterAllocationRequest,
                                    Pagination::GetEstimatedWaterAllocationPaginationTraits<DerivedClient>>
  GetEstimatedWaterAllocationPaginator(const Model::GetEstimatedWaterAllocationRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEstimatedWaterAllocationRequest,
                                             Pagination::GetEstimatedWaterAllocationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetEstimatedWaterAllocationDimensionValues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEstimatedWaterAllocationDimensionValuesRequest,
                                    Pagination::GetEstimatedWaterAllocationDimensionValuesPaginationTraits<DerivedClient>>
  GetEstimatedWaterAllocationDimensionValuesPaginator(const Model::GetEstimatedWaterAllocationDimensionValuesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEstimatedWaterAllocationDimensionValuesRequest,
                                             Pagination::GetEstimatedWaterAllocationDimensionValuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Sustainability
}  // namespace Aws
