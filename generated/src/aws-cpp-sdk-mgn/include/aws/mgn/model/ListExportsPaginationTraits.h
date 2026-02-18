/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/MgnServiceClientModel.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ListExportsRequest.h>
#include <aws/mgn/model/ListExportsResult.h>

namespace Aws {
namespace mgn {
namespace Pagination {

template <typename Client = MgnClient>
struct ListExportsPaginationTraits {
  using RequestType = Model::ListExportsRequest;
  using ResultType = Model::ListExportsResult;
  using OutcomeType = Model::ListExportsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListExports(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace mgn
}  // namespace Aws
