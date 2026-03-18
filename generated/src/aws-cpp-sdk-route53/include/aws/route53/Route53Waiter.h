/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::GetChangeOutcome;
    using RequestT = Model::GetChangeRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ResourceRecordSetsChangedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("INSYNC"),
        [](const Model::GetChangeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChangeStatusMapper::GetNameForChangeStatus(result.GetChangeInfo().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetChange(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilResourceRecordSetsChanged");
    return waiter.Wait(request);
  }
};
}  // namespace Route53
}  // namespace Aws
