/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManagerServiceClientModel.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/model/ListResourcePoliciesRequest.h>
#include <aws/secretsmanager/model/ListResourcePoliciesResult.h>

namespace Aws {
namespace SecretsManager {
namespace Pagination {

template <typename Client = SecretsManagerClient>
struct ListResourcePoliciesPaginationTraits {
  using RequestType = Model::ListResourcePoliciesRequest;
  using ResultType = Model::ListResourcePoliciesResult;
  using OutcomeType = Model::ListResourcePoliciesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResourcePolicies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecretsManager
}  // namespace Aws
