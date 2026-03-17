/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::GetInboundExternalLinkOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("REJECTED"),
                         [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ISOLATED"),
                         [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetInboundExternalLinkRequest& req) {
      return static_cast<DerivedClient*>(this)->GetInboundExternalLink(req);
    };
    Aws::Utils::Waiter<Model::GetInboundExternalLinkRequest, Model::GetInboundExternalLinkOutcome> waiter(
        30, 4, acceptors, operation, "WaitUntilInboundExternalLinkActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetLinkOutcome> WaitUntilLinkAccepted(const Model::GetLinkRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetLinkOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACCEPTED"),
                         [](const Model::GetLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("REJECTED"),
                         [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetLinkRequest& req) { return static_cast<DerivedClient*>(this)->GetLink(req); };
    Aws::Utils::Waiter<Model::GetLinkRequest, Model::GetLinkOutcome> waiter(30, 4, acceptors, operation, "WaitUntilLinkAccepted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetLinkOutcome> WaitUntilLinkActive(const Model::GetLinkRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetLinkOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("REJECTED"),
                         [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetLinkRequest& req) { return static_cast<DerivedClient*>(this)->GetLink(req); };
    Aws::Utils::Waiter<Model::GetLinkRequest, Model::GetLinkOutcome> waiter(30, 4, acceptors, operation, "WaitUntilLinkActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetOutboundExternalLinkOutcome> WaitUntilOutboundExternalLinkActive(
      const Model::GetOutboundExternalLinkRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetOutboundExternalLinkOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("REJECTED"),
                         [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ISOLATED"),
                         [](const Model::GetOutboundExternalLinkOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::LinkStatusMapper::GetNameForLinkStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetOutboundExternalLinkRequest& req) {
      return static_cast<DerivedClient*>(this)->GetOutboundExternalLink(req);
    };
    Aws::Utils::Waiter<Model::GetOutboundExternalLinkRequest, Model::GetOutboundExternalLinkOutcome> waiter(
        30, 4, acceptors, operation, "WaitUntilOutboundExternalLinkActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRequesterGatewayOutcome> WaitUntilRequesterGatewayActive(
      const Model::GetRequesterGatewayRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRequesterGatewayOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetRequesterGatewayRequest& req) {
      return static_cast<DerivedClient*>(this)->GetRequesterGateway(req);
    };
    Aws::Utils::Waiter<Model::GetRequesterGatewayRequest, Model::GetRequesterGatewayOutcome> waiter(30, 4, acceptors, operation,
                                                                                                    "WaitUntilRequesterGatewayActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRequesterGatewayOutcome> WaitUntilRequesterGatewayDeleted(
      const Model::GetRequesterGatewayRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRequesterGatewayOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetRequesterGatewayRequest& req) {
      return static_cast<DerivedClient*>(this)->GetRequesterGateway(req);
    };
    Aws::Utils::Waiter<Model::GetRequesterGatewayRequest, Model::GetRequesterGatewayOutcome> waiter(30, 4, acceptors, operation,
                                                                                                    "WaitUntilRequesterGatewayDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetResponderGatewayOutcome> WaitUntilResponderGatewayActive(
      const Model::GetResponderGatewayRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetResponderGatewayOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetResponderGatewayRequest& req) {
      return static_cast<DerivedClient*>(this)->GetResponderGateway(req);
    };
    Aws::Utils::Waiter<Model::GetResponderGatewayRequest, Model::GetResponderGatewayOutcome> waiter(30, 4, acceptors, operation,
                                                                                                    "WaitUntilResponderGatewayActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetResponderGatewayOutcome> WaitUntilResponderGatewayDeleted(
      const Model::GetResponderGatewayRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetResponderGatewayOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ERROR"),
                         [](const Model::GetResponderGatewayOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ResponderGatewayStatusMapper::GetNameForResponderGatewayStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetResponderGatewayRequest& req) {
      return static_cast<DerivedClient*>(this)->GetResponderGateway(req);
    };
    Aws::Utils::Waiter<Model::GetResponderGatewayRequest, Model::GetResponderGatewayOutcome> waiter(30, 4, acceptors, operation,
                                                                                                    "WaitUntilResponderGatewayDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace RTBFabric
}  // namespace Aws
