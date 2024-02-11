/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class DriftStatus
  {
    NOT_SET,
    NotChecked,
    NotDetected,
    Detected
  };

namespace DriftStatusMapper
{
AWS_RESILIENCEHUB_API DriftStatus GetDriftStatusForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForDriftStatus(DriftStatus value);
} // namespace DriftStatusMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
