/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeSigningJobOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Succeeded"),
                         [](const Model::DescribeSigningJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SigningStatusMapper::GetNameForSigningStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::DescribeSigningJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::SigningStatusMapper::GetNameForSigningStatus(result.GetStatus()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundException")});

    auto operation = [this](const Model::DescribeSigningJobRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeSigningJob(req);
    };
    Aws::Utils::Waiter<Model::DescribeSigningJobRequest, Model::DescribeSigningJobOutcome> waiter(20, 6, acceptors, operation,
                                                                                                  "WaitUntilSuccessfulSigningJob");
    return waiter.Wait(request);
  }
};
}  // namespace signer
}  // namespace Aws
