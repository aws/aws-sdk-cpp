/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pipes/model/ListPipesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Pipes {

class PipesClient;

template <typename DerivedClient>
class PipesPaginationBase {
 public:
  /**
   * Create a paginator for ListPipes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipesRequest, Pagination::ListPipesPaginationTraits<DerivedClient>>
  ListPipesPaginator(const Model::ListPipesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipesRequest, Pagination::ListPipesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Pipes
}  // namespace Aws
