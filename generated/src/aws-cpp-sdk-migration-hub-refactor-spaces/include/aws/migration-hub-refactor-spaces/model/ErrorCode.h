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
  enum class ErrorCode
  {
    NOT_SET,
    INVALID_RESOURCE_STATE,
    RESOURCE_LIMIT_EXCEEDED,
    RESOURCE_CREATION_FAILURE,
    RESOURCE_UPDATE_FAILURE,
    SERVICE_ENDPOINT_HEALTH_CHECK_FAILURE,
    RESOURCE_DELETION_FAILURE,
    RESOURCE_RETRIEVAL_FAILURE,
    RESOURCE_IN_USE,
    RESOURCE_NOT_FOUND,
    STATE_TRANSITION_FAILURE,
    REQUEST_LIMIT_EXCEEDED,
    NOT_AUTHORIZED
  };

namespace ErrorCodeMapper
{
AWS_MIGRATIONHUBREFACTORSPACES_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
