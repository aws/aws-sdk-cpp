/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/route53/Route53Client.h>
#include <aws/route53/model/ChangeStatus.h>
#include <aws/route53/model/GetChangeRequest.h>
#include <aws/route53/model/GetChangeResult.h>
#include <aws/route53/model/GetHealthCheckSourceRequest.h>
#include <aws/route53/model/GetHealthCheckSourceResult.h>
#include <aws/route53/model/HealthCheckSourceStatus.h>

#include <algorithm>

namespace Aws {
namespace Route53 {

template <typename DerivedClient = Route53Client>
class Route53Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetChangeOutcome> WaitUntilResourceRecordSetsChanged(const Model::GetChangeRequest& request) {
    using OutcomeT = Model::GetChangeOutcome;
    using RequestT = Model::GetChangeRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ResourceRecordSetsChangedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("INSYNC"),
        [](const Model::GetChangeOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ChangeStatusMapper::GetNameForChangeStatus(result.GetChangeInfo().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetChange(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilResourceRecordSetsChanged");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetHealthCheckSourceOutcome> WaitUntilHealthCheckSourceCreated(
      const Model::GetHealthCheckSourceRequest& request) {
    using OutcomeT = Model::GetHealthCheckSourceOutcome;
    using RequestT = Model::GetHealthCheckSourceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "HealthCheckSourceCreatedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATE_COMPLETED"),
        [](const Model::GetHealthCheckSourceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::HealthCheckSourceStatusMapper::GetNameForHealthCheckSourceStatus(
                     result.GetHealthCheckSource().GetHealthCheckSourceStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "HealthCheckSourceCreatedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::GetHealthCheckSourceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::HealthCheckSourceStatusMapper::GetNameForHealthCheckSourceStatus(
                     result.GetHealthCheckSource().GetHealthCheckSourceStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "HealthCheckSourceCreatedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("NoSuchHealthCheckSource")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetHealthCheckSource(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilHealthCheckSourceCreated");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetHealthCheckSourceOutcome> WaitUntilHealthCheckSourceDeleted(
      const Model::GetHealthCheckSourceRequest& request) {
    using OutcomeT = Model::GetHealthCheckSourceOutcome;
    using RequestT = Model::GetHealthCheckSourceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "HealthCheckSourceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("NoSuchHealthCheckSource")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "HealthCheckSourceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETE_COMPLETED"),
        [](const Model::GetHealthCheckSourceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::HealthCheckSourceStatusMapper::GetNameForHealthCheckSourceStatus(
                     result.GetHealthCheckSource().GetHealthCheckSourceStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "HealthCheckSourceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::GetHealthCheckSourceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::HealthCheckSourceStatusMapper::GetNameForHealthCheckSourceStatus(
                     result.GetHealthCheckSource().GetHealthCheckSourceStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetHealthCheckSource(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilHealthCheckSourceDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace Route53
}  // namespace Aws
