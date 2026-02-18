/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/s3tables/model/ListNamespacesPaginationTraits.h>
#include <aws/s3tables/model/ListTableBucketsPaginationTraits.h>
#include <aws/s3tables/model/ListTablesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace S3Tables {

class S3TablesClient;

template <typename DerivedClient>
class S3TablesPaginationBase {
 public:
  /**
   * Create a paginator for ListNamespaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNamespacesRequest, Pagination::ListNamespacesPaginationTraits<DerivedClient>>
  ListNamespacesPaginator(const Model::ListNamespacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNamespacesRequest,
                                             Pagination::ListNamespacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListTableBuckets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTableBucketsRequest,
                                    Pagination::ListTableBucketsPaginationTraits<DerivedClient>>
  ListTableBucketsPaginator(const Model::ListTableBucketsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTableBucketsRequest,
                                             Pagination::ListTableBucketsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTablesRequest, Pagination::ListTablesPaginationTraits<DerivedClient>>
  ListTablesPaginator(const Model::ListTablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTablesRequest,
                                             Pagination::ListTablesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace S3Tables
}  // namespace Aws
