/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace SignerData {

class SignerDataClient;

template <typename DerivedClient>
class SignerDataPaginationBase {
 public:
  virtual ~SignerDataPaginationBase() = default;
};
}  // namespace SignerData
}  // namespace Aws
