/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{
  enum class EncryptionStrategy
  {
    NOT_SET,
    CUSTOMER_MANAGED,
    AWS_OWNED
  };

namespace EncryptionStrategyMapper
{
AWS_OBSERVABILITYADMIN_API EncryptionStrategy GetEncryptionStrategyForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForEncryptionStrategy(EncryptionStrategy value);
} // namespace EncryptionStrategyMapper
} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
