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
enum class ServiceState { NOT_SET, CREATING, ACTIVE, DELETING, FAILED };

namespace ServiceStateMapper {
AWS_MIGRATIONHUBREFACTORSPACES_API ServiceState GetServiceStateForName(const Aws::String& name);

AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String GetNameForServiceState(ServiceState value);
}  // namespace ServiceStateMapper
}  // namespace Model
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
