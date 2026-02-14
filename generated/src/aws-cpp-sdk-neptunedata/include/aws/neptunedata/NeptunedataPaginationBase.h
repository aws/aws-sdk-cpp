/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace neptunedata {

class NeptunedataClient;

template <typename DerivedClient>
class NeptunedataPaginationBase {
 public:
  virtual ~NeptunedataPaginationBase() = default;
};
}  // namespace neptunedata
}  // namespace Aws
