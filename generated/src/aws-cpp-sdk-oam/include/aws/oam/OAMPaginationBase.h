/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/oam/model/ListAttachedLinksPaginationTraits.h>
#include <aws/oam/model/ListLinksPaginationTraits.h>
#include <aws/oam/model/ListSinksPaginationTraits.h>

#include <memory>

namespace Aws {
namespace OAM {

class OAMClient;

template <typename DerivedClient>
class OAMPaginationBase {
 public:
  /**
   * Create a paginator for ListAttachedLinks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedLinksRequest,
                                    Pagination::ListAttachedLinksPaginationTraits<DerivedClient>>
  ListAttachedLinksPaginator(const Model::ListAttachedLinksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedLinksRequest,
                                             Pagination::ListAttachedLinksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLinks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinksRequest, Pagination::ListLinksPaginationTraits<DerivedClient>>
  ListLinksPaginator(const Model::ListLinksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinksRequest, Pagination::ListLinksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSinks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSinksRequest, Pagination::ListSinksPaginationTraits<DerivedClient>>
  ListSinksPaginator(const Model::ListSinksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSinksRequest, Pagination::ListSinksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace OAM
}  // namespace Aws
