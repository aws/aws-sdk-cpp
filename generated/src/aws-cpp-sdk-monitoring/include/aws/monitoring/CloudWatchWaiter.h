/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/monitoring/CloudWatchClient.h>
#include <aws/monitoring/model/DescribeAlarmsRequest.h>
#include <aws/monitoring/model/DescribeAlarmsResult.h>
#include <aws/monitoring/model/GetAlarmMuteRuleRequest.h>
#include <aws/monitoring/model/GetAlarmMuteRuleResult.h>

#include <algorithm>

namespace Aws {
namespace CloudWatch {

template <typename DerivedClient = CloudWatchClient>
class CloudWatchWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeAlarmsOutcome> WaitUntilAlarmExists(const Model::DescribeAlarmsRequest& request) {
    using OutcomeT = Model::DescribeAlarmsOutcome;
    using RequestT = Model::DescribeAlarmsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AlarmExistsWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeAlarmsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetMetricAlarms().size() > 0) == expected.get<bool>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAlarms(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilAlarmExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAlarmsOutcome> WaitUntilCompositeAlarmExists(const Model::DescribeAlarmsRequest& request) {
    using OutcomeT = Model::DescribeAlarmsOutcome;
    using RequestT = Model::DescribeAlarmsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CompositeAlarmExistsWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeAlarmsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetCompositeAlarms().size() > 0) == expected.get<bool>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAlarms(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilCompositeAlarmExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetAlarmMuteRuleOutcome> WaitUntilAlarmMuteRuleExists(const Model::GetAlarmMuteRuleRequest& request) {
    using OutcomeT = Model::GetAlarmMuteRuleOutcome;
    using RequestT = Model::GetAlarmMuteRuleRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("AlarmMuteRuleExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("AlarmMuteRuleExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetAlarmMuteRule(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilAlarmMuteRuleExists");
    return waiter.Wait(request);
  }
};
}  // namespace CloudWatch
}  // namespace Aws
