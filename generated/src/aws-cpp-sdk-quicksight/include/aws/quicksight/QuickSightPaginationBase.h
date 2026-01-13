/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/quicksight/model/DescribeFolderPermissionsPaginationTraits.h>
#include <aws/quicksight/model/DescribeFolderResolvedPermissionsPaginationTraits.h>
#include <aws/quicksight/model/ListActionConnectorsPaginationTraits.h>
#include <aws/quicksight/model/ListAnalysesPaginationTraits.h>
#include <aws/quicksight/model/ListAssetBundleExportJobsPaginationTraits.h>
#include <aws/quicksight/model/ListAssetBundleImportJobsPaginationTraits.h>
#include <aws/quicksight/model/ListBrandsPaginationTraits.h>
#include <aws/quicksight/model/ListCustomPermissionsPaginationTraits.h>
#include <aws/quicksight/model/ListDashboardVersionsPaginationTraits.h>
#include <aws/quicksight/model/ListDashboardsPaginationTraits.h>
#include <aws/quicksight/model/ListDataSetsPaginationTraits.h>
#include <aws/quicksight/model/ListDataSourcesPaginationTraits.h>
#include <aws/quicksight/model/ListFlowsPaginationTraits.h>
#include <aws/quicksight/model/ListFolderMembersPaginationTraits.h>
#include <aws/quicksight/model/ListFoldersForResourcePaginationTraits.h>
#include <aws/quicksight/model/ListFoldersPaginationTraits.h>
#include <aws/quicksight/model/ListGroupMembershipsPaginationTraits.h>
#include <aws/quicksight/model/ListGroupsPaginationTraits.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsForUserPaginationTraits.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsPaginationTraits.h>
#include <aws/quicksight/model/ListIngestionsPaginationTraits.h>
#include <aws/quicksight/model/ListNamespacesPaginationTraits.h>
#include <aws/quicksight/model/ListRoleMembershipsPaginationTraits.h>
#include <aws/quicksight/model/ListTemplateAliasesPaginationTraits.h>
#include <aws/quicksight/model/ListTemplateVersionsPaginationTraits.h>
#include <aws/quicksight/model/ListTemplatesPaginationTraits.h>
#include <aws/quicksight/model/ListThemeVersionsPaginationTraits.h>
#include <aws/quicksight/model/ListThemesPaginationTraits.h>
#include <aws/quicksight/model/ListTopicsPaginationTraits.h>
#include <aws/quicksight/model/ListUserGroupsPaginationTraits.h>
#include <aws/quicksight/model/ListUsersPaginationTraits.h>
#include <aws/quicksight/model/ListVPCConnectionsPaginationTraits.h>
#include <aws/quicksight/model/SearchActionConnectorsPaginationTraits.h>
#include <aws/quicksight/model/SearchAnalysesPaginationTraits.h>
#include <aws/quicksight/model/SearchDashboardsPaginationTraits.h>
#include <aws/quicksight/model/SearchDataSetsPaginationTraits.h>
#include <aws/quicksight/model/SearchDataSourcesPaginationTraits.h>
#include <aws/quicksight/model/SearchFlowsPaginationTraits.h>
#include <aws/quicksight/model/SearchFoldersPaginationTraits.h>
#include <aws/quicksight/model/SearchGroupsPaginationTraits.h>
#include <aws/quicksight/model/SearchTopicsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace QuickSight {

class QuickSightClient;

