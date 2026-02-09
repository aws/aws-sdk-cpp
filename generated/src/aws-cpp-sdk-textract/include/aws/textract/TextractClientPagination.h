/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/textract/TextractClient.h>
#include <aws/textract/model/ListAdapterVersionsPaginationTraits.h>
#include <aws/textract/model/ListAdaptersPaginationTraits.h>

namespace Aws {
namespace Textract {

using ListAdaptersPaginator =
    Aws::Utils::Pagination::Paginator<TextractClient, Model::ListAdaptersRequest, Pagination::ListAdaptersPaginationTraits<TextractClient>>;
using ListAdapterVersionsPaginator = Aws::Utils::Pagination::Paginator<TextractClient, Model::ListAdapterVersionsRequest,
                                                                       Pagination::ListAdapterVersionsPaginationTraits<TextractClient>>;

}  // namespace Textract
}  // namespace Aws
