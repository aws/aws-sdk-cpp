/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class DashIsoHbbtvCompliance
  {
    NOT_SET,
    HBBTV_1_5,
    NONE
  };

namespace DashIsoHbbtvComplianceMapper
{
AWS_MEDIACONVERT_API DashIsoHbbtvCompliance GetDashIsoHbbtvComplianceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoHbbtvCompliance(DashIsoHbbtvCompliance value);
} // namespace DashIsoHbbtvComplianceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
