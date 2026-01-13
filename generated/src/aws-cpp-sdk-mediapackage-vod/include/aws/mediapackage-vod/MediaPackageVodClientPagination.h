/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediapackage-vod/MediaPackageVodClient.h>
#include <aws/mediapackage-vod/model/ListAssetsPaginationTraits.h>
#include <aws/mediapackage-vod/model/ListPackagingConfigurationsPaginationTraits.h>
#include <aws/mediapackage-vod/model/ListPackagingGroupsPaginationTraits.h>

namespace Aws {
namespace MediaPackageVod {

using ListAssetsPaginator = Aws::Utils::Pagination::Paginator<MediaPackageVodClient, Model::ListAssetsRequest,
                                                              Pagination::ListAssetsPaginationTraits<MediaPackageVodClient>>;
using ListPackagingConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<MediaPackageVodClient, Model::ListPackagingConfigurationsRequest,
                                      Pagination::ListPackagingConfigurationsPaginationTraits<MediaPackageVodClient>>;
using ListPackagingGroupsPaginator =
    Aws::Utils::Pagination::Paginator<MediaPackageVodClient, Model::ListPackagingGroupsRequest,
                                      Pagination::ListPackagingGroupsPaginationTraits<MediaPackageVodClient>>;

}  // namespace MediaPackageVod
}  // namespace Aws
