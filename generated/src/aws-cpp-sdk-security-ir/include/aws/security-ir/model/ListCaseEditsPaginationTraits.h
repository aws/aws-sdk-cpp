/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIRServiceClientModel.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/model/ListCaseEditsRequest.h>
#include <aws/security-ir/model/ListCaseEditsResult.h>

namespace Aws {
namespace SecurityIR {
namespace Pagination {

template <typename Client = SecurityIRClient>
struct ListCaseEditsPaginationTraits {
  using RequestType = Model::ListCaseEditsRequest;
  using ResultType = Model::ListCaseEditsResult;
  using OutcomeType = Model::ListCaseEditsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCaseEdits(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityIR
}  // namespace Aws
