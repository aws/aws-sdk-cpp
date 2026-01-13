/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/TranslateServiceClientModel.h>
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/ListLanguagesRequest.h>
#include <aws/translate/model/ListLanguagesResult.h>

namespace Aws {
namespace Translate {
namespace Pagination {

template <typename Client = TranslateClient>
struct ListLanguagesPaginationTraits {
  using RequestType = Model::ListLanguagesRequest;
  using ResultType = Model::ListLanguagesResult;
  using OutcomeType = Model::ListLanguagesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLanguages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Translate
}  // namespace Aws
