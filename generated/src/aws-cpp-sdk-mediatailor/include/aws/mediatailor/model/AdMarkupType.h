/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class AdMarkupType
  {
    NOT_SET,
    DATERANGE,
    SCTE35_ENHANCED
  };

namespace AdMarkupTypeMapper
{
AWS_MEDIATAILOR_API AdMarkupType GetAdMarkupTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForAdMarkupType(AdMarkupType value);
} // namespace AdMarkupTypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
