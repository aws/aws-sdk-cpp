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
  enum class HlsDirectoryStructure
  {
    NOT_SET,
    SINGLE_DIRECTORY,
    SUBDIRECTORY_PER_STREAM
  };

namespace HlsDirectoryStructureMapper
{
AWS_MEDIACONVERT_API HlsDirectoryStructure GetHlsDirectoryStructureForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsDirectoryStructure(HlsDirectoryStructure value);
} // namespace HlsDirectoryStructureMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
