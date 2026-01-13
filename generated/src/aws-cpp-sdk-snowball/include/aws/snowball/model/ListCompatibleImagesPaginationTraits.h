/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/SnowballServiceClientModel.h>
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/ListCompatibleImagesRequest.h>
#include <aws/snowball/model/ListCompatibleImagesResult.h>

namespace Aws {
namespace Snowball {
namespace Pagination {

template <typename Client = SnowballClient>
struct ListCompatibleImagesPaginationTraits {
  using RequestType = Model::ListCompatibleImagesRequest;
  using ResultType = Model::ListCompatibleImagesResult;
  using OutcomeType = Model::ListCompatibleImagesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCompatibleImages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Snowball
}  // namespace Aws
