/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewallServiceClientModel.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ListTLSInspectionConfigurationsRequest.h>
#include <aws/network-firewall/model/ListTLSInspectionConfigurationsResult.h>

namespace Aws {
namespace NetworkFirewall {
namespace Pagination {

template <typename Client = NetworkFirewallClient>
struct ListTLSInspectionConfigurationsPaginationTraits {
  using RequestType = Model::ListTLSInspectionConfigurationsRequest;
  using ResultType = Model::ListTLSInspectionConfigurationsResult;
  using OutcomeType = Model::ListTLSInspectionConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTLSInspectionConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace NetworkFirewall
}  // namespace Aws
