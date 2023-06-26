/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class AssetType
  {
    NOT_SET,
    COMPUTE
  };

namespace AssetTypeMapper
{
AWS_OUTPOSTS_API AssetType GetAssetTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForAssetType(AssetType value);
} // namespace AssetTypeMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
