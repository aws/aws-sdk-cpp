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
  enum class MsSmoothH265PackagingType
  {
    NOT_SET,
    HEV1,
    HVC1
  };

namespace MsSmoothH265PackagingTypeMapper
{
AWS_MEDIALIVE_API MsSmoothH265PackagingType GetMsSmoothH265PackagingTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMsSmoothH265PackagingType(MsSmoothH265PackagingType value);
} // namespace MsSmoothH265PackagingTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
