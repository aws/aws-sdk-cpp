/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{
  enum class TelemetryState
  {
    NOT_SET,
    Enabled,
    Disabled,
    NotApplicable
  };

namespace TelemetryStateMapper
{
AWS_OBSERVABILITYADMIN_API TelemetryState GetTelemetryStateForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForTelemetryState(TelemetryState value);
} // namespace TelemetryStateMapper
} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
