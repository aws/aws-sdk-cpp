/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rbin/model/ListRulesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace RecycleBin {

class RecycleBinClient;

template <typename DerivedClient>
class RecycleBinPaginationBase {
 public:
  /**
   * Create a paginator for ListRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>
  ListRulesPaginator(const Model::ListRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace RecycleBin
}  // namespace Aws
