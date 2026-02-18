/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediapackagev2/Mediapackagev2Client.h>
#include <aws/mediapackagev2/model/ListChannelGroupsPaginationTraits.h>
#include <aws/mediapackagev2/model/ListChannelsPaginationTraits.h>
#include <aws/mediapackagev2/model/ListHarvestJobsPaginationTraits.h>
#include <aws/mediapackagev2/model/ListOriginEndpointsPaginationTraits.h>

namespace Aws {
namespace mediapackagev2 {

using ListChannelGroupsPaginator = Aws::Utils::Pagination::Paginator<Mediapackagev2Client, Model::ListChannelGroupsRequest,
                                                                     Pagination::ListChannelGroupsPaginationTraits<Mediapackagev2Client>>;
using ListChannelsPaginator = Aws::Utils::Pagination::Paginator<Mediapackagev2Client, Model::ListChannelsRequest,
                                                                Pagination::ListChannelsPaginationTraits<Mediapackagev2Client>>;
using ListHarvestJobsPaginator = Aws::Utils::Pagination::Paginator<Mediapackagev2Client, Model::ListHarvestJobsRequest,
                                                                   Pagination::ListHarvestJobsPaginationTraits<Mediapackagev2Client>>;
using ListOriginEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<Mediapackagev2Client, Model::ListOriginEndpointsRequest,
                                      Pagination::ListOriginEndpointsPaginationTraits<Mediapackagev2Client>>;

}  // namespace mediapackagev2
}  // namespace Aws
