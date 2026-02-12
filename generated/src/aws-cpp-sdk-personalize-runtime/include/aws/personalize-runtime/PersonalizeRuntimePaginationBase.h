/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace PersonalizeRuntime {

class PersonalizeRuntimeClient;

template <typename DerivedClient>
class PersonalizeRuntimePaginationBase {
 public:
  virtual ~PersonalizeRuntimePaginationBase() = default;
};
}  // namespace PersonalizeRuntime
}  // namespace Aws
