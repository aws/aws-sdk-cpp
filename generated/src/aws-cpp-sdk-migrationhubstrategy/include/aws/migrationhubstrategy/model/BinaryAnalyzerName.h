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
  enum class BinaryAnalyzerName
  {
    NOT_SET,
    DLL_ANALYZER,
    BYTECODE_ANALYZER
  };

namespace BinaryAnalyzerNameMapper
{
AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API BinaryAnalyzerName GetBinaryAnalyzerNameForName(const Aws::String& name);

AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String GetNameForBinaryAnalyzerName(BinaryAnalyzerName value);
} // namespace BinaryAnalyzerNameMapper
} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
