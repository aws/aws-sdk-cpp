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
enum class ApiGatewayEndpointType { NOT_SET, REGIONAL, PRIVATE_ };

namespace ApiGatewayEndpointTypeMapper {
AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayEndpointType GetApiGatewayEndpointTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String GetNameForApiGatewayEndpointType(ApiGatewayEndpointType value);
}  // namespace ApiGatewayEndpointTypeMapper
}  // namespace Model
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
