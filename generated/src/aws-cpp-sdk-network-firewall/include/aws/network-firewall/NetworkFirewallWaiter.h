/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/network-firewall/NetworkFirewallClient.h>
#include <aws/network-firewall/model/DescribeFirewallPolicyRequest.h>
#include <aws/network-firewall/model/DescribeFirewallPolicyResult.h>
#include <aws/network-firewall/model/ResourceStatus.h>

#include <algorithm>

namespace Aws {
namespace NetworkFirewall {

template <typename DerivedClient = NetworkFirewallClient>
class NetworkFirewallWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeFirewallPolicyOutcome> WaitUntilFirewallPolicyActive(
      const Model::DescribeFirewallPolicyRequest& request) {
    using OutcomeT = Model::DescribeFirewallPolicyOutcome;
    using RequestT = Model::DescribeFirewallPolicyRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FirewallPolicyActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeFirewallPolicyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ResourceStatusMapper::GetNameForResourceStatus(result.GetFirewallPolicyResponse().GetFirewallPolicyStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FirewallPolicyActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::DescribeFirewallPolicyOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ResourceStatusMapper::GetNameForResourceStatus(result.GetFirewallPolicyResponse().GetFirewallPolicyStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFirewallPolicy(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilFirewallPolicyActive");
    return waiter.Wait(request);
  }
};
}  // namespace NetworkFirewall
}  // namespace Aws
