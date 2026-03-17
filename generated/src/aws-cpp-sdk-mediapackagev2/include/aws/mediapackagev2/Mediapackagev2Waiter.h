/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::GetHarvestJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETED"),
                         [](const Model::GetHarvestJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::HarvestJobStatusMapper::GetNameForHarvestJobStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CANCELLED"),
                         [](const Model::GetHarvestJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::HarvestJobStatusMapper::GetNameForHarvestJobStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetHarvestJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::HarvestJobStatusMapper::GetNameForHarvestJobStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("QUEUED"),
                         [](const Model::GetHarvestJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::HarvestJobStatusMapper::GetNameForHarvestJobStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("IN_PROGRESS"),
                         [](const Model::GetHarvestJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::HarvestJobStatusMapper::GetNameForHarvestJobStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetHarvestJobRequest& req) { return static_cast<DerivedClient*>(this)->GetHarvestJob(req); };
    Aws::Utils::Waiter<Model::GetHarvestJobRequest, Model::GetHarvestJobOutcome> waiter(2, 60, acceptors, operation,
                                                                                        "WaitUntilHarvestJobFinished");
    return waiter.Wait(request);
  }
};
}  // namespace mediapackagev2
}  // namespace Aws
