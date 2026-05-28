/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/resiliencehubv2/Resiliencehubv2Client.h>
#include <aws/resiliencehubv2/model/AssessmentStatus.h>
#include <aws/resiliencehubv2/model/GetServiceRequest.h>
#include <aws/resiliencehubv2/model/GetServiceResult.h>
#include <aws/resiliencehubv2/model/ListFailureModeAssessmentsRequest.h>
#include <aws/resiliencehubv2/model/ListFailureModeAssessmentsResult.h>
#include <aws/resiliencehubv2/model/ListReportsRequest.h>
#include <aws/resiliencehubv2/model/ListReportsResult.h>
#include <aws/resiliencehubv2/model/ReportGenerationStatus.h>
#include <aws/resiliencehubv2/model/ResourceDiscoveryRunStatus.h>

#include <algorithm>

namespace Aws {
namespace resiliencehubv2 {

template <typename DerivedClient = Resiliencehubv2Client>
class Resiliencehubv2Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetServiceOutcome> WaitUntilServiceAssessmentCompleted(const Model::GetServiceRequest& request) {
    using OutcomeT = Model::GetServiceOutcome;
    using RequestT = Model::GetServiceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceAssessmentCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AssessmentStatusMapper::GetNameForAssessmentStatus(result.GetService().GetAssessmentStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceAssessmentCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::AssessmentStatusMapper::GetNameForAssessmentStatus(result.GetService().GetAssessmentStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetService(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilServiceAssessmentCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetServiceOutcome> WaitUntilServiceResourceDiscoveryCompleted(const Model::GetServiceRequest& request) {
    using OutcomeT = Model::GetServiceOutcome;
    using RequestT = Model::GetServiceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceResourceDiscoveryCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ResourceDiscoveryRunStatusMapper::GetNameForResourceDiscoveryRunStatus(
                     result.GetService().GetResourceDiscovery().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceResourceDiscoveryCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED_WITH_FAILURES"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ResourceDiscoveryRunStatusMapper::GetNameForResourceDiscoveryRunStatus(
                     result.GetService().GetResourceDiscovery().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServiceResourceDiscoveryCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetServiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ResourceDiscoveryRunStatusMapper::GetNameForResourceDiscoveryRunStatus(
                     result.GetService().GetResourceDiscovery().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetService(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilServiceResourceDiscoveryCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::ListFailureModeAssessmentsOutcome> WaitUntilFailureModeAssessmentSuccess(
      const Model::ListFailureModeAssessmentsRequest& request) {
    using OutcomeT = Model::ListFailureModeAssessmentsOutcome;
    using RequestT = Model::ListFailureModeAssessmentsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FailureModeAssessmentSuccessWaiter", Aws::Utils::WaiterState::RETRY, true,
        [](const Model::ListFailureModeAssessmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetAssessmentSummaries().size() == 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FailureModeAssessmentSuccessWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::ListFailureModeAssessmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetAssessmentSummaries().begin(), result.GetAssessmentSummaries().end(), [&](const Model::AssessmentSummary& item) {
                return Model::AssessmentStatusMapper::GetNameForAssessmentStatus(item.GetAssessmentStatus()) == expected.get<Aws::String>();
              });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FailureModeAssessmentSuccessWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::ListFailureModeAssessmentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetAssessmentSummaries().begin(), result.GetAssessmentSummaries().end(), [&](const Model::AssessmentSummary& item) {
                return Model::AssessmentStatusMapper::GetNameForAssessmentStatus(item.GetAssessmentStatus()) == expected.get<Aws::String>();
              });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->ListFailureModeAssessments(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilFailureModeAssessmentSuccess");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::ListReportsOutcome> WaitUntilReportSucceeded(const Model::ListReportsRequest& request) {
    using OutcomeT = Model::ListReportsOutcome;
    using RequestT = Model::ListReportsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReportSucceededWaiter", Aws::Utils::WaiterState::RETRY, true,
        [](const Model::ListReportsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetReportGenerationResults().size() == 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReportSucceededWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::ListReportsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReportGenerationResults().begin(), result.GetReportGenerationResults().end(),
                             [&](const Model::ReportGenerationResult& item) {
                               return Model::ReportGenerationStatusMapper::GetNameForReportGenerationStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReportSucceededWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::ListReportsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReportGenerationResults().begin(), result.GetReportGenerationResults().end(),
                             [&](const Model::ReportGenerationResult& item) {
                               return Model::ReportGenerationStatusMapper::GetNameForReportGenerationStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->ListReports(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilReportSucceeded");
    return waiter.Wait(request);
  }
};
}  // namespace resiliencehubv2
}  // namespace Aws
