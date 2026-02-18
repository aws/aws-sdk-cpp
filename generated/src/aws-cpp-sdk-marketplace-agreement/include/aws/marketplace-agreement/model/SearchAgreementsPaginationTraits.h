/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementServiceServiceClientModel.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/SearchAgreementsRequest.h>
#include <aws/marketplace-agreement/model/SearchAgreementsResult.h>

namespace Aws {
namespace AgreementService {
namespace Pagination {

template <typename Client = AgreementServiceClient>
struct SearchAgreementsPaginationTraits {
  using RequestType = Model::SearchAgreementsRequest;
  using ResultType = Model::SearchAgreementsResult;
  using OutcomeType = Model::SearchAgreementsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchAgreements(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AgreementService
}  // namespace Aws
