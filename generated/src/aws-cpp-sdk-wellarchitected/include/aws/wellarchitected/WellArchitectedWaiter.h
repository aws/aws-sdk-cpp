/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/wellarchitected/WellArchitectedClient.h>
#include <aws/wellarchitected/model/GetAgentOrganizationalReportRequest.h>
#include <aws/wellarchitected/model/GetAgentOrganizationalReportResult.h>
#include <aws/wellarchitected/model/OrganizationalReportState.h>

#include <algorithm>

namespace Aws {
namespace WellArchitected {

template <typename DerivedClient = WellArchitectedClient>
class WellArchitectedWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetAgentOrganizationalReportOutcome> WaitUntilAgentOrganizationalReportCompleted(
      const Model::GetAgentOrganizationalReportRequest& request) {
    using OutcomeT = Model::GetAgentOrganizationalReportOutcome;
    using RequestT = Model::GetAgentOrganizationalReportRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AgentOrganizationalReportCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETED"),
        [](const Model::GetAgentOrganizationalReportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::OrganizationalReportStateMapper::GetNameForOrganizationalReportState(result.GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AgentOrganizationalReportCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetAgentOrganizationalReportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::OrganizationalReportStateMapper::GetNameForOrganizationalReportState(result.GetState()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AgentOrganizationalReportCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETING"),
        [](const Model::GetAgentOrganizationalReportOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::OrganizationalReportStateMapper::GetNameForOrganizationalReportState(result.GetState()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetAgentOrganizationalReport(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 40, std::move(acceptors), operation, "WaitUntilAgentOrganizationalReportCompleted");
    return waiter.Wait(request);
  }
};
}  // namespace WellArchitected
}  // namespace Aws
