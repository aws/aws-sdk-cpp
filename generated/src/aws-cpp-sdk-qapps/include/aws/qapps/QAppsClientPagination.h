/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/qapps/QAppsClient.h>
#include <aws/qapps/model/ListLibraryItemsPaginationTraits.h>
#include <aws/qapps/model/ListQAppsPaginationTraits.h>

namespace Aws {
namespace QApps {

using ListLibraryItemsPaginator = Aws::Utils::Pagination::Paginator<QAppsClient, Model::ListLibraryItemsRequest,
                                                                    Pagination::ListLibraryItemsPaginationTraits<QAppsClient>>;
using ListQAppsPaginator =
    Aws::Utils::Pagination::Paginator<QAppsClient, Model::ListQAppsRequest, Pagination::ListQAppsPaginationTraits<QAppsClient>>;

}  // namespace QApps
}  // namespace Aws
