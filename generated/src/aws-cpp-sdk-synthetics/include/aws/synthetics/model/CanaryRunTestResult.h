/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class CanaryRunTestResult
  {
    NOT_SET,
    PASSED,
    FAILED,
    UNKNOWN
  };

namespace CanaryRunTestResultMapper
{
AWS_SYNTHETICS_API CanaryRunTestResult GetCanaryRunTestResultForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForCanaryRunTestResult(CanaryRunTestResult value);
} // namespace CanaryRunTestResultMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
