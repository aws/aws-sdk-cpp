/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubConfig
{
namespace Model
{
  enum class TargetType
  {
    NOT_SET,
    ACCOUNT
  };

namespace TargetTypeMapper
{
AWS_MIGRATIONHUBCONFIG_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBCONFIG_API Aws::String GetNameForTargetType(TargetType value);
} // namespace TargetTypeMapper
} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
