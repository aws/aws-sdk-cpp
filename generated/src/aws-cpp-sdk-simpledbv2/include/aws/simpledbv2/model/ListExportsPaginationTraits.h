/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simpledbv2/SimpleDBv2ServiceClientModel.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>
#include <aws/simpledbv2/model/ListExportsRequest.h>
#include <aws/simpledbv2/model/ListExportsResult.h>

namespace Aws {
namespace SimpleDBv2 {
namespace Pagination {

template <typename Client = SimpleDBv2Client>
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
}  // namespace SimpleDBv2
}  // namespace Aws
