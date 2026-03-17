/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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

#include <algorithm>

namespace Aws {
namespace Omics {

template <typename DerivedClient = OmicsClient>
class OmicsWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetAnnotationImportJobOutcome> WaitUntilAnnotationImportJobCreated(
      const Model::GetAnnotationImportJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetAnnotationImportJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("SUBMITTED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("IN_PROGRESS"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetAnnotationImportJobRequest& req) {
      return static_cast<DerivedClient*>(this)->GetAnnotationImportJob(req);
    };
    Aws::Utils::Waiter<Model::GetAnnotationImportJobRequest, Model::GetAnnotationImportJobOutcome> waiter(
        30, 20, acceptors, operation, "WaitUntilAnnotationImportJobCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetAnnotationStoreOutcome> WaitUntilAnnotationStoreCreated(
      const Model::GetAnnotationStoreRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetAnnotationStoreOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATING"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetAnnotationStoreRequest& req) {
      return static_cast<DerivedClient*>(this)->GetAnnotationStore(req);
    };
    Aws::Utils::Waiter<Model::GetAnnotationStoreRequest, Model::GetAnnotationStoreOutcome> waiter(30, 20, acceptors, operation,
                                                                                                  "WaitUntilAnnotationStoreCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetAnnotationStoreOutcome> WaitUntilAnnotationStoreDeleted(
      const Model::GetAnnotationStoreRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetAnnotationStoreOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetAnnotationStoreRequest& req) {
      return static_cast<DerivedClient*>(this)->GetAnnotationStore(req);
    };
    Aws::Utils::Waiter<Model::GetAnnotationStoreRequest, Model::GetAnnotationStoreOutcome> waiter(30, 20, acceptors, operation,
                                                                                                  "WaitUntilAnnotationStoreDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetAnnotationStoreVersionOutcome> WaitUntilAnnotationStoreVersionCreated(
      const Model::GetAnnotationStoreVersionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetAnnotationStoreVersionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATING"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetAnnotationStoreVersionRequest& req) {
      return static_cast<DerivedClient*>(this)->GetAnnotationStoreVersion(req);
    };
    Aws::Utils::Waiter<Model::GetAnnotationStoreVersionRequest, Model::GetAnnotationStoreVersionOutcome> waiter(
        30, 20, acceptors, operation, "WaitUntilAnnotationStoreVersionCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetAnnotationStoreVersionOutcome> WaitUntilAnnotationStoreVersionDeleted(
      const Model::GetAnnotationStoreVersionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetAnnotationStoreVersionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetAnnotationStoreVersionRequest& req) {
      return static_cast<DerivedClient*>(this)->GetAnnotationStoreVersion(req);
    };
    Aws::Utils::Waiter<Model::GetAnnotationStoreVersionRequest, Model::GetAnnotationStoreVersionOutcome> waiter(
        30, 20, acceptors, operation, "WaitUntilAnnotationStoreVersionDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetReadSetActivationJobOutcome> WaitUntilReadSetActivationJobCompleted(
      const Model::GetReadSetActivationJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetReadSetActivationJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("SUBMITTED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("IN_PROGRESS"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLING"),
                         [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED_WITH_FAILURES"),
                         [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetReadSetActivationJobRequest& req) {
      return static_cast<DerivedClient*>(this)->GetReadSetActivationJob(req);
    };
    Aws::Utils::Waiter<Model::GetReadSetActivationJobRequest, Model::GetReadSetActivationJobOutcome> waiter(
        30, 20, acceptors, operation, "WaitUntilReadSetActivationJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetReadSetExportJobOutcome> WaitUntilReadSetExportJobCompleted(
      const Model::GetReadSetExportJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetReadSetExportJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("SUBMITTED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("IN_PROGRESS"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLING"),
                         [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED_WITH_FAILURES"),
                         [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetReadSetExportJobRequest& req) {
      return static_cast<DerivedClient*>(this)->GetReadSetExportJob(req);
    };
    Aws::Utils::Waiter<Model::GetReadSetExportJobRequest, Model::GetReadSetExportJobOutcome> waiter(30, 20, acceptors, operation,
                                                                                                    "WaitUntilReadSetExportJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetReadSetImportJobOutcome> WaitUntilReadSetImportJobCompleted(
      const Model::GetReadSetImportJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetReadSetImportJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("SUBMITTED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("IN_PROGRESS"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLING"),
                         [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED_WITH_FAILURES"),
                         [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetReadSetImportJobRequest& req) {
      return static_cast<DerivedClient*>(this)->GetReadSetImportJob(req);
    };
    Aws::Utils::Waiter<Model::GetReadSetImportJobRequest, Model::GetReadSetImportJobOutcome> waiter(30, 20, acceptors, operation,
                                                                                                    "WaitUntilReadSetImportJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetReferenceImportJobOutcome> WaitUntilReferenceImportJobCompleted(
      const Model::GetReferenceImportJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetReferenceImportJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("SUBMITTED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("IN_PROGRESS"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLING"),
                         [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED_WITH_FAILURES"),
                         [](const Model::GetReferenceImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetReferenceImportJobRequest& req) {
      return static_cast<DerivedClient*>(this)->GetReferenceImportJob(req);
    };
    Aws::Utils::Waiter<Model::GetReferenceImportJobRequest, Model::GetReferenceImportJobOutcome> waiter(
        30, 20, acceptors, operation, "WaitUntilReferenceImportJobCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRunOutcome> WaitUntilRunRunning(const Model::GetRunRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRunOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("RUNNING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("PENDING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STARTING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetRunRequest& req) { return static_cast<DerivedClient*>(this)->GetRun(req); };
    Aws::Utils::Waiter<Model::GetRunRequest, Model::GetRunOutcome> waiter(30, 20, acceptors, operation, "WaitUntilRunRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRunOutcome> WaitUntilRunCompleted(const Model::GetRunRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRunOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("PENDING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STARTING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("RUNNING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STOPPING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetRunRequest& req) { return static_cast<DerivedClient*>(this)->GetRun(req); };
    Aws::Utils::Waiter<Model::GetRunRequest, Model::GetRunOutcome> waiter(30, 20, acceptors, operation, "WaitUntilRunCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRunTaskOutcome> WaitUntilTaskRunning(const Model::GetRunTaskRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRunTaskOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("RUNNING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("PENDING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STARTING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetRunTaskRequest& req) { return static_cast<DerivedClient*>(this)->GetRunTask(req); };
    Aws::Utils::Waiter<Model::GetRunTaskRequest, Model::GetRunTaskOutcome> waiter(30, 20, acceptors, operation, "WaitUntilTaskRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRunTaskOutcome> WaitUntilTaskCompleted(const Model::GetRunTaskRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRunTaskOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("PENDING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STARTING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("RUNNING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("STOPPING"),
                         [](const Model::GetRunTaskOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetRunTaskRequest& req) { return static_cast<DerivedClient*>(this)->GetRunTask(req); };
    Aws::Utils::Waiter<Model::GetRunTaskRequest, Model::GetRunTaskOutcome> waiter(30, 20, acceptors, operation, "WaitUntilTaskCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetVariantImportJobOutcome> WaitUntilVariantImportJobCreated(
      const Model::GetVariantImportJobRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetVariantImportJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("SUBMITTED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("IN_PROGRESS"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetVariantImportJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetVariantImportJobRequest& req) {
      return static_cast<DerivedClient*>(this)->GetVariantImportJob(req);
    };
    Aws::Utils::Waiter<Model::GetVariantImportJobRequest, Model::GetVariantImportJobOutcome> waiter(30, 20, acceptors, operation,
                                                                                                    "WaitUntilVariantImportJobCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetVariantStoreOutcome> WaitUntilVariantStoreCreated(const Model::GetVariantStoreRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetVariantStoreOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATING"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetVariantStoreRequest& req) { return static_cast<DerivedClient*>(this)->GetVariantStore(req); };
    Aws::Utils::Waiter<Model::GetVariantStoreRequest, Model::GetVariantStoreOutcome> waiter(30, 20, acceptors, operation,
                                                                                            "WaitUntilVariantStoreCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetVariantStoreOutcome> WaitUntilVariantStoreDeleted(const Model::GetVariantStoreRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetVariantStoreOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("DELETED"),
                         [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("DELETING"),
                         [](const Model::GetVariantStoreOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetVariantStoreRequest& req) { return static_cast<DerivedClient*>(this)->GetVariantStore(req); };
    Aws::Utils::Waiter<Model::GetVariantStoreRequest, Model::GetVariantStoreOutcome> waiter(30, 20, acceptors, operation,
                                                                                            "WaitUntilVariantStoreDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetWorkflowOutcome> WaitUntilWorkflowActive(const Model::GetWorkflowRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetWorkflowOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATING"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetWorkflowRequest& req) { return static_cast<DerivedClient*>(this)->GetWorkflow(req); };
    Aws::Utils::Waiter<Model::GetWorkflowRequest, Model::GetWorkflowOutcome> waiter(3, 10, acceptors, operation, "WaitUntilWorkflowActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetWorkflowVersionOutcome> WaitUntilWorkflowVersionActive(
      const Model::GetWorkflowVersionRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetWorkflowVersionOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ACTIVE"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATING"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("UPDATING"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetWorkflowVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetWorkflowVersionRequest& req) {
      return static_cast<DerivedClient*>(this)->GetWorkflowVersion(req);
    };
    Aws::Utils::Waiter<Model::GetWorkflowVersionRequest, Model::GetWorkflowVersionOutcome> waiter(3, 10, acceptors, operation,
                                                                                                  "WaitUntilWorkflowVersionActive");
    return waiter.Wait(request);
  }
};
}  // namespace Omics
}  // namespace Aws
