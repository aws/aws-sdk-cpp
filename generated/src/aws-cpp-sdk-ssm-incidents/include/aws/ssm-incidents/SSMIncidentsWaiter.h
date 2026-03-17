/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::GetReplicationSetOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATING"),
                         [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetReplicationSetRequest& req) {
      return static_cast<DerivedClient*>(this)->GetReplicationSet(req);
    };
    Aws::Utils::Waiter<Model::GetReplicationSetRequest, Model::GetReplicationSetOutcome> waiter(30, 1, acceptors, operation,
                                                                                                "WaitUntilWaitForReplicationSetActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetReplicationSetOutcome> WaitUntilWaitForReplicationSetDeleted(
      const Model::GetReplicationSetRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetReplicationSetOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetReplicationSetOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetReplicationSet().GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetReplicationSetRequest& req) {
      return static_cast<DerivedClient*>(this)->GetReplicationSet(req);
    };
    Aws::Utils::Waiter<Model::GetReplicationSetRequest, Model::GetReplicationSetOutcome> waiter(30, 1, acceptors, operation,
                                                                                                "WaitUntilWaitForReplicationSetDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace SSMIncidents
}  // namespace Aws
