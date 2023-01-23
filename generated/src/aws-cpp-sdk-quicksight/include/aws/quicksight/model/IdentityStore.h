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
  enum class IdentityStore
  {
    NOT_SET,
    QUICKSIGHT
  };

namespace IdentityStoreMapper
{
AWS_QUICKSIGHT_API IdentityStore GetIdentityStoreForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIdentityStore(IdentityStore value);
} // namespace IdentityStoreMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
