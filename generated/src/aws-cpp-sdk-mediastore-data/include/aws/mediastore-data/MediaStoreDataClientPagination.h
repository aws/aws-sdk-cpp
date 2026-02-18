/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediastore-data/MediaStoreDataClient.h>
#include <aws/mediastore-data/model/ListItemsPaginationTraits.h>

namespace Aws {
namespace MediaStoreData {

using ListItemsPaginator = Aws::Utils::Pagination::Paginator<MediaStoreDataClient, Model::ListItemsRequest,
                                                             Pagination::ListItemsPaginationTraits<MediaStoreDataClient>>;

}  // namespace MediaStoreData
}  // namespace Aws
