/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::GetExportTaskOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLING"),
                         [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCEEDED"),
                         [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetExportTaskRequest& req) { return static_cast<DerivedClient*>(this)->GetExportTask(req); };
    Aws::Utils::Waiter<Model::GetExportTaskRequest, Model::GetExportTaskOutcome> waiter(60, 480, acceptors, operation,
                                                                                        "WaitUntilExportTaskSuccessful");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetExportTaskOutcome> WaitUntilExportTaskCancelled(const Model::GetExportTaskRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetExportTaskOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return ((result.GetStatus() != "CANCELLING") && (result.GetStatus() != "CANCELLED")) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetExportTaskRequest& req) { return static_cast<DerivedClient*>(this)->GetExportTask(req); };
    Aws::Utils::Waiter<Model::GetExportTaskRequest, Model::GetExportTaskOutcome> waiter(60, 60, acceptors, operation,
                                                                                        "WaitUntilExportTaskCancelled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetGraphOutcome> WaitUntilGraphAvailable(const Model::GetGraphRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetGraphOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("AVAILABLE"),
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetGraphRequest& req) { return static_cast<DerivedClient*>(this)->GetGraph(req); };
    Aws::Utils::Waiter<Model::GetGraphRequest, Model::GetGraphOutcome> waiter(60, 480, acceptors, operation, "WaitUntilGraphAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetGraphOutcome> WaitUntilGraphDeleted(const Model::GetGraphRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetGraphOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetStatus() != "DELETING") == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::GetGraphRequest& req) { return static_cast<DerivedClient*>(this)->GetGraph(req); };
    Aws::Utils::Waiter<Model::GetGraphRequest, Model::GetGraphOutcome> waiter(60, 60, acceptors, operation, "WaitUntilGraphDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetGraphOutcome> WaitUntilGraphStopped(const Model::GetGraphRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetGraphOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("STOPPED"),
                         [](const Model::GetGraphOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::GraphStatusMapper::GetNameForGraphStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::GetGraphOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetStatus() != "STOPPING") == expected.get<bool>();
                         }});

    auto operation = [this](const Model::GetGraphRequest& req) { return static_cast<DerivedClient*>(this)->GetGraph(req); };
    Aws::Utils::Waiter<Model::GetGraphRequest, Model::GetGraphOutcome> waiter(20, 90, acceptors, operation, "WaitUntilGraphStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetGraphSnapshotOutcome> WaitUntilGraphSnapshotAvailable(const Model::GetGraphSnapshotRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetGraphSnapshotOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("AVAILABLE"),
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetGraphSnapshotRequest& req) { return static_cast<DerivedClient*>(this)->GetGraphSnapshot(req); };
    Aws::Utils::Waiter<Model::GetGraphSnapshotRequest, Model::GetGraphSnapshotOutcome> waiter(60, 120, acceptors, operation,
                                                                                              "WaitUntilGraphSnapshotAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetGraphSnapshotOutcome> WaitUntilGraphSnapshotDeleted(const Model::GetGraphSnapshotRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetGraphSnapshotOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetStatus() != "DELETING") == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::GetGraphSnapshotRequest& req) { return static_cast<DerivedClient*>(this)->GetGraphSnapshot(req); };
    Aws::Utils::Waiter<Model::GetGraphSnapshotRequest, Model::GetGraphSnapshotOutcome> waiter(60, 60, acceptors, operation,
                                                                                              "WaitUntilGraphSnapshotDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetImportTaskOutcome> WaitUntilImportTaskSuccessful(const Model::GetImportTaskRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetImportTaskOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLING"),
                         [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ROLLING_BACK"),
                         [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCEEDED"),
                         [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetImportTaskRequest& req) { return static_cast<DerivedClient*>(this)->GetImportTask(req); };
    Aws::Utils::Waiter<Model::GetImportTaskRequest, Model::GetImportTaskOutcome> waiter(60, 480, acceptors, operation,
                                                                                        "WaitUntilImportTaskSuccessful");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetImportTaskOutcome> WaitUntilImportTaskCancelled(const Model::GetImportTaskRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetImportTaskOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return ((result.GetStatus() != "CANCELLING") && (result.GetStatus() != "CANCELLED")) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetImportTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ImportTaskStatusMapper::GetNameForImportTaskStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetImportTaskRequest& req) { return static_cast<DerivedClient*>(this)->GetImportTask(req); };
    Aws::Utils::Waiter<Model::GetImportTaskRequest, Model::GetImportTaskOutcome> waiter(60, 60, acceptors, operation,
                                                                                        "WaitUntilImportTaskCancelled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPrivateGraphEndpointOutcome> WaitUntilPrivateGraphEndpointAvailable(
      const Model::GetPrivateGraphEndpointRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetPrivateGraphEndpointOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("AVAILABLE"),
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetPrivateGraphEndpointRequest& req) {
      return static_cast<DerivedClient*>(this)->GetPrivateGraphEndpoint(req);
    };
    Aws::Utils::Waiter<Model::GetPrivateGraphEndpointRequest, Model::GetPrivateGraphEndpointOutcome> waiter(
        10, 180, acceptors, operation, "WaitUntilPrivateGraphEndpointAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPrivateGraphEndpointOutcome> WaitUntilPrivateGraphEndpointDeleted(
      const Model::GetPrivateGraphEndpointRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetPrivateGraphEndpointOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::GetPrivateGraphEndpointOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetStatus() != "DELETING") == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::GetPrivateGraphEndpointRequest& req) {
      return static_cast<DerivedClient*>(this)->GetPrivateGraphEndpoint(req);
    };
    Aws::Utils::Waiter<Model::GetPrivateGraphEndpointRequest, Model::GetPrivateGraphEndpointOutcome> waiter(
        10, 180, acceptors, operation, "WaitUntilPrivateGraphEndpointDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace NeptuneGraph
}  // namespace Aws
