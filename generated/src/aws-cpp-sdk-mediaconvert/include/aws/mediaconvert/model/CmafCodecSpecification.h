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
  enum class CmafCodecSpecification
  {
    NOT_SET,
    RFC_6381,
    RFC_4281
  };

namespace CmafCodecSpecificationMapper
{
AWS_MEDIACONVERT_API CmafCodecSpecification GetCmafCodecSpecificationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafCodecSpecification(CmafCodecSpecification value);
} // namespace CmafCodecSpecificationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
