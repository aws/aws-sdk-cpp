/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace STS {

class STSClient;

template <typename DerivedClient>
class STSPaginationBase {
 public:
  virtual ~STSPaginationBase() = default;
};
}  // namespace STS
}  // namespace Aws
