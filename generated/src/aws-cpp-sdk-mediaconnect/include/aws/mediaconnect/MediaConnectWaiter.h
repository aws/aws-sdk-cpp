/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::DescribeFlowOutcome;
    using RequestT = Model::DescribeFlowRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FlowActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FlowActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STARTING"),
        [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FlowActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FlowActiveWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FlowActiveWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ServiceUnavailableException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FlowActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("STANDBY"),
        [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FlowActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFlow(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilFlowActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFlowOutcome> WaitUntilFlowDeleted(const Model::DescribeFlowRequest& request) {
    using OutcomeT = Model::DescribeFlowOutcome;
    using RequestT = Model::DescribeFlowRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FlowDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("NotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FlowDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FlowDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FlowDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ServiceUnavailableException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FlowDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFlow(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilFlowDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFlowOutcome> WaitUntilFlowStandby(const Model::DescribeFlowRequest& request) {
    using OutcomeT = Model::DescribeFlowOutcome;
    using RequestT = Model::DescribeFlowRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FlowStandbyWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("STANDBY"),
        [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FlowStandbyWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STOPPING"),
        [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FlowStandbyWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("FlowStandbyWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ServiceUnavailableException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FlowStandbyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::DescribeFlowOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetFlow().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFlow(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilFlowStandby");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterInputOutcome> WaitUntilInputStandby(const Model::GetRouterInputRequest& request) {
    using OutcomeT = Model::GetRouterInputOutcome;
    using RequestT = Model::GetRouterInputRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputStandbyWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("STANDBY"),
        [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputStandbyWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STOPPING"),
        [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InputStandbyWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InputStandbyWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ServiceUnavailableException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputStandbyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRouterInput(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilInputStandby");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterInputOutcome> WaitUntilInputDeleted(const Model::GetRouterInputRequest& request) {
    using OutcomeT = Model::GetRouterInputOutcome;
    using RequestT = Model::GetRouterInputRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InputDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InputDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ServiceUnavailableException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InputDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("NotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRouterInput(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilInputDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterInputOutcome> WaitUntilInputActive(const Model::GetRouterInputRequest& request) {
    using OutcomeT = Model::GetRouterInputOutcome;
    using RequestT = Model::GetRouterInputRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STARTING"),
        [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("MIGRATING"),
        [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InputActiveWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InputActiveWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ServiceUnavailableException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InputActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetRouterInputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterInputStateMapper::GetNameForRouterInputState(result.GetRouterInput().GetState()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRouterInput(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilInputActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterOutputOutcome> WaitUntilOutputUnrouted(const Model::GetRouterOutputRequest& request) {
    using OutcomeT = Model::GetRouterOutputOutcome;
    using RequestT = Model::GetRouterOutputRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputUnroutedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("UNROUTED"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputRoutedStateMapper::GetNameForRouterOutputRoutedState(result.GetRouterOutput().GetRoutedState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputUnroutedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("ROUTING"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputRoutedStateMapper::GetNameForRouterOutputRoutedState(result.GetRouterOutput().GetRoutedState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("OutputUnroutedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("OutputUnroutedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ServiceUnavailableException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRouterOutput(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilOutputUnrouted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterOutputOutcome> WaitUntilOutputDeleted(const Model::GetRouterOutputRequest& request) {
    using OutcomeT = Model::GetRouterOutputOutcome;
    using RequestT = Model::GetRouterOutputRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("OutputDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("OutputDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ServiceUnavailableException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("OutputDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("NotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRouterOutput(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilOutputDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterOutputOutcome> WaitUntilOutputActive(const Model::GetRouterOutputRequest& request) {
    using OutcomeT = Model::GetRouterOutputOutcome;
    using RequestT = Model::GetRouterOutputRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STARTING"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("MIGRATING"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("OutputActiveWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("OutputActiveWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ServiceUnavailableException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRouterOutput(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilOutputActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterOutputOutcome> WaitUntilOutputStandby(const Model::GetRouterOutputRequest& request) {
    using OutcomeT = Model::GetRouterOutputOutcome;
    using RequestT = Model::GetRouterOutputRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputStandbyWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("STANDBY"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputStandbyWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STOPPING"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("OutputStandbyWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("OutputStandbyWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ServiceUnavailableException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputStandbyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputStateMapper::GetNameForRouterOutputState(result.GetRouterOutput().GetState()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRouterOutput(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilOutputStandby");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRouterOutputOutcome> WaitUntilOutputRouted(const Model::GetRouterOutputRequest& request) {
    using OutcomeT = Model::GetRouterOutputOutcome;
    using RequestT = Model::GetRouterOutputRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputRoutedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ROUTED"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputRoutedStateMapper::GetNameForRouterOutputRoutedState(result.GetRouterOutput().GetRoutedState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutputRoutedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("ROUTING"),
        [](const Model::GetRouterOutputOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RouterOutputRoutedStateMapper::GetNameForRouterOutputRoutedState(result.GetRouterOutput().GetRoutedState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("OutputRoutedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerErrorException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("OutputRoutedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ServiceUnavailableException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRouterOutput(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 40, std::move(acceptors), operation, "WaitUntilOutputRouted");
    return waiter.Wait(request);
  }
};
}  // namespace MediaConnect
}  // namespace Aws
