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
  enum class M2tsPcrControl
  {
    NOT_SET,
    PCR_EVERY_PES_PACKET,
    CONFIGURED_PCR_PERIOD
  };

namespace M2tsPcrControlMapper
{
AWS_MEDIACONVERT_API M2tsPcrControl GetM2tsPcrControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsPcrControl(M2tsPcrControl value);
} // namespace M2tsPcrControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
