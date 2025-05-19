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
  enum class DashProfile
  {
    NOT_SET,
    DVB_DASH
  };

namespace DashProfileMapper
{
AWS_MEDIAPACKAGEV2_API DashProfile GetDashProfileForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForDashProfile(DashProfile value);
} // namespace DashProfileMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
