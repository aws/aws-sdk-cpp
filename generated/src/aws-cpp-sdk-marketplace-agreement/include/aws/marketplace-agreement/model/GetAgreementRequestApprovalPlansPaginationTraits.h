/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementServiceServiceClientModel.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/GetAgreementRequestApprovalPlansRequest.h>
#include <aws/marketplace-agreement/model/GetAgreementRequestApprovalPlansResult.h>

namespace Aws {
namespace AgreementService {
namespace Pagination {

template <typename Client = AgreementServiceClient>
struct GetAgreementRequestApprovalPlansPaginationTraits {
  using RequestType = Model::GetAgreementRequestApprovalPlansRequest;
  using ResultType = Model::GetAgreementRequestApprovalPlansResult;
  using OutcomeType = Model::GetAgreementRequestApprovalPlansOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetAgreementRequestApprovalPlans(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AgreementService
}  // namespace Aws
