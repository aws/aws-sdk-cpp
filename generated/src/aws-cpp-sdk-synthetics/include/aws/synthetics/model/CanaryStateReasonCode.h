/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class CanaryStateReasonCode
  {
    NOT_SET,
    INVALID_PERMISSIONS,
    CREATE_PENDING,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    UPDATE_PENDING,
    UPDATE_IN_PROGRESS,
    UPDATE_COMPLETE,
    ROLLBACK_COMPLETE,
    ROLLBACK_FAILED,
    DELETE_IN_PROGRESS,
    DELETE_FAILED,
    SYNC_DELETE_IN_PROGRESS
  };

namespace CanaryStateReasonCodeMapper
{
AWS_SYNTHETICS_API CanaryStateReasonCode GetCanaryStateReasonCodeForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForCanaryStateReasonCode(CanaryStateReasonCode value);
} // namespace CanaryStateReasonCodeMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
