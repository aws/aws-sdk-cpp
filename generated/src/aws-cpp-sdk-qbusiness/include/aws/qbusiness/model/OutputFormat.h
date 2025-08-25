/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class OutputFormat
  {
    NOT_SET,
    RAW,
    EXTRACTED
  };

namespace OutputFormatMapper
{
AWS_QBUSINESS_API OutputFormat GetOutputFormatForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForOutputFormat(OutputFormat value);
} // namespace OutputFormatMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
