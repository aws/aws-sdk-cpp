/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/workdocs/model/DescribeActivitiesPaginationTraits.h>
#include <aws/workdocs/model/DescribeCommentsPaginationTraits.h>
#include <aws/workdocs/model/DescribeDocumentVersionsPaginationTraits.h>
#include <aws/workdocs/model/DescribeFolderContentsPaginationTraits.h>
#include <aws/workdocs/model/DescribeGroupsPaginationTraits.h>
#include <aws/workdocs/model/DescribeNotificationSubscriptionsPaginationTraits.h>
#include <aws/workdocs/model/DescribeResourcePermissionsPaginationTraits.h>
#include <aws/workdocs/model/DescribeRootFoldersPaginationTraits.h>
#include <aws/workdocs/model/DescribeUsersPaginationTraits.h>
#include <aws/workdocs/model/SearchResourcesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace WorkDocs {

class WorkDocsClient;

template <typename DerivedClient>
class WorkDocsPaginationBase {
 public:
  /**
   * Create a paginator for DescribeActivities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeActivitiesRequest,
                                    Pagination::DescribeActivitiesPaginationTraits<DerivedClient>>
  DescribeActivitiesPaginator(const Model::DescribeActivitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeActivitiesRequest,
                                             Pagination::DescribeActivitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeComments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCommentsRequest,
                                    Pagination::DescribeCommentsPaginationTraits<DerivedClient>>
  DescribeCommentsPaginator(const Model::DescribeCommentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCommentsRequest,
                                             Pagination::DescribeCommentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeDocumentVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDocumentVersionsRequest,
                                    Pagination::DescribeDocumentVersionsPaginationTraits<DerivedClient>>
  DescribeDocumentVersionsPaginator(const Model::DescribeDocumentVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDocumentVersionsRequest,
                                             Pagination::DescribeDocumentVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFolderContents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFolderContentsRequest,
                                    Pagination::DescribeFolderContentsPaginationTraits<DerivedClient>>
  DescribeFolderContentsPaginator(const Model::DescribeFolderContentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFolderContentsRequest,
                                             Pagination::DescribeFolderContentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGroupsRequest, Pagination::DescribeGroupsPaginationTraits<DerivedClient>>
  DescribeGroupsPaginator(const Model::DescribeGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeGroupsRequest,
                                             Pagination::DescribeGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeNotificationSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNotificationSubscriptionsRequest,
                                    Pagination::DescribeNotificationSubscriptionsPaginationTraits<DerivedClient>>
  DescribeNotificationSubscriptionsPaginator(const Model::DescribeNotificationSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNotificationSubscriptionsRequest,
                                             Pagination::DescribeNotificationSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeResourcePermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeResourcePermissionsRequest,
                                    Pagination::DescribeResourcePermissionsPaginationTraits<DerivedClient>>
  DescribeResourcePermissionsPaginator(const Model::DescribeResourcePermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeResourcePermissionsRequest,
                                             Pagination::DescribeResourcePermissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRootFolders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRootFoldersRequest,
                                    Pagination::DescribeRootFoldersPaginationTraits<DerivedClient>>
  DescribeRootFoldersPaginator(const Model::DescribeRootFoldersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRootFoldersRequest,
                                             Pagination::DescribeRootFoldersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUsersRequest, Pagination::DescribeUsersPaginationTraits<DerivedClient>>
  DescribeUsersPaginator(const Model::DescribeUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeUsersRequest,
                                             Pagination::DescribeUsersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for SearchResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchResourcesRequest,
                                    Pagination::SearchResourcesPaginationTraits<DerivedClient>>
  SearchResourcesPaginator(const Model::SearchResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchResourcesRequest,
                                             Pagination::SearchResourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace WorkDocs
}  // namespace Aws
