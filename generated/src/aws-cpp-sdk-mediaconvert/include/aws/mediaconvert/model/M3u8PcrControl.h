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
  enum class M3u8PcrControl
  {
    NOT_SET,
    PCR_EVERY_PES_PACKET,
    CONFIGURED_PCR_PERIOD
  };

namespace M3u8PcrControlMapper
{
AWS_MEDIACONVERT_API M3u8PcrControl GetM3u8PcrControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM3u8PcrControl(M3u8PcrControl value);
} // namespace M3u8PcrControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
