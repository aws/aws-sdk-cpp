/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace SSMGuiConnect {

class SSMGuiConnectClient;

template <typename DerivedClient>
class SSMGuiConnectPaginationBase {
 public:
  virtual ~SSMGuiConnectPaginationBase() = default;
};
}  // namespace SSMGuiConnect
}  // namespace Aws
