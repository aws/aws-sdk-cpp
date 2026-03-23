/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/medialive/MediaLiveClient.h>
#include <aws/medialive/model/ChannelPlacementGroupState.h>
#include <aws/medialive/model/ChannelState.h>
#include <aws/medialive/model/ClusterState.h>
#include <aws/medialive/model/DescribeChannelPlacementGroupRequest.h>
#include <aws/medialive/model/DescribeChannelPlacementGroupSdkResult.h>
#include <aws/medialive/model/DescribeChannelRequest.h>
#include <aws/medialive/model/DescribeChannelResult.h>
#include <aws/medialive/model/DescribeClusterRequest.h>
#include <aws/medialive/model/DescribeClusterSdkResult.h>
#include <aws/medialive/model/DescribeInputRequest.h>
#include <aws/medialive/model/DescribeInputResult.h>
#include <aws/medialive/model/DescribeMultiplexRequest.h>
#include <aws/medialive/model/DescribeMultiplexResult.h>
#include <aws/medialive/model/DescribeNodeRequest.h>
#include <aws/medialive/model/DescribeNodeSdkResult.h>
#include <aws/medialive/model/GetSignalMapRequest.h>
#include <aws/medialive/model/GetSignalMapResult.h>
#include <aws/medialive/model/InputState.h>
#include <aws/medialive/model/MultiplexState.h>
#include <aws/medialive/model/NodeState.h>
#include <aws/medialive/model/SignalMapMonitorDeploymentStatus.h>
#include <aws/medialive/model/SignalMapStatus.h>

#include <algorithm>

