/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/TranslateServiceClientModel.h>
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/ListParallelDataRequest.h>
#include <aws/translate/model/ListParallelDataResult.h>

namespace Aws {
namespace Translate {
namespace Pagination {

template <typename Client = TranslateClient>
struct ListParallelDataPaginationTraits {
  using RequestType = Model::ListParallelDataRequest;
  using ResultType = Model::ListParallelDataResult;
  using OutcomeType = Model::ListParallelDataOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListParallelData(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Translate
}  // namespace Aws
