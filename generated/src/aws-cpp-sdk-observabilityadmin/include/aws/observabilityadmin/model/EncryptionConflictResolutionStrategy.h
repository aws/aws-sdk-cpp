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
  enum class EncryptionConflictResolutionStrategy
  {
    NOT_SET,
    ALLOW,
    SKIP
  };

namespace EncryptionConflictResolutionStrategyMapper
{
AWS_OBSERVABILITYADMIN_API EncryptionConflictResolutionStrategy GetEncryptionConflictResolutionStrategyForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForEncryptionConflictResolutionStrategy(EncryptionConflictResolutionStrategy value);
} // namespace EncryptionConflictResolutionStrategyMapper
} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
