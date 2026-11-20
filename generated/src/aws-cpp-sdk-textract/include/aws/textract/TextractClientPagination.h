/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/textract/TextractClient.h>
#include <aws/textract/model/ListAdapterVersionsPaginationTraits.h>
#include <aws/textract/model/ListAdaptersPaginationTraits.h>
#include <aws/textract/model/ListBlueprintsPaginationTraits.h>
#include <aws/textract/model/ListProjectsPaginationTraits.h>

namespace Aws {
namespace Textract {

using ListAdaptersPaginator =
    Aws::Utils::Pagination::Paginator<TextractClient, Model::ListAdaptersRequest, Pagination::ListAdaptersPaginationTraits<TextractClient>>;
using ListAdapterVersionsPaginator = Aws::Utils::Pagination::Paginator<TextractClient, Model::ListAdapterVersionsRequest,
                                                                       Pagination::ListAdapterVersionsPaginationTraits<TextractClient>>;
using ListBlueprintsPaginator = Aws::Utils::Pagination::Paginator<TextractClient, Model::ListBlueprintsRequest,
                                                                  Pagination::ListBlueprintsPaginationTraits<TextractClient>>;
using ListProjectsPaginator =
    Aws::Utils::Pagination::Paginator<TextractClient, Model::ListProjectsRequest, Pagination::ListProjectsPaginationTraits<TextractClient>>;

}  // namespace Textract
}  // namespace Aws
