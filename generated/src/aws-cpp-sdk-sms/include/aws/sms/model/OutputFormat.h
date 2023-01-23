/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SMS
{
namespace Model
{
  enum class OutputFormat
  {
    NOT_SET,
    JSON,
    YAML
  };

namespace OutputFormatMapper
{
AWS_SMS_API OutputFormat GetOutputFormatForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForOutputFormat(OutputFormat value);
} // namespace OutputFormatMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
