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
  enum class M2tsForceTsVideoEbpOrder
  {
    NOT_SET,
    FORCE,
    DEFAULT
  };

namespace M2tsForceTsVideoEbpOrderMapper
{
AWS_MEDIACONVERT_API M2tsForceTsVideoEbpOrder GetM2tsForceTsVideoEbpOrderForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsForceTsVideoEbpOrder(M2tsForceTsVideoEbpOrder value);
} // namespace M2tsForceTsVideoEbpOrderMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
