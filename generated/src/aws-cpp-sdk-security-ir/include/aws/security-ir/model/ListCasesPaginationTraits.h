/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIRServiceClientModel.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/model/ListCasesRequest.h>
#include <aws/security-ir/model/ListCasesResult.h>

namespace Aws {
namespace SecurityIR {
namespace Pagination {

template <typename Client = SecurityIRClient>
struct ListCasesPaginationTraits {
  using RequestType = Model::ListCasesRequest;
  using ResultType = Model::ListCasesResult;
  using OutcomeType = Model::ListCasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityIR
}  // namespace Aws
