/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsClient.h>
#include <aws/partnercentral-benefits/model/ListBenefitAllocationsPaginationTraits.h>
#include <aws/partnercentral-benefits/model/ListBenefitApplicationsPaginationTraits.h>
#include <aws/partnercentral-benefits/model/ListBenefitsPaginationTraits.h>

namespace Aws {
namespace PartnerCentralBenefits {

using ListBenefitAllocationsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralBenefitsClient, Model::ListBenefitAllocationsRequest,
                                      Pagination::ListBenefitAllocationsPaginationTraits<PartnerCentralBenefitsClient>>;
using ListBenefitApplicationsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralBenefitsClient, Model::ListBenefitApplicationsRequest,
                                      Pagination::ListBenefitApplicationsPaginationTraits<PartnerCentralBenefitsClient>>;
using ListBenefitsPaginator = Aws::Utils::Pagination::Paginator<PartnerCentralBenefitsClient, Model::ListBenefitsRequest,
                                                                Pagination::ListBenefitsPaginationTraits<PartnerCentralBenefitsClient>>;

}  // namespace PartnerCentralBenefits
}  // namespace Aws
