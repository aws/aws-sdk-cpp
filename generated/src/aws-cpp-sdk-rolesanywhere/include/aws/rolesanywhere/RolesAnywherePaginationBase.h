/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rolesanywhere/model/ListCrlsPaginationTraits.h>
#include <aws/rolesanywhere/model/ListProfilesPaginationTraits.h>
#include <aws/rolesanywhere/model/ListSubjectsPaginationTraits.h>
#include <aws/rolesanywhere/model/ListTrustAnchorsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace RolesAnywhere {

class RolesAnywhereClient;

template <typename DerivedClient>
class RolesAnywherePaginationBase {
 public:
  /**
   * Create a paginator for ListCrls operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCrlsRequest, Pagination::ListCrlsPaginationTraits<DerivedClient>>
  ListCrlsPaginator(const Model::ListCrlsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCrlsRequest, Pagination::ListCrlsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilesRequest, Pagination::ListProfilesPaginationTraits<DerivedClient>>
  ListProfilesPaginator(const Model::ListProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilesRequest,
                                             Pagination::ListProfilesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSubjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubjectsRequest, Pagination::ListSubjectsPaginationTraits<DerivedClient>>
  ListSubjectsPaginator(const Model::ListSubjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubjectsRequest,
                                             Pagination::ListSubjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListTrustAnchors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustAnchorsRequest,
                                    Pagination::ListTrustAnchorsPaginationTraits<DerivedClient>>
  ListTrustAnchorsPaginator(const Model::ListTrustAnchorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustAnchorsRequest,
                                             Pagination::ListTrustAnchorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace RolesAnywhere
}  // namespace Aws
