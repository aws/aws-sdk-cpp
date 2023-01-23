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
  enum class RunEnvironment
  {
    NOT_SET,
    AWS,
    ONPREMISE
  };

namespace RunEnvironmentMapper
{
AWS_MIGRATIONHUBORCHESTRATOR_API RunEnvironment GetRunEnvironmentForName(const Aws::String& name);

AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String GetNameForRunEnvironment(RunEnvironment value);
} // namespace RunEnvironmentMapper
} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
