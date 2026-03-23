/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/omics/OmicsClient.h>
#include <aws/omics/model/GetAnnotationImportJobRequest.h>
#include <aws/omics/model/GetAnnotationImportJobResult.h>
#include <aws/omics/model/GetAnnotationStoreRequest.h>
#include <aws/omics/model/GetAnnotationStoreResult.h>
#include <aws/omics/model/GetAnnotationStoreVersionRequest.h>
#include <aws/omics/model/GetAnnotationStoreVersionResult.h>
#include <aws/omics/model/GetReadSetActivationJobRequest.h>
#include <aws/omics/model/GetReadSetActivationJobResult.h>
#include <aws/omics/model/GetReadSetExportJobRequest.h>
#include <aws/omics/model/GetReadSetExportJobResult.h>
#include <aws/omics/model/GetReadSetImportJobRequest.h>
#include <aws/omics/model/GetReadSetImportJobResult.h>
#include <aws/omics/model/GetReferenceImportJobRequest.h>
#include <aws/omics/model/GetReferenceImportJobResult.h>
#include <aws/omics/model/GetRunRequest.h>
#include <aws/omics/model/GetRunResult.h>
#include <aws/omics/model/GetRunTaskRequest.h>
#include <aws/omics/model/GetRunTaskResult.h>
#include <aws/omics/model/GetVariantImportJobRequest.h>
#include <aws/omics/model/GetVariantImportJobResult.h>
#include <aws/omics/model/GetVariantStoreRequest.h>
#include <aws/omics/model/GetVariantStoreResult.h>
#include <aws/omics/model/GetWorkflowRequest.h>
#include <aws/omics/model/GetWorkflowResult.h>
#include <aws/omics/model/GetWorkflowVersionRequest.h>
#include <aws/omics/model/GetWorkflowVersionResult.h>
#include <aws/omics/model/JobStatus.h>
#include <aws/omics/model/ReadSetActivationJobStatus.h>
#include <aws/omics/model/ReadSetExportJobStatus.h>
#include <aws/omics/model/ReadSetImportJobStatus.h>
#include <aws/omics/model/ReferenceImportJobStatus.h>
#include <aws/omics/model/RunStatus.h>
#include <aws/omics/model/StoreStatus.h>
#include <aws/omics/model/TaskStatus.h>
#include <aws/omics/model/VersionStatus.h>
#include <aws/omics/model/WorkflowStatus.h>

#include <algorithm>

