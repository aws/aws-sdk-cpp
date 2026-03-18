/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ssm-incidents/SSMIncidentsClient.h>
#include <aws/ssm-incidents/model/GetReplicationSetRequest.h>
#include <aws/ssm-incidents/model/GetReplicationSetResult.h>

#include <algorithm>

namespace Aws {
namespace SSMIncidents {

template <typename DerivedClient = SSMIncidentsClient>
class SSMIncidentsWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetReplicationSetOutcome> WaitUntilWaitForReplicationSetActive(
      const Model::GetReplicationSetRequest& request) {
    using OutcomeT = Model::GetReplicationSetOutcome;
    using RequestT = Model::GetReplicationSetRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WaitForReplicationSetActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WaitForReplicationSetActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WaitForReplicationSetActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WaitForReplicationSetActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetReplicationSet(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 1, std::move(acceptors), operation, "WaitUntilWaitForReplicationSetActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetReplicationSetOutcome> WaitUntilWaitForReplicationSetDeleted(
      const Model::GetReplicationSetRequest& request) {
    using OutcomeT = Model::GetReplicationSetOutcome;
    using RequestT = Model::GetReplicationSetRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "WaitForReplicationSetDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WaitForReplicationSetDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WaitForReplicationSetDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetReplicationSet(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 1, std::move(acceptors), operation, "WaitUntilWaitForReplicationSetDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace SSMIncidents
}  // namespace Aws
