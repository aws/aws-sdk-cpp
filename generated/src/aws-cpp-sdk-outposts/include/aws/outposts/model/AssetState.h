/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class AssetState { NOT_SET, ACTIVE, RETIRING, ISOLATED };

namespace AssetStateMapper {
AWS_OUTPOSTS_API AssetState GetAssetStateForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForAssetState(AssetState value);
}  // namespace AssetStateMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
