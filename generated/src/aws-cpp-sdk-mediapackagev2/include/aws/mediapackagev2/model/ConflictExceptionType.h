/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{
  enum class ConflictExceptionType
  {
    NOT_SET,
    RESOURCE_IN_USE,
    RESOURCE_ALREADY_EXISTS,
    IDEMPOTENT_PARAMETER_MISMATCH,
    CONFLICTING_OPERATION
  };

namespace ConflictExceptionTypeMapper
{
AWS_MEDIAPACKAGEV2_API ConflictExceptionType GetConflictExceptionTypeForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForConflictExceptionType(ConflictExceptionType value);
} // namespace ConflictExceptionTypeMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
