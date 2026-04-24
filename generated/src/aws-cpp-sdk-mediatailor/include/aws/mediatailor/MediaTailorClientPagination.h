/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediatailor/MediaTailorClient.h>
#include <aws/mediatailor/model/GetChannelSchedulePaginationTraits.h>
#include <aws/mediatailor/model/ListAlertsPaginationTraits.h>
#include <aws/mediatailor/model/ListChannelsPaginationTraits.h>
#include <aws/mediatailor/model/ListLiveSourcesPaginationTraits.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsPaginationTraits.h>
#include <aws/mediatailor/model/ListPrefetchSchedulesPaginationTraits.h>
#include <aws/mediatailor/model/ListSourceLocationsPaginationTraits.h>
#include <aws/mediatailor/model/ListVodSourcesPaginationTraits.h>

namespace Aws {
namespace MediaTailor {

using GetChannelSchedulePaginator = Aws::Utils::Pagination::Paginator<MediaTailorClient, Model::GetChannelScheduleRequest,
                                                                      Pagination::GetChannelSchedulePaginationTraits<MediaTailorClient>>;
using ListAlertsPaginator = Aws::Utils::Pagination::Paginator<MediaTailorClient, Model::ListAlertsRequest,
                                                              Pagination::ListAlertsPaginationTraits<MediaTailorClient>>;
using ListChannelsPaginator = Aws::Utils::Pagination::Paginator<MediaTailorClient, Model::ListChannelsRequest,
                                                                Pagination::ListChannelsPaginationTraits<MediaTailorClient>>;
using ListLiveSourcesPaginator = Aws::Utils::Pagination::Paginator<MediaTailorClient, Model::ListLiveSourcesRequest,
                                                                   Pagination::ListLiveSourcesPaginationTraits<MediaTailorClient>>;
using ListPlaybackConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<MediaTailorClient, Model::ListPlaybackConfigurationsRequest,
                                      Pagination::ListPlaybackConfigurationsPaginationTraits<MediaTailorClient>>;
using ListPrefetchSchedulesPaginator =
    Aws::Utils::Pagination::Paginator<MediaTailorClient, Model::ListPrefetchSchedulesRequest,
                                      Pagination::ListPrefetchSchedulesPaginationTraits<MediaTailorClient>>;
using ListSourceLocationsPaginator = Aws::Utils::Pagination::Paginator<MediaTailorClient, Model::ListSourceLocationsRequest,
                                                                       Pagination::ListSourceLocationsPaginationTraits<MediaTailorClient>>;
using ListVodSourcesPaginator = Aws::Utils::Pagination::Paginator<MediaTailorClient, Model::ListVodSourcesRequest,
                                                                  Pagination::ListVodSourcesPaginationTraits<MediaTailorClient>>;

}  // namespace MediaTailor
}  // namespace Aws
