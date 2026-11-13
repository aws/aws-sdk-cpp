/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewallServiceClientModel.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ListFirewallPoliciesV2Request.h>
#include <aws/network-firewall/model/ListFirewallPoliciesV2Result.h>

namespace Aws {
namespace NetworkFirewall {
namespace Pagination {

template <typename Client = NetworkFirewallClient>
struct ListFirewallPoliciesV2PaginationTraits {
  using RequestType = Model::ListFirewallPoliciesV2Request;
  using ResultType = Model::ListFirewallPoliciesV2Result;
  using OutcomeType = Model::ListFirewallPoliciesV2Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFirewallPoliciesV2(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NetworkFirewall
}  // namespace Aws
