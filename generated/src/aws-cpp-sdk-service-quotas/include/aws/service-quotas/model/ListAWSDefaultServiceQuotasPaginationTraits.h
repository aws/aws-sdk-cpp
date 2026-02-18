/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotasServiceClientModel.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasRequest.h>
#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasResult.h>

namespace Aws {
namespace ServiceQuotas {
namespace Pagination {

template <typename Client = ServiceQuotasClient>
struct ListAWSDefaultServiceQuotasPaginationTraits {
  using RequestType = Model::ListAWSDefaultServiceQuotasRequest;
  using ResultType = Model::ListAWSDefaultServiceQuotasResult;
  using OutcomeType = Model::ListAWSDefaultServiceQuotasOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAWSDefaultServiceQuotas(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ServiceQuotas
}  // namespace Aws
