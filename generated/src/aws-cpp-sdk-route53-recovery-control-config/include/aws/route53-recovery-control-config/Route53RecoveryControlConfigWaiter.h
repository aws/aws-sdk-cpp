/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigClient.h>
#include <aws/route53-recovery-control-config/model/DescribeClusterRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeClusterResult.h>
#include <aws/route53-recovery-control-config/model/DescribeControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/DescribeRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/Status.h>

#include <algorithm>

namespace Aws {
namespace Route53RecoveryControlConfig {

template <typename DerivedClient = Route53RecoveryControlConfigClient>
class Route53RecoveryControlConfigWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterCreated(const Model::DescribeClusterRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeClusterOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DEPLOYED"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("PENDING"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerException")});

    auto operation = [this](const Model::DescribeClusterRequest& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<Model::DescribeClusterRequest, Model::DescribeClusterOutcome> waiter(5, 24, acceptors, operation,
                                                                                            "WaitUntilClusterCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterDeleted(const Model::DescribeClusterRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeClusterOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("PENDING_DELETION"),
                         [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerException")});

    auto operation = [this](const Model::DescribeClusterRequest& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<Model::DescribeClusterRequest, Model::DescribeClusterOutcome> waiter(5, 24, acceptors, operation,
                                                                                            "WaitUntilClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeControlPanelOutcome> WaitUntilControlPanelCreated(
      const Model::DescribeControlPanelRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeControlPanelOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DEPLOYED"),
                         [](const Model::DescribeControlPanelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetControlPanel().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("PENDING"),
                         [](const Model::DescribeControlPanelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetControlPanel().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerException")});

    auto operation = [this](const Model::DescribeControlPanelRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeControlPanel(req);
    };
    Aws::Utils::Waiter<Model::DescribeControlPanelRequest, Model::DescribeControlPanelOutcome> waiter(5, 24, acceptors, operation,
                                                                                                      "WaitUntilControlPanelCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeControlPanelOutcome> WaitUntilControlPanelDeleted(
      const Model::DescribeControlPanelRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeControlPanelOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("PENDING_DELETION"),
                         [](const Model::DescribeControlPanelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetControlPanel().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerException")});

    auto operation = [this](const Model::DescribeControlPanelRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeControlPanel(req);
    };
    Aws::Utils::Waiter<Model::DescribeControlPanelRequest, Model::DescribeControlPanelOutcome> waiter(5, 24, acceptors, operation,
                                                                                                      "WaitUntilControlPanelDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeRoutingControlOutcome> WaitUntilRoutingControlCreated(
      const Model::DescribeRoutingControlRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeRoutingControlOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DEPLOYED"),
                         [](const Model::DescribeRoutingControlOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetRoutingControl().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("PENDING"),
                         [](const Model::DescribeRoutingControlOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetRoutingControl().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerException")});

    auto operation = [this](const Model::DescribeRoutingControlRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeRoutingControl(req);
    };
    Aws::Utils::Waiter<Model::DescribeRoutingControlRequest, Model::DescribeRoutingControlOutcome> waiter(5, 24, acceptors, operation,
                                                                                                          "WaitUntilRoutingControlCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeRoutingControlOutcome> WaitUntilRoutingControlDeleted(
      const Model::DescribeRoutingControlRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeRoutingControlOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("PENDING_DELETION"),
                         [](const Model::DescribeRoutingControlOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StatusMapper::GetNameForStatus(result.GetRoutingControl().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InternalServerException")});

    auto operation = [this](const Model::DescribeRoutingControlRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeRoutingControl(req);
    };
    Aws::Utils::Waiter<Model::DescribeRoutingControlRequest, Model::DescribeRoutingControlOutcome> waiter(5, 24, acceptors, operation,
                                                                                                          "WaitUntilRoutingControlDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
