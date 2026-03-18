/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsClient.h>

#include <algorithm>

namespace Aws {
namespace MigrationHubStrategyRecommendations {

template <typename DerivedClient = MigrationHubStrategyRecommendationsClient>
class MigrationHubStrategyRecommendationsWaiter {
 public:
};
}  // namespace MigrationHubStrategyRecommendations
}  // namespace Aws
