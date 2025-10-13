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
  enum class TelemetryEnrichmentStatus
  {
    NOT_SET,
    Running,
    Stopped,
    Impaired
  };

namespace TelemetryEnrichmentStatusMapper
{
AWS_OBSERVABILITYADMIN_API TelemetryEnrichmentStatus GetTelemetryEnrichmentStatusForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForTelemetryEnrichmentStatus(TelemetryEnrichmentStatus value);
} // namespace TelemetryEnrichmentStatusMapper
} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
