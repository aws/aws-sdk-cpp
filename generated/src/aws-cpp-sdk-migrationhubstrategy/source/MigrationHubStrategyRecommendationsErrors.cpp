/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::MigrationHubStrategyRecommendations;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace MigrationHubStrategyRecommendationsErrorMapper
{

static constexpr uint32_t CONFLICT_HASH = ConstExprHashingUtils::HashString("ConflictException");
static constexpr uint32_t SERVICE_QUOTA_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ServiceQuotaExceededException");
static constexpr uint32_t INTERNAL_SERVER_HASH = ConstExprHashingUtils::HashString("InternalServerException");
static constexpr uint32_t DEPENDENCY_HASH = ConstExprHashingUtils::HashString("DependencyException");
static constexpr uint32_t SERVICE_LINKED_ROLE_LOCK_CLIENT_HASH = ConstExprHashingUtils::HashString("ServiceLinkedRoleLockClientException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubStrategyRecommendationsErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubStrategyRecommendationsErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubStrategyRecommendationsErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == DEPENDENCY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubStrategyRecommendationsErrors::DEPENDENCY), false);
  }
  else if (hashCode == SERVICE_LINKED_ROLE_LOCK_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(MigrationHubStrategyRecommendationsErrors::SERVICE_LINKED_ROLE_LOCK_CLIENT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace MigrationHubStrategyRecommendationsErrorMapper
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
