/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PI
{
namespace Model
{
  enum class AnalysisStatus
  {
    NOT_SET,
    RUNNING,
    SUCCEEDED,
    FAILED
  };

namespace AnalysisStatusMapper
{
AWS_PI_API AnalysisStatus GetAnalysisStatusForName(const Aws::String& name);

AWS_PI_API Aws::String GetNameForAnalysisStatus(AnalysisStatus value);
} // namespace AnalysisStatusMapper
} // namespace Model
} // namespace PI
} // namespace Aws
