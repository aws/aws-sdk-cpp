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
enum class RouteType { NOT_SET, DEFAULT, URI_PATH };

namespace RouteTypeMapper {
AWS_MIGRATIONHUBREFACTORSPACES_API RouteType GetRouteTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String GetNameForRouteType(RouteType value);
}  // namespace RouteTypeMapper
}  // namespace Model
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
