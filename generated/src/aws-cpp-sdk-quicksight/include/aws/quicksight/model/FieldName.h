/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class FieldName {
  NOT_SET,
  assetName,
  assetDescription,
  DIRECT_QUICKSIGHT_OWNER,
  DIRECT_QUICKSIGHT_VIEWER_OR_OWNER,
  DIRECT_QUICKSIGHT_SOLE_OWNER
};

namespace FieldNameMapper {
AWS_QUICKSIGHT_API FieldName GetFieldNameForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFieldName(FieldName value);
}  // namespace FieldNameMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
