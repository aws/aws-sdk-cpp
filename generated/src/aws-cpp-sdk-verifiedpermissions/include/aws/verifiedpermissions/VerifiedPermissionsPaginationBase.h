/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/verifiedpermissions/model/ListIdentitySourcesPaginationTraits.h>
#include <aws/verifiedpermissions/model/ListPoliciesPaginationTraits.h>
#include <aws/verifiedpermissions/model/ListPolicyStoresPaginationTraits.h>
#include <aws/verifiedpermissions/model/ListPolicyTemplatesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace VerifiedPermissions {

class VerifiedPermissionsClient;

template <typename DerivedClient>
class VerifiedPermissionsPaginationBase {
 public:
  /**
   * Create a paginator for ListIdentitySources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentitySourcesRequest,
                                    Pagination::ListIdentitySourcesPaginationTraits<DerivedClient>>
  ListIdentitySourcesPaginator(const Model::ListIdentitySourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentitySourcesRequest,
                                             Pagination::ListIdentitySourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<DerivedClient>>
  ListPoliciesPaginator(const Model::ListPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest,
                                             Pagination::ListPoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPolicyStores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyStoresRequest,
                                    Pagination::ListPolicyStoresPaginationTraits<DerivedClient>>
  ListPolicyStoresPaginator(const Model::ListPolicyStoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyStoresRequest,
                                             Pagination::ListPolicyStoresPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPolicyTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyTemplatesRequest,
                                    Pagination::ListPolicyTemplatesPaginationTraits<DerivedClient>>
  ListPolicyTemplatesPaginator(const Model::ListPolicyTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyTemplatesRequest,
                                             Pagination::ListPolicyTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace VerifiedPermissions
}  // namespace Aws
