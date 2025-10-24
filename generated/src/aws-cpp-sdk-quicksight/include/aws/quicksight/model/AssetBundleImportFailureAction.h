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
enum class AssetBundleImportFailureAction { NOT_SET, DO_NOTHING, ROLLBACK };

namespace AssetBundleImportFailureActionMapper {
AWS_QUICKSIGHT_API AssetBundleImportFailureAction GetAssetBundleImportFailureActionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetBundleImportFailureAction(AssetBundleImportFailureAction value);
}  // namespace AssetBundleImportFailureActionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
