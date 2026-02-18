/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/opensearchserverless/OpenSearchServerlessClient.h>
#include <aws/opensearchserverless/model/ListAccessPoliciesPaginationTraits.h>
#include <aws/opensearchserverless/model/ListCollectionGroupsPaginationTraits.h>
#include <aws/opensearchserverless/model/ListCollectionsPaginationTraits.h>
#include <aws/opensearchserverless/model/ListLifecyclePoliciesPaginationTraits.h>
#include <aws/opensearchserverless/model/ListSecurityConfigsPaginationTraits.h>
#include <aws/opensearchserverless/model/ListSecurityPoliciesPaginationTraits.h>
#include <aws/opensearchserverless/model/ListVpcEndpointsPaginationTraits.h>

namespace Aws {
namespace OpenSearchServerless {

using ListAccessPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServerlessClient, Model::ListAccessPoliciesRequest,
                                      Pagination::ListAccessPoliciesPaginationTraits<OpenSearchServerlessClient>>;
using ListCollectionGroupsPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServerlessClient, Model::ListCollectionGroupsRequest,
                                      Pagination::ListCollectionGroupsPaginationTraits<OpenSearchServerlessClient>>;
using ListCollectionsPaginator = Aws::Utils::Pagination::Paginator<OpenSearchServerlessClient, Model::ListCollectionsRequest,
                                                                   Pagination::ListCollectionsPaginationTraits<OpenSearchServerlessClient>>;
using ListLifecyclePoliciesPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServerlessClient, Model::ListLifecyclePoliciesRequest,
                                      Pagination::ListLifecyclePoliciesPaginationTraits<OpenSearchServerlessClient>>;
using ListSecurityConfigsPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServerlessClient, Model::ListSecurityConfigsRequest,
                                      Pagination::ListSecurityConfigsPaginationTraits<OpenSearchServerlessClient>>;
using ListSecurityPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServerlessClient, Model::ListSecurityPoliciesRequest,
                                      Pagination::ListSecurityPoliciesPaginationTraits<OpenSearchServerlessClient>>;
using ListVpcEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<OpenSearchServerlessClient, Model::ListVpcEndpointsRequest,
                                      Pagination::ListVpcEndpointsPaginationTraits<OpenSearchServerlessClient>>;

}  // namespace OpenSearchServerless
}  // namespace Aws
