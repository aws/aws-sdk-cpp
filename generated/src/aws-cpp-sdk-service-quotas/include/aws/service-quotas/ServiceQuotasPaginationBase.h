/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasPaginationTraits.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryByQuotaPaginationTraits.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryPaginationTraits.h>
#include <aws/service-quotas/model/ListServiceQuotaIncreaseRequestsInTemplatePaginationTraits.h>
#include <aws/service-quotas/model/ListServiceQuotasPaginationTraits.h>
#include <aws/service-quotas/model/ListServicesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ServiceQuotas {

class ServiceQuotasClient;

template <typename DerivedClient>
class ServiceQuotasPaginationBase {
 public:
  /**
   * Create a paginator for ListAWSDefaultServiceQuotas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAWSDefaultServiceQuotasRequest,
                                    Pagination::ListAWSDefaultServiceQuotasPaginationTraits<DerivedClient>>
  ListAWSDefaultServiceQuotasPaginator(const Model::ListAWSDefaultServiceQuotasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAWSDefaultServiceQuotasRequest,
                                             Pagination::ListAWSDefaultServiceQuotasPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRequestedServiceQuotaChangeHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRequestedServiceQuotaChangeHistoryRequest,
                                    Pagination::ListRequestedServiceQuotaChangeHistoryPaginationTraits<DerivedClient>>
  ListRequestedServiceQuotaChangeHistoryPaginator(const Model::ListRequestedServiceQuotaChangeHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRequestedServiceQuotaChangeHistoryRequest,
                                             Pagination::ListRequestedServiceQuotaChangeHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRequestedServiceQuotaChangeHistoryByQuota operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest,
                                    Pagination::ListRequestedServiceQuotaChangeHistoryByQuotaPaginationTraits<DerivedClient>>
  ListRequestedServiceQuotaChangeHistoryByQuotaPaginator(const Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest,
                                             Pagination::ListRequestedServiceQuotaChangeHistoryByQuotaPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceQuotaIncreaseRequestsInTemplate operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceQuotaIncreaseRequestsInTemplateRequest,
                                    Pagination::ListServiceQuotaIncreaseRequestsInTemplatePaginationTraits<DerivedClient>>
  ListServiceQuotaIncreaseRequestsInTemplatePaginator(const Model::ListServiceQuotaIncreaseRequestsInTemplateRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceQuotaIncreaseRequestsInTemplateRequest,
                                             Pagination::ListServiceQuotaIncreaseRequestsInTemplatePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceQuotas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceQuotasRequest,
                                    Pagination::ListServiceQuotasPaginationTraits<DerivedClient>>
  ListServiceQuotasPaginator(const Model::ListServiceQuotasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceQuotasRequest,
                                             Pagination::ListServiceQuotasPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest, Pagination::ListServicesPaginationTraits<DerivedClient>>
  ListServicesPaginator(const Model::ListServicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest,
                                             Pagination::ListServicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace ServiceQuotas
}  // namespace Aws
