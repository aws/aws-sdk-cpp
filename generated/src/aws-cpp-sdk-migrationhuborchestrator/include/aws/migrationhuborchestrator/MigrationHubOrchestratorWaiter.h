/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorClient.h>

#include <algorithm>

namespace Aws {
namespace MigrationHubOrchestrator {

template <typename DerivedClient = MigrationHubOrchestratorClient>
class MigrationHubOrchestratorWaiter {
 public:
};
}  // namespace MigrationHubOrchestrator
}  // namespace Aws
