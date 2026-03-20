/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/neptune-graph/NeptuneGraphClient.h>
#include <aws/neptune-graph/model/ExportTaskStatus.h>
#include <aws/neptune-graph/model/GetExportTaskRequest.h>
#include <aws/neptune-graph/model/GetExportTaskResult.h>
#include <aws/neptune-graph/model/GetGraphRequest.h>
#include <aws/neptune-graph/model/GetGraphResult.h>
#include <aws/neptune-graph/model/GetGraphSnapshotRequest.h>
#include <aws/neptune-graph/model/GetGraphSnapshotResult.h>
#include <aws/neptune-graph/model/GetImportTaskRequest.h>
#include <aws/neptune-graph/model/GetImportTaskResult.h>
#include <aws/neptune-graph/model/GetPrivateGraphEndpointRequest.h>
#include <aws/neptune-graph/model/GetPrivateGraphEndpointResult.h>
#include <aws/neptune-graph/model/GraphStatus.h>
#include <aws/neptune-graph/model/ImportTaskStatus.h>
#include <aws/neptune-graph/model/PrivateGraphEndpointStatus.h>
#include <aws/neptune-graph/model/SnapshotStatus.h>

#include <algorithm>

namespace Aws {
namespace NeptuneGraph {

template <typename DerivedClient = NeptuneGraphClient>
class NeptuneGraphWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetExportTaskOutcome> WaitUntilExportTaskSuccessful(const Model::GetExportTaskRequest& request) {
    using OutcomeT = Model::GetExportTaskOutcome;
    using RequestT = Model::GetExportTaskRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportTaskSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLING"),
        [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportTaskSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportTaskSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportTaskSuccessfulWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetExportTask(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 480, std::move(acceptors), operation, "WaitUntilExportTaskSuccessful");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetExportTaskOutcome> WaitUntilExportTaskCancelled(const Model::GetExportTaskRequest& request) {
    using OutcomeT = Model::GetExportTaskOutcome;
    using RequestT = Model::GetExportTaskRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportTaskCancelledWaiter", Aws::Utils::WaiterState::FAILURE, true,
        [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return ((Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) != "CANCELLING") &&
                  (Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) != "CANCELLED")) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportTaskCancelledWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CANCELLED"),
        [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetExportTask(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 60, std::move(acceptors), operation, "WaitUntilExportTaskCancelled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetGraphOutcome> WaitUntilGraphAvailable(const Model::GetGraphRequest& request) {
    using OutcomeT = Model::GetGraphOutcome;
    using RequestT = Model::GetGraphRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GraphAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETING"),
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GraphAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GraphAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("AVAILABLE"),
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetGraph(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 480, std::move(acceptors), operation, "WaitUntilGraphAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetGraphOutcome> WaitUntilGraphDeleted(const Model::GetGraphRequest& request) {
    using OutcomeT = Model::GetGraphOutcome;
    using RequestT = Model::GetGraphRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GraphDeletedWaiter", Aws::Utils::WaiterState::FAILURE, true,
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) != "DELETING") ==
                 expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("GraphDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetGraph(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 60, std::move(acceptors), operation, "WaitUntilGraphDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetGraphOutcome> WaitUntilGraphStopped(const Model::GetGraphRequest& request) {
    using OutcomeT = Model::GetGraphOutcome;
    using RequestT = Model::GetGraphRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GraphStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("STOPPED"),
        [](const Model::GetGraphOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::GraphStatusMapper::GetNameForGraphStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GraphStoppedWaiter", Aws::Utils::WaiterState::FAILURE, true,
        [](const Model::GetGraphOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (Model::GraphStatusMapper::GetNameForGraphStatus(result.GetStatus()) != "STOPPING") == expected.get<bool>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetGraph(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 90, std::move(acceptors), operation, "WaitUntilGraphStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetGraphSnapshotOutcome> WaitUntilGraphSnapshotAvailable(const Model::GetGraphSnapshotRequest& request) {
    using OutcomeT = Model::GetGraphSnapshotOutcome;
    using RequestT = Model::GetGraphSnapshotRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GraphSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETING"),
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GraphSnapshotAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GraphSnapshotAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("AVAILABLE"),
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetGraphSnapshot(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 120, std::move(acceptors), operation, "WaitUntilGraphSnapshotAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetGraphSnapshotOutcome> WaitUntilGraphSnapshotDeleted(const Model::GetGraphSnapshotRequest& request) {
    using OutcomeT = Model::GetGraphSnapshotOutcome;
    using RequestT = Model::GetGraphSnapshotRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GraphSnapshotDeletedWaiter", Aws::Utils::WaiterState::FAILURE, true,
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) != "DELETING") ==
                 expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "GraphSnapshotDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetGraphSnapshot(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 60, std::move(acceptors), operation, "WaitUntilGraphSnapshotDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetImportTaskOutcome> WaitUntilImportTaskSuccessful(const Model::GetImportTaskRequest& request) {
    using OutcomeT = Model::GetImportTaskOutcome;
    using RequestT = Model::GetImportTaskRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImportTaskSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLING"),
        [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImportTaskSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImportTaskSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ROLLING_BACK"),
        [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImportTaskSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImportTaskSuccessfulWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetImportTask(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 480, std::move(acceptors), operation, "WaitUntilImportTaskSuccessful");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetImportTaskOutcome> WaitUntilImportTaskCancelled(const Model::GetImportTaskRequest& request) {
    using OutcomeT = Model::GetImportTaskOutcome;
    using RequestT = Model::GetImportTaskRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImportTaskCancelledWaiter", Aws::Utils::WaiterState::FAILURE, true,
        [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return ((Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) != "CANCELLING") &&
                  (Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) != "CANCELLED")) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ImportTaskCancelledWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CANCELLED"),
        [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetImportTask(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 60, std::move(acceptors), operation, "WaitUntilImportTaskCancelled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPrivateGraphEndpointOutcome> WaitUntilPrivateGraphEndpointAvailable(
      const Model::GetPrivateGraphEndpointRequest& request) {
    using OutcomeT = Model::GetPrivateGraphEndpointOutcome;
    using RequestT = Model::GetPrivateGraphEndpointRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PrivateGraphEndpointAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETING"),
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PrivateGraphEndpointAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PrivateGraphEndpointAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("AVAILABLE"),
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetPrivateGraphEndpoint(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 180, std::move(acceptors), operation, "WaitUntilPrivateGraphEndpointAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPrivateGraphEndpointOutcome> WaitUntilPrivateGraphEndpointDeleted(
      const Model::GetPrivateGraphEndpointRequest& request) {
    using OutcomeT = Model::GetPrivateGraphEndpointOutcome;
    using RequestT = Model::GetPrivateGraphEndpointRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "PrivateGraphEndpointDeletedWaiter", Aws::Utils::WaiterState::FAILURE, true,
        [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) != "DELETING") ==
                 expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "PrivateGraphEndpointDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetPrivateGraphEndpoint(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 180, std::move(acceptors), operation, "WaitUntilPrivateGraphEndpointDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace NeptuneGraph
}  // namespace Aws
