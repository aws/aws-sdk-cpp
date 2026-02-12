/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/servicecatalog-appregistry/AppRegistryClient.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedResourcesPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsForApplicationPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsPaginationTraits.h>

namespace Aws {
namespace AppRegistry {

using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<AppRegistryClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<AppRegistryClient>>;
using ListAssociatedAttributeGroupsPaginator =
    Aws::Utils::Pagination::Paginator<AppRegistryClient, Model::ListAssociatedAttributeGroupsRequest,
                                      Pagination::ListAssociatedAttributeGroupsPaginationTraits<AppRegistryClient>>;
using ListAssociatedResourcesPaginator =
    Aws::Utils::Pagination::Paginator<AppRegistryClient, Model::ListAssociatedResourcesRequest,
                                      Pagination::ListAssociatedResourcesPaginationTraits<AppRegistryClient>>;
using ListAttributeGroupsPaginator = Aws::Utils::Pagination::Paginator<AppRegistryClient, Model::ListAttributeGroupsRequest,
                                                                       Pagination::ListAttributeGroupsPaginationTraits<AppRegistryClient>>;
using ListAttributeGroupsForApplicationPaginator =
    Aws::Utils::Pagination::Paginator<AppRegistryClient, Model::ListAttributeGroupsForApplicationRequest,
                                      Pagination::ListAttributeGroupsForApplicationPaginationTraits<AppRegistryClient>>;

}  // namespace AppRegistry
}  // namespace Aws
