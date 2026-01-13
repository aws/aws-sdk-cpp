/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Proton {

class ProtonClient;

template <typename DerivedClient>
class ProtonPaginationBase {
 public:
  virtual ~ProtonPaginationBase() = default;
};
}  // namespace Proton
}  // namespace Aws
