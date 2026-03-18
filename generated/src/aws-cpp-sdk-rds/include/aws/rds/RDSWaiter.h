/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::DescribeDBClustersOutcome;
    using RequestT = Model::DescribeDBClustersRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetDBClusters().begin(), result.GetDBClusters().end(),
                             [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusters().begin(), result.GetDBClusters().end(),
                             [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusters().begin(), result.GetDBClusters().end(),
                             [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusters().begin(), result.GetDBClusters().end(),
                             [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-restore"),
        [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusters().begin(), result.GetDBClusters().end(),
                             [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-parameters"),
        [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusters().begin(), result.GetDBClusters().end(),
                             [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDBClusters(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilDBClusterAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBClustersOutcome> WaitUntilDBClusterDeleted(const Model::DescribeDBClustersRequest& request) {
    using OutcomeT = Model::DescribeDBClustersOutcome;
    using RequestT = Model::DescribeDBClustersRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetDBClusters().size() == 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("DBClusterDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("DBClusterNotFoundFault")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusters().begin(), result.GetDBClusters().end(),
                             [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusters().begin(), result.GetDBClusters().end(),
                             [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("rebooting"),
        [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusters().begin(), result.GetDBClusters().end(),
                             [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("resetting-master-credentials"),
        [](const Model::DescribeDBClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusters().begin(), result.GetDBClusters().end(),
                             [&](const Model::DBCluster& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDBClusters(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilDBClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBClusterSnapshotsOutcome> WaitUntilDBClusterSnapshotAvailable(
      const Model::DescribeDBClusterSnapshotsRequest& request) {
    using OutcomeT = Model::DescribeDBClusterSnapshotsOutcome;
    using RequestT = Model::DescribeDBClusterSnapshotsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterSnapshotAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                             [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                             [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                             [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                             [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-restore"),
        [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                             [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-parameters"),
        [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                             [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDBClusterSnapshots(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilDBClusterSnapshotAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBClusterSnapshotsOutcome> WaitUntilDBClusterSnapshotDeleted(
      const Model::DescribeDBClusterSnapshotsRequest& request) {
    using OutcomeT = Model::DescribeDBClusterSnapshotsOutcome;
    using RequestT = Model::DescribeDBClusterSnapshotsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterSnapshotDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetDBClusterSnapshots().size() == 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "DBClusterSnapshotDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DBClusterSnapshotNotFoundFault")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterSnapshotDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                             [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterSnapshotDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                             [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterSnapshotDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("rebooting"),
        [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                             [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBClusterSnapshotDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("resetting-master-credentials"),
        [](const Model::DescribeDBClusterSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBClusterSnapshots().begin(), result.GetDBClusterSnapshots().end(),
                             [&](const Model::DBClusterSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDBClusterSnapshots(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilDBClusterSnapshotDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBInstancesOutcome> WaitUntilDBInstanceAvailable(
      const Model::DescribeDBInstancesRequest& request) {
    using OutcomeT = Model::DescribeDBInstancesOutcome;
    using RequestT = Model::DescribeDBInstancesRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-restore"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-parameters"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDBInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilDBInstanceAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBInstancesOutcome> WaitUntilDBInstanceDeleted(
      const Model::DescribeDBInstancesRequest& request) {
    using OutcomeT = Model::DescribeDBInstancesOutcome;
    using RequestT = Model::DescribeDBInstancesRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetDBInstances().size() == 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("DBInstanceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("DBInstanceNotFound")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("rebooting"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBInstanceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("resetting-master-credentials"),
        [](const Model::DescribeDBInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBInstances().begin(), result.GetDBInstances().end(),
                             [&](const Model::DBInstance& item) { return item.GetDBInstanceStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDBInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilDBInstanceDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBSnapshotsOutcome> WaitUntilDBSnapshotAvailable(
      const Model::DescribeDBSnapshotsRequest& request) {
    using OutcomeT = Model::DescribeDBSnapshotsOutcome;
    using RequestT = Model::DescribeDBSnapshotsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBSnapshotAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                             [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                             [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                             [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                             [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-restore"),
        [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                             [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-parameters"),
        [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                             [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDBSnapshots(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilDBSnapshotAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDBSnapshotsOutcome> WaitUntilDBSnapshotDeleted(
      const Model::DescribeDBSnapshotsRequest& request) {
    using OutcomeT = Model::DescribeDBSnapshotsOutcome;
    using RequestT = Model::DescribeDBSnapshotsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBSnapshotDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetDBSnapshots().size() == 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("DBSnapshotDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("DBSnapshotNotFound")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBSnapshotDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                             [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBSnapshotDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                             [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBSnapshotDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("rebooting"),
        [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                             [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DBSnapshotDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("resetting-master-credentials"),
        [](const Model::DescribeDBSnapshotsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDBSnapshots().begin(), result.GetDBSnapshots().end(),
                             [&](const Model::DBSnapshot& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDBSnapshots(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilDBSnapshotDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTenantDatabasesOutcome> WaitUntilTenantDatabaseAvailable(
      const Model::DescribeTenantDatabasesRequest& request) {
    using OutcomeT = Model::DescribeTenantDatabasesOutcome;
    using RequestT = Model::DescribeTenantDatabasesRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TenantDatabaseAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeTenantDatabasesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetTenantDatabases().begin(), result.GetTenantDatabases().end(),
                             [&](const Model::TenantDatabase& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TenantDatabaseAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeTenantDatabasesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetTenantDatabases().begin(), result.GetTenantDatabases().end(),
                             [&](const Model::TenantDatabase& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TenantDatabaseAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-parameters"),
        [](const Model::DescribeTenantDatabasesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetTenantDatabases().begin(), result.GetTenantDatabases().end(),
                             [&](const Model::TenantDatabase& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TenantDatabaseAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-restore"),
        [](const Model::DescribeTenantDatabasesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetTenantDatabases().begin(), result.GetTenantDatabases().end(),
                             [&](const Model::TenantDatabase& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeTenantDatabases(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilTenantDatabaseAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTenantDatabasesOutcome> WaitUntilTenantDatabaseDeleted(
      const Model::DescribeTenantDatabasesRequest& request) {
    using OutcomeT = Model::DescribeTenantDatabasesOutcome;
    using RequestT = Model::DescribeTenantDatabasesRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TenantDatabaseDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeTenantDatabasesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetTenantDatabases().size() == 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "TenantDatabaseDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DBInstanceNotFoundFault")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeTenantDatabases(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 60, std::move(acceptors), operation, "WaitUntilTenantDatabaseDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace RDS
}  // namespace Aws
