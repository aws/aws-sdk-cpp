/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/TextractServiceClientModel.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/ListBlueprintsRequest.h>
#include <aws/textract/model/ListBlueprintsResult.h>

namespace Aws {
namespace Textract {
namespace Pagination {

template <typename Client = TextractClient>
struct ListBlueprintsPaginationTraits {
  using RequestType = Model::ListBlueprintsRequest;
  using ResultType = Model::ListBlueprintsResult;
  using OutcomeType = Model::ListBlueprintsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBlueprints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Textract
}  // namespace Aws
