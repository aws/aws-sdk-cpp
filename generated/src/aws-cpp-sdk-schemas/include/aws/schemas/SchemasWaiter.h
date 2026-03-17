/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeCodeBindingOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_COMPLETE"),
                         [](const Model::DescribeCodeBindingOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CodeGenerationStatusMapper::GetNameForCodeGenerationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_IN_PROGRESS"),
                         [](const Model::DescribeCodeBindingOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CodeGenerationStatusMapper::GetNameForCodeGenerationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CREATE_FAILED"),
                         [](const Model::DescribeCodeBindingOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::CodeGenerationStatusMapper::GetNameForCodeGenerationStatus(result.GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::ERROR, Aws::String("NotFoundException")});

    auto operation = [this](const Model::DescribeCodeBindingRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeCodeBinding(req);
    };
    Aws::Utils::Waiter<Model::DescribeCodeBindingRequest, Model::DescribeCodeBindingOutcome> waiter(2, 60, acceptors, operation,
                                                                                                    "WaitUntilCodeBindingExists");
    return waiter.Wait(request);
  }
};
}  // namespace Schemas
}  // namespace Aws