template <typename DerivedClient>
class QuickSightPaginationBase {
 public:
  /**
   * Create a paginator for DescribeFolderPermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFolderPermissionsRequest,
                                    Pagination::DescribeFolderPermissionsPaginationTraits<DerivedClient>>
  DescribeFolderPermissionsPaginator(const Model::DescribeFolderPermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFolderPermissionsRequest,
                                             Pagination::DescribeFolderPermissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFolderResolvedPermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFolderResolvedPermissionsRequest,
                                    Pagination::DescribeFolderResolvedPermissionsPaginationTraits<DerivedClient>>
  DescribeFolderResolvedPermissionsPaginator(const Model::DescribeFolderResolvedPermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFolderResolvedPermissionsRequest,
                                             Pagination::DescribeFolderResolvedPermissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListActionConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionConnectorsRequest,
                                    Pagination::ListActionConnectorsPaginationTraits<DerivedClient>>
  ListActionConnectorsPaginator(const Model::ListActionConnectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionConnectorsRequest,
                                             Pagination::ListActionConnectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAnalyses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalysesRequest, Pagination::ListAnalysesPaginationTraits<DerivedClient>>
  ListAnalysesPaginator(const Model::ListAnalysesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnalysesRequest,
                                             Pagination::ListAnalysesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListAssetBundleExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetBundleExportJobsRequest,
                                    Pagination::ListAssetBundleExportJobsPaginationTraits<DerivedClient>>
  ListAssetBundleExportJobsPaginator(const Model::ListAssetBundleExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetBundleExportJobsRequest,
                                             Pagination::ListAssetBundleExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssetBundleImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetBundleImportJobsRequest,
                                    Pagination::ListAssetBundleImportJobsPaginationTraits<DerivedClient>>
  ListAssetBundleImportJobsPaginator(const Model::ListAssetBundleImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetBundleImportJobsRequest,
                                             Pagination::ListAssetBundleImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBrands operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrandsRequest, Pagination::ListBrandsPaginationTraits<DerivedClient>>
  ListBrandsPaginator(const Model::ListBrandsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrandsRequest,
                                             Pagination::ListBrandsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListCustomPermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomPermissionsRequest,
                                    Pagination::ListCustomPermissionsPaginationTraits<DerivedClient>>
  ListCustomPermissionsPaginator(const Model::ListCustomPermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomPermissionsRequest,
                                             Pagination::ListCustomPermissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDashboards operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDashboardsRequest, Pagination::ListDashboardsPaginationTraits<DerivedClient>>
  ListDashboardsPaginator(const Model::ListDashboardsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDashboardsRequest,
                                             Pagination::ListDashboardsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListDashboardVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDashboardVersionsRequest,
                                    Pagination::ListDashboardVersionsPaginationTraits<DerivedClient>>
  ListDashboardVersionsPaginator(const Model::ListDashboardVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDashboardVersionsRequest,
                                             Pagination::ListDashboardVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetsRequest, Pagination::ListDataSetsPaginationTraits<DerivedClient>>
  ListDataSetsPaginator(const Model::ListDataSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSetsRequest,
                                             Pagination::ListDataSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListDataSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                    Pagination::ListDataSourcesPaginationTraits<DerivedClient>>
  ListDataSourcesPaginator(const Model::ListDataSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                             Pagination::ListDataSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListFlows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowsRequest, Pagination::ListFlowsPaginationTraits<DerivedClient>>
  ListFlowsPaginator(const Model::ListFlowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFlowsRequest, Pagination::ListFlowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFolderMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFolderMembersRequest,
                                    Pagination::ListFolderMembersPaginationTraits<DerivedClient>>
  ListFolderMembersPaginator(const Model::ListFolderMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFolderMembersRequest,
                                             Pagination::ListFolderMembersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFolders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFoldersRequest, Pagination::ListFoldersPaginationTraits<DerivedClient>>
  ListFoldersPaginator(const Model::ListFoldersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFoldersRequest,
                                             Pagination::ListFoldersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListFoldersForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFoldersForResourceRequest,
                                    Pagination::ListFoldersForResourcePaginationTraits<DerivedClient>>
  ListFoldersForResourcePaginator(const Model::ListFoldersForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFoldersForResourceRequest,
                                             Pagination::ListFoldersForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroupMemberships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupMembershipsRequest,
                                    Pagination::ListGroupMembershipsPaginationTraits<DerivedClient>>
  ListGroupMembershipsPaginator(const Model::ListGroupMembershipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupMembershipsRequest,
                                             Pagination::ListGroupMembershipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<DerivedClient>>
  ListGroupsPaginator(const Model::ListGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest,
                                             Pagination::ListGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListIAMPolicyAssignments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIAMPolicyAssignmentsRequest,
                                    Pagination::ListIAMPolicyAssignmentsPaginationTraits<DerivedClient>>
  ListIAMPolicyAssignmentsPaginator(const Model::ListIAMPolicyAssignmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIAMPolicyAssignmentsRequest,
                                             Pagination::ListIAMPolicyAssignmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIAMPolicyAssignmentsForUser operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIAMPolicyAssignmentsForUserRequest,
                                    Pagination::ListIAMPolicyAssignmentsForUserPaginationTraits<DerivedClient>>
  ListIAMPolicyAssignmentsForUserPaginator(const Model::ListIAMPolicyAssignmentsForUserRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIAMPolicyAssignmentsForUserRequest,
                                             Pagination::ListIAMPolicyAssignmentsForUserPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIngestions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngestionsRequest, Pagination::ListIngestionsPaginationTraits<DerivedClient>>
  ListIngestionsPaginator(const Model::ListIngestionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngestionsRequest,
                                             Pagination::ListIngestionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListNamespaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNamespacesRequest, Pagination::ListNamespacesPaginationTraits<DerivedClient>>
  ListNamespacesPaginator(const Model::ListNamespacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNamespacesRequest,
                                             Pagination::ListNamespacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListRoleMemberships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoleMembershipsRequest,
                                    Pagination::ListRoleMembershipsPaginationTraits<DerivedClient>>
  ListRoleMembershipsPaginator(const Model::ListRoleMembershipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoleMembershipsRequest,
                                             Pagination::ListRoleMembershipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTemplateAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateAliasesRequest,
                                    Pagination::ListTemplateAliasesPaginationTraits<DerivedClient>>
  ListTemplateAliasesPaginator(const Model::ListTemplateAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateAliasesRequest,
                                             Pagination::ListTemplateAliasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplatesRequest, Pagination::ListTemplatesPaginationTraits<DerivedClient>>
  ListTemplatesPaginator(const Model::ListTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplatesRequest,
                                             Pagination::ListTemplatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListTemplateVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateVersionsRequest,
                                    Pagination::ListTemplateVersionsPaginationTraits<DerivedClient>>
  ListTemplateVersionsPaginator(const Model::ListTemplateVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateVersionsRequest,
                                             Pagination::ListTemplateVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThemes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThemesRequest, Pagination::ListThemesPaginationTraits<DerivedClient>>
  ListThemesPaginator(const Model::ListThemesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThemesRequest,
                                             Pagination::ListThemesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListThemeVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThemeVersionsRequest,
                                    Pagination::ListThemeVersionsPaginationTraits<DerivedClient>>
  ListThemeVersionsPaginator(const Model::ListThemeVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThemeVersionsRequest,
                                             Pagination::ListThemeVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTopics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicsRequest, Pagination::ListTopicsPaginationTraits<DerivedClient>>
  ListTopicsPaginator(const Model::ListTopicsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicsRequest,
                                             Pagination::ListTopicsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListUserGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserGroupsRequest, Pagination::ListUserGroupsPaginationTraits<DerivedClient>>
  ListUserGroupsPaginator(const Model::ListUserGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserGroupsRequest,
                                             Pagination::ListUserGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>
  ListUsersPaginator(const Model::ListUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVPCConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVPCConnectionsRequest,
                                    Pagination::ListVPCConnectionsPaginationTraits<DerivedClient>>
  ListVPCConnectionsPaginator(const Model::ListVPCConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVPCConnectionsRequest,
                                             Pagination::ListVPCConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchActionConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchActionConnectorsRequest,
                                    Pagination::SearchActionConnectorsPaginationTraits<DerivedClient>>
  SearchActionConnectorsPaginator(const Model::SearchActionConnectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchActionConnectorsRequest,
                                             Pagination::SearchActionConnectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchAnalyses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAnalysesRequest, Pagination::SearchAnalysesPaginationTraits<DerivedClient>>
  SearchAnalysesPaginator(const Model::SearchAnalysesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAnalysesRequest,
                                             Pagination::SearchAnalysesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for SearchDashboards operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDashboardsRequest,
                                    Pagination::SearchDashboardsPaginationTraits<DerivedClient>>
  SearchDashboardsPaginator(const Model::SearchDashboardsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDashboardsRequest,
                                             Pagination::SearchDashboardsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for SearchDataSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDataSetsRequest, Pagination::SearchDataSetsPaginationTraits<DerivedClient>>
  SearchDataSetsPaginator(const Model::SearchDataSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDataSetsRequest,
                                             Pagination::SearchDataSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for SearchDataSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDataSourcesRequest,
                                    Pagination::SearchDataSourcesPaginationTraits<DerivedClient>>
  SearchDataSourcesPaginator(const Model::SearchDataSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDataSourcesRequest,
                                             Pagination::SearchDataSourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchFlows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchFlowsRequest, Pagination::SearchFlowsPaginationTraits<DerivedClient>>
  SearchFlowsPaginator(const Model::SearchFlowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchFlowsRequest,
                                             Pagination::SearchFlowsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for SearchFolders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchFoldersRequest, Pagination::SearchFoldersPaginationTraits<DerivedClient>>
  SearchFoldersPaginator(const Model::SearchFoldersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchFoldersRequest,
                                             Pagination::SearchFoldersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for SearchGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchGroupsRequest, Pagination::SearchGroupsPaginationTraits<DerivedClient>>
  SearchGroupsPaginator(const Model::SearchGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchGroupsRequest,
                                             Pagination::SearchGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for SearchTopics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTopicsRequest, Pagination::SearchTopicsPaginationTraits<DerivedClient>>
  SearchTopicsPaginator(const Model::SearchTopicsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTopicsRequest,
                                             Pagination::SearchTopicsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace QuickSight
}  // namespace Aws
