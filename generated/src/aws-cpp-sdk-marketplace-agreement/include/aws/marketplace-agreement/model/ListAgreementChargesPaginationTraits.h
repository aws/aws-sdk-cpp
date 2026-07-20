/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementServiceServiceClientModel.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/ListAgreementChargesRequest.h>
#include <aws/marketplace-agreement/model/ListAgreementChargesResult.h>

namespace Aws {
namespace AgreementService {
namespace Pagination {

template <typename Client = AgreementServiceClient>
struct ListAgreementChargesPaginationTraits {
  using RequestType = Model::ListAgreementChargesRequest;
  using ResultType = Model::ListAgreementChargesResult;
  using OutcomeType = Model::ListAgreementChargesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAgreementCharges(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AgreementService
}  // namespace Aws
