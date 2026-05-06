/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pipes/model/ListPipesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Pipes {

template <typename DerivedClient>
class PipesPaginationBase {
 public:
  /**
   * Create a paginator for ListPipes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipesRequest, Pagination::ListPipesPaginationTraits<DerivedClient>>
  ListPipesPaginator(const Model::ListPipesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipesRequest, Pagination::ListPipesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Pipes
}  // namespace Aws
