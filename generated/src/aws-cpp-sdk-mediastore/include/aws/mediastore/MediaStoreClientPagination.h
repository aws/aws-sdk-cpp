/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediastore/MediaStoreClient.h>
#include <aws/mediastore/model/ListContainersPaginationTraits.h>

namespace Aws {
namespace MediaStore {

using ListContainersPaginator = Aws::Utils::Pagination::Paginator<MediaStoreClient, Model::ListContainersRequest,
                                                                  Pagination::ListContainersPaginationTraits<MediaStoreClient>>;

}  // namespace MediaStore
}  // namespace Aws
