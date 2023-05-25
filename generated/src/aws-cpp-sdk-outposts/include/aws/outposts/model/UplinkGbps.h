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
  enum class UplinkGbps
  {
    NOT_SET,
    UPLINK_1G,
    UPLINK_10G,
    UPLINK_40G,
    UPLINK_100G
  };

namespace UplinkGbpsMapper
{
AWS_OUTPOSTS_API UplinkGbps GetUplinkGbpsForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForUplinkGbps(UplinkGbps value);
} // namespace UplinkGbpsMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
