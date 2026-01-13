/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSapServiceClientModel.h>
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/ListSubCheckRuleResultsRequest.h>
#include <aws/ssm-sap/model/ListSubCheckRuleResultsResult.h>

namespace Aws {
namespace SsmSap {
namespace Pagination {

template <typename Client = SsmSapClient>
struct ListSubCheckRuleResultsPaginationTraits {
  using RequestType = Model::ListSubCheckRuleResultsRequest;
  using ResultType = Model::ListSubCheckRuleResultsResult;
  using OutcomeType = Model::ListSubCheckRuleResultsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSubCheckRuleResults(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SsmSap
}  // namespace Aws
