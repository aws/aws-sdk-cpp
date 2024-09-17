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
  enum class AdMarkerDash
  {
    NOT_SET,
    BINARY,
    XML
  };

namespace AdMarkerDashMapper
{
AWS_MEDIAPACKAGEV2_API AdMarkerDash GetAdMarkerDashForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForAdMarkerDash(AdMarkerDash value);
} // namespace AdMarkerDashMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
