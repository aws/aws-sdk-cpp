/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  enum class ServerOsType
  {
    NOT_SET,
    WindowsServer,
    AmazonLinux,
    EndOfSupportWindowsServer,
    Redhat,
    Other
  };

namespace ServerOsTypeMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ServerOsType GetServerOsTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForServerOsType(ServerOsType value);
} // namespace ServerOsTypeMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
