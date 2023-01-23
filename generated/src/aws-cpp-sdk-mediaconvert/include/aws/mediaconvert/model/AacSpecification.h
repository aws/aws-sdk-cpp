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
  enum class AacSpecification
  {
    NOT_SET,
    MPEG2,
    MPEG4
  };

namespace AacSpecificationMapper
{
AWS_MEDIACONVERT_API AacSpecification GetAacSpecificationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAacSpecification(AacSpecification value);
} // namespace AacSpecificationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
