/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

namespace Aws {
namespace SimpleDB {
template <typename ClientType>
class SimpleDBPaginationBase {
 public:
  virtual ~SimpleDBPaginationBase() = default;
};
}  // namespace SimpleDB
}  // namespace Aws
