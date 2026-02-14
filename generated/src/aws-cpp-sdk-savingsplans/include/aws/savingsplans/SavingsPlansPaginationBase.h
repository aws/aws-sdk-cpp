/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace SavingsPlans {

class SavingsPlansClient;

template <typename DerivedClient>
class SavingsPlansPaginationBase {
 public:
  virtual ~SavingsPlansPaginationBase() = default;
};
}  // namespace SavingsPlans
}  // namespace Aws
