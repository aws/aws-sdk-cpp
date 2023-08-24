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
  enum class SharingModel
  {
    NOT_SET,
    ACCOUNT,
    NAMESPACE
  };

namespace SharingModelMapper
{
AWS_QUICKSIGHT_API SharingModel GetSharingModelForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSharingModel(SharingModel value);
} // namespace SharingModelMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
