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
  enum class Status
  {
    NOT_SET,
    NOT_STARTED,
    STARTING,
    FAILED_START,
    RUNNING,
    STOPPING,
    FAILED_STOP,
    STOPPED
  };

namespace StatusMapper
{
AWS_OBSERVABILITYADMIN_API Status GetStatusForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
