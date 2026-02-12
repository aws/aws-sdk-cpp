/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/quicksight/QuickSightClient.h>
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

namespace Aws {
namespace QuickSight {

using DescribeFolderPermissionsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::DescribeFolderPermissionsRequest,
                                      Pagination::DescribeFolderPermissionsPaginationTraits<QuickSightClient>>;
using DescribeFolderResolvedPermissionsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::DescribeFolderResolvedPermissionsRequest,
                                      Pagination::DescribeFolderResolvedPermissionsPaginationTraits<QuickSightClient>>;
using ListActionConnectorsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListActionConnectorsRequest,
                                                                        Pagination::ListActionConnectorsPaginationTraits<QuickSightClient>>;
using ListAnalysesPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListAnalysesRequest,
                                                                Pagination::ListAnalysesPaginationTraits<QuickSightClient>>;
using ListAssetBundleExportJobsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListAssetBundleExportJobsRequest,
                                      Pagination::ListAssetBundleExportJobsPaginationTraits<QuickSightClient>>;
using ListAssetBundleImportJobsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListAssetBundleImportJobsRequest,
                                      Pagination::ListAssetBundleImportJobsPaginationTraits<QuickSightClient>>;
using ListBrandsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListBrandsRequest, Pagination::ListBrandsPaginationTraits<QuickSightClient>>;
using ListCustomPermissionsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListCustomPermissionsRequest,
                                      Pagination::ListCustomPermissionsPaginationTraits<QuickSightClient>>;
using ListDashboardsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListDashboardsRequest,
                                                                  Pagination::ListDashboardsPaginationTraits<QuickSightClient>>;
using ListDashboardVersionsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListDashboardVersionsRequest,
                                      Pagination::ListDashboardVersionsPaginationTraits<QuickSightClient>>;
using ListDataSetsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListDataSetsRequest,
                                                                Pagination::ListDataSetsPaginationTraits<QuickSightClient>>;
using ListDataSourcesPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListDataSourcesRequest,
                                                                   Pagination::ListDataSourcesPaginationTraits<QuickSightClient>>;
using ListFlowsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListFlowsRequest, Pagination::ListFlowsPaginationTraits<QuickSightClient>>;
using ListFolderMembersPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListFolderMembersRequest,
                                                                     Pagination::ListFolderMembersPaginationTraits<QuickSightClient>>;
using ListFoldersPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListFoldersRequest,
                                                               Pagination::ListFoldersPaginationTraits<QuickSightClient>>;
using ListFoldersForResourcePaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListFoldersForResourceRequest,
                                      Pagination::ListFoldersForResourcePaginationTraits<QuickSightClient>>;
using ListGroupMembershipsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListGroupMembershipsRequest,
                                                                        Pagination::ListGroupMembershipsPaginationTraits<QuickSightClient>>;
using ListGroupsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<QuickSightClient>>;
using ListIAMPolicyAssignmentsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListIAMPolicyAssignmentsRequest,
                                      Pagination::ListIAMPolicyAssignmentsPaginationTraits<QuickSightClient>>;
using ListIAMPolicyAssignmentsForUserPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListIAMPolicyAssignmentsForUserRequest,
                                      Pagination::ListIAMPolicyAssignmentsForUserPaginationTraits<QuickSightClient>>;
using ListIngestionsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListIngestionsRequest,
                                                                  Pagination::ListIngestionsPaginationTraits<QuickSightClient>>;
using ListNamespacesPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListNamespacesRequest,
                                                                  Pagination::ListNamespacesPaginationTraits<QuickSightClient>>;
using ListRoleMembershipsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListRoleMembershipsRequest,
                                                                       Pagination::ListRoleMembershipsPaginationTraits<QuickSightClient>>;
using ListTemplateAliasesPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListTemplateAliasesRequest,
                                                                       Pagination::ListTemplateAliasesPaginationTraits<QuickSightClient>>;
using ListTemplatesPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListTemplatesRequest,
                                                                 Pagination::ListTemplatesPaginationTraits<QuickSightClient>>;
using ListTemplateVersionsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListTemplateVersionsRequest,
                                                                        Pagination::ListTemplateVersionsPaginationTraits<QuickSightClient>>;
using ListThemesPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListThemesRequest, Pagination::ListThemesPaginationTraits<QuickSightClient>>;
using ListThemeVersionsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListThemeVersionsRequest,
                                                                     Pagination::ListThemeVersionsPaginationTraits<QuickSightClient>>;
using ListTopicsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListTopicsRequest, Pagination::ListTopicsPaginationTraits<QuickSightClient>>;
using ListUserGroupsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListUserGroupsRequest,
                                                                  Pagination::ListUserGroupsPaginationTraits<QuickSightClient>>;
using ListUsersPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<QuickSightClient>>;
using ListVPCConnectionsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::ListVPCConnectionsRequest,
                                                                      Pagination::ListVPCConnectionsPaginationTraits<QuickSightClient>>;
using SearchActionConnectorsPaginator =
    Aws::Utils::Pagination::Paginator<QuickSightClient, Model::SearchActionConnectorsRequest,
                                      Pagination::SearchActionConnectorsPaginationTraits<QuickSightClient>>;
using SearchAnalysesPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::SearchAnalysesRequest,
                                                                  Pagination::SearchAnalysesPaginationTraits<QuickSightClient>>;
using SearchDashboardsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::SearchDashboardsRequest,
                                                                    Pagination::SearchDashboardsPaginationTraits<QuickSightClient>>;
using SearchDataSetsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::SearchDataSetsRequest,
                                                                  Pagination::SearchDataSetsPaginationTraits<QuickSightClient>>;
using SearchDataSourcesPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::SearchDataSourcesRequest,
                                                                     Pagination::SearchDataSourcesPaginationTraits<QuickSightClient>>;
using SearchFlowsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::SearchFlowsRequest,
                                                               Pagination::SearchFlowsPaginationTraits<QuickSightClient>>;
using SearchFoldersPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::SearchFoldersRequest,
                                                                 Pagination::SearchFoldersPaginationTraits<QuickSightClient>>;
using SearchGroupsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::SearchGroupsRequest,
                                                                Pagination::SearchGroupsPaginationTraits<QuickSightClient>>;
using SearchTopicsPaginator = Aws::Utils::Pagination::Paginator<QuickSightClient, Model::SearchTopicsRequest,
                                                                Pagination::SearchTopicsPaginationTraits<QuickSightClient>>;

}  // namespace QuickSight
}  // namespace Aws
