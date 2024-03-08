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
  enum class UnprocessableExceptionReason
  {
    NOT_SET,
    QUERY_TIMEOUT,
    INTERNAL_LIMIT_EXCEEDED,
    MEMORY_LIMIT_EXCEEDED,
    STORAGE_LIMIT_EXCEEDED,
    PARTITION_FULL
  };

namespace UnprocessableExceptionReasonMapper
{
AWS_NEPTUNEGRAPH_API UnprocessableExceptionReason GetUnprocessableExceptionReasonForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForUnprocessableExceptionReason(UnprocessableExceptionReason value);
} // namespace UnprocessableExceptionReasonMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
