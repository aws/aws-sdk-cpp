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
  enum class ProxyType
  {
    NOT_SET,
    API_GATEWAY
  };

namespace ProxyTypeMapper
{
AWS_MIGRATIONHUBREFACTORSPACES_API ProxyType GetProxyTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String GetNameForProxyType(ProxyType value);
} // namespace ProxyTypeMapper
} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
