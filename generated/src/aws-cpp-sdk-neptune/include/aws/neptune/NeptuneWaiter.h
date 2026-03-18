/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::DescribeDBInstancesOutcome;
    using RequestT = Model::DescribeDBInstancesRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-restore"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-parameters"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDBInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilDBInstanceAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBInstancesOutcome> WaitUntilDBInstanceDeleted(
      const Model::DescribeDBInstancesRequest& request) {
    using OutcomeT = Model::DescribeDBInstancesOutcome;
    using RequestT = Model::DescribeDBInstancesRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("deleted"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("DBInstanceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("DBInstanceNotFound")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("rebooting"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("resetting-master-credentials"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDBInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilDBInstanceDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace Neptune
}  // namespace Aws
