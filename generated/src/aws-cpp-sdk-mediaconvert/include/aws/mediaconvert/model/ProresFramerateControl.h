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
  enum class ProresFramerateControl
  {
    NOT_SET,
    INITIALIZE_FROM_SOURCE,
    SPECIFIED
  };

namespace ProresFramerateControlMapper
{
AWS_MEDIACONVERT_API ProresFramerateControl GetProresFramerateControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForProresFramerateControl(ProresFramerateControl value);
} // namespace ProresFramerateControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
