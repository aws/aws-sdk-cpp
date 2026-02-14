/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeClient.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsPaginationTraits.h>

namespace Aws {
namespace AugmentedAIRuntime {

using ListHumanLoopsPaginator = Aws::Utils::Pagination::Paginator<AugmentedAIRuntimeClient, Model::ListHumanLoopsRequest,
                                                                  Pagination::ListHumanLoopsPaginationTraits<AugmentedAIRuntimeClient>>;

}  // namespace AugmentedAIRuntime
}  // namespace Aws
