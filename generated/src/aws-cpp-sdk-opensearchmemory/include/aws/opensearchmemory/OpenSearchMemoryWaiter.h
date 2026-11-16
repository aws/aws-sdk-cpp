/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/opensearchmemory/OpenSearchMemoryClient.h>
#include <aws/opensearchmemory/model/GetSpaceRequest.h>
#include <aws/opensearchmemory/model/GetSpaceResult.h>
#include <aws/opensearchmemory/model/SpaceStatus.h>

#include <algorithm>

namespace Aws {
namespace OpenSearchMemory {

template <typename DerivedClient = OpenSearchMemoryClient>
class OpenSearchMemoryWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetSpaceOutcome> WaitUntilSpaceActive(const Model::GetSpaceRequest& request) {
    using OutcomeT = Model::GetSpaceOutcome;
    using RequestT = Model::GetSpaceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SpaceStatusMapper::GetNameForSpaceStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("SpaceActiveWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATING"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SpaceStatusMapper::GetNameForSpaceStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceActiveWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("UPDATING"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SpaceStatusMapper::GetNameForSpaceStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SpaceStatusMapper::GetNameForSpaceStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETING"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SpaceStatusMapper::GetNameForSpaceStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETED"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SpaceStatusMapper::GetNameForSpaceStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetSpace(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 60, std::move(acceptors), operation, "WaitUntilSpaceActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetSpaceOutcome> WaitUntilSpaceDeleted(const Model::GetSpaceRequest& request) {
    using OutcomeT = Model::GetSpaceOutcome;
    using RequestT = Model::GetSpaceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("SpaceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SpaceStatusMapper::GetNameForSpaceStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("DELETING"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SpaceStatusMapper::GetNameForSpaceStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SpaceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetSpaceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SpaceStatusMapper::GetNameForSpaceStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetSpace(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(10, 60, std::move(acceptors), operation, "WaitUntilSpaceDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace OpenSearchMemory
}  // namespace Aws
