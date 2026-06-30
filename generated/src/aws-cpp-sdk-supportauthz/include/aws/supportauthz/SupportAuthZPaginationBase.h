/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/supportauthz/model/ListActionsPaginationTraits.h>
#include <aws/supportauthz/model/ListSupportPermitRequestsPaginationTraits.h>
#include <aws/supportauthz/model/ListSupportPermitsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SupportAuthZ {

template <typename DerivedClient>
class SupportAuthZPaginationBase {
 public:
  /**
   * Create a paginator for ListActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionsRequest, Pagination::ListActionsPaginationTraits<DerivedClient>>
  ListActionsPaginator(const Model::ListActionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListActionsRequest,
                                             Pagination::ListActionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListSupportPermitRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSupportPermitRequestsRequest,
                                    Pagination::ListSupportPermitRequestsPaginationTraits<DerivedClient>>
  ListSupportPermitRequestsPaginator(const Model::ListSupportPermitRequestsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSupportPermitRequestsRequest,
                                             Pagination::ListSupportPermitRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSupportPermits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSupportPermitsRequest,
                                    Pagination::ListSupportPermitsPaginationTraits<DerivedClient>>
  ListSupportPermitsPaginator(const Model::ListSupportPermitsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSupportPermitsRequest,
                                             Pagination::ListSupportPermitsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SupportAuthZ
}  // namespace Aws
