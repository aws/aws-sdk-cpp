/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{
  enum class PlanCacheType
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    AUTO
  };

namespace PlanCacheTypeMapper
{
AWS_NEPTUNEGRAPH_API PlanCacheType GetPlanCacheTypeForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForPlanCacheType(PlanCacheType value);
} // namespace PlanCacheTypeMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
