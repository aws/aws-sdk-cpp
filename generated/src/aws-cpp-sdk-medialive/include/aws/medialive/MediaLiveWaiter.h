/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/medialive/MediaLiveClient.h>
#include <aws/medialive/model/ChannelPlacementGroupState.h>
#include <aws/medialive/model/ChannelState.h>
#include <aws/medialive/model/ClusterState.h>
#include <aws/medialive/model/DescribeChannelPlacementGroupRequest.h>
#include <aws/medialive/model/DescribeChannelPlacementGroupResult.h>
#include <aws/medialive/model/DescribeChannelRequest.h>
#include <aws/medialive/model/DescribeChannelResult.h>
#include <aws/medialive/model/DescribeClusterRequest.h>
#include <aws/medialive/model/DescribeClusterResult.h>
#include <aws/medialive/model/DescribeInputRequest.h>
#include <aws/medialive/model/DescribeInputResult.h>
#include <aws/medialive/model/DescribeMultiplexRequest.h>
#include <aws/medialive/model/DescribeMultiplexResult.h>
#include <aws/medialive/model/DescribeNodeRequest.h>
#include <aws/medialive/model/DescribeNodeResult.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeChannelOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("IDLE"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeChannelRequest& req) { return static_cast<DerivedClient*>(this)->DescribeChannel(req); };
    Aws::Utils::Waiter<Model::DescribeChannelRequest, Model::DescribeChannelOutcome> waiter(3, 40, acceptors, operation,
                                                                                            "WaitUntilChannelCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelOutcome> WaitUntilChannelDeleted(const Model::DescribeChannelRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeChannelOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeChannelRequest& req) { return static_cast<DerivedClient*>(this)->DescribeChannel(req); };
    Aws::Utils::Waiter<Model::DescribeChannelRequest, Model::DescribeChannelOutcome> waiter(5, 24, acceptors, operation,
                                                                                            "WaitUntilChannelDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelOutcome> WaitUntilChannelRunning(const Model::DescribeChannelRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeChannelOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("RUNNING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STARTING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeChannelRequest& req) { return static_cast<DerivedClient*>(this)->DescribeChannel(req); };
    Aws::Utils::Waiter<Model::DescribeChannelRequest, Model::DescribeChannelOutcome> waiter(5, 24, acceptors, operation,
                                                                                            "WaitUntilChannelRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelOutcome> WaitUntilChannelStopped(const Model::DescribeChannelRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeChannelOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("IDLE"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STOPPING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeChannelRequest& req) { return static_cast<DerivedClient*>(this)->DescribeChannel(req); };
    Aws::Utils::Waiter<Model::DescribeChannelRequest, Model::DescribeChannelOutcome> waiter(5, 24, acceptors, operation,
                                                                                            "WaitUntilChannelStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelPlacementGroupOutcome> WaitUntilChannelPlacementGroupAssigned(
      const Model::DescribeChannelPlacementGroupRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeChannelPlacementGroupOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ASSIGNED"),
                         [](const Model::DescribeChannelPlacementGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChannelPlacementGroupStateMapper::GetNameForChannelPlacementGroupState(result.GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("ASSIGNING"),
                         [](const Model::DescribeChannelPlacementGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChannelPlacementGroupStateMapper::GetNameForChannelPlacementGroupState(result.GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeChannelPlacementGroupRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeChannelPlacementGroup(req);
    };
    Aws::Utils::Waiter<Model::DescribeChannelPlacementGroupRequest, Model::DescribeChannelPlacementGroupOutcome> waiter(
        3, 40, acceptors, operation, "WaitUntilChannelPlacementGroupAssigned");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelPlacementGroupOutcome> WaitUntilChannelPlacementGroupDeleted(
      const Model::DescribeChannelPlacementGroupRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeChannelPlacementGroupOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeChannelPlacementGroupRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeChannelPlacementGroup(req);
    };
    Aws::Utils::Waiter<Model::DescribeChannelPlacementGroupRequest, Model::DescribeChannelPlacementGroupOutcome> waiter(
        5, 24, acceptors, operation, "WaitUntilChannelPlacementGroupDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeChannelPlacementGroupOutcome> WaitUntilChannelPlacementGroupUnassigned(
      const Model::DescribeChannelPlacementGroupRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeChannelPlacementGroupOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UNASSIGNED"),
                         [](const Model::DescribeChannelPlacementGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChannelPlacementGroupStateMapper::GetNameForChannelPlacementGroupState(result.GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UNASSIGNING"),
                         [](const Model::DescribeChannelPlacementGroupOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ChannelPlacementGroupStateMapper::GetNameForChannelPlacementGroupState(result.GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeChannelPlacementGroupRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeChannelPlacementGroup(req);
    };
    Aws::Utils::Waiter<Model::DescribeChannelPlacementGroupRequest, Model::DescribeChannelPlacementGroupOutcome> waiter(
        5, 24, acceptors, operation, "WaitUntilChannelPlacementGroupUnassigned");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterCreated(const Model::DescribeClusterRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeClusterOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeClusterRequest& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<Model::DescribeClusterRequest, Model::DescribeClusterOutcome> waiter(3, 40, acceptors, operation,
                                                                                            "WaitUntilClusterCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterDeleted(const Model::DescribeClusterRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeClusterOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeClusterRequest& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<Model::DescribeClusterRequest, Model::DescribeClusterOutcome> waiter(5, 24, acceptors, operation,
                                                                                            "WaitUntilClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInputOutcome> WaitUntilInputAttached(const Model::DescribeInputRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeInputOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ATTACHED"),
                         [](const Model::DescribeInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::InputStateMapper::GetNameForInputState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DETACHED"),
                         [](const Model::DescribeInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::InputStateMapper::GetNameForInputState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeInputRequest& req) { return static_cast<DerivedClient*>(this)->DescribeInput(req); };
    Aws::Utils::Waiter<Model::DescribeInputRequest, Model::DescribeInputOutcome> waiter(5, 24, acceptors, operation,
                                                                                        "WaitUntilInputAttached");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInputOutcome> WaitUntilInputDeleted(const Model::DescribeInputRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeInputOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeInputRequest& req) { return static_cast<DerivedClient*>(this)->DescribeInput(req); };
    Aws::Utils::Waiter<Model::DescribeInputRequest, Model::DescribeInputOutcome> waiter(5, 24, acceptors, operation,
                                                                                        "WaitUntilInputDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInputOutcome> WaitUntilInputDetached(const Model::DescribeInputRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeInputOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DETACHED"),
                         [](const Model::DescribeInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::InputStateMapper::GetNameForInputState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("ATTACHED"),
                         [](const Model::DescribeInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::InputStateMapper::GetNameForInputState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeInputRequest& req) { return static_cast<DerivedClient*>(this)->DescribeInput(req); };
    Aws::Utils::Waiter<Model::DescribeInputRequest, Model::DescribeInputOutcome> waiter(5, 24, acceptors, operation,
                                                                                        "WaitUntilInputDetached");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMultiplexOutcome> WaitUntilMultiplexCreated(const Model::DescribeMultiplexRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeMultiplexOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("IDLE"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeMultiplexRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeMultiplex(req);
    };
    Aws::Utils::Waiter<Model::DescribeMultiplexRequest, Model::DescribeMultiplexOutcome> waiter(3, 40, acceptors, operation,
                                                                                                "WaitUntilMultiplexCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMultiplexOutcome> WaitUntilMultiplexDeleted(const Model::DescribeMultiplexRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeMultiplexOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeMultiplexRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeMultiplex(req);
    };
    Aws::Utils::Waiter<Model::DescribeMultiplexRequest, Model::DescribeMultiplexOutcome> waiter(5, 24, acceptors, operation,
                                                                                                "WaitUntilMultiplexDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMultiplexOutcome> WaitUntilMultiplexRunning(const Model::DescribeMultiplexRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeMultiplexOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("RUNNING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STARTING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeMultiplexRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeMultiplex(req);
    };
    Aws::Utils::Waiter<Model::DescribeMultiplexRequest, Model::DescribeMultiplexOutcome> waiter(5, 24, acceptors, operation,
                                                                                                "WaitUntilMultiplexRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeMultiplexOutcome> WaitUntilMultiplexStopped(const Model::DescribeMultiplexRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeMultiplexOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("IDLE"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STOPPING"),
                         [](const Model::DescribeMultiplexOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::MultiplexStateMapper::GetNameForMultiplexState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeMultiplexRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeMultiplex(req);
    };
    Aws::Utils::Waiter<Model::DescribeMultiplexRequest, Model::DescribeMultiplexOutcome> waiter(5, 24, acceptors, operation,
                                                                                                "WaitUntilMultiplexStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNodeOutcome> WaitUntilNodeDeregistered(const Model::DescribeNodeRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeNodeOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DEREGISTERED"),
                         [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DEREGISTERING"),
                         [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DRAINING"),
                         [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeNodeRequest& req) { return static_cast<DerivedClient*>(this)->DescribeNode(req); };
    Aws::Utils::Waiter<Model::DescribeNodeRequest, Model::DescribeNodeOutcome> waiter(5, 24, acceptors, operation,
                                                                                      "WaitUntilNodeDeregistered");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeNodeOutcome> WaitUntilNodeRegistered(const Model::DescribeNodeRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeNodeOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("REGISTERING"),
                         [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("NotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("REGISTRATION_FAILED"),
                         [](const Model::DescribeNodeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::NodeStateMapper::GetNameForNodeState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});

    auto operation = [this](const Model::DescribeNodeRequest& req) { return static_cast<DerivedClient*>(this)->DescribeNode(req); };
    Aws::Utils::Waiter<Model::DescribeNodeRequest, Model::DescribeNodeOutcome> waiter(3, 40, acceptors, operation,
                                                                                      "WaitUntilNodeRegistered");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSignalMapOutcome> WaitUntilSignalMapCreated(const Model::GetSignalMapRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetSignalMapOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_COMPLETE"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_IN_PROGRESS"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetSignalMapRequest& req) { return static_cast<DerivedClient*>(this)->GetSignalMap(req); };
    Aws::Utils::Waiter<Model::GetSignalMapRequest, Model::GetSignalMapOutcome> waiter(5, 24, acceptors, operation,
                                                                                      "WaitUntilSignalMapCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSignalMapOutcome> WaitUntilSignalMapMonitorDeleted(const Model::GetSignalMapRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetSignalMapOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_COMPLETE"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                                      result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_IN_PROGRESS"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                                      result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETE_FAILED"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                                      result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetSignalMapRequest& req) { return static_cast<DerivedClient*>(this)->GetSignalMap(req); };
    Aws::Utils::Waiter<Model::GetSignalMapRequest, Model::GetSignalMapOutcome> waiter(5, 24, acceptors, operation,
                                                                                      "WaitUntilSignalMapMonitorDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSignalMapOutcome> WaitUntilSignalMapMonitorDeployed(const Model::GetSignalMapRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetSignalMapOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DRY_RUN_DEPLOYMENT_COMPLETE"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                                      result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DEPLOYMENT_COMPLETE"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                                      result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DRY_RUN_DEPLOYMENT_IN_PROGRESS"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                                      result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DEPLOYMENT_IN_PROGRESS"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                                      result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DRY_RUN_DEPLOYMENT_FAILED"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                                      result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DEPLOYMENT_FAILED"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapMonitorDeploymentStatusMapper::GetNameForSignalMapMonitorDeploymentStatus(
                                      result.GetMonitorDeployment().GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetSignalMapRequest& req) { return static_cast<DerivedClient*>(this)->GetSignalMap(req); };
    Aws::Utils::Waiter<Model::GetSignalMapRequest, Model::GetSignalMapOutcome> waiter(5, 24, acceptors, operation,
                                                                                      "WaitUntilSignalMapMonitorDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSignalMapOutcome> WaitUntilSignalMapUpdated(const Model::GetSignalMapRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetSignalMapOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_COMPLETE"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_IN_PROGRESS"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_FAILED"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("UPDATE_REVERTED"),
                         [](const Model::GetSignalMapOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SignalMapStatusMapper::GetNameForSignalMapStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetSignalMapRequest& req) { return static_cast<DerivedClient*>(this)->GetSignalMap(req); };
    Aws::Utils::Waiter<Model::GetSignalMapRequest, Model::GetSignalMapOutcome> waiter(5, 24, acceptors, operation,
                                                                                      "WaitUntilSignalMapUpdated");
    return waiter.Wait(request);
  }
};
}  // namespace MediaLive
}  // namespace Aws
