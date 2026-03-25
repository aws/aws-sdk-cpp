/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/rtbfabric/RTBFabricClient.h>
#include <aws/rtbfabric/model/GetInboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/GetInboundExternalLinkResult.h>
#include <aws/rtbfabric/model/GetLinkRequest.h>
#include <aws/rtbfabric/model/GetLinkResult.h>
#include <aws/rtbfabric/model/GetOutboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/GetOutboundExternalLinkResult.h>
#include <aws/rtbfabric/model/GetRequesterGatewayRequest.h>
#include <aws/rtbfabric/model/GetRequesterGatewayResult.h>
#include <aws/rtbfabric/model/GetResponderGatewayRequest.h>
#include <aws/rtbfabric/model/GetResponderGatewayResult.h>
#include <aws/rtbfabric/model/LinkStatus.h>
#include <aws/rtbfabric/model/RequesterGatewayStatus.h>
#include <aws/rtbfabric/model/ResponderGatewayStatus.h>

#include <algorithm>

namespace Aws {
namespace RTBFabric {

template <typename DerivedClient = RTBFabricClient>
class RTBFabricWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetInboundExternalLinkOutcome> WaitUntilInboundExternalLinkActive(
      const Model::GetInboundExternalLinkRequest& request) {
    using OutcomeT = Model::GetInboundExternalLinkOutcome;
    using RequestT = Model::GetInboundExternalLinkRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InboundExternalLinkActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetInboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InboundExternalLinkActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("REJECTED"),
        [](const Model::GetInboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InboundExternalLinkActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetInboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InboundExternalLinkActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETED"),
        [](const Model::GetInboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InboundExternalLinkActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ISOLATED"),
        [](const Model::GetInboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetInboundExternalLink(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilInboundExternalLinkActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetLinkOutcome> WaitUntilLinkAccepted(const Model::GetLinkRequest& request) {
    using OutcomeT = Model::GetLinkOutcome;
    using RequestT = Model::GetLinkRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LinkAcceptedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACCEPTED"),
        [](const Model::GetLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LinkAcceptedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("REJECTED"),
        [](const Model::GetLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LinkAcceptedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LinkAcceptedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETED"),
        [](const Model::GetLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetLink(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilLinkAccepted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetLinkOutcome> WaitUntilLinkActive(const Model::GetLinkRequest& request) {
    using OutcomeT = Model::GetLinkOutcome;
    using RequestT = Model::GetLinkRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LinkActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LinkActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("REJECTED"),
        [](const Model::GetLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LinkActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LinkActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETED"),
        [](const Model::GetLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetLink(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilLinkActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetOutboundExternalLinkOutcome> WaitUntilOutboundExternalLinkActive(
      const Model::GetOutboundExternalLinkRequest& request) {
    using OutcomeT = Model::GetOutboundExternalLinkOutcome;
    using RequestT = Model::GetOutboundExternalLinkRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutboundExternalLinkActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutboundExternalLinkActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("REJECTED"),
        [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutboundExternalLinkActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutboundExternalLinkActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETED"),
        [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "OutboundExternalLinkActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ISOLATED"),
        [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetOutboundExternalLink(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilOutboundExternalLinkActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRequesterGatewayOutcome> WaitUntilRequesterGatewayActive(
      const Model::GetRequesterGatewayRequest& request) {
    using OutcomeT = Model::GetRequesterGatewayOutcome;
    using RequestT = Model::GetRequesterGatewayRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RequesterGatewayActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetRequesterGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RequesterGatewayStatusMapper::GetNameForRequesterGatewayStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RequesterGatewayActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETED"),
        [](const Model::GetRequesterGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RequesterGatewayStatusMapper::GetNameForRequesterGatewayStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RequesterGatewayActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetRequesterGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RequesterGatewayStatusMapper::GetNameForRequesterGatewayStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRequesterGateway(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilRequesterGatewayActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRequesterGatewayOutcome> WaitUntilRequesterGatewayDeleted(
      const Model::GetRequesterGatewayRequest& request) {
    using OutcomeT = Model::GetRequesterGatewayOutcome;
    using RequestT = Model::GetRequesterGatewayRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RequesterGatewayDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::GetRequesterGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RequesterGatewayStatusMapper::GetNameForRequesterGatewayStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RequesterGatewayDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetRequesterGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RequesterGatewayStatusMapper::GetNameForRequesterGatewayStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRequesterGateway(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilRequesterGatewayDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetResponderGatewayOutcome> WaitUntilResponderGatewayActive(
      const Model::GetResponderGatewayRequest& request) {
    using OutcomeT = Model::GetResponderGatewayOutcome;
    using RequestT = Model::GetResponderGatewayRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ResponderGatewayActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ResponderGatewayActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETED"),
        [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ResponderGatewayActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetResponderGateway(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilResponderGatewayActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetResponderGatewayOutcome> WaitUntilResponderGatewayDeleted(
      const Model::GetResponderGatewayRequest& request) {
    using OutcomeT = Model::GetResponderGatewayOutcome;
    using RequestT = Model::GetResponderGatewayRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ResponderGatewayDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ResponderGatewayDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ERROR"),
        [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetResponderGateway(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilResponderGatewayDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace RTBFabric
}  // namespace Aws
