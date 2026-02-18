/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace PaymentCryptographyData {

class PaymentCryptographyDataClient;

template <typename DerivedClient>
class PaymentCryptographyDataPaginationBase {
 public:
  virtual ~PaymentCryptographyDataPaginationBase() = default;
};
}  // namespace PaymentCryptographyData
}  // namespace Aws
