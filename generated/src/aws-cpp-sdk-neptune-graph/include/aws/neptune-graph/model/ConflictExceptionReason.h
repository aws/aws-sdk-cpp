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
  enum class ConflictExceptionReason
  {
    NOT_SET,
    CONCURRENT_MODIFICATION
  };

namespace ConflictExceptionReasonMapper
{
AWS_NEPTUNEGRAPH_API ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason value);
} // namespace ConflictExceptionReasonMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
