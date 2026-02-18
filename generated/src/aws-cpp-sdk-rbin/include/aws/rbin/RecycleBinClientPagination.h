/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rbin/RecycleBinClient.h>
#include <aws/rbin/model/ListRulesPaginationTraits.h>

namespace Aws {
namespace RecycleBin {

using ListRulesPaginator =
    Aws::Utils::Pagination::Paginator<RecycleBinClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<RecycleBinClient>>;

}  // namespace RecycleBin
}  // namespace Aws
