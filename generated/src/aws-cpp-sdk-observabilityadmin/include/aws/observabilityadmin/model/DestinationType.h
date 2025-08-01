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
  enum class DestinationType
  {
    NOT_SET,
    cloud_watch_logs
  };

namespace DestinationTypeMapper
{
AWS_OBSERVABILITYADMIN_API DestinationType GetDestinationTypeForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForDestinationType(DestinationType value);
} // namespace DestinationTypeMapper
} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
