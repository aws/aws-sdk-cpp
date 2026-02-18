/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/support/model/DescribeCasesPaginationTraits.h>
#include <aws/support/model/DescribeCommunicationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Support {

class SupportClient;

template <typename DerivedClient>
class SupportPaginationBase {
 public:
  /**
   * Create a paginator for DescribeCases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCasesRequest, Pagination::DescribeCasesPaginationTraits<DerivedClient>>
  DescribeCasesPaginator(const Model::DescribeCasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCasesRequest,
                                             Pagination::DescribeCasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for DescribeCommunications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCommunicationsRequest,
                                    Pagination::DescribeCommunicationsPaginationTraits<DerivedClient>>
  DescribeCommunicationsPaginator(const Model::DescribeCommunicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCommunicationsRequest,
                                             Pagination::DescribeCommunicationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Support
}  // namespace Aws
