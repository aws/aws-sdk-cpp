/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ssm/SSMClient.h>
#include <aws/ssm/model/CommandInvocationStatus.h>
#include <aws/ssm/model/GetCommandInvocationRequest.h>
#include <aws/ssm/model/GetCommandInvocationResult.h>

#include <algorithm>

namespace Aws {
namespace SSM {

template <typename DerivedClient = SSMClient>
class SSMWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetCommandInvocationOutcome> WaitUntilCommandExecuted(
      const Model::GetCommandInvocationRequest& request) {
    using OutcomeT = Model::GetCommandInvocationOutcome;
    using RequestT = Model::GetCommandInvocationRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CommandExecutedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Pending"),
        [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CommandExecutedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InProgress"),
        [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CommandExecutedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("Delayed"),
        [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CommandExecutedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Success"),
        [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CommandExecutedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Cancelled"),
        [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CommandExecutedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("TimedOut"),
        [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CommandExecutedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CommandExecutedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Cancelling"),
        [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("CommandExecutedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InvocationDoesNotExist")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetCommandInvocation(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilCommandExecuted");
    return waiter.Wait(request);
  }
};
}  // namespace SSM
}  // namespace Aws
