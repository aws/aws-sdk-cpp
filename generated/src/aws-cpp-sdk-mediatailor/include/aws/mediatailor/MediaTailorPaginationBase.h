/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediatailor/model/GetChannelSchedulePaginationTraits.h>
#include <aws/mediatailor/model/ListAlertsPaginationTraits.h>
#include <aws/mediatailor/model/ListChannelsPaginationTraits.h>
#include <aws/mediatailor/model/ListLiveSourcesPaginationTraits.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsPaginationTraits.h>
#include <aws/mediatailor/model/ListPrefetchSchedulesPaginationTraits.h>
#include <aws/mediatailor/model/ListSourceLocationsPaginationTraits.h>
#include <aws/mediatailor/model/ListVodSourcesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MediaTailor {

class MediaTailorClient;

template <typename DerivedClient>
class MediaTailorPaginationBase {
 public:
  /**
   * Create a paginator for GetChannelSchedule operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetChannelScheduleRequest,
                                    Pagination::GetChannelSchedulePaginationTraits<DerivedClient>>
  GetChannelSchedulePaginator(const Model::GetChannelScheduleRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetChannelScheduleRequest,
                                             Pagination::GetChannelSchedulePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAlerts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlertsRequest, Pagination::ListAlertsPaginationTraits<DerivedClient>>
  ListAlertsPaginator(const Model::ListAlertsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAlertsRequest,
                                             Pagination::ListAlertsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
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
   * Create a paginator for ListLiveSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLiveSourcesRequest,
                                    Pagination::ListLiveSourcesPaginationTraits<DerivedClient>>
  ListLiveSourcesPaginator(const Model::ListLiveSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLiveSourcesRequest,
                                             Pagination::ListLiveSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListPlaybackConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlaybackConfigurationsRequest,
                                    Pagination::ListPlaybackConfigurationsPaginationTraits<DerivedClient>>
  ListPlaybackConfigurationsPaginator(const Model::ListPlaybackConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlaybackConfigurationsRequest,
                                             Pagination::ListPlaybackConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPrefetchSchedules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrefetchSchedulesRequest,
                                    Pagination::ListPrefetchSchedulesPaginationTraits<DerivedClient>>
  ListPrefetchSchedulesPaginator(const Model::ListPrefetchSchedulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPrefetchSchedulesRequest,
                                             Pagination::ListPrefetchSchedulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSourceLocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceLocationsRequest,
                                    Pagination::ListSourceLocationsPaginationTraits<DerivedClient>>
  ListSourceLocationsPaginator(const Model::ListSourceLocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceLocationsRequest,
                                             Pagination::ListSourceLocationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVodSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVodSourcesRequest, Pagination::ListVodSourcesPaginationTraits<DerivedClient>>
  ListVodSourcesPaginator(const Model::ListVodSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVodSourcesRequest,
                                             Pagination::ListVodSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace MediaTailor
}  // namespace Aws
