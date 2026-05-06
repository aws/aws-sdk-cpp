/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/GetResourcesPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/GetTagKeysPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesPaginationTraits.h>
#include <aws/resourcegroupstaggingapi/model/ListRequiredTagsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ResourceGroupsTaggingAPI {

template <typename DerivedClient>
class ResourceGroupsTaggingAPIPaginationBase {
 public:
  /**
   * Create a paginator for GetComplianceSummary operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetComplianceSummaryRequest,
                                    Pagination::GetComplianceSummaryPaginationTraits<DerivedClient>>
  GetComplianceSummaryPaginator(const Model::GetComplianceSummaryRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetComplianceSummaryRequest,
                                             Pagination::GetComplianceSummaryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcesRequest, Pagination::GetResourcesPaginationTraits<DerivedClient>>
  GetResourcesPaginator(const Model::GetResourcesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcesRequest,
                                             Pagination::GetResourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for GetTagKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTagKeysRequest, Pagination::GetTagKeysPaginationTraits<DerivedClient>>
  GetTagKeysPaginator(const Model::GetTagKeysRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTagKeysRequest,
                                             Pagination::GetTagKeysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for GetTagValues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTagValuesRequest, Pagination::GetTagValuesPaginationTraits<DerivedClient>>
  GetTagValuesPaginator(const Model::GetTagValuesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTagValuesRequest,
                                             Pagination::GetTagValuesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListRequiredTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRequiredTagsRequest,
                                    Pagination::ListRequiredTagsPaginationTraits<DerivedClient>>
  ListRequiredTagsPaginator(const Model::ListRequiredTagsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRequiredTagsRequest,
                                             Pagination::ListRequiredTagsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
