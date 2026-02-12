/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediapackage/MediaPackageClient.h>
#include <aws/mediapackage/model/ListChannelsPaginationTraits.h>
#include <aws/mediapackage/model/ListHarvestJobsPaginationTraits.h>
#include <aws/mediapackage/model/ListOriginEndpointsPaginationTraits.h>

namespace Aws {
namespace MediaPackage {

using ListChannelsPaginator = Aws::Utils::Pagination::Paginator<MediaPackageClient, Model::ListChannelsRequest,
                                                                Pagination::ListChannelsPaginationTraits<MediaPackageClient>>;
using ListHarvestJobsPaginator = Aws::Utils::Pagination::Paginator<MediaPackageClient, Model::ListHarvestJobsRequest,
                                                                   Pagination::ListHarvestJobsPaginationTraits<MediaPackageClient>>;
using ListOriginEndpointsPaginator = Aws::Utils::Pagination::Paginator<MediaPackageClient, Model::ListOriginEndpointsRequest,
                                                                       Pagination::ListOriginEndpointsPaginationTraits<MediaPackageClient>>;

}  // namespace MediaPackage
}  // namespace Aws
