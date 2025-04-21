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
  enum class ListPrefetchScheduleType
  {
    NOT_SET,
    SINGLE,
    RECURRING,
    ALL
  };

namespace ListPrefetchScheduleTypeMapper
{
AWS_MEDIATAILOR_API ListPrefetchScheduleType GetListPrefetchScheduleTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForListPrefetchScheduleType(ListPrefetchScheduleType value);
} // namespace ListPrefetchScheduleTypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
