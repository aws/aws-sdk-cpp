/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>

namespace Aws {
namespace MigrationHubRefactorSpaces {
namespace Model {
enum class RouteState { NOT_SET, CREATING, ACTIVE, DELETING, FAILED, UPDATING, INACTIVE };

namespace RouteStateMapper {
AWS_MIGRATIONHUBREFACTORSPACES_API RouteState GetRouteStateForName(const Aws::String& name);

AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String GetNameForRouteState(RouteState value);
}  // namespace RouteStateMapper
}  // namespace Model
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
