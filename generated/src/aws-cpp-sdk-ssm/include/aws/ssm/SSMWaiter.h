/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::GetCommandInvocationOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("Pending"),
                         [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("InProgress"),
                         [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("Delayed"),
                         [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Success"),
                         [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Cancelled"),
                         [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("TimedOut"),
                         [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Cancelling"),
                         [](const Model::GetCommandInvocationOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CommandInvocationStatusMapper::GetNameForCommandInvocationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvocationDoesNotExist")});

    auto operation = [this](const Model::GetCommandInvocationRequest& req) {
      return static_cast<DerivedClient*>(this)->GetCommandInvocation(req);
    };
    Aws::Utils::Waiter<Model::GetCommandInvocationRequest, Model::GetCommandInvocationOutcome> waiter(5, 24, acceptors, operation,
                                                                                                      "WaitUntilCommandExecuted");
    return waiter.Wait(request);
  }
};
}  // namespace SSM
}  // namespace Aws
