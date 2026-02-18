/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/TextractServiceClientModel.h>
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/ListAdaptersRequest.h>
#include <aws/textract/model/ListAdaptersResult.h>

namespace Aws {
namespace Textract {
namespace Pagination {

template <typename Client = TextractClient>
struct ListAdaptersPaginationTraits {
  using RequestType = Model::ListAdaptersRequest;
  using ResultType = Model::ListAdaptersResult;
  using OutcomeType = Model::ListAdaptersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAdapters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Textract
}  // namespace Aws
