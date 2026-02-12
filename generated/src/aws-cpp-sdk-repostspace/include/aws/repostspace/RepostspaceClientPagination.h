/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/repostspace/RepostspaceClient.h>
#include <aws/repostspace/model/ListChannelsPaginationTraits.h>
#include <aws/repostspace/model/ListSpacesPaginationTraits.h>

namespace Aws {
namespace repostspace {

using ListChannelsPaginator = Aws::Utils::Pagination::Paginator<RepostspaceClient, Model::ListChannelsRequest,
                                                                Pagination::ListChannelsPaginationTraits<RepostspaceClient>>;
using ListSpacesPaginator = Aws::Utils::Pagination::Paginator<RepostspaceClient, Model::ListSpacesRequest,
                                                              Pagination::ListSpacesPaginationTraits<RepostspaceClient>>;

}  // namespace repostspace
}  // namespace Aws
