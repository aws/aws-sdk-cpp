/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Pinpoint {

class PinpointClient;

template <typename DerivedClient>
class PinpointPaginationBase {
 public:
  virtual ~PinpointPaginationBase() = default;
};
}  // namespace Pinpoint
}  // namespace Aws
