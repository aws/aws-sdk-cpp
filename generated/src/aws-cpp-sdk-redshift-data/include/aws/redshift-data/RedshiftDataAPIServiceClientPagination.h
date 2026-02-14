/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/redshift-data/RedshiftDataAPIServiceClient.h>
#include <aws/redshift-data/model/DescribeTablePaginationTraits.h>
#include <aws/redshift-data/model/GetStatementResultPaginationTraits.h>
#include <aws/redshift-data/model/GetStatementResultV2PaginationTraits.h>
#include <aws/redshift-data/model/ListDatabasesPaginationTraits.h>
#include <aws/redshift-data/model/ListSchemasPaginationTraits.h>
#include <aws/redshift-data/model/ListStatementsPaginationTraits.h>
#include <aws/redshift-data/model/ListTablesPaginationTraits.h>

namespace Aws {
namespace RedshiftDataAPIService {

using DescribeTablePaginator = Aws::Utils::Pagination::Paginator<RedshiftDataAPIServiceClient, Model::DescribeTableRequest,
                                                                 Pagination::DescribeTablePaginationTraits<RedshiftDataAPIServiceClient>>;
using GetStatementResultPaginator =
    Aws::Utils::Pagination::Paginator<RedshiftDataAPIServiceClient, Model::GetStatementResultRequest,
                                      Pagination::GetStatementResultPaginationTraits<RedshiftDataAPIServiceClient>>;
using GetStatementResultV2Paginator =
    Aws::Utils::Pagination::Paginator<RedshiftDataAPIServiceClient, Model::GetStatementResultV2Request,
                                      Pagination::GetStatementResultV2PaginationTraits<RedshiftDataAPIServiceClient>>;
using ListDatabasesPaginator = Aws::Utils::Pagination::Paginator<RedshiftDataAPIServiceClient, Model::ListDatabasesRequest,
                                                                 Pagination::ListDatabasesPaginationTraits<RedshiftDataAPIServiceClient>>;
using ListSchemasPaginator = Aws::Utils::Pagination::Paginator<RedshiftDataAPIServiceClient, Model::ListSchemasRequest,
                                                               Pagination::ListSchemasPaginationTraits<RedshiftDataAPIServiceClient>>;
using ListStatementsPaginator = Aws::Utils::Pagination::Paginator<RedshiftDataAPIServiceClient, Model::ListStatementsRequest,
                                                                  Pagination::ListStatementsPaginationTraits<RedshiftDataAPIServiceClient>>;
using ListTablesPaginator = Aws::Utils::Pagination::Paginator<RedshiftDataAPIServiceClient, Model::ListTablesRequest,
                                                              Pagination::ListTablesPaginationTraits<RedshiftDataAPIServiceClient>>;

}  // namespace RedshiftDataAPIService
}  // namespace Aws
