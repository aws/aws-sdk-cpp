/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediapackage-vod/model/ListAssetsPaginationTraits.h>
#include <aws/mediapackage-vod/model/ListPackagingConfigurationsPaginationTraits.h>
#include <aws/mediapackage-vod/model/ListPackagingGroupsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MediaPackageVod {

class MediaPackageVodClient;

template <typename DerivedClient>
class MediaPackageVodPaginationBase {
 public:
  /**
   * Create a paginator for ListAssets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetsRequest, Pagination::ListAssetsPaginationTraits<DerivedClient>>
  ListAssetsPaginator(const Model::ListAssetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetsRequest,
                                             Pagination::ListAssetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListPackagingConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagingConfigurationsRequest,
                                    Pagination::ListPackagingConfigurationsPaginationTraits<DerivedClient>>
  ListPackagingConfigurationsPaginator(const Model::ListPackagingConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagingConfigurationsRequest,
                                             Pagination::ListPackagingConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPackagingGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagingGroupsRequest,
                                    Pagination::ListPackagingGroupsPaginationTraits<DerivedClient>>
  ListPackagingGroupsPaginator(const Model::ListPackagingGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPackagingGroupsRequest,
                                             Pagination::ListPackagingGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace MediaPackageVod
}  // namespace Aws
