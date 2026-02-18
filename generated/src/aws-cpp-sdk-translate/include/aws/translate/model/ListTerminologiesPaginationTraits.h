/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/TranslateServiceClientModel.h>
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/ListTerminologiesRequest.h>
#include <aws/translate/model/ListTerminologiesResult.h>

namespace Aws {
namespace Translate {
namespace Pagination {

template <typename Client = TranslateClient>
struct ListTerminologiesPaginationTraits {
  using RequestType = Model::ListTerminologiesRequest;
  using ResultType = Model::ListTerminologiesResult;
  using OutcomeType = Model::ListTerminologiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTerminologies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Translate
}  // namespace Aws
