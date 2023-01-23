/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{
  enum class Owner
  {
    NOT_SET,
    AWS_MANAGED,
    CUSTOM
  };

namespace OwnerMapper
{
AWS_MIGRATIONHUBORCHESTRATOR_API Owner GetOwnerForName(const Aws::String& name);

AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String GetNameForOwner(Owner value);
} // namespace OwnerMapper
} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
