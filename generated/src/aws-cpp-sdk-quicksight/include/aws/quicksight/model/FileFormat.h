/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class FileFormat
  {
    NOT_SET,
    CSV,
    TSV,
    CLF,
    ELF,
    XLSX,
    JSON
  };

namespace FileFormatMapper
{
AWS_QUICKSIGHT_API FileFormat GetFileFormatForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFileFormat(FileFormat value);
} // namespace FileFormatMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
