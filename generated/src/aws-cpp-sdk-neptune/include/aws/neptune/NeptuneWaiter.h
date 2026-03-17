/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/neptune/NeptuneClient.h>
#include <aws/neptune/model/DescribeDBInstancesRequest.h>
#include <aws/neptune/model/DescribeDBInstancesResult.h>

#include <algorithm>

namespace Aws {
namespace Neptune {

template <typename DerivedClient = NeptuneClient>
class NeptuneWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeDBInstancesOutcome> WaitUntilDBInstanceAvailable(
      const Model::DescribeDBInstancesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeDBInstancesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-restore"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-parameters"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeDBInstancesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeDBInstances(req);
    };
    Aws::Utils::Waiter<Model::DescribeDBInstancesRequest, Model::DescribeDBInstancesOutcome> waiter(30, 4, acceptors, operation,
                                                                                                    "WaitUntilDBInstanceAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBInstancesOutcome> WaitUntilDBInstanceDeleted(
      const Model::DescribeDBInstancesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeDBInstancesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("DBInstanceNotFound")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("creating"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("modifying"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("rebooting"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("resetting-master-credentials"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeDBInstancesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeDBInstances(req);
    };
    Aws::Utils::Waiter<Model::DescribeDBInstancesRequest, Model::DescribeDBInstancesOutcome> waiter(30, 4, acceptors, operation,
                                                                                                    "WaitUntilDBInstanceDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace Neptune
}  // namespace Aws
