/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHubServiceClientModel.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ListConfigurationPolicyAssociationsRequest.h>
#include <aws/securityhub/model/ListConfigurationPolicyAssociationsResult.h>

namespace Aws {
namespace SecurityHub {
namespace Pagination {

template <typename Client = SecurityHubClient>
struct ListConfigurationPolicyAssociationsPaginationTraits {
  using RequestType = Model::ListConfigurationPolicyAssociationsRequest;
  using ResultType = Model::ListConfigurationPolicyAssociationsResult;
  using OutcomeType = Model::ListConfigurationPolicyAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConfigurationPolicyAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SecurityHub
}  // namespace Aws
