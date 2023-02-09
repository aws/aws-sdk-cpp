/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  enum class NetworkFabricType
  {
    NOT_SET,
    TRANSIT_GATEWAY,
    NONE
  };

namespace NetworkFabricTypeMapper
{
AWS_MIGRATIONHUBREFACTORSPACES_API NetworkFabricType GetNetworkFabricTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String GetNameForNetworkFabricType(NetworkFabricType value);
} // namespace NetworkFabricTypeMapper
} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
