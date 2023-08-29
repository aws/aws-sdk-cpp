/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class ExportSourceType
  {
    NOT_SET,
    METRICS_DATA,
    MESSAGE_INSIGHTS
  };

namespace ExportSourceTypeMapper
{
AWS_SESV2_API ExportSourceType GetExportSourceTypeForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForExportSourceType(ExportSourceType value);
} // namespace ExportSourceTypeMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
