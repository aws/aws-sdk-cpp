/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/simpledbv2/SimpleDBv2Client.h>
#include <aws/simpledbv2/model/ListExportsPaginationTraits.h>

namespace Aws {
namespace SimpleDBv2 {

using ListExportsPaginator = Aws::Utils::Pagination::Paginator<SimpleDBv2Client, Model::ListExportsRequest,
                                                               Pagination::ListExportsPaginationTraits<SimpleDBv2Client>>;

}  // namespace SimpleDBv2
}  // namespace Aws
