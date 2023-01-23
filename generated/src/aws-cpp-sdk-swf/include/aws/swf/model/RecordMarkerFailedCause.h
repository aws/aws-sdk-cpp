/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class RecordMarkerFailedCause
  {
    NOT_SET,
    OPERATION_NOT_PERMITTED
  };

namespace RecordMarkerFailedCauseMapper
{
AWS_SWF_API RecordMarkerFailedCause GetRecordMarkerFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForRecordMarkerFailedCause(RecordMarkerFailedCause value);
} // namespace RecordMarkerFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
