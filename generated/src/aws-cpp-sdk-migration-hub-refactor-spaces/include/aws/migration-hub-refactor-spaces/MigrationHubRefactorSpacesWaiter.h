/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesClient.h>

#include <algorithm>

namespace Aws {
namespace MigrationHubRefactorSpaces {

template <typename DerivedClient = MigrationHubRefactorSpacesClient>
class MigrationHubRefactorSpacesWaiter {
 public:
};
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
