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
  enum class M2tsKlvMetadata
  {
    NOT_SET,
    PASSTHROUGH,
    NONE
  };

namespace M2tsKlvMetadataMapper
{
AWS_MEDIACONVERT_API M2tsKlvMetadata GetM2tsKlvMetadataForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsKlvMetadata(M2tsKlvMetadata value);
} // namespace M2tsKlvMetadataMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
