/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/opensearchserverless/model/ListAccessPoliciesPaginationTraits.h>
#include <aws/opensearchserverless/model/ListCollectionGroupsPaginationTraits.h>
#include <aws/opensearchserverless/model/ListCollectionsPaginationTraits.h>
#include <aws/opensearchserverless/model/ListLifecyclePoliciesPaginationTraits.h>
#include <aws/opensearchserverless/model/ListSecurityConfigsPaginationTraits.h>
#include <aws/opensearchserverless/model/ListSecurityPoliciesPaginationTraits.h>
#include <aws/opensearchserverless/model/ListVpcEndpointsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace OpenSearchServerless {

class OpenSearchServerlessClient;

template <typename DerivedClient>
class OpenSearchServerlessPaginationBase {
 public:
  /**
   * Create a paginator for ListAccessPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPoliciesRequest,
                                    Pagination::ListAccessPoliciesPaginationTraits<DerivedClient>>
  ListAccessPoliciesPaginator(const Model::ListAccessPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPoliciesRequest,
                                             Pagination::ListAccessPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollectionGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollectionGroupsRequest,
                                    Pagination::ListCollectionGroupsPaginationTraits<DerivedClient>>
  ListCollectionGroupsPaginator(const Model::ListCollectionGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollectionGroupsRequest,
                                             Pagination::ListCollectionGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollectionsRequest,
                                    Pagination::ListCollectionsPaginationTraits<DerivedClient>>
  ListCollectionsPaginator(const Model::ListCollectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollectionsRequest,
                                             Pagination::ListCollectionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListLifecyclePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLifecyclePoliciesRequest,
                                    Pagination::ListLifecyclePoliciesPaginationTraits<DerivedClient>>
  ListLifecyclePoliciesPaginator(const Model::ListLifecyclePoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLifecyclePoliciesRequest,
                                             Pagination::ListLifecyclePoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecurityConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityConfigsRequest,
                                    Pagination::ListSecurityConfigsPaginationTraits<DerivedClient>>
  ListSecurityConfigsPaginator(const Model::ListSecurityConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityConfigsRequest,
                                             Pagination::ListSecurityConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecurityPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityPoliciesRequest,
                                    Pagination::ListSecurityPoliciesPaginationTraits<DerivedClient>>
  ListSecurityPoliciesPaginator(const Model::ListSecurityPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecurityPoliciesRequest,
                                             Pagination::ListSecurityPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVpcEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVpcEndpointsRequest,
                                    Pagination::ListVpcEndpointsPaginationTraits<DerivedClient>>
  ListVpcEndpointsPaginator(const Model::ListVpcEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVpcEndpointsRequest,
                                             Pagination::ListVpcEndpointsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace OpenSearchServerless
}  // namespace Aws
