/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/schemas/SchemasClient.h>
#include <aws/schemas/model/CodeGenerationStatus.h>
#include <aws/schemas/model/DescribeCodeBindingRequest.h>
#include <aws/schemas/model/DescribeCodeBindingResult.h>

#include <algorithm>

namespace Aws {
namespace Schemas {

template <typename DerivedClient = SchemasClient>
class SchemasWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeCodeBindingOutcome> WaitUntilCodeBindingExists(
      const Model::DescribeCodeBindingRequest& request) {
    using OutcomeT = Model::DescribeCodeBindingOutcome;
    using RequestT = Model::DescribeCodeBindingRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CodeBindingExistsWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CREATE_COMPLETE"),
        [](const Model::DescribeCodeBindingOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CodeGenerationStatusMapper::GetNameForCodeGenerationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CodeBindingExistsWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("CREATE_IN_PROGRESS"),
        [](const Model::DescribeCodeBindingOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CodeGenerationStatusMapper::GetNameForCodeGenerationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CodeBindingExistsWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeCodeBindingOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::CodeGenerationStatusMapper::GetNameForCodeGenerationStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("CodeBindingExistsWaiter", Aws::Utils::WaiterState::FAILURE,
                                                                                Aws::String("NotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCodeBinding(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilCodeBindingExists");
    return waiter.Wait(request);
  }
};
}  // namespace Schemas
}  // namespace Aws
