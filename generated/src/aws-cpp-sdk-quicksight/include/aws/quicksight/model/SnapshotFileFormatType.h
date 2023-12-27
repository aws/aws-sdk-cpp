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
  enum class SnapshotFileFormatType
  {
    NOT_SET,
    CSV,
    PDF,
    EXCEL
  };

namespace SnapshotFileFormatTypeMapper
{
AWS_QUICKSIGHT_API SnapshotFileFormatType GetSnapshotFileFormatTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSnapshotFileFormatType(SnapshotFileFormatType value);
} // namespace SnapshotFileFormatTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
