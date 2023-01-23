/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class OpticalStandard
  {
    NOT_SET,
    OPTIC_10GBASE_SR,
    OPTIC_10GBASE_IR,
    OPTIC_10GBASE_LR,
    OPTIC_40GBASE_SR,
    OPTIC_40GBASE_ESR,
    OPTIC_40GBASE_IR4_LR4L,
    OPTIC_40GBASE_LR4,
    OPTIC_100GBASE_SR4,
    OPTIC_100GBASE_CWDM4,
    OPTIC_100GBASE_LR4,
    OPTIC_100G_PSM4_MSA,
    OPTIC_1000BASE_LX,
    OPTIC_1000BASE_SX
  };

namespace OpticalStandardMapper
{
AWS_OUTPOSTS_API OpticalStandard GetOpticalStandardForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForOpticalStandard(OpticalStandard value);
} // namespace OpticalStandardMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
