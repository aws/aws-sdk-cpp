/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace neptunedata
{
namespace Model
{
  enum class StatisticsAutoGenerationMode
  {
    NOT_SET,
    disableAutoCompute,
    enableAutoCompute,
    refresh
  };

namespace StatisticsAutoGenerationModeMapper
{
AWS_NEPTUNEDATA_API StatisticsAutoGenerationMode GetStatisticsAutoGenerationModeForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForStatisticsAutoGenerationMode(StatisticsAutoGenerationMode value);
} // namespace StatisticsAutoGenerationModeMapper
} // namespace Model
} // namespace neptunedata
} // namespace Aws
