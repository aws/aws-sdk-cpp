/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace MigrationHubRefactorSpaces {
class AWS_MIGRATIONHUBREFACTORSPACES_LOCAL MigrationHubRefactorSpacesEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
