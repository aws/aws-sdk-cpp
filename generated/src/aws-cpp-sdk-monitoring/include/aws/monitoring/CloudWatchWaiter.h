/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeAlarmsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeAlarmsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetMetricAlarms().size() > 0) == expected.get<bool>();
                         }});

    auto operation = [this](const Model::DescribeAlarmsRequest& req) { return static_cast<DerivedClient*>(this)->DescribeAlarms(req); };
    Aws::Utils::Waiter<Model::DescribeAlarmsRequest, Model::DescribeAlarmsOutcome> waiter(5, 24, acceptors, operation,
                                                                                          "WaitUntilAlarmExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAlarmsOutcome> WaitUntilCompositeAlarmExists(const Model::DescribeAlarmsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeAlarmsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeAlarmsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetCompositeAlarms().size() > 0) == expected.get<bool>();
                         }});

    auto operation = [this](const Model::DescribeAlarmsRequest& req) { return static_cast<DerivedClient*>(this)->DescribeAlarms(req); };
    Aws::Utils::Waiter<Model::DescribeAlarmsRequest, Model::DescribeAlarmsOutcome> waiter(5, 24, acceptors, operation,
                                                                                          "WaitUntilCompositeAlarmExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetAlarmMuteRuleOutcome> WaitUntilAlarmMuteRuleExists(const Model::GetAlarmMuteRuleRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetAlarmMuteRuleOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::GetAlarmMuteRuleRequest& req) { return static_cast<DerivedClient*>(this)->GetAlarmMuteRule(req); };
    Aws::Utils::Waiter<Model::GetAlarmMuteRuleRequest, Model::GetAlarmMuteRuleOutcome> waiter(5, 24, acceptors, operation,
                                                                                              "WaitUntilAlarmMuteRuleExists");
    return waiter.Wait(request);
  }
};
}  // namespace CloudWatch
}  // namespace Aws
