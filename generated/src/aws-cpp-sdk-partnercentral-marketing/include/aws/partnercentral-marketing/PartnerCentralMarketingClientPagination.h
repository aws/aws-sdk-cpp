/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingClient.h>
#include <aws/partnercentral-marketing/model/ListCampaignAssetsPaginationTraits.h>
#include <aws/partnercentral-marketing/model/ListCampaignsPaginationTraits.h>
#include <aws/partnercentral-marketing/model/ListSocialConnectionsPaginationTraits.h>
#include <aws/partnercentral-marketing/model/SearchCampaignTemplatesPaginationTraits.h>

namespace Aws {
namespace PartnerCentralMarketing {

using ListCampaignAssetsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralMarketingClient, Model::ListCampaignAssetsRequest,
                                      Pagination::ListCampaignAssetsPaginationTraits<PartnerCentralMarketingClient>>;
using ListCampaignsPaginator = Aws::Utils::Pagination::Paginator<PartnerCentralMarketingClient, Model::ListCampaignsRequest,
                                                                 Pagination::ListCampaignsPaginationTraits<PartnerCentralMarketingClient>>;
using ListSocialConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralMarketingClient, Model::ListSocialConnectionsRequest,
                                      Pagination::ListSocialConnectionsPaginationTraits<PartnerCentralMarketingClient>>;
using SearchCampaignTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<PartnerCentralMarketingClient, Model::SearchCampaignTemplatesRequest,
                                      Pagination::SearchCampaignTemplatesPaginationTraits<PartnerCentralMarketingClient>>;

}  // namespace PartnerCentralMarketing
}  // namespace Aws
