/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediapackagev2/model/ListChannelGroupsPaginationTraits.h>
#include <aws/mediapackagev2/model/ListChannelsPaginationTraits.h>
#include <aws/mediapackagev2/model/ListHarvestJobsPaginationTraits.h>
#include <aws/mediapackagev2/model/ListOriginEndpointsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace mediapackagev2 {

class Mediapackagev2Client;

template <typename DerivedClient>
class Mediapackagev2PaginationBase {
 public:
  /**
   * Create a paginator for ListChannelGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelGroupsRequest,
                                    Pagination::ListChannelGroupsPaginationTraits<DerivedClient>>
  ListChannelGroupsPaginator(const Model::ListChannelGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelGroupsRequest,
                                             Pagination::ListChannelGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest, Pagination::ListChannelsPaginationTraits<DerivedClient>>
  ListChannelsPaginator(const Model::ListChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest,
                                             Pagination::ListChannelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListHarvestJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHarvestJobsRequest,
                                    Pagination::ListHarvestJobsPaginationTraits<DerivedClient>>
  ListHarvestJobsPaginator(const Model::ListHarvestJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHarvestJobsRequest,
                                             Pagination::ListHarvestJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListOriginEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOriginEndpointsRequest,
                                    Pagination::ListOriginEndpointsPaginationTraits<DerivedClient>>
  ListOriginEndpointsPaginator(const Model::ListOriginEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOriginEndpointsRequest,
                                             Pagination::ListOriginEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace mediapackagev2
}  // namespace Aws
