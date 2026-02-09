/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/workdocs/WorkDocsClient.h>
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

namespace Aws {
namespace WorkDocs {

using DescribeActivitiesPaginator = Aws::Utils::Pagination::Paginator<WorkDocsClient, Model::DescribeActivitiesRequest,
                                                                      Pagination::DescribeActivitiesPaginationTraits<WorkDocsClient>>;
using DescribeCommentsPaginator = Aws::Utils::Pagination::Paginator<WorkDocsClient, Model::DescribeCommentsRequest,
                                                                    Pagination::DescribeCommentsPaginationTraits<WorkDocsClient>>;
using DescribeDocumentVersionsPaginator =
    Aws::Utils::Pagination::Paginator<WorkDocsClient, Model::DescribeDocumentVersionsRequest,
                                      Pagination::DescribeDocumentVersionsPaginationTraits<WorkDocsClient>>;
using DescribeFolderContentsPaginator =
    Aws::Utils::Pagination::Paginator<WorkDocsClient, Model::DescribeFolderContentsRequest,
                                      Pagination::DescribeFolderContentsPaginationTraits<WorkDocsClient>>;
using DescribeGroupsPaginator = Aws::Utils::Pagination::Paginator<WorkDocsClient, Model::DescribeGroupsRequest,
                                                                  Pagination::DescribeGroupsPaginationTraits<WorkDocsClient>>;
using DescribeNotificationSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<WorkDocsClient, Model::DescribeNotificationSubscriptionsRequest,
                                      Pagination::DescribeNotificationSubscriptionsPaginationTraits<WorkDocsClient>>;
using DescribeResourcePermissionsPaginator =
    Aws::Utils::Pagination::Paginator<WorkDocsClient, Model::DescribeResourcePermissionsRequest,
                                      Pagination::DescribeResourcePermissionsPaginationTraits<WorkDocsClient>>;
using DescribeRootFoldersPaginator = Aws::Utils::Pagination::Paginator<WorkDocsClient, Model::DescribeRootFoldersRequest,
                                                                       Pagination::DescribeRootFoldersPaginationTraits<WorkDocsClient>>;
using DescribeUsersPaginator = Aws::Utils::Pagination::Paginator<WorkDocsClient, Model::DescribeUsersRequest,
                                                                 Pagination::DescribeUsersPaginationTraits<WorkDocsClient>>;
using SearchResourcesPaginator = Aws::Utils::Pagination::Paginator<WorkDocsClient, Model::SearchResourcesRequest,
                                                                   Pagination::SearchResourcesPaginationTraits<WorkDocsClient>>;

}  // namespace WorkDocs
}  // namespace Aws
