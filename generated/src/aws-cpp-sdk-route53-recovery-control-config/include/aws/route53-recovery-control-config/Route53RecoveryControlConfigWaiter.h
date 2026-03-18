/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::DescribeClusterOutcome;
    using RequestT = Model::DescribeClusterRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DEPLOYED"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("PENDING"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ClusterCreatedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilClusterCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterOutcome> WaitUntilClusterDeleted(const Model::DescribeClusterRequest& request) {
    using OutcomeT = Model::DescribeClusterOutcome;
    using RequestT = Model::DescribeClusterRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ClusterDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("PENDING_DELETION"),
        [](const Model::DescribeClusterOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetCluster().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ClusterDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCluster(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeControlPanelOutcome> WaitUntilControlPanelCreated(
      const Model::DescribeControlPanelRequest& request) {
    using OutcomeT = Model::DescribeControlPanelOutcome;
    using RequestT = Model::DescribeControlPanelRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ControlPanelCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DEPLOYED"),
        [](const Model::DescribeControlPanelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetControlPanel().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ControlPanelCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("PENDING"),
        [](const Model::DescribeControlPanelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetControlPanel().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ControlPanelCreatedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeControlPanel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilControlPanelCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeControlPanelOutcome> WaitUntilControlPanelDeleted(
      const Model::DescribeControlPanelRequest& request) {
    using OutcomeT = Model::DescribeControlPanelOutcome;
    using RequestT = Model::DescribeControlPanelRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ControlPanelDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ControlPanelDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("PENDING_DELETION"),
        [](const Model::DescribeControlPanelOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetControlPanel().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ControlPanelDeletedWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InternalServerException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeControlPanel(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilControlPanelDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeRoutingControlOutcome> WaitUntilRoutingControlCreated(
      const Model::DescribeRoutingControlRequest& request) {
    using OutcomeT = Model::DescribeRoutingControlOutcome;
    using RequestT = Model::DescribeRoutingControlRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RoutingControlCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DEPLOYED"),
        [](const Model::DescribeRoutingControlOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetRoutingControl().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RoutingControlCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("PENDING"),
        [](const Model::DescribeRoutingControlOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetRoutingControl().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "RoutingControlCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InternalServerException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeRoutingControl(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilRoutingControlCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeRoutingControlOutcome> WaitUntilRoutingControlDeleted(
      const Model::DescribeRoutingControlRequest& request) {
    using OutcomeT = Model::DescribeRoutingControlOutcome;
    using RequestT = Model::DescribeRoutingControlRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "RoutingControlDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RoutingControlDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("PENDING_DELETION"),
        [](const Model::DescribeRoutingControlOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetRoutingControl().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "RoutingControlDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("InternalServerException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeRoutingControl(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilRoutingControlDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace Route53RecoveryControlConfig
}  // namespace Aws
