/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/textract/model/ListAdapterVersionsPaginationTraits.h>
#include <aws/textract/model/ListAdaptersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Textract {

class TextractClient;

template <typename DerivedClient>
class TextractPaginationBase {
 public:
  /**
   * Create a paginator for ListAdapters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdaptersRequest, Pagination::ListAdaptersPaginationTraits<DerivedClient>>
  ListAdaptersPaginator(const Model::ListAdaptersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdaptersRequest,
                                             Pagination::ListAdaptersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListAdapterVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdapterVersionsRequest,
                                    Pagination::ListAdapterVersionsPaginationTraits<DerivedClient>>
  ListAdapterVersionsPaginator(const Model::ListAdapterVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdapterVersionsRequest,
                                             Pagination::ListAdapterVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Textract
}  // namespace Aws
