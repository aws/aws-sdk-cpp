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
  enum class ExplainMode
  {
    NOT_SET,
    STATIC_,
    DETAILS
  };

namespace ExplainModeMapper
{
AWS_NEPTUNEGRAPH_API ExplainMode GetExplainModeForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForExplainMode(ExplainMode value);
} // namespace ExplainModeMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
