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
enum class AssetType { NOT_SET, AGENT, SPACE, KNOWLEDGE_BASE };

namespace AssetTypeMapper {
AWS_QUICKSIGHT_API AssetType GetAssetTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAssetType(AssetType value);
}  // namespace AssetTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
