/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class TestExecutionStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    RETRIABLE,
    CAUGHT_ERROR
  };

namespace TestExecutionStatusMapper
{
AWS_SFN_API TestExecutionStatus GetTestExecutionStatusForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForTestExecutionStatus(TestExecutionStatus value);
} // namespace TestExecutionStatusMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
