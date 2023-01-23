/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  enum class AuthType
  {
    NOT_SET,
    NTLM,
    SSH,
    CERT
  };

namespace AuthTypeMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AuthType GetAuthTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForAuthType(AuthType value);
} // namespace AuthTypeMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
