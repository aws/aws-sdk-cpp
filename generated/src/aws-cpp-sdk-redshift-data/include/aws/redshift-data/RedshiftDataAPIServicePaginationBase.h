/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/redshift-data/model/DescribeTablePaginationTraits.h>
#include <aws/redshift-data/model/GetStatementResultPaginationTraits.h>
#include <aws/redshift-data/model/GetStatementResultV2PaginationTraits.h>
#include <aws/redshift-data/model/ListDatabasesPaginationTraits.h>
#include <aws/redshift-data/model/ListSchemasPaginationTraits.h>
#include <aws/redshift-data/model/ListStatementsPaginationTraits.h>
#include <aws/redshift-data/model/ListTablesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace RedshiftDataAPIService {

template <typename DerivedClient>
class RedshiftDataAPIServicePaginationBase {
 public:
  /**
   * Create a paginator for DescribeTable operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTableRequest, Pagination::DescribeTablePaginationTraits<DerivedClient>>
  DescribeTablePaginator(const Model::DescribeTableRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTableRequest,
                                             Pagination::DescribeTablePaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetStatementResult operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetStatementResultRequest,
                                    Pagination::GetStatementResultPaginationTraits<DerivedClient>>
  GetStatementResultPaginator(const Model::GetStatementResultRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetStatementResultRequest,
                                             Pagination::GetStatementResultPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetStatementResultV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetStatementResultV2Request,
                                    Pagination::GetStatementResultV2PaginationTraits<DerivedClient>>
  GetStatementResultV2Paginator(const Model::GetStatementResultV2Request& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetStatementResultV2Request,
                                             Pagination::GetStatementResultV2PaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatabases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatabasesRequest, Pagination::ListDatabasesPaginationTraits<DerivedClient>>
  ListDatabasesPaginator(const Model::ListDatabasesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatabasesRequest,
                                             Pagination::ListDatabasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListSchemas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemasRequest, Pagination::ListSchemasPaginationTraits<DerivedClient>>
  ListSchemasPaginator(const Model::ListSchemasRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemasRequest,
                                             Pagination::ListSchemasPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListStatements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStatementsRequest, Pagination::ListStatementsPaginationTraits<DerivedClient>>
  ListStatementsPaginator(const Model::ListStatementsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStatementsRequest,
                                             Pagination::ListStatementsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTablesRequest, Pagination::ListTablesPaginationTraits<DerivedClient>>
  ListTablesPaginator(const Model::ListTablesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTablesRequest,
                                             Pagination::ListTablesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace RedshiftDataAPIService
}  // namespace Aws
