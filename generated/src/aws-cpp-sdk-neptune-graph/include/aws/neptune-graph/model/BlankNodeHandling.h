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
  enum class BlankNodeHandling
  {
    NOT_SET,
    convertToIri
  };

namespace BlankNodeHandlingMapper
{
AWS_NEPTUNEGRAPH_API BlankNodeHandling GetBlankNodeHandlingForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForBlankNodeHandling(BlankNodeHandling value);
} // namespace BlankNodeHandlingMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
