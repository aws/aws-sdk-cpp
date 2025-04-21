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
  enum class TrafficShapingType
  {
    NOT_SET,
    RETRIEVAL_WINDOW
  };

namespace TrafficShapingTypeMapper
{
AWS_MEDIATAILOR_API TrafficShapingType GetTrafficShapingTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForTrafficShapingType(TrafficShapingType value);
} // namespace TrafficShapingTypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
