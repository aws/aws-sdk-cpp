/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/route53/Route53Client.h>
#include <aws/route53/model/ChangeStatus.h>
#include <aws/route53/model/GetChangeRequest.h>
#include <aws/route53/model/GetChangeResult.h>

#include <algorithm>

namespace Aws {
namespace Route53 {

template <typename DerivedClient = Route53Client>
class Route53Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetChangeOutcome> WaitUntilResourceRecordSetsChanged(const Model::GetChangeRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetChangeOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("INSYNC"),
                         [](const Model::GetChangeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChangeStatusMapper::GetNameForChangeStatus(result.GetChangeInfo().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetChangeRequest& req) { return static_cast<DerivedClient*>(this)->GetChange(req); };
    Aws::Utils::Waiter<Model::GetChangeRequest, Model::GetChangeOutcome> waiter(30, 4, acceptors, operation,
                                                                                "WaitUntilResourceRecordSetsChanged");
    return waiter.Wait(request);
  }
};
}  // namespace Route53
}  // namespace Aws
