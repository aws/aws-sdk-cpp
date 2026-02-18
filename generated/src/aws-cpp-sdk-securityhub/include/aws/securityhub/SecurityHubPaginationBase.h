/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace SecurityHub {

class SecurityHubClient;

template <typename DerivedClient>
class SecurityHubPaginationBase {
 public:
  /**
   * Create a paginator for DescribeActionTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeActionTargetsRequest,
                                    Pagination::DescribeActionTargetsPaginationTraits<DerivedClient>>
  DescribeActionTargetsPaginator(const Model::DescribeActionTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeActionTargetsRequest,
                                             Pagination::DescribeActionTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeProducts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeProductsRequest,
                                    Pagination::DescribeProductsPaginationTraits<DerivedClient>>
  DescribeProductsPaginator(const Model::DescribeProductsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeProductsRequest,
                                             Pagination::DescribeProductsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeProductsV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeProductsV2Request,
                                    Pagination::DescribeProductsV2PaginationTraits<DerivedClient>>
  DescribeProductsV2Paginator(const Model::DescribeProductsV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeProductsV2Request,
                                             Pagination::DescribeProductsV2PaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeStandards operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStandardsRequest,
                                    Pagination::DescribeStandardsPaginationTraits<DerivedClient>>
  DescribeStandardsPaginator(const Model::DescribeStandardsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStandardsRequest,
                                             Pagination::DescribeStandardsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeStandardsControls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStandardsControlsRequest,
                                    Pagination::DescribeStandardsControlsPaginationTraits<DerivedClient>>
  DescribeStandardsControlsPaginator(const Model::DescribeStandardsControlsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeStandardsControlsRequest,
                                             Pagination::DescribeStandardsControlsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetEnabledStandards operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEnabledStandardsRequest,
                                    Pagination::GetEnabledStandardsPaginationTraits<DerivedClient>>
  GetEnabledStandardsPaginator(const Model::GetEnabledStandardsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEnabledStandardsRequest,
                                             Pagination::GetEnabledStandardsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetFindingHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingHistoryRequest,
                                    Pagination::GetFindingHistoryPaginationTraits<DerivedClient>>
  GetFindingHistoryPaginator(const Model::GetFindingHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingHistoryRequest,
                                             Pagination::GetFindingHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingsRequest, Pagination::GetFindingsPaginationTraits<DerivedClient>>
  GetFindingsPaginator(const Model::GetFindingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingsRequest,
                                             Pagination::GetFindingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for GetFindingsTrendsV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingsTrendsV2Request,
                                    Pagination::GetFindingsTrendsV2PaginationTraits<DerivedClient>>
  GetFindingsTrendsV2Paginator(const Model::GetFindingsTrendsV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingsTrendsV2Request,
                                             Pagination::GetFindingsTrendsV2PaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetFindingsV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingsV2Request, Pagination::GetFindingsV2PaginationTraits<DerivedClient>>
  GetFindingsV2Paginator(const Model::GetFindingsV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingsV2Request,
                                             Pagination::GetFindingsV2PaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetInsights operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInsightsRequest, Pagination::GetInsightsPaginationTraits<DerivedClient>>
  GetInsightsPaginator(const Model::GetInsightsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInsightsRequest,
                                             Pagination::GetInsightsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for GetResourcesTrendsV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcesTrendsV2Request,
                                    Pagination::GetResourcesTrendsV2PaginationTraits<DerivedClient>>
  GetResourcesTrendsV2Paginator(const Model::GetResourcesTrendsV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcesTrendsV2Request,
                                             Pagination::GetResourcesTrendsV2PaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetResourcesV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcesV2Request, Pagination::GetResourcesV2PaginationTraits<DerivedClient>>
  GetResourcesV2Paginator(const Model::GetResourcesV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcesV2Request,
                                             Pagination::GetResourcesV2PaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListAggregatorsV2 operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAggregatorsV2Request,
                                    Pagination::ListAggregatorsV2PaginationTraits<DerivedClient>>
  ListAggregatorsV2Paginator(const Model::ListAggregatorsV2Request& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAggregatorsV2Request,
                                             Pagination::ListAggregatorsV2PaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfigurationPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationPoliciesRequest,
                                    Pagination::ListConfigurationPoliciesPaginationTraits<DerivedClient>>
  ListConfigurationPoliciesPaginator(const Model::ListConfigurationPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationPoliciesRequest,
                                             Pagination::ListConfigurationPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfigurationPolicyAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationPolicyAssociationsRequest,
                                    Pagination::ListConfigurationPolicyAssociationsPaginationTraits<DerivedClient>>
  ListConfigurationPolicyAssociationsPaginator(const Model::ListConfigurationPolicyAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationPolicyAssociationsRequest,
                                             Pagination::ListConfigurationPolicyAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEnabledProductsForImport operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnabledProductsForImportRequest,
                                    Pagination::ListEnabledProductsForImportPaginationTraits<DerivedClient>>
  ListEnabledProductsForImportPaginator(const Model::ListEnabledProductsForImportRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnabledProductsForImportRequest,
                                             Pagination::ListEnabledProductsForImportPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFindingAggregators operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingAggregatorsRequest,
                                    Pagination::ListFindingAggregatorsPaginationTraits<DerivedClient>>
  ListFindingAggregatorsPaginator(const Model::ListFindingAggregatorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingAggregatorsRequest,
                                             Pagination::ListFindingAggregatorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInvitations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvitationsRequest,
                                    Pagination::ListInvitationsPaginationTraits<DerivedClient>>
  ListInvitationsPaginator(const Model::ListInvitationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvitationsRequest,
                                             Pagination::ListInvitationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembersRequest, Pagination::ListMembersPaginationTraits<DerivedClient>>
  ListMembersPaginator(const Model::ListMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembersRequest,
                                             Pagination::ListMembersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListOrganizationAdminAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationAdminAccountsRequest,
                                    Pagination::ListOrganizationAdminAccountsPaginationTraits<DerivedClient>>
  ListOrganizationAdminAccountsPaginator(const Model::ListOrganizationAdminAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationAdminAccountsRequest,
                                             Pagination::ListOrganizationAdminAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecurityControlDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityControlDefinitionsRequest,
                                    Pagination::ListSecurityControlDefinitionsPaginationTraits<DerivedClient>>
  ListSecurityControlDefinitionsPaginator(const Model::ListSecurityControlDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityControlDefinitionsRequest,
                                             Pagination::ListSecurityControlDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStandardsControlAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStandardsControlAssociationsRequest,
                                    Pagination::ListStandardsControlAssociationsPaginationTraits<DerivedClient>>
  ListStandardsControlAssociationsPaginator(const Model::ListStandardsControlAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStandardsControlAssociationsRequest,
                                             Pagination::ListStandardsControlAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SecurityHub
}  // namespace Aws
