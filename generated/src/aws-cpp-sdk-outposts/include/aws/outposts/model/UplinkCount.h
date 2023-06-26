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
  enum class UplinkCount
  {
    NOT_SET,
    UPLINK_COUNT_1,
    UPLINK_COUNT_2,
    UPLINK_COUNT_3,
    UPLINK_COUNT_4,
    UPLINK_COUNT_5,
    UPLINK_COUNT_6,
    UPLINK_COUNT_7,
    UPLINK_COUNT_8,
    UPLINK_COUNT_12,
    UPLINK_COUNT_16
  };

namespace UplinkCountMapper
{
AWS_OUTPOSTS_API UplinkCount GetUplinkCountForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForUplinkCount(UplinkCount value);
} // namespace UplinkCountMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
