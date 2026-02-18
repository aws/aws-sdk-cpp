/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/securityhub/SecurityHubClient.h>
#include <aws/securityhub/model/DescribeActionTargetsPaginationTraits.h>
#include <aws/securityhub/model/DescribeProductsPaginationTraits.h>
#include <aws/securityhub/model/DescribeProductsV2PaginationTraits.h>
#include <aws/securityhub/model/DescribeStandardsControlsPaginationTraits.h>
#include <aws/securityhub/model/DescribeStandardsPaginationTraits.h>
#include <aws/securityhub/model/GetEnabledStandardsPaginationTraits.h>
#include <aws/securityhub/model/GetFindingHistoryPaginationTraits.h>
#include <aws/securityhub/model/GetFindingsPaginationTraits.h>
#include <aws/securityhub/model/GetFindingsTrendsV2PaginationTraits.h>
#include <aws/securityhub/model/GetFindingsV2PaginationTraits.h>
#include <aws/securityhub/model/GetInsightsPaginationTraits.h>
#include <aws/securityhub/model/GetResourcesTrendsV2PaginationTraits.h>
#include <aws/securityhub/model/GetResourcesV2PaginationTraits.h>
#include <aws/securityhub/model/ListAggregatorsV2PaginationTraits.h>
#include <aws/securityhub/model/ListConfigurationPoliciesPaginationTraits.h>
#include <aws/securityhub/model/ListConfigurationPolicyAssociationsPaginationTraits.h>
#include <aws/securityhub/model/ListEnabledProductsForImportPaginationTraits.h>
#include <aws/securityhub/model/ListFindingAggregatorsPaginationTraits.h>
#include <aws/securityhub/model/ListInvitationsPaginationTraits.h>
#include <aws/securityhub/model/ListMembersPaginationTraits.h>
#include <aws/securityhub/model/ListOrganizationAdminAccountsPaginationTraits.h>
#include <aws/securityhub/model/ListSecurityControlDefinitionsPaginationTraits.h>
#include <aws/securityhub/model/ListStandardsControlAssociationsPaginationTraits.h>

namespace Aws {
namespace SecurityHub {

using DescribeActionTargetsPaginator =
    Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::DescribeActionTargetsRequest,
                                      Pagination::DescribeActionTargetsPaginationTraits<SecurityHubClient>>;
using DescribeProductsPaginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::DescribeProductsRequest,
                                                                    Pagination::DescribeProductsPaginationTraits<SecurityHubClient>>;
using DescribeProductsV2Paginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::DescribeProductsV2Request,
                                                                      Pagination::DescribeProductsV2PaginationTraits<SecurityHubClient>>;
using DescribeStandardsPaginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::DescribeStandardsRequest,
                                                                     Pagination::DescribeStandardsPaginationTraits<SecurityHubClient>>;
using DescribeStandardsControlsPaginator =
    Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::DescribeStandardsControlsRequest,
                                      Pagination::DescribeStandardsControlsPaginationTraits<SecurityHubClient>>;
using GetEnabledStandardsPaginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::GetEnabledStandardsRequest,
                                                                       Pagination::GetEnabledStandardsPaginationTraits<SecurityHubClient>>;
using GetFindingHistoryPaginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::GetFindingHistoryRequest,
                                                                     Pagination::GetFindingHistoryPaginationTraits<SecurityHubClient>>;
using GetFindingsPaginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::GetFindingsRequest,
                                                               Pagination::GetFindingsPaginationTraits<SecurityHubClient>>;
using GetFindingsTrendsV2Paginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::GetFindingsTrendsV2Request,
                                                                       Pagination::GetFindingsTrendsV2PaginationTraits<SecurityHubClient>>;
using GetFindingsV2Paginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::GetFindingsV2Request,
                                                                 Pagination::GetFindingsV2PaginationTraits<SecurityHubClient>>;
using GetInsightsPaginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::GetInsightsRequest,
                                                               Pagination::GetInsightsPaginationTraits<SecurityHubClient>>;
using GetResourcesTrendsV2Paginator =
    Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::GetResourcesTrendsV2Request,
                                      Pagination::GetResourcesTrendsV2PaginationTraits<SecurityHubClient>>;
using GetResourcesV2Paginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::GetResourcesV2Request,
                                                                  Pagination::GetResourcesV2PaginationTraits<SecurityHubClient>>;
using ListAggregatorsV2Paginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::ListAggregatorsV2Request,
                                                                     Pagination::ListAggregatorsV2PaginationTraits<SecurityHubClient>>;
using ListConfigurationPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::ListConfigurationPoliciesRequest,
                                      Pagination::ListConfigurationPoliciesPaginationTraits<SecurityHubClient>>;
using ListConfigurationPolicyAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::ListConfigurationPolicyAssociationsRequest,
                                      Pagination::ListConfigurationPolicyAssociationsPaginationTraits<SecurityHubClient>>;
using ListEnabledProductsForImportPaginator =
    Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::ListEnabledProductsForImportRequest,
                                      Pagination::ListEnabledProductsForImportPaginationTraits<SecurityHubClient>>;
using ListFindingAggregatorsPaginator =
    Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::ListFindingAggregatorsRequest,
                                      Pagination::ListFindingAggregatorsPaginationTraits<SecurityHubClient>>;
using ListInvitationsPaginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::ListInvitationsRequest,
                                                                   Pagination::ListInvitationsPaginationTraits<SecurityHubClient>>;
using ListMembersPaginator = Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::ListMembersRequest,
                                                               Pagination::ListMembersPaginationTraits<SecurityHubClient>>;
using ListOrganizationAdminAccountsPaginator =
    Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::ListOrganizationAdminAccountsRequest,
                                      Pagination::ListOrganizationAdminAccountsPaginationTraits<SecurityHubClient>>;
using ListSecurityControlDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::ListSecurityControlDefinitionsRequest,
                                      Pagination::ListSecurityControlDefinitionsPaginationTraits<SecurityHubClient>>;
using ListStandardsControlAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<SecurityHubClient, Model::ListStandardsControlAssociationsRequest,
                                      Pagination::ListStandardsControlAssociationsPaginationTraits<SecurityHubClient>>;

}  // namespace SecurityHub
}  // namespace Aws
