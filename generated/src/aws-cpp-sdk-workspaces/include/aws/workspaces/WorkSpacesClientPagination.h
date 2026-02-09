/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/workspaces/WorkSpacesClient.h>
#include <aws/workspaces/model/DescribeApplicationAssociationsPaginationTraits.h>
#include <aws/workspaces/model/DescribeApplicationsPaginationTraits.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesPaginationTraits.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesPaginationTraits.h>
#include <aws/workspaces/model/DescribeWorkspacesPaginationTraits.h>
#include <aws/workspaces/model/ListAccountLinksPaginationTraits.h>

namespace Aws {
namespace WorkSpaces {

using DescribeApplicationAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesClient, Model::DescribeApplicationAssociationsRequest,
                                      Pagination::DescribeApplicationAssociationsPaginationTraits<WorkSpacesClient>>;
using DescribeApplicationsPaginator = Aws::Utils::Pagination::Paginator<WorkSpacesClient, Model::DescribeApplicationsRequest,
                                                                        Pagination::DescribeApplicationsPaginationTraits<WorkSpacesClient>>;
using DescribeWorkspaceBundlesPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesClient, Model::DescribeWorkspaceBundlesRequest,
                                      Pagination::DescribeWorkspaceBundlesPaginationTraits<WorkSpacesClient>>;
using DescribeWorkspaceDirectoriesPaginator =
    Aws::Utils::Pagination::Paginator<WorkSpacesClient, Model::DescribeWorkspaceDirectoriesRequest,
                                      Pagination::DescribeWorkspaceDirectoriesPaginationTraits<WorkSpacesClient>>;
using DescribeWorkspacesPaginator = Aws::Utils::Pagination::Paginator<WorkSpacesClient, Model::DescribeWorkspacesRequest,
                                                                      Pagination::DescribeWorkspacesPaginationTraits<WorkSpacesClient>>;
using ListAccountLinksPaginator = Aws::Utils::Pagination::Paginator<WorkSpacesClient, Model::ListAccountLinksRequest,
                                                                    Pagination::ListAccountLinksPaginationTraits<WorkSpacesClient>>;

}  // namespace WorkSpaces
}  // namespace Aws
