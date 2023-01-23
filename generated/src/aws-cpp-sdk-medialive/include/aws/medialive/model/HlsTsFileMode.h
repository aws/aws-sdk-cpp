/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class HlsTsFileMode
  {
    NOT_SET,
    SEGMENTED_FILES,
    SINGLE_FILE
  };

namespace HlsTsFileModeMapper
{
AWS_MEDIALIVE_API HlsTsFileMode GetHlsTsFileModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsTsFileMode(HlsTsFileMode value);
} // namespace HlsTsFileModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
