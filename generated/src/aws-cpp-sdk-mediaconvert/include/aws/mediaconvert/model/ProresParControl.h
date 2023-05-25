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
  enum class ProresParControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace ProresParControlMapper
{
AWS_MEDIACONVERT_API ProresParControl GetProresParControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForProresParControl(ProresParControl value);
} // namespace ProresParControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
