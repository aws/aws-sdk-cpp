/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/workspaces/model/DescribeApplicationAssociationsPaginationTraits.h>
#include <aws/workspaces/model/DescribeApplicationsPaginationTraits.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesPaginationTraits.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesPaginationTraits.h>
#include <aws/workspaces/model/DescribeWorkspacesPaginationTraits.h>
#include <aws/workspaces/model/ListAccountLinksPaginationTraits.h>

#include <memory>

namespace Aws {
namespace WorkSpaces {

class WorkSpacesClient;

template <typename DerivedClient>
class WorkSpacesPaginationBase {
 public:
  /**
   * Create a paginator for DescribeApplicationAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeApplicationAssociationsRequest,
                                    Pagination::DescribeApplicationAssociationsPaginationTraits<DerivedClient>>
  DescribeApplicationAssociationsPaginator(const Model::DescribeApplicationAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeApplicationAssociationsRequest,
                                             Pagination::DescribeApplicationAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeApplicationsRequest,
                                    Pagination::DescribeApplicationsPaginationTraits<DerivedClient>>
  DescribeApplicationsPaginator(const Model::DescribeApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeApplicationsRequest,
                                             Pagination::DescribeApplicationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeWorkspaceBundles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeWorkspaceBundlesRequest,
                                    Pagination::DescribeWorkspaceBundlesPaginationTraits<DerivedClient>>
  DescribeWorkspaceBundlesPaginator(const Model::DescribeWorkspaceBundlesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeWorkspaceBundlesRequest,
                                             Pagination::DescribeWorkspaceBundlesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeWorkspaceDirectories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeWorkspaceDirectoriesRequest,
                                    Pagination::DescribeWorkspaceDirectoriesPaginationTraits<DerivedClient>>
  DescribeWorkspaceDirectoriesPaginator(const Model::DescribeWorkspaceDirectoriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeWorkspaceDirectoriesRequest,
                                             Pagination::DescribeWorkspaceDirectoriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeWorkspaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeWorkspacesRequest,
                                    Pagination::DescribeWorkspacesPaginationTraits<DerivedClient>>
  DescribeWorkspacesPaginator(const Model::DescribeWorkspacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeWorkspacesRequest,
                                             Pagination::DescribeWorkspacesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccountLinks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountLinksRequest,
                                    Pagination::ListAccountLinksPaginationTraits<DerivedClient>>
  ListAccountLinksPaginator(const Model::ListAccountLinksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountLinksRequest,
                                             Pagination::ListAccountLinksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace WorkSpaces
}  // namespace Aws
