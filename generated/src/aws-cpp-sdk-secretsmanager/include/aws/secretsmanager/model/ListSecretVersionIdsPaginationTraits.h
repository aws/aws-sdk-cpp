/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManagerServiceClientModel.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/model/ListSecretVersionIdsRequest.h>
#include <aws/secretsmanager/model/ListSecretVersionIdsResult.h>

namespace Aws {
namespace SecretsManager {
namespace Pagination {

template <typename Client = SecretsManagerClient>
struct ListSecretVersionIdsPaginationTraits {
  using RequestType = Model::ListSecretVersionIdsRequest;
  using ResultType = Model::ListSecretVersionIdsResult;
  using OutcomeType = Model::ListSecretVersionIdsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSecretVersionIds(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecretsManager
}  // namespace Aws
