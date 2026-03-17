/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeClustersOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetClusters().begin(), result.GetClusters().end(), [&](const Model::Cluster& item) {
                             return item.GetClusterStatus() == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetClusters().begin(), result.GetClusters().end(), [&](const Model::Cluster& item) {
                             return item.GetClusterStatus() == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("ClusterNotFound")});

    auto operation = [this](const Model::DescribeClustersRequest& req) { return static_cast<DerivedClient*>(this)->DescribeClusters(req); };
    Aws::Utils::Waiter<Model::DescribeClustersRequest, Model::DescribeClustersOutcome> waiter(60, 2, acceptors, operation,
                                                                                              "WaitUntilClusterAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClustersOutcome> WaitUntilClusterDeleted(const Model::DescribeClustersRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeClustersOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ClusterNotFound")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("creating"),
                         [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetClusters().begin(), result.GetClusters().end(), [&](const Model::Cluster& item) {
                             return item.GetClusterStatus() == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("modifying"),
                         [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetClusters().begin(), result.GetClusters().end(), [&](const Model::Cluster& item) {
                             return item.GetClusterStatus() == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeClustersRequest& req) { return static_cast<DerivedClient*>(this)->DescribeClusters(req); };
    Aws::Utils::Waiter<Model::DescribeClustersRequest, Model::DescribeClustersOutcome> waiter(60, 2, acceptors, operation,
                                                                                              "WaitUntilClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClustersOutcome> WaitUntilClusterRestored(const Model::DescribeClustersRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeClustersOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("completed"),
                         [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetClusters().begin(), result.GetClusters().end(), [&](const Model::Cluster& item) {
                             return item.GetRestoreStatus().GetStatus() == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetClusters().begin(), result.GetClusters().end(), [&](const Model::Cluster& item) {
                             return item.GetClusterStatus() == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeClustersRequest& req) { return static_cast<DerivedClient*>(this)->DescribeClusters(req); };
    Aws::Utils::Waiter<Model::DescribeClustersRequest, Model::DescribeClustersOutcome> waiter(60, 2, acceptors, operation,
                                                                                              "WaitUntilClusterRestored");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeClusterSnapshotsOutcome> WaitUntilSnapshotAvailable(
      const Model::DescribeClusterSnapshotsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeClusterSnapshotsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetSnapshots().begin(), result.GetSnapshots().end(),
                                              [&](const Model::Snapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetSnapshots().begin(), result.GetSnapshots().end(),
                                              [&](const Model::Snapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetSnapshots().begin(), result.GetSnapshots().end(),
                                              [&](const Model::Snapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeClusterSnapshotsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeClusterSnapshots(req);
    };
    Aws::Utils::Waiter<Model::DescribeClusterSnapshotsRequest, Model::DescribeClusterSnapshotsOutcome> waiter(15, 8, acceptors, operation,
                                                                                                              "WaitUntilSnapshotAvailable");
    return waiter.Wait(request);
  }
};
}  // namespace Redshift
}  // namespace Aws
