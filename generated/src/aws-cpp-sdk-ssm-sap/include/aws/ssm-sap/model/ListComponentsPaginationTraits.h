/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSapServiceClientModel.h>
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/ListComponentsRequest.h>
#include <aws/ssm-sap/model/ListComponentsResult.h>

namespace Aws {
namespace SsmSap {
namespace Pagination {

template <typename Client = SsmSapClient>
struct ListComponentsPaginationTraits {
  using RequestType = Model::ListComponentsRequest;
  using ResultType = Model::ListComponentsResult;
  using OutcomeType = Model::ListComponentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListComponents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SsmSap
}  // namespace Aws
