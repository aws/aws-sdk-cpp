/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManagerServiceClientModel.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/model/ListSecretsRequest.h>
#include <aws/secretsmanager/model/ListSecretsResult.h>

namespace Aws {
namespace SecretsManager {
namespace Pagination {

template <typename Client = SecretsManagerClient>
struct ListSecretsPaginationTraits {
  using RequestType = Model::ListSecretsRequest;
  using ResultType = Model::ListSecretsResult;
  using OutcomeType = Model::ListSecretsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSecrets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecretsManager
}  // namespace Aws
