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
  enum class AssetState
  {
    NOT_SET,
    ACTIVE,
    RETIRING
  };

namespace AssetStateMapper
{
AWS_OUTPOSTS_API AssetState GetAssetStateForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForAssetState(AssetState value);
} // namespace AssetStateMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
