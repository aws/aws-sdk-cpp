/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/uxc/UxcClient.h>
#include <aws/uxc/model/ListServicesPaginationTraits.h>

namespace Aws {
namespace uxc {

using ListServicesPaginator =
    Aws::Utils::Pagination::Paginator<UxcClient, Model::ListServicesRequest, Pagination::ListServicesPaginationTraits<UxcClient>>;

}  // namespace uxc
}  // namespace Aws
