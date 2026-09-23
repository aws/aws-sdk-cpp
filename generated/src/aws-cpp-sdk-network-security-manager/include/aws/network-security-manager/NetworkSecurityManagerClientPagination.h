/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/network-security-manager/NetworkSecurityManagerClient.h>
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

namespace Aws {
namespace NetworkSecurityManager {

using ListAdminAccountsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListAdminAccountsRequest,
                                      Pagination::ListAdminAccountsPaginationTraits<NetworkSecurityManagerClient>>;
using ListAggregateResourceSynchronizationStatusesPaginator = Aws::Utils::Pagination::Paginator<
    NetworkSecurityManagerClient, Model::ListAggregateResourceSynchronizationStatusesRequest,
    Pagination::ListAggregateResourceSynchronizationStatusesPaginationTraits<NetworkSecurityManagerClient>>;
using ListDeploymentsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListDeploymentsRequest,
                                      Pagination::ListDeploymentsPaginationTraits<NetworkSecurityManagerClient>>;
using ListDeploymentSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListDeploymentSnapshotsRequest,
                                      Pagination::ListDeploymentSnapshotsPaginationTraits<NetworkSecurityManagerClient>>;
using ListPoliciesPaginator = Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListPoliciesRequest,
                                                                Pagination::ListPoliciesPaginationTraits<NetworkSecurityManagerClient>>;
using ListPolicySnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListPolicySnapshotsRequest,
                                      Pagination::ListPolicySnapshotsPaginationTraits<NetworkSecurityManagerClient>>;
using ListResourceAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListResourceAssociationsRequest,
                                      Pagination::ListResourceAssociationsPaginationTraits<NetworkSecurityManagerClient>>;
using ListResourceSynchronizationStatusesPaginator =
    Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListResourceSynchronizationStatusesRequest,
                                      Pagination::ListResourceSynchronizationStatusesPaginationTraits<NetworkSecurityManagerClient>>;
using ListRulesPaginator = Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListRulesRequest,
                                                             Pagination::ListRulesPaginationTraits<NetworkSecurityManagerClient>>;
using ListRuleSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListRuleSnapshotsRequest,
                                      Pagination::ListRuleSnapshotsPaginationTraits<NetworkSecurityManagerClient>>;
using ListScopesPaginator = Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListScopesRequest,
                                                              Pagination::ListScopesPaginationTraits<NetworkSecurityManagerClient>>;
using ListScopeSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListScopeSnapshotsRequest,
                                      Pagination::ListScopeSnapshotsPaginationTraits<NetworkSecurityManagerClient>>;
using ListTemplatesPaginator = Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListTemplatesRequest,
                                                                 Pagination::ListTemplatesPaginationTraits<NetworkSecurityManagerClient>>;
using ListTemplateSnapshotsPaginator =
    Aws::Utils::Pagination::Paginator<NetworkSecurityManagerClient, Model::ListTemplateSnapshotsRequest,
                                      Pagination::ListTemplateSnapshotsPaginationTraits<NetworkSecurityManagerClient>>;

}  // namespace NetworkSecurityManager
}  // namespace Aws
