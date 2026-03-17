/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/rds/RDSClient.h>
#include <aws/rds/model/DescribeDBClusterSnapshotsRequest.h>
#include <aws/rds/model/DescribeDBClusterSnapshotsResult.h>
#include <aws/rds/model/DescribeDBClustersRequest.h>
#include <aws/rds/model/DescribeDBClustersResult.h>
#include <aws/rds/model/DescribeDBInstancesRequest.h>
#include <aws/rds/model/DescribeDBInstancesResult.h>
#include <aws/rds/model/DescribeDBSnapshotsRequest.h>
#include <aws/rds/model/DescribeDBSnapshotsResult.h>
#include <aws/rds/model/DescribeTenantDatabasesRequest.h>
#include <aws/rds/model/DescribeTenantDatabasesResult.h>

#include <algorithm>

namespace Aws {
namespace RDS {

template <typename DerivedClient = RDSClient>
class RDSWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeDBClustersOutcome> WaitUntilDBClusterAvailable(const Model::DescribeDBClustersRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeDBClustersOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetDBClusters().begin(), result.GetDBClusters().end(),
                               [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusters().begin(), result.GetDBClusters().end(),
                               [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusters().begin(), result.GetDBClusters().end(),
                               [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusters().begin(), result.GetDBClusters().end(),
                               [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-restore"),
                         [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusters().begin(), result.GetDBClusters().end(),
                               [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-parameters"),
                         [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusters().begin(), result.GetDBClusters().end(),
                               [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeDBClustersRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeDBClusters(req);
    };
    Aws::Utils::Waiter<Model::DescribeDBClustersRequest, Model::DescribeDBClustersOutcome> waiter(30, 60, acceptors, operation,
                                                                                                  "WaitUntilDBClusterAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBClustersOutcome> WaitUntilDBClusterDeleted(const Model::DescribeDBClustersRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeDBClustersOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetDBClusters().size() == 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("DBClusterNotFoundFault")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("creating"),
                         [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusters().begin(), result.GetDBClusters().end(),
                               [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("modifying"),
                         [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusters().begin(), result.GetDBClusters().end(),
                               [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("rebooting"),
                         [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusters().begin(), result.GetDBClusters().end(),
                               [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("resetting-master-credentials"),
                         [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusters().begin(), result.GetDBClusters().end(),
                               [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeDBClustersRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeDBClusters(req);
    };
    Aws::Utils::Waiter<Model::DescribeDBClustersRequest, Model::DescribeDBClustersOutcome> waiter(30, 60, acceptors, operation,
                                                                                                  "WaitUntilDBClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBClusterSnapshotsOutcome> WaitUntilDBClusterSnapshotAvailable(
      const Model::DescribeDBClusterSnapshotsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeDBClusterSnapshotsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                               [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                               [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                               [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                               [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-restore"),
                         [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                               [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-parameters"),
                         [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                               [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeDBClusterSnapshotsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeDBClusterSnapshots(req);
    };
    Aws::Utils::Waiter<Model::DescribeDBClusterSnapshotsRequest, Model::DescribeDBClusterSnapshotsOutcome> waiter(
        30, 60, acceptors, operation, "WaitUntilDBClusterSnapshotAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBClusterSnapshotsOutcome> WaitUntilDBClusterSnapshotDeleted(
      const Model::DescribeDBClusterSnapshotsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeDBClusterSnapshotsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetDBClusterSnapshots().size() == 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("DBClusterSnapshotNotFoundFault")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("creating"),
                         [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                               [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("modifying"),
                         [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                               [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("rebooting"),
                         [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                               [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("resetting-master-credentials"),
                         [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                               [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeDBClusterSnapshotsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeDBClusterSnapshots(req);
    };
    Aws::Utils::Waiter<Model::DescribeDBClusterSnapshotsRequest, Model::DescribeDBClusterSnapshotsOutcome> waiter(
        30, 60, acceptors, operation, "WaitUntilDBClusterSnapshotDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBInstancesOutcome> WaitUntilDBInstanceAvailable(
      const Model::DescribeDBInstancesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeDBInstancesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-restore"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-parameters"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeDBInstancesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeDBInstances(req);
    };
    Aws::Utils::Waiter<Model::DescribeDBInstancesRequest, Model::DescribeDBInstancesOutcome> waiter(30, 60, acceptors, operation,
                                                                                                    "WaitUntilDBInstanceAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBInstancesOutcome> WaitUntilDBInstanceDeleted(
      const Model::DescribeDBInstancesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeDBInstancesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetDBInstances().size() == 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("DBInstanceNotFound")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("creating"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("modifying"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("rebooting"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("resetting-master-credentials"),
                         [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBInstances().begin(), result.GetDBInstances().end(),
                               [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeDBInstancesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeDBInstances(req);
    };
    Aws::Utils::Waiter<Model::DescribeDBInstancesRequest, Model::DescribeDBInstancesOutcome> waiter(30, 60, acceptors, operation,
                                                                                                    "WaitUntilDBInstanceDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBSnapshotsOutcome> WaitUntilDBSnapshotAvailable(
      const Model::DescribeDBSnapshotsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeDBSnapshotsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                               [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                               [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                               [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                               [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-restore"),
                         [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                               [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-parameters"),
                         [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                               [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeDBSnapshotsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeDBSnapshots(req);
    };
    Aws::Utils::Waiter<Model::DescribeDBSnapshotsRequest, Model::DescribeDBSnapshotsOutcome> waiter(30, 60, acceptors, operation,
                                                                                                    "WaitUntilDBSnapshotAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBSnapshotsOutcome> WaitUntilDBSnapshotDeleted(
      const Model::DescribeDBSnapshotsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeDBSnapshotsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetDBSnapshots().size() == 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("DBSnapshotNotFound")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("creating"),
                         [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                               [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("modifying"),
                         [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                               [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("rebooting"),
                         [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                               [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("resetting-master-credentials"),
                         [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                               [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeDBSnapshotsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeDBSnapshots(req);
    };
    Aws::Utils::Waiter<Model::DescribeDBSnapshotsRequest, Model::DescribeDBSnapshotsOutcome> waiter(30, 60, acceptors, operation,
                                                                                                    "WaitUntilDBSnapshotDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTenantDatabasesOutcome> WaitUntilTenantDatabaseAvailable(
      const Model::DescribeTenantDatabasesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeTenantDatabasesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeTenantDatabasesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetTenantDatabases().begin(), result.GetTenantDatabases().end(),
                               [&](const Model::TenantDatabase& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeTenantDatabasesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetTenantDatabases().begin(), result.GetTenantDatabases().end(),
                               [&](const Model::TenantDatabase& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-parameters"),
                         [](const Model::DescribeTenantDatabasesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetTenantDatabases().begin(), result.GetTenantDatabases().end(),
                               [&](const Model::TenantDatabase& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-restore"),
                         [](const Model::DescribeTenantDatabasesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetTenantDatabases().begin(), result.GetTenantDatabases().end(),
                               [&](const Model::TenantDatabase& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeTenantDatabasesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeTenantDatabases(req);
    };
    Aws::Utils::Waiter<Model::DescribeTenantDatabasesRequest, Model::DescribeTenantDatabasesOutcome> waiter(
        30, 60, acceptors, operation, "WaitUntilTenantDatabaseAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTenantDatabasesOutcome> WaitUntilTenantDatabaseDeleted(
      const Model::DescribeTenantDatabasesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeTenantDatabasesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeTenantDatabasesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetTenantDatabases().size() == 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("DBInstanceNotFoundFault")});

    auto operation = [this](const Model::DescribeTenantDatabasesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeTenantDatabases(req);
    };
    Aws::Utils::Waiter<Model::DescribeTenantDatabasesRequest, Model::DescribeTenantDatabasesOutcome> waiter(
        30, 60, acceptors, operation, "WaitUntilTenantDatabaseDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace RDS
}  // namespace Aws
