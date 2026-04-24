/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/mediapackagev2/Mediapackagev2Client.h>
#include <aws/mediapackagev2/model/GetHarvestJobRequest.h>
#include <aws/mediapackagev2/model/GetHarvestJobResult.h>
#include <aws/mediapackagev2/model/HarvestJobStatus.h>

#include <algorithm>

namespace Aws {
namespace mediapackagev2 {

template <typename DerivedClient = Mediapackagev2Client>
class Mediapackagev2Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetHarvestJobOutcome> WaitUntilHarvestJobFinished(const Model::GetHarvestJobRequest& request) {
    using OutcomeT = Model::GetHarvestJobOutcome;
    using RequestT = Model::GetHarvestJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "HarvestJobFinishedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetHarvestJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::HarvestJobStatusMapper::GetNameForHarvestJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "HarvestJobFinishedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CANCELLED"),
        [](const Model::GetHarvestJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::HarvestJobStatusMapper::GetNameForHarvestJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "HarvestJobFinishedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetHarvestJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::HarvestJobStatusMapper::GetNameForHarvestJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "HarvestJobFinishedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("QUEUED"),
        [](const Model::GetHarvestJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::HarvestJobStatusMapper::GetNameForHarvestJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "HarvestJobFinishedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("IN_PROGRESS"),
        [](const Model::GetHarvestJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::HarvestJobStatusMapper::GetNameForHarvestJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetHarvestJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilHarvestJobFinished");
    return waiter.Wait(request);
  }
};
}  // namespace mediapackagev2
}  // namespace Aws
