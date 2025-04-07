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
  enum class SdiSourceType
  {
    NOT_SET,
    SINGLE,
    QUAD
  };

namespace SdiSourceTypeMapper
{
AWS_MEDIALIVE_API SdiSourceType GetSdiSourceTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSdiSourceType(SdiSourceType value);
} // namespace SdiSourceTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
