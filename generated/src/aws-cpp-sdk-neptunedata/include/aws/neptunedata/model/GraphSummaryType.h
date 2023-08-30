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
  enum class GraphSummaryType
  {
    NOT_SET,
    basic,
    detailed
  };

namespace GraphSummaryTypeMapper
{
AWS_NEPTUNEDATA_API GraphSummaryType GetGraphSummaryTypeForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForGraphSummaryType(GraphSummaryType value);
} // namespace GraphSummaryTypeMapper
} // namespace Model
} // namespace neptunedata
} // namespace Aws
