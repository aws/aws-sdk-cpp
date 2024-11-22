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
  enum class MultiValueHandlingType
  {
    NOT_SET,
    TO_LIST,
    PICK_FIRST
  };

namespace MultiValueHandlingTypeMapper
{
AWS_NEPTUNEGRAPH_API MultiValueHandlingType GetMultiValueHandlingTypeForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForMultiValueHandlingType(MultiValueHandlingType value);
} // namespace MultiValueHandlingTypeMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
