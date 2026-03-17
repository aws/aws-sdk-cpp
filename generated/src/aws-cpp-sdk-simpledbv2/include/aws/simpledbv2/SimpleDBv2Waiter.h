/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/simpledbv2/SimpleDBv2Client.h>
#include <aws/simpledbv2/model/ExportStatus.h>
#include <aws/simpledbv2/model/GetExportRequest.h>
#include <aws/simpledbv2/model/GetExportResult.h>

#include <algorithm>

namespace Aws {
namespace SimpleDBv2 {

template <typename DerivedClient = SimpleDBv2Client>
class SimpleDBv2Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetExportOutcome> WaitUntilExportSucceeded(const Model::GetExportRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetExportOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCEEDED"),
                         [](const Model::GetExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetExportRequest& req) { return static_cast<DerivedClient*>(this)->GetExport(req); };
    Aws::Utils::Waiter<Model::GetExportRequest, Model::GetExportOutcome> waiter(30, 4, acceptors, operation, "WaitUntilExportSucceeded");
    return waiter.Wait(request);
  }
};
}  // namespace SimpleDBv2
}  // namespace Aws
