/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/schemas/model/ListDiscoverersPaginationTraits.h>
#include <aws/schemas/model/ListRegistriesPaginationTraits.h>
#include <aws/schemas/model/ListSchemaVersionsPaginationTraits.h>
#include <aws/schemas/model/ListSchemasPaginationTraits.h>
#include <aws/schemas/model/SearchSchemasPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Schemas {

class SchemasClient;

template <typename DerivedClient>
class SchemasPaginationBase {
 public:
  /**
   * Create a paginator for ListDiscoverers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoverersRequest,
                                    Pagination::ListDiscoverersPaginationTraits<DerivedClient>>
  ListDiscoverersPaginator(const Model::ListDiscoverersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoverersRequest,
                                             Pagination::ListDiscoverersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListRegistries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistriesRequest, Pagination::ListRegistriesPaginationTraits<DerivedClient>>
  ListRegistriesPaginator(const Model::ListRegistriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistriesRequest,
                                             Pagination::ListRegistriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListSchemas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemasRequest, Pagination::ListSchemasPaginationTraits<DerivedClient>>
  ListSchemasPaginator(const Model::ListSchemasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemasRequest,
                                             Pagination::ListSchemasPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListSchemaVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemaVersionsRequest,
                                    Pagination::ListSchemaVersionsPaginationTraits<DerivedClient>>
  ListSchemaVersionsPaginator(const Model::ListSchemaVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemaVersionsRequest,
                                             Pagination::ListSchemaVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchSchemas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchSchemasRequest, Pagination::SearchSchemasPaginationTraits<DerivedClient>>
  SearchSchemasPaginator(const Model::SearchSchemasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchSchemasRequest,
                                             Pagination::SearchSchemasPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace Schemas
}  // namespace Aws
