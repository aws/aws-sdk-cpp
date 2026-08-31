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
enum class SearchAppsFilterName {
  NOT_SET,
  APP_ID,
  APP_NAME,
  DIRECT_QUICKSIGHT_SOLE_OWNER,
  DIRECT_QUICKSIGHT_OWNER,
  DIRECT_QUICKSIGHT_VIEWER_OR_OWNER
};

namespace SearchAppsFilterNameMapper {
AWS_QUICKSIGHT_API SearchAppsFilterName GetSearchAppsFilterNameForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSearchAppsFilterName(SearchAppsFilterName value);
}  // namespace SearchAppsFilterNameMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
