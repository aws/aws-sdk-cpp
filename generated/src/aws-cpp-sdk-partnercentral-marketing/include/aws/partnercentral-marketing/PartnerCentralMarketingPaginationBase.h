/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/partnercentral-marketing/model/ListCampaignAssetsPaginationTraits.h>
#include <aws/partnercentral-marketing/model/ListCampaignsPaginationTraits.h>
#include <aws/partnercentral-marketing/model/ListSocialConnectionsPaginationTraits.h>
#include <aws/partnercentral-marketing/model/SearchCampaignTemplatesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace PartnerCentralMarketing {

template <typename DerivedClient>
class PartnerCentralMarketingPaginationBase {
 public:
  /**
   * Create a paginator for ListCampaignAssets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCampaignAssetsRequest,
                                    Pagination::ListCampaignAssetsPaginationTraits<DerivedClient>>
  ListCampaignAssetsPaginator(const Model::ListCampaignAssetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCampaignAssetsRequest,
                                             Pagination::ListCampaignAssetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCampaigns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCampaignsRequest, Pagination::ListCampaignsPaginationTraits<DerivedClient>>
  ListCampaignsPaginator(const Model::ListCampaignsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCampaignsRequest,
                                             Pagination::ListCampaignsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListSocialConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSocialConnectionsRequest,
                                    Pagination::ListSocialConnectionsPaginationTraits<DerivedClient>>
  ListSocialConnectionsPaginator(const Model::ListSocialConnectionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSocialConnectionsRequest,
                                             Pagination::ListSocialConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchCampaignTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchCampaignTemplatesRequest,
                                    Pagination::SearchCampaignTemplatesPaginationTraits<DerivedClient>>
  SearchCampaignTemplatesPaginator(const Model::SearchCampaignTemplatesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchCampaignTemplatesRequest,
                                             Pagination::SearchCampaignTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace PartnerCentralMarketing
}  // namespace Aws
