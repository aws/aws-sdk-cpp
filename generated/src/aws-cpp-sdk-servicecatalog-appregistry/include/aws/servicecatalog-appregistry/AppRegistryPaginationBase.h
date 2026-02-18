/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedResourcesPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsForApplicationPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace AppRegistry {

class AppRegistryClient;

template <typename DerivedClient>
class AppRegistryPaginationBase {
 public:
  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAssociatedAttributeGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedAttributeGroupsRequest,
                                    Pagination::ListAssociatedAttributeGroupsPaginationTraits<DerivedClient>>
  ListAssociatedAttributeGroupsPaginator(const Model::ListAssociatedAttributeGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedAttributeGroupsRequest,
                                             Pagination::ListAssociatedAttributeGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssociatedResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedResourcesRequest,
                                    Pagination::ListAssociatedResourcesPaginationTraits<DerivedClient>>
  ListAssociatedResourcesPaginator(const Model::ListAssociatedResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedResourcesRequest,
                                             Pagination::ListAssociatedResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAttributeGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttributeGroupsRequest,
                                    Pagination::ListAttributeGroupsPaginationTraits<DerivedClient>>
  ListAttributeGroupsPaginator(const Model::ListAttributeGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttributeGroupsRequest,
                                             Pagination::ListAttributeGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAttributeGroupsForApplication operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttributeGroupsForApplicationRequest,
                                    Pagination::ListAttributeGroupsForApplicationPaginationTraits<DerivedClient>>
  ListAttributeGroupsForApplicationPaginator(const Model::ListAttributeGroupsForApplicationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttributeGroupsForApplicationRequest,
                                             Pagination::ListAttributeGroupsForApplicationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AppRegistry
}  // namespace Aws
