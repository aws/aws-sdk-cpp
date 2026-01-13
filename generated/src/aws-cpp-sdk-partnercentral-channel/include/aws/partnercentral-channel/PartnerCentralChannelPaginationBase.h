/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesPaginationTraits.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsPaginationTraits.h>
#include <aws/partnercentral-channel/model/ListRelationshipsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace PartnerCentralChannel {

class PartnerCentralChannelClient;

template <typename DerivedClient>
class PartnerCentralChannelPaginationBase {
 public:
  /**
   * Create a paginator for ListChannelHandshakes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelHandshakesRequest,
                                    Pagination::ListChannelHandshakesPaginationTraits<DerivedClient>>
  ListChannelHandshakesPaginator(const Model::ListChannelHandshakesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelHandshakesRequest,
                                             Pagination::ListChannelHandshakesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProgramManagementAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProgramManagementAccountsRequest,
                                    Pagination::ListProgramManagementAccountsPaginationTraits<DerivedClient>>
  ListProgramManagementAccountsPaginator(const Model::ListProgramManagementAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProgramManagementAccountsRequest,
                                             Pagination::ListProgramManagementAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRelationships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRelationshipsRequest,
                                    Pagination::ListRelationshipsPaginationTraits<DerivedClient>>
  ListRelationshipsPaginator(const Model::ListRelationshipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRelationshipsRequest,
                                             Pagination::ListRelationshipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace PartnerCentralChannel
}  // namespace Aws
