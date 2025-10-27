/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>

namespace Aws {
namespace MigrationHubStrategyRecommendations {
namespace Model {
enum class GroupName { NOT_SET, ExternalId, ExternalSourceType };

namespace GroupNameMapper {
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GroupName GetGroupNameForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForGroupName(GroupName value);
}  // namespace GroupNameMapper
}  // namespace Model
}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
