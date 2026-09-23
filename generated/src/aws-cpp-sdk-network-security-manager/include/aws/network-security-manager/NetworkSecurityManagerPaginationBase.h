/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/network-security-manager/model/ListAdminAccountsPaginationTraits.h>
#include <aws/network-security-manager/model/ListAggregateResourceSynchronizationStatusesPaginationTraits.h>
#include <aws/network-security-manager/model/ListDeploymentSnapshotsPaginationTraits.h>
#include <aws/network-security-manager/model/ListDeploymentsPaginationTraits.h>
#include <aws/network-security-manager/model/ListPoliciesPaginationTraits.h>
#include <aws/network-security-manager/model/ListPolicySnapshotsPaginationTraits.h>
#include <aws/network-security-manager/model/ListResourceAssociationsPaginationTraits.h>
#include <aws/network-security-manager/model/ListResourceSynchronizationStatusesPaginationTraits.h>
#include <aws/network-security-manager/model/ListRuleSnapshotsPaginationTraits.h>
#include <aws/network-security-manager/model/ListRulesPaginationTraits.h>
#include <aws/network-security-manager/model/ListScopeSnapshotsPaginationTraits.h>
#include <aws/network-security-manager/model/ListScopesPaginationTraits.h>
#include <aws/network-security-manager/model/ListTemplateSnapshotsPaginationTraits.h>
#include <aws/network-security-manager/model/ListTemplatesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace NetworkSecurityManager {

template <typename DerivedClient>
class NetworkSecurityManagerPaginationBase {
 public:
  /**
   * Create a paginator for ListAdminAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdminAccountsRequest,
                                    Pagination::ListAdminAccountsPaginationTraits<DerivedClient>>
  ListAdminAccountsPaginator(const Model::ListAdminAccountsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdminAccountsRequest,
                                             Pagination::ListAdminAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAggregateResourceSynchronizationStatuses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAggregateResourceSynchronizationStatusesRequest,
                                    Pagination::ListAggregateResourceSynchronizationStatusesPaginationTraits<DerivedClient>>
  ListAggregateResourceSynchronizationStatusesPaginator(const Model::ListAggregateResourceSynchronizationStatusesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAggregateResourceSynchronizationStatusesRequest,
                                             Pagination::ListAggregateResourceSynchronizationStatusesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDeployments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentsRequest,
                                    Pagination::ListDeploymentsPaginationTraits<DerivedClient>>
  ListDeploymentsPaginator(const Model::ListDeploymentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentsRequest,
                                             Pagination::ListDeploymentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDeploymentSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentSnapshotsRequest,
                                    Pagination::ListDeploymentSnapshotsPaginationTraits<DerivedClient>>
  ListDeploymentSnapshotsPaginator(const Model::ListDeploymentSnapshotsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeploymentSnapshotsRequest,
                                             Pagination::ListDeploymentSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<DerivedClient>>
  ListPoliciesPaginator(const Model::ListPoliciesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest,
                                             Pagination::ListPoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPolicySnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicySnapshotsRequest,
                                    Pagination::ListPolicySnapshotsPaginationTraits<DerivedClient>>
  ListPolicySnapshotsPaginator(const Model::ListPolicySnapshotsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicySnapshotsRequest,
                                             Pagination::ListPolicySnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceAssociationsRequest,
                                    Pagination::ListResourceAssociationsPaginationTraits<DerivedClient>>
  ListResourceAssociationsPaginator(const Model::ListResourceAssociationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceAssociationsRequest,
                                             Pagination::ListResourceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceSynchronizationStatuses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceSynchronizationStatusesRequest,
                                    Pagination::ListResourceSynchronizationStatusesPaginationTraits<DerivedClient>>
  ListResourceSynchronizationStatusesPaginator(const Model::ListResourceSynchronizationStatusesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceSynchronizationStatusesRequest,
                                             Pagination::ListResourceSynchronizationStatusesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>
  ListRulesPaginator(const Model::ListRulesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRuleSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleSnapshotsRequest,
                                    Pagination::ListRuleSnapshotsPaginationTraits<DerivedClient>>
  ListRuleSnapshotsPaginator(const Model::ListRuleSnapshotsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRuleSnapshotsRequest,
                                             Pagination::ListRuleSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListScopes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScopesRequest, Pagination::ListScopesPaginationTraits<DerivedClient>>
  ListScopesPaginator(const Model::ListScopesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScopesRequest,
                                             Pagination::ListScopesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListScopeSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScopeSnapshotsRequest,
                                    Pagination::ListScopeSnapshotsPaginationTraits<DerivedClient>>
  ListScopeSnapshotsPaginator(const Model::ListScopeSnapshotsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScopeSnapshotsRequest,
                                             Pagination::ListScopeSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplatesRequest, Pagination::ListTemplatesPaginationTraits<DerivedClient>>
  ListTemplatesPaginator(const Model::ListTemplatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplatesRequest,
                                             Pagination::ListTemplatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListTemplateSnapshots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateSnapshotsRequest,
                                    Pagination::ListTemplateSnapshotsPaginationTraits<DerivedClient>>
  ListTemplateSnapshotsPaginator(const Model::ListTemplateSnapshotsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTemplateSnapshotsRequest,
                                             Pagination::ListTemplateSnapshotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace NetworkSecurityManager
}  // namespace Aws
