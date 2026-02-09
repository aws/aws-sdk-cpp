/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-channel/PartnerCentralChannelClient.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesPaginationTraits.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsPaginationTraits.h>
#include <aws/partnercentral-channel/model/ListRelationshipsPaginationTraits.h>

namespace Aws {
namespace PartnerCentralChannel {

using ListChannelHandshakesPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralChannelClient, Model::ListChannelHandshakesRequest,
                                      Pagination::ListChannelHandshakesPaginationTraits<PartnerCentralChannelClient>>;
using ListProgramManagementAccountsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralChannelClient, Model::ListProgramManagementAccountsRequest,
                                      Pagination::ListProgramManagementAccountsPaginationTraits<PartnerCentralChannelClient>>;
using ListRelationshipsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralChannelClient, Model::ListRelationshipsRequest,
                                      Pagination::ListRelationshipsPaginationTraits<PartnerCentralChannelClient>>;

}  // namespace PartnerCentralChannel
}  // namespace Aws