namespace Aws {
namespace Omics {

template <typename DerivedClient = OmicsClient>
class OmicsWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetAnnotationImportJobOutcome> WaitUntilAnnotationImportJobCreated(
      const Model::GetAnnotationImportJobRequest& request) {
    using OutcomeT = Model::GetAnnotationImportJobOutcome;
    using RequestT = Model::GetAnnotationImportJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationImportJobCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("SUBMITTED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationImportJobCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("IN_PROGRESS"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationImportJobCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationImportJobCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CANCELLED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationImportJobCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetAnnotationImportJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilAnnotationImportJobCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetAnnotationStoreOutcome> WaitUntilAnnotationStoreCreated(
      const Model::GetAnnotationStoreRequest& request) {
    using OutcomeT = Model::GetAnnotationStoreOutcome;
    using RequestT = Model::GetAnnotationStoreRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetAnnotationStore(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilAnnotationStoreCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetAnnotationStoreOutcome> WaitUntilAnnotationStoreDeleted(
      const Model::GetAnnotationStoreRequest& request) {
    using OutcomeT = Model::GetAnnotationStoreOutcome;
    using RequestT = Model::GetAnnotationStoreRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StoreStatusMapper::GetNameForStoreStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "AnnotationStoreDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StoreStatusMapper::GetNameForStoreStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetAnnotationStore(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilAnnotationStoreDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetAnnotationStoreVersionOutcome> WaitUntilAnnotationStoreVersionCreated(
      const Model::GetAnnotationStoreVersionRequest& request) {
    using OutcomeT = Model::GetAnnotationStoreVersionOutcome;
    using RequestT = Model::GetAnnotationStoreVersionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreVersionCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreVersionCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreVersionCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreVersionCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetAnnotationStoreVersion(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilAnnotationStoreVersionCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetAnnotationStoreVersionOutcome> WaitUntilAnnotationStoreVersionDeleted(
      const Model::GetAnnotationStoreVersionRequest& request) {
    using OutcomeT = Model::GetAnnotationStoreVersionOutcome;
    using RequestT = Model::GetAnnotationStoreVersionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreVersionDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StoreStatusMapper::GetNameForStoreStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "AnnotationStoreVersionDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnnotationStoreVersionDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StoreStatusMapper::GetNameForStoreStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetAnnotationStoreVersion(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilAnnotationStoreVersionDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetReadSetActivationJobOutcome> WaitUntilReadSetActivationJobCompleted(
      const Model::GetReadSetActivationJobRequest& request) {
    using OutcomeT = Model::GetReadSetActivationJobOutcome;
    using RequestT = Model::GetReadSetActivationJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetActivationJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetActivationJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("SUBMITTED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetActivationJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("IN_PROGRESS"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetActivationJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CANCELLING"),
        [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ReferenceImportJobStatusMapper::GetNameForReferenceImportJobStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetActivationJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetActivationJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetActivationJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("COMPLETED_WITH_FAILURES"),
        [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ReferenceImportJobStatusMapper::GetNameForReferenceImportJobStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetReadSetActivationJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilReadSetActivationJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetReadSetExportJobOutcome> WaitUntilReadSetExportJobCompleted(
      const Model::GetReadSetExportJobRequest& request) {
    using OutcomeT = Model::GetReadSetExportJobOutcome;
    using RequestT = Model::GetReadSetExportJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetExportJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetExportJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("SUBMITTED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetExportJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("IN_PROGRESS"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetExportJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CANCELLING"),
        [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ReferenceImportJobStatusMapper::GetNameForReferenceImportJobStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetExportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetExportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetExportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("COMPLETED_WITH_FAILURES"),
        [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ReferenceImportJobStatusMapper::GetNameForReferenceImportJobStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetReadSetExportJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilReadSetExportJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetReadSetImportJobOutcome> WaitUntilReadSetImportJobCompleted(
      const Model::GetReadSetImportJobRequest& request) {
    using OutcomeT = Model::GetReadSetImportJobOutcome;
    using RequestT = Model::GetReadSetImportJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetImportJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetImportJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("SUBMITTED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetImportJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("IN_PROGRESS"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetImportJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CANCELLING"),
        [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ReferenceImportJobStatusMapper::GetNameForReferenceImportJobStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetImportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetImportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReadSetImportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("COMPLETED_WITH_FAILURES"),
        [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ReferenceImportJobStatusMapper::GetNameForReferenceImportJobStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetReadSetImportJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilReadSetImportJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetReferenceImportJobOutcome> WaitUntilReferenceImportJobCompleted(
      const Model::GetReferenceImportJobRequest& request) {
    using OutcomeT = Model::GetReferenceImportJobOutcome;
    using RequestT = Model::GetReferenceImportJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReferenceImportJobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReferenceImportJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("SUBMITTED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReferenceImportJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("IN_PROGRESS"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReferenceImportJobCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CANCELLING"),
        [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ReferenceImportJobStatusMapper::GetNameForReferenceImportJobStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReferenceImportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReferenceImportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReferenceImportJobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("COMPLETED_WITH_FAILURES"),
        [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ReferenceImportJobStatusMapper::GetNameForReferenceImportJobStatus(result.GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetReferenceImportJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilReferenceImportJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRunOutcome> WaitUntilRunRunning(const Model::GetRunRequest& request) {
    using OutcomeT = Model::GetRunOutcome;
    using RequestT = Model::GetRunRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RunRunningWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("RUNNING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RunRunningWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("PENDING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RunRunningWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STARTING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RunRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RunRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRun(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilRunRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRunOutcome> WaitUntilRunCompleted(const Model::GetRunRequest& request) {
    using OutcomeT = Model::GetRunOutcome;
    using RequestT = Model::GetRunRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RunCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RunCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("PENDING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RunCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STARTING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RunCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("RUNNING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RunCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STOPPING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RunCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRun(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilRunCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRunTaskOutcome> WaitUntilTaskRunning(const Model::GetRunTaskRequest& request) {
    using OutcomeT = Model::GetRunTaskOutcome;
    using RequestT = Model::GetRunTaskRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TaskRunningWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("RUNNING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TaskRunningWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("PENDING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TaskRunningWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STARTING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRunTask(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilTaskRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRunTaskOutcome> WaitUntilTaskCompleted(const Model::GetRunTaskRequest& request) {
    using OutcomeT = Model::GetRunTaskOutcome;
    using RequestT = Model::GetRunTaskRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TaskCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TaskCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("PENDING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TaskCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STARTING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TaskCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("RUNNING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TaskCompletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("STOPPING"),
        [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::TaskStatusMapper::GetNameForTaskStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TaskCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRunTask(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilTaskCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetVariantImportJobOutcome> WaitUntilVariantImportJobCreated(
      const Model::GetVariantImportJobRequest& request) {
    using OutcomeT = Model::GetVariantImportJobOutcome;
    using RequestT = Model::GetVariantImportJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VariantImportJobCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("SUBMITTED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VariantImportJobCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("IN_PROGRESS"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VariantImportJobCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VariantImportJobCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CANCELLED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VariantImportJobCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetVariantImportJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilVariantImportJobCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetVariantStoreOutcome> WaitUntilVariantStoreCreated(const Model::GetVariantStoreRequest& request) {
    using OutcomeT = Model::GetVariantStoreOutcome;
    using RequestT = Model::GetVariantStoreRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VariantStoreCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VariantStoreCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VariantStoreCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VariantStoreCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetVariantStore(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilVariantStoreCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetVariantStoreOutcome> WaitUntilVariantStoreDeleted(const Model::GetVariantStoreRequest& request) {
    using OutcomeT = Model::GetVariantStoreOutcome;
    using RequestT = Model::GetVariantStoreRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VariantStoreDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StoreStatusMapper::GetNameForStoreStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "VariantStoreDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VariantStoreDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StoreStatusMapper::GetNameForStoreStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetVariantStore(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 20, std::move(acceptors), operation, "WaitUntilVariantStoreDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetWorkflowOutcome> WaitUntilWorkflowActive(const Model::GetWorkflowRequest& request) {
    using OutcomeT = Model::GetWorkflowOutcome;
    using RequestT = Model::GetWorkflowRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkflowActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkflowActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkflowActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkflowActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetWorkflow(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 10, std::move(acceptors), operation, "WaitUntilWorkflowActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetWorkflowVersionOutcome> WaitUntilWorkflowVersionActive(
      const Model::GetWorkflowVersionRequest& request) {
    using OutcomeT = Model::GetWorkflowVersionOutcome;
    using RequestT = Model::GetWorkflowVersionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkflowVersionActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkflowVersionActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkflowVersionActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "WorkflowVersionActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::WorkflowStatusMapper::GetNameForWorkflowStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetWorkflowVersion(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(3, 10, std::move(acceptors), operation, "WaitUntilWorkflowVersionActive");
    return waiter.Wait(request);
  }
};
}  // namespace Omics
}  // namespace Aws
