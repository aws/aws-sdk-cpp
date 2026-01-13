/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotasServiceClientModel.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryByQuotaRequest.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryByQuotaResult.h>

namespace Aws {
namespace ServiceQuotas {
namespace Pagination {

template <typename Client = ServiceQuotasClient>
struct ListRequestedServiceQuotaChangeHistoryByQuotaPaginationTraits {
  using RequestType = Model::ListRequestedServiceQuotaChangeHistoryByQuotaRequest;
  using ResultType = Model::ListRequestedServiceQuotaChangeHistoryByQuotaResult;
  using OutcomeType = Model::ListRequestedServiceQuotaChangeHistoryByQuotaOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListRequestedServiceQuotaChangeHistoryByQuota(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ServiceQuotas
}  // namespace Aws
