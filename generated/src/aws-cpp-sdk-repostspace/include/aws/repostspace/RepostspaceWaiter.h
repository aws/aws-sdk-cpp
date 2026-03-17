/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/repostspace/RepostspaceClient.h>
#include <aws/repostspace/model/ChannelStatus.h>
#include <aws/repostspace/model/GetChannelRequest.h>
#include <aws/repostspace/model/GetChannelResult.h>
#include <aws/repostspace/model/GetSpaceRequest.h>
#include <aws/repostspace/model/GetSpaceResult.h>

#include <algorithm>

namespace Aws {
namespace repostspace {

template <typename DerivedClient = RepostspaceClient>
class RepostspaceWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetChannelOutcome> WaitUntilChannelCreated(const Model::GetChannelRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetChannelOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CREATED"),
                         [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetChannelRequest& req) { return static_cast<DerivedClient*>(this)->GetChannel(req); };
    Aws::Utils::Waiter<Model::GetChannelRequest, Model::GetChannelOutcome> waiter(2, 60, acceptors, operation, "WaitUntilChannelCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetChannelOutcome> WaitUntilChannelDeleted(const Model::GetChannelRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetChannelOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetChannelRequest& req) { return static_cast<DerivedClient*>(this)->GetChannel(req); };
    Aws::Utils::Waiter<Model::GetChannelRequest, Model::GetChannelOutcome> waiter(2, 60, acceptors, operation, "WaitUntilChannelDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSpaceOutcome> WaitUntilSpaceCreated(const Model::GetSpaceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetSpaceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CREATED"),
                         [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetSpaceRequest& req) { return static_cast<DerivedClient*>(this)->GetSpace(req); };
    Aws::Utils::Waiter<Model::GetSpaceRequest, Model::GetSpaceOutcome> waiter(300, 24, acceptors, operation, "WaitUntilSpaceCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSpaceOutcome> WaitUntilSpaceDeleted(const Model::GetSpaceRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetSpaceOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetSpaceRequest& req) { return static_cast<DerivedClient*>(this)->GetSpace(req); };
    Aws::Utils::Waiter<Model::GetSpaceRequest, Model::GetSpaceOutcome> waiter(300, 24, acceptors, operation, "WaitUntilSpaceDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace repostspace
}  // namespace Aws
