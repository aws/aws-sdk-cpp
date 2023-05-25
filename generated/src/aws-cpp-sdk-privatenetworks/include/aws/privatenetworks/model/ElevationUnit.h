/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{
  enum class ElevationUnit
  {
    NOT_SET,
    FEET
  };

namespace ElevationUnitMapper
{
AWS_PRIVATENETWORKS_API ElevationUnit GetElevationUnitForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForElevationUnit(ElevationUnit value);
} // namespace ElevationUnitMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
