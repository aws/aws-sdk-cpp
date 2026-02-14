/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/service-quotas/ServiceQuotasClient.h>
#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasPaginationTraits.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryByQuotaPaginationTraits.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryPaginationTraits.h>
#include <aws/service-quotas/model/ListServiceQuotaIncreaseRequestsInTemplatePaginationTraits.h>
#include <aws/service-quotas/model/ListServiceQuotasPaginationTraits.h>
#include <aws/service-quotas/model/ListServicesPaginationTraits.h>

namespace Aws {
namespace ServiceQuotas {

using ListAWSDefaultServiceQuotasPaginator =
    Aws::Utils::Pagination::Paginator<ServiceQuotasClient, Model::ListAWSDefaultServiceQuotasRequest,
                                      Pagination::ListAWSDefaultServiceQuotasPaginationTraits<ServiceQuotasClient>>;
using ListRequestedServiceQuotaChangeHistoryPaginator =
    Aws::Utils::Pagination::Paginator<ServiceQuotasClient, Model::ListRequestedServiceQuotaChangeHistoryRequest,
                                      Pagination::ListRequestedServiceQuotaChangeHistoryPaginationTraits<ServiceQuotasClient>>;
using ListRequestedServiceQuotaChangeHistoryByQuotaPaginator =
    Aws::Utils::Pagination::Paginator<ServiceQuotasClient, Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest,
                                      Pagination::ListRequestedServiceQuotaChangeHistoryByQuotaPaginationTraits<ServiceQuotasClient>>;
using ListServiceQuotaIncreaseRequestsInTemplatePaginator =
    Aws::Utils::Pagination::Paginator<ServiceQuotasClient, Model::ListServiceQuotaIncreaseRequestsInTemplateRequest,
                                      Pagination::ListServiceQuotaIncreaseRequestsInTemplatePaginationTraits<ServiceQuotasClient>>;
using ListServiceQuotasPaginator = Aws::Utils::Pagination::Paginator<ServiceQuotasClient, Model::ListServiceQuotasRequest,
                                                                     Pagination::ListServiceQuotasPaginationTraits<ServiceQuotasClient>>;
using ListServicesPaginator = Aws::Utils::Pagination::Paginator<ServiceQuotasClient, Model::ListServicesRequest,
                                                                Pagination::ListServicesPaginationTraits<ServiceQuotasClient>>;

}  // namespace ServiceQuotas
}  // namespace Aws
