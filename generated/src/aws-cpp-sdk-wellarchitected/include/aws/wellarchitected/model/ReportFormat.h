/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class ReportFormat
  {
    NOT_SET,
    PDF,
    JSON
  };

namespace ReportFormatMapper
{
AWS_WELLARCHITECTED_API ReportFormat GetReportFormatForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForReportFormat(ReportFormat value);
} // namespace ReportFormatMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
