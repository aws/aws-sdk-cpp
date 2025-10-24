﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace MediaTailor {
namespace Model {
enum class ScheduleEntryType { NOT_SET, PROGRAM, FILLER_SLATE, ALTERNATE_MEDIA };

namespace ScheduleEntryTypeMapper {
AWS_MEDIATAILOR_API ScheduleEntryType GetScheduleEntryTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForScheduleEntryType(ScheduleEntryType value);
}  // namespace ScheduleEntryTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
