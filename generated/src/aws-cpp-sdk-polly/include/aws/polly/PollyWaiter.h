/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/polly/PollyClient.h>
#include <aws/polly/model/GetVoiceRequest.h>
#include <aws/polly/model/GetVoiceResult.h>
#include <aws/polly/model/VoiceStatus.h>

#include <algorithm>

namespace Aws {
namespace Polly {

template <typename DerivedClient = PollyClient>
class PollyWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetVoiceOutcome> WaitUntilVoiceActive(const Model::GetVoiceRequest& request) {
    using OutcomeT = Model::GetVoiceOutcome;
    using RequestT = Model::GetVoiceRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VoiceActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("active"),
        [](const Model::GetVoiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::VoiceStatusMapper::GetNameForVoiceStatus(result.GetVoice().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "VoiceActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::GetVoiceOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::VoiceStatusMapper::GetNameForVoiceStatus(result.GetVoice().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetVoice(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilVoiceActive");
    return waiter.Wait(request);
  }
};
}  // namespace Polly
}  // namespace Aws
