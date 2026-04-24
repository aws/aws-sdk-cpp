/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-account/model/ListConnectionInvitationsPaginationTraits.h>
#include <aws/partnercentral-account/model/ListConnectionsPaginationTraits.h>
#include <aws/partnercentral-account/model/ListPartnersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace PartnerCentralAccount {

class PartnerCentralAccountClient;

template <typename DerivedClient>
class PartnerCentralAccountPaginationBase {
 public:
  /**
   * Create a paginator for ListConnectionInvitations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionInvitationsRequest,
                                    Pagination::ListConnectionInvitationsPaginationTraits<DerivedClient>>
  ListConnectionInvitationsPaginator(const Model::ListConnectionInvitationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionInvitationsRequest,
                                             Pagination::ListConnectionInvitationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionsRequest,
                                    Pagination::ListConnectionsPaginationTraits<DerivedClient>>
  ListConnectionsPaginator(const Model::ListConnectionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionsRequest,
                                             Pagination::ListConnectionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListPartners operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPartnersRequest, Pagination::ListPartnersPaginationTraits<DerivedClient>>
  ListPartnersPaginator(const Model::ListPartnersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPartnersRequest,
                                             Pagination::ListPartnersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace PartnerCentralAccount
}  // namespace Aws
