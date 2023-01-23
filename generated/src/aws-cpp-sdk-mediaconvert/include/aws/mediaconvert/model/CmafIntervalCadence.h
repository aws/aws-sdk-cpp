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
  enum class CmafIntervalCadence
  {
    NOT_SET,
    FOLLOW_IFRAME,
    FOLLOW_CUSTOM
  };

namespace CmafIntervalCadenceMapper
{
AWS_MEDIACONVERT_API CmafIntervalCadence GetCmafIntervalCadenceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafIntervalCadence(CmafIntervalCadence value);
} // namespace CmafIntervalCadenceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
