/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/OutpostsServiceClientModel.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/ListQuotesRequest.h>
#include <aws/outposts/model/ListQuotesResult.h>

namespace Aws {
namespace Outposts {
namespace Pagination {

template <typename Client = OutpostsClient>
struct ListQuotesPaginationTraits {
  using RequestType = Model::ListQuotesRequest;
  using ResultType = Model::ListQuotesResult;
  using OutcomeType = Model::ListQuotesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListQuotes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Outposts
}  // namespace Aws
