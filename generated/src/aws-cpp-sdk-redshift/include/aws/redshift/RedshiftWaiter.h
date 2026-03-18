/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/redshift/RedshiftClient.h>
#include <aws/redshift/model/DescribeClusterSnapshotsRequest.h>
#include <aws/redshift/model/DescribeClusterSnapshotsResult.h>
#include <aws/redshift/model/DescribeClustersRequest.h>
#include <aws/redshift/model/DescribeClustersResult.h>

#include <algorithm>

namespace Aws {
namespace Redshift {

template <typename DerivedClient = RedshiftClient>
class RedshiftWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeClustersOutcome> WaitUntilClusterAvailable(const Model::DescribeClustersRequest& request) {
    using OutcomeT = Model::DescribeClustersOutcome;
    using RequestT = Model::DescribeClustersRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetClusters().begin(), result.GetClusters().end(),
                             [&](const Model::Cluster& item) { return item.GetClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetClusters().begin(), result.GetClusters().end(),
                             [&](const Model::Cluster& item) { return item.GetClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ClusterAvailableWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ClusterNotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeClusters(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 2, std::move(acceptors), operation, "WaitUntilClusterAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClustersOutcome> WaitUntilClusterDeleted(const Model::DescribeClustersRequest& request) {
    using OutcomeT = Model::DescribeClustersOutcome;
    using RequestT = Model::DescribeClustersRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("ClusterDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ClusterNotFound")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetClusters().begin(), result.GetClusters().end(),
                             [&](const Model::Cluster& item) { return item.GetClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetClusters().begin(), result.GetClusters().end(),
                             [&](const Model::Cluster& item) { return item.GetClusterStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeClusters(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 2, std::move(acceptors), operation, "WaitUntilClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClustersOutcome> WaitUntilClusterRestored(const Model::DescribeClustersRequest& request) {
    using OutcomeT = Model::DescribeClustersOutcome;
    using RequestT = Model::DescribeClustersRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterRestoredWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("completed"),
        [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetClusters().begin(), result.GetClusters().end(), [&](const Model::Cluster& item) {
            return item.GetRestoreStatus().GetStatus() == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ClusterRestoredWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetClusters().begin(), result.GetClusters().end(),
                             [&](const Model::Cluster& item) { return item.GetClusterStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeClusters(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 2, std::move(acceptors), operation, "WaitUntilClusterRestored");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterSnapshotsOutcome> WaitUntilSnapshotAvailable(
      const Model::DescribeClusterSnapshotsRequest& request) {
    using OutcomeT = Model::DescribeClusterSnapshotsOutcome;
    using RequestT = Model::DescribeClusterSnapshotsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SnapshotAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetSnapshots().begin(), result.GetSnapshots().end(),
                             [&](const Model::Snapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetSnapshots().begin(), result.GetSnapshots().end(),
                             [&](const Model::Snapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetSnapshots().begin(), result.GetSnapshots().end(),
                             [&](const Model::Snapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeClusterSnapshots(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilSnapshotAvailable");
    return waiter.Wait(request);
  }
};
}  // namespace Redshift
}  // namespace Aws
