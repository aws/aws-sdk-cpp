/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/mediaconnect/MediaConnectClient.h>
#include <aws/mediaconnect/model/DescribeFlowRequest.h>
#include <aws/mediaconnect/model/DescribeFlowResult.h>
#include <aws/mediaconnect/model/GetRouterInputRequest.h>
#include <aws/mediaconnect/model/GetRouterInputResult.h>
#include <aws/mediaconnect/model/GetRouterOutputRequest.h>
#include <aws/mediaconnect/model/GetRouterOutputResult.h>
#include <aws/mediaconnect/model/RouterInputState.h>
#include <aws/mediaconnect/model/RouterOutputRoutedState.h>
#include <aws/mediaconnect/model/RouterOutputState.h>
#include <aws/mediaconnect/model/Status.h>

#include <algorithm>

namespace Aws {
namespace MediaConnect {

template <typename DerivedClient = MediaConnectClient>
class MediaConnectWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeFlowOutcome> WaitUntilFlowActive(const Model::DescribeFlowRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeFlowOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STARTING"),
                         [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATING"),
                         [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ServiceUnavailableException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("STANDBY"),
                         [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeFlowRequest& req) { return static_cast<DerivedClient*>(this)->DescribeFlow(req); };
    Aws::Utils::Waiter<Model::DescribeFlowRequest, Model::DescribeFlowOutcome> waiter(3, 40, acceptors, operation, "WaitUntilFlowActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFlowOutcome> WaitUntilFlowDeleted(const Model::DescribeFlowRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeFlowOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("NotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ServiceUnavailableException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeFlowRequest& req) { return static_cast<DerivedClient*>(this)->DescribeFlow(req); };
    Aws::Utils::Waiter<Model::DescribeFlowRequest, Model::DescribeFlowOutcome> waiter(3, 40, acceptors, operation, "WaitUntilFlowDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFlowOutcome> WaitUntilFlowStandby(const Model::DescribeFlowRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeFlowOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("STANDBY"),
                         [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STOPPING"),
                         [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ServiceUnavailableException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeFlowRequest& req) { return static_cast<DerivedClient*>(this)->DescribeFlow(req); };
    Aws::Utils::Waiter<Model::DescribeFlowRequest, Model::DescribeFlowOutcome> waiter(3, 40, acceptors, operation, "WaitUntilFlowStandby");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterInputOutcome> WaitUntilInputStandby(const Model::GetRouterInputRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRouterInputOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("STANDBY"),
                         [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STOPPING"),
                         [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ServiceUnavailableException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetRouterInputRequest& req) { return static_cast<DerivedClient*>(this)->GetRouterInput(req); };
    Aws::Utils::Waiter<Model::GetRouterInputRequest, Model::GetRouterInputOutcome> waiter(3, 40, acceptors, operation,
                                                                                          "WaitUntilInputStandby");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterInputOutcome> WaitUntilInputDeleted(const Model::GetRouterInputRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRouterInputOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ServiceUnavailableException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("NotFoundException")});

    auto operation = [this](const Model::GetRouterInputRequest& req) { return static_cast<DerivedClient*>(this)->GetRouterInput(req); };
    Aws::Utils::Waiter<Model::GetRouterInputRequest, Model::GetRouterInputOutcome> waiter(3, 40, acceptors, operation,
                                                                                          "WaitUntilInputDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterInputOutcome> WaitUntilInputActive(const Model::GetRouterInputRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRouterInputOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STARTING"),
                         [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATING"),
                         [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("MIGRATING"),
                         [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ServiceUnavailableException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetRouterInputRequest& req) { return static_cast<DerivedClient*>(this)->GetRouterInput(req); };
    Aws::Utils::Waiter<Model::GetRouterInputRequest, Model::GetRouterInputOutcome> waiter(3, 40, acceptors, operation,
                                                                                          "WaitUntilInputActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterOutputOutcome> WaitUntilOutputUnrouted(const Model::GetRouterOutputRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRouterOutputOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("UNROUTED"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputRoutedStateMapper::GetNameForRouterOutputRoutedState(
                                      result.GetRouterOutput().GetRoutedState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("ROUTING"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputRoutedStateMapper::GetNameForRouterOutputRoutedState(
                                      result.GetRouterOutput().GetRoutedState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ServiceUnavailableException")});

    auto operation = [this](const Model::GetRouterOutputRequest& req) { return static_cast<DerivedClient*>(this)->GetRouterOutput(req); };
    Aws::Utils::Waiter<Model::GetRouterOutputRequest, Model::GetRouterOutputOutcome> waiter(3, 40, acceptors, operation,
                                                                                            "WaitUntilOutputUnrouted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterOutputOutcome> WaitUntilOutputDeleted(const Model::GetRouterOutputRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRouterOutputOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ServiceUnavailableException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("NotFoundException")});

    auto operation = [this](const Model::GetRouterOutputRequest& req) { return static_cast<DerivedClient*>(this)->GetRouterOutput(req); };
    Aws::Utils::Waiter<Model::GetRouterOutputRequest, Model::GetRouterOutputOutcome> waiter(3, 40, acceptors, operation,
                                                                                            "WaitUntilOutputDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterOutputOutcome> WaitUntilOutputActive(const Model::GetRouterOutputRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRouterOutputOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STARTING"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATING"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("MIGRATING"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ServiceUnavailableException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetRouterOutputRequest& req) { return static_cast<DerivedClient*>(this)->GetRouterOutput(req); };
    Aws::Utils::Waiter<Model::GetRouterOutputRequest, Model::GetRouterOutputOutcome> waiter(3, 40, acceptors, operation,
                                                                                            "WaitUntilOutputActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterOutputOutcome> WaitUntilOutputStandby(const Model::GetRouterOutputRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRouterOutputOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("STANDBY"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STOPPING"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ServiceUnavailableException")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetRouterOutputRequest& req) { return static_cast<DerivedClient*>(this)->GetRouterOutput(req); };
    Aws::Utils::Waiter<Model::GetRouterOutputRequest, Model::GetRouterOutputOutcome> waiter(3, 40, acceptors, operation,
                                                                                            "WaitUntilOutputStandby");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterOutputOutcome> WaitUntilOutputRouted(const Model::GetRouterOutputRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRouterOutputOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ROUTED"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputRoutedStateMapper::GetNameForRouterOutputRoutedState(
                                      result.GetRouterOutput().GetRoutedState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("ROUTING"),
                         [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::RouterOutputRoutedStateMapper::GetNameForRouterOutputRoutedState(
                                      result.GetRouterOutput().GetRoutedState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerErrorException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ServiceUnavailableException")});

    auto operation = [this](const Model::GetRouterOutputRequest& req) { return static_cast<DerivedClient*>(this)->GetRouterOutput(req); };
    Aws::Utils::Waiter<Model::GetRouterOutputRequest, Model::GetRouterOutputOutcome> waiter(3, 40, acceptors, operation,
                                                                                            "WaitUntilOutputRouted");
    return waiter.Wait(request);
  }
};
}  // namespace MediaConnect
}  // namespace Aws
