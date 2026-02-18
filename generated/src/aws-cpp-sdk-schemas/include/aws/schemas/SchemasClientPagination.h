/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/schemas/SchemasClient.h>
#include <aws/schemas/model/ListDiscoverersPaginationTraits.h>
#include <aws/schemas/model/ListRegistriesPaginationTraits.h>
#include <aws/schemas/model/ListSchemaVersionsPaginationTraits.h>
#include <aws/schemas/model/ListSchemasPaginationTraits.h>
#include <aws/schemas/model/SearchSchemasPaginationTraits.h>

namespace Aws {
namespace Schemas {

using ListDiscoverersPaginator = Aws::Utils::Pagination::Paginator<SchemasClient, Model::ListDiscoverersRequest,
                                                                   Pagination::ListDiscoverersPaginationTraits<SchemasClient>>;
using ListRegistriesPaginator = Aws::Utils::Pagination::Paginator<SchemasClient, Model::ListRegistriesRequest,
                                                                  Pagination::ListRegistriesPaginationTraits<SchemasClient>>;
using ListSchemasPaginator =
    Aws::Utils::Pagination::Paginator<SchemasClient, Model::ListSchemasRequest, Pagination::ListSchemasPaginationTraits<SchemasClient>>;
using ListSchemaVersionsPaginator = Aws::Utils::Pagination::Paginator<SchemasClient, Model::ListSchemaVersionsRequest,
                                                                      Pagination::ListSchemaVersionsPaginationTraits<SchemasClient>>;
using SearchSchemasPaginator =
    Aws::Utils::Pagination::Paginator<SchemasClient, Model::SearchSchemasRequest, Pagination::SearchSchemasPaginationTraits<SchemasClient>>;

}  // namespace Schemas
}  // namespace Aws
