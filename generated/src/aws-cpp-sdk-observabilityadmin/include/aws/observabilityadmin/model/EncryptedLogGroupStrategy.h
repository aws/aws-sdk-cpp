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
  enum class EncryptedLogGroupStrategy
  {
    NOT_SET,
    ALLOW,
    SKIP
  };

namespace EncryptedLogGroupStrategyMapper
{
AWS_OBSERVABILITYADMIN_API EncryptedLogGroupStrategy GetEncryptedLogGroupStrategyForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForEncryptedLogGroupStrategy(EncryptedLogGroupStrategy value);
} // namespace EncryptedLogGroupStrategyMapper
} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
