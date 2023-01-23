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
  enum class EmbeddedConvert608To708
  {
    NOT_SET,
    UPCONVERT,
    DISABLED
  };

namespace EmbeddedConvert608To708Mapper
{
AWS_MEDIACONVERT_API EmbeddedConvert608To708 GetEmbeddedConvert608To708ForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEmbeddedConvert608To708(EmbeddedConvert608To708 value);
} // namespace EmbeddedConvert608To708Mapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
