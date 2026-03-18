/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::GetExportOutcome;
    using RequestT = Model::GetExportRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportSucceededWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCEEDED"),
        [](const Model::GetExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ExportSucceededWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetExportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ExportStatusMapper::GetNameForExportStatus(result.GetExportStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetExport(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilExportSucceeded");
    return waiter.Wait(request);
  }
};
}  // namespace SimpleDBv2
}  // namespace Aws
