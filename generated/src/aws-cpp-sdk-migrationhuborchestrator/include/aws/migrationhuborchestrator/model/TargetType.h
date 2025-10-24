/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>

namespace Aws {
namespace MigrationHubOrchestrator {
namespace Model {
enum class TargetType { NOT_SET, SINGLE, ALL, NONE };

namespace TargetTypeMapper {
AWS_MIGRATIONHUBORCHESTRATOR_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String GetNameForTargetType(TargetType value);
}  // namespace TargetTypeMapper
}  // namespace Model
}  // namespace MigrationHubOrchestrator
}  // namespace Aws
