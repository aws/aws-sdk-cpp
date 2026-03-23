/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/signer/SignerClient.h>
#include <aws/signer/model/DescribeSigningJobRequest.h>
#include <aws/signer/model/DescribeSigningJobResult.h>
#include <aws/signer/model/SigningStatus.h>

#include <algorithm>

namespace Aws {
namespace signer {

template <typename DerivedClient = SignerClient>
class SignerWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeSigningJobOutcome> WaitUntilSuccessfulSigningJob(
      const Model::DescribeSigningJobRequest& request) {
    using OutcomeT = Model::DescribeSigningJobOutcome;
    using RequestT = Model::DescribeSigningJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SuccessfulSigningJobWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Succeeded"),
        [](const Model::DescribeSigningJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SigningStatusMapper::GetNameForSigningStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "SuccessfulSigningJobWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::DescribeSigningJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::SigningStatusMapper::GetNameForSigningStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "SuccessfulSigningJobWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSigningJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 6, std::move(acceptors), operation, "WaitUntilSuccessfulSigningJob");
    return waiter.Wait(request);
  }
};
}  // namespace signer
}  // namespace Aws
