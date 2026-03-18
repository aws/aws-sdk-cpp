/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::GetChannelOutcome;
    using RequestT = Model::GetChannelRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATED"),
        [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetChannel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilChannelCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetChannelOutcome> WaitUntilChannelDeleted(const Model::GetChannelRequest& request) {
    using OutcomeT = Model::GetChannelOutcome;
    using RequestT = Model::GetChannelRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ChannelDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::GetChannelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelStatusMapper::GetNameForChannelStatus(result.GetChannelStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetChannel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilChannelDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSpaceOutcome> WaitUntilSpaceCreated(const Model::GetSpaceRequest& request) {
    using OutcomeT = Model::GetSpaceOutcome;
    using RequestT = Model::GetSpaceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATED"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetSpace(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(300, 24, std::move(acceptors), operation, "WaitUntilSpaceCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSpaceOutcome> WaitUntilSpaceDeleted(const Model::GetSpaceRequest& request) {
    using OutcomeT = Model::GetSpaceOutcome;
    using RequestT = Model::GetSpaceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("SpaceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetStatus() == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetSpace(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(300, 24, std::move(acceptors), operation, "WaitUntilSpaceDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace repostspace
}  // namespace Aws
