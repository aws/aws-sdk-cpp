/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace AugmentedAIRuntime {

class AugmentedAIRuntimeClient;

template <typename DerivedClient>
class AugmentedAIRuntimePaginationBase {
 public:
  /**
   * Create a paginator for ListHumanLoops operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHumanLoopsRequest, Pagination::ListHumanLoopsPaginationTraits<DerivedClient>>
  ListHumanLoopsPaginator(const Model::ListHumanLoopsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHumanLoopsRequest,
                                             Pagination::ListHumanLoopsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace AugmentedAIRuntime
}  // namespace Aws
