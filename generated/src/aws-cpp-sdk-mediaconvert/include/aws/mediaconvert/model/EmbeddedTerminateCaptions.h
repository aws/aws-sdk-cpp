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
  enum class EmbeddedTerminateCaptions
  {
    NOT_SET,
    END_OF_INPUT,
    DISABLED
  };

namespace EmbeddedTerminateCaptionsMapper
{
AWS_MEDIACONVERT_API EmbeddedTerminateCaptions GetEmbeddedTerminateCaptionsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEmbeddedTerminateCaptions(EmbeddedTerminateCaptions value);
} // namespace EmbeddedTerminateCaptionsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
