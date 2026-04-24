/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-account/PartnerCentralAccountClient.h>
#include <aws/partnercentral-account/model/ListConnectionInvitationsPaginationTraits.h>
#include <aws/partnercentral-account/model/ListConnectionsPaginationTraits.h>
#include <aws/partnercentral-account/model/ListPartnersPaginationTraits.h>

namespace Aws {
namespace PartnerCentralAccount {

using ListConnectionInvitationsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralAccountClient, Model::ListConnectionInvitationsRequest,
                                      Pagination::ListConnectionInvitationsPaginationTraits<PartnerCentralAccountClient>>;
using ListConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralAccountClient, Model::ListConnectionsRequest,
                                      Pagination::ListConnectionsPaginationTraits<PartnerCentralAccountClient>>;
using ListPartnersPaginator = Aws::Utils::Pagination::Paginator<PartnerCentralAccountClient, Model::ListPartnersRequest,
                                                                Pagination::ListPartnersPaginationTraits<PartnerCentralAccountClient>>;

}  // namespace PartnerCentralAccount
}  // namespace Aws