namespace Aws {
namespace MediaLive {

template <typename DerivedClient = MediaLiveClient>
class MediaLiveWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeChannelOutcome> WaitUntilChannelCreated(const Model::DescribeChannelRequest& request) {
    using OutcomeT = Model::DescribeChannelOutcome;
    using RequestT = Model::DescribeChannelRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("IDLE"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ChannelCreatedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeChannel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilChannelCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelOutcome> WaitUntilChannelDeleted(const Model::DescribeChannelRequest& request) {
    using OutcomeT = Model::DescribeChannelOutcome;
    using RequestT = Model::DescribeChannelRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ChannelDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeChannel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilChannelDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelOutcome> WaitUntilChannelRunning(const Model::DescribeChannelRequest& request) {
    using OutcomeT = Model::DescribeChannelOutcome;
    using RequestT = Model::DescribeChannelRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelRunningWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("RUNNING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelRunningWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STARTING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ChannelRunningWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeChannel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilChannelRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelOutcome> WaitUntilChannelStopped(const Model::DescribeChannelRequest& request) {
    using OutcomeT = Model::DescribeChannelOutcome;
    using RequestT = Model::DescribeChannelRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("IDLE"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelStoppedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STOPPING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ChannelStoppedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeChannel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilChannelStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelPlacementGroupOutcome> WaitUntilChannelPlacementGroupAssigned(
      const Model::DescribeChannelPlacementGroupRequest& request) {
    using OutcomeT = Model::DescribeChannelPlacementGroupOutcome;
    using RequestT = Model::DescribeChannelPlacementGroupRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelPlacementGroupAssignedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ASSIGNED"),
        [](const Model::DescribeChannelPlacementGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelPlacementGroupStateMapper::GetNameForChannelPlacementGroupState(result.GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelPlacementGroupAssignedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("ASSIGNING"),
        [](const Model::DescribeChannelPlacementGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelPlacementGroupStateMapper::GetNameForChannelPlacementGroupState(result.GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ChannelPlacementGroupAssignedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeChannelPlacementGroup(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilChannelPlacementGroupAssigned");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelPlacementGroupOutcome> WaitUntilChannelPlacementGroupDeleted(
      const Model::DescribeChannelPlacementGroupRequest& request) {
    using OutcomeT = Model::DescribeChannelPlacementGroupOutcome;
    using RequestT = Model::DescribeChannelPlacementGroupRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelPlacementGroupDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelPlacementGroupDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ChannelPlacementGroupDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeChannelPlacementGroup(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilChannelPlacementGroupDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelPlacementGroupOutcome> WaitUntilChannelPlacementGroupUnassigned(
      const Model::DescribeChannelPlacementGroupRequest& request) {
    using OutcomeT = Model::DescribeChannelPlacementGroupOutcome;
    using RequestT = Model::DescribeChannelPlacementGroupRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelPlacementGroupUnassignedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UNASSIGNED"),
        [](const Model::DescribeChannelPlacementGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelPlacementGroupStateMapper::GetNameForChannelPlacementGroupState(result.GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ChannelPlacementGroupUnassignedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UNASSIGNING"),
        [](const Model::DescribeChannelPlacementGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChannelPlacementGroupStateMapper::GetNameForChannelPlacementGroupState(result.GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ChannelPlacementGroupUnassignedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeChannelPlacementGroup(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilChannelPlacementGroupUnassigned");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterCreated(const Model::DescribeClusterRequest& request) {
    using OutcomeT = Model::DescribeClusterOutcome;
    using RequestT = Model::DescribeClusterRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ClusterCreatedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilClusterCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterDeleted(const Model::DescribeClusterRequest& request) {
    using OutcomeT = Model::DescribeClusterOutcome;
    using RequestT = Model::DescribeClusterRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ClusterDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInputOutcome> WaitUntilInputAttached(const Model::DescribeInputRequest& request) {
    using OutcomeT = Model::DescribeInputOutcome;
    using RequestT = Model::DescribeInputRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputAttachedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ATTACHED"),
        [](const Model::DescribeInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::InputStateMapper::GetNameForInputState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputAttachedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DETACHED"),
        [](const Model::DescribeInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::InputStateMapper::GetNameForInputState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InputAttachedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInput(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilInputAttached");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInputOutcome> WaitUntilInputDeleted(const Model::DescribeInputRequest& request) {
    using OutcomeT = Model::DescribeInputOutcome;
    using RequestT = Model::DescribeInputRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InputDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInput(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilInputDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInputOutcome> WaitUntilInputDetached(const Model::DescribeInputRequest& request) {
    using OutcomeT = Model::DescribeInputOutcome;
    using RequestT = Model::DescribeInputRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputDetachedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DETACHED"),
        [](const Model::DescribeInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::InputStateMapper::GetNameForInputState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputDetachedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputDetachedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("ATTACHED"),
        [](const Model::DescribeInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::InputStateMapper::GetNameForInputState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InputDetachedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInput(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilInputDetached");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMultiplexOutcome> WaitUntilMultiplexCreated(const Model::DescribeMultiplexRequest& request) {
    using OutcomeT = Model::DescribeMultiplexOutcome;
    using RequestT = Model::DescribeMultiplexRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MultiplexCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("IDLE"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MultiplexCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("MultiplexCreatedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MultiplexCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMultiplex(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilMultiplexCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMultiplexOutcome> WaitUntilMultiplexDeleted(const Model::DescribeMultiplexRequest& request) {
    using OutcomeT = Model::DescribeMultiplexOutcome;
    using RequestT = Model::DescribeMultiplexRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MultiplexDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MultiplexDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("MultiplexDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMultiplex(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilMultiplexDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMultiplexOutcome> WaitUntilMultiplexRunning(const Model::DescribeMultiplexRequest& request) {
    using OutcomeT = Model::DescribeMultiplexOutcome;
    using RequestT = Model::DescribeMultiplexRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MultiplexRunningWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("RUNNING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MultiplexRunningWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STARTING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("MultiplexRunningWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMultiplex(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilMultiplexRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMultiplexOutcome> WaitUntilMultiplexStopped(const Model::DescribeMultiplexRequest& request) {
    using OutcomeT = Model::DescribeMultiplexOutcome;
    using RequestT = Model::DescribeMultiplexRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MultiplexStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("IDLE"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MultiplexStoppedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STOPPING"),
        [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("MultiplexStoppedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeMultiplex(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilMultiplexStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNodeOutcome> WaitUntilNodeDeregistered(const Model::DescribeNodeRequest& request) {
    using OutcomeT = Model::DescribeNodeOutcome;
    using RequestT = Model::DescribeNodeRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NodeDeregisteredWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DEREGISTERED"),
        [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NodeDeregisteredWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DEREGISTERING"),
        [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NodeDeregisteredWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DRAINING"),
        [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("NodeDeregisteredWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeNode(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilNodeDeregistered");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNodeOutcome> WaitUntilNodeRegistered(const Model::DescribeNodeRequest& request) {
    using OutcomeT = Model::DescribeNodeOutcome;
    using RequestT = Model::DescribeNodeRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NodeRegisteredWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NodeRegisteredWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("REGISTERING"),
        [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("NodeRegisteredWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("NotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "NodeRegisteredWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("REGISTRATION_FAILED"),
        [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("NodeRegisteredWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeNode(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilNodeRegistered");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSignalMapOutcome> WaitUntilSignalMapCreated(const Model::GetSignalMapRequest& request) {
    using OutcomeT = Model::GetSignalMapOutcome;
    using RequestT = Model::GetSignalMapRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATE_COMPLETE"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATE_IN_PROGRESS"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetSignalMap(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilSignalMapCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSignalMapOutcome> WaitUntilSignalMapMonitorDeleted(const Model::GetSignalMapRequest& request) {
    using OutcomeT = Model::GetSignalMapOutcome;
    using RequestT = Model::GetSignalMapRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapMonitorDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETE_COMPLETE"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                     result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapMonitorDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETE_IN_PROGRESS"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                     result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapMonitorDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                     result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetSignalMap(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilSignalMapMonitorDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSignalMapOutcome> WaitUntilSignalMapMonitorDeployed(const Model::GetSignalMapRequest& request) {
    using OutcomeT = Model::GetSignalMapOutcome;
    using RequestT = Model::GetSignalMapRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapMonitorDeployedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DRY_RUN_DEPLOYMENT_COMPLETE"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                     result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapMonitorDeployedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DEPLOYMENT_COMPLETE"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                     result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapMonitorDeployedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DRY_RUN_DEPLOYMENT_IN_PROGRESS"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                     result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapMonitorDeployedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DEPLOYMENT_IN_PROGRESS"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                     result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapMonitorDeployedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DRY_RUN_DEPLOYMENT_FAILED"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                     result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapMonitorDeployedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DEPLOYMENT_FAILED"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                     result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetSignalMap(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilSignalMapMonitorDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSignalMapOutcome> WaitUntilSignalMapUpdated(const Model::GetSignalMapRequest& request) {
    using OutcomeT = Model::GetSignalMapOutcome;
    using RequestT = Model::GetSignalMapRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapUpdatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UPDATE_COMPLETE"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapUpdatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATE_IN_PROGRESS"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapUpdatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_FAILED"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SignalMapUpdatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_REVERTED"),
        [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetSignalMap(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilSignalMapUpdated");
    return waiter.Wait(request);
  }
};
}  // namespace MediaLive
}  // namespace Aws
