/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/TextractServiceClientModel.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/ListAdapterVersionsRequest.h>
#include <aws/textract/model/ListAdapterVersionsResult.h>

namespace Aws {
namespace Textract {
namespace Pagination {

template <typename Client = TextractClient>
struct ListAdapterVersionsPaginationTraits {
  using RequestType = Model::ListAdapterVersionsRequest;
  using ResultType = Model::ListAdapterVersionsResult;
  using OutcomeType = Model::ListAdapterVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAdapterVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Textract
}  // namespace Aws
