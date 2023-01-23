/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class IngestionRequestSource
  {
    NOT_SET,
    MANUAL,
    SCHEDULED
  };

namespace IngestionRequestSourceMapper
{
AWS_QUICKSIGHT_API IngestionRequestSource GetIngestionRequestSourceForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIngestionRequestSource(IngestionRequestSource value);
} // namespace IngestionRequestSourceMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
