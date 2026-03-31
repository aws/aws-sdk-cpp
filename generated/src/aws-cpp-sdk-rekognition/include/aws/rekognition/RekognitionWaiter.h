/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/rekognition/RekognitionClient.h>
#include <aws/rekognition/model/DescribeProjectVersionsRequest.h>
#include <aws/rekognition/model/DescribeProjectVersionsResult.h>
#include <aws/rekognition/model/ProjectVersionStatus.h>

#include <algorithm>

namespace Aws {
namespace Rekognition {

template <typename DerivedClient = RekognitionClient>
class RekognitionWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeProjectVersionsOutcome> WaitUntilProjectVersionRunning(
      const Model::DescribeProjectVersionsRequest& request) {
    using OutcomeT = Model::DescribeProjectVersionsOutcome;
    using RequestT = Model::DescribeProjectVersionsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProjectVersionRunningWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("RUNNING"),
        [](const Model::DescribeProjectVersionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetProjectVersionDescriptions().begin(), result.GetProjectVersionDescriptions().end(),
                             [&](const Model::ProjectVersionDescription& item) {
                               return Model::ProjectVersionStatusMapper::GetNameForProjectVersionStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProjectVersionRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::DescribeProjectVersionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetProjectVersionDescriptions().begin(), result.GetProjectVersionDescriptions().end(),
                             [&](const Model::ProjectVersionDescription& item) {
                               return Model::ProjectVersionStatusMapper::GetNameForProjectVersionStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeProjectVersions(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilProjectVersionRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeProjectVersionsOutcome> WaitUntilProjectVersionTrainingCompleted(
      const Model::DescribeProjectVersionsRequest& request) {
    using OutcomeT = Model::DescribeProjectVersionsOutcome;
    using RequestT = Model::DescribeProjectVersionsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProjectVersionTrainingCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("TRAINING_COMPLETED"),
        [](const Model::DescribeProjectVersionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetProjectVersionDescriptions().begin(), result.GetProjectVersionDescriptions().end(),
                             [&](const Model::ProjectVersionDescription& item) {
                               return Model::ProjectVersionStatusMapper::GetNameForProjectVersionStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ProjectVersionTrainingCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("TRAINING_FAILED"),
        [](const Model::DescribeProjectVersionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetProjectVersionDescriptions().begin(), result.GetProjectVersionDescriptions().end(),
                             [&](const Model::ProjectVersionDescription& item) {
                               return Model::ProjectVersionStatusMapper::GetNameForProjectVersionStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeProjectVersions(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(120, 1, std::move(acceptors), operation, "WaitUntilProjectVersionTrainingCompleted");
    return waiter.Wait(request);
  }
};
}  // namespace Rekognition
}  // namespace Aws
