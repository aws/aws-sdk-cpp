/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53profiles/model/ListProfileAssociationsPaginationTraits.h>
#include <aws/route53profiles/model/ListProfileResourceAssociationsPaginationTraits.h>
#include <aws/route53profiles/model/ListProfilesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Route53Profiles {

template <typename DerivedClient>
class Route53ProfilesPaginationBase {
 public:
  /**
   * Create a paginator for ListProfileAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfileAssociationsRequest,
                                    Pagination::ListProfileAssociationsPaginationTraits<DerivedClient>>
  ListProfileAssociationsPaginator(const Model::ListProfileAssociationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfileAssociationsRequest,
                                             Pagination::ListProfileAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProfileResourceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfileResourceAssociationsRequest,
                                    Pagination::ListProfileResourceAssociationsPaginationTraits<DerivedClient>>
  ListProfileResourceAssociationsPaginator(const Model::ListProfileResourceAssociationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfileResourceAssociationsRequest,
                                             Pagination::ListProfileResourceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilesRequest, Pagination::ListProfilesPaginationTraits<DerivedClient>>
  ListProfilesPaginator(const Model::ListProfilesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilesRequest,
                                             Pagination::ListProfilesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace Route53Profiles
}  // namespace Aws
