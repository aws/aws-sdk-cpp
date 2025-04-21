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
  enum class PrefetchScheduleType
  {
    NOT_SET,
    SINGLE,
    RECURRING
  };

namespace PrefetchScheduleTypeMapper
{
AWS_MEDIATAILOR_API PrefetchScheduleType GetPrefetchScheduleTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForPrefetchScheduleType(PrefetchScheduleType value);
} // namespace PrefetchScheduleTypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
