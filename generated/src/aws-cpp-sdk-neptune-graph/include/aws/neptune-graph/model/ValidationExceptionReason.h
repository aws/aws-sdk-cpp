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
  enum class ValidationExceptionReason
  {
    NOT_SET,
    CONSTRAINT_VIOLATION,
    ILLEGAL_ARGUMENT,
    MALFORMED_QUERY,
    QUERY_CANCELLED,
    QUERY_TOO_LARGE,
    UNSUPPORTED_OPERATION,
    BAD_REQUEST
  };

namespace ValidationExceptionReasonMapper
{
AWS_NEPTUNEGRAPH_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_NEPTUNEGRAPH_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
