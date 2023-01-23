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
  enum class CustomContentType
  {
    NOT_SET,
    IMAGE,
    OTHER_EMBEDDED_CONTENT
  };

namespace CustomContentTypeMapper
{
AWS_QUICKSIGHT_API CustomContentType GetCustomContentTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForCustomContentType(CustomContentType value);
} // namespace CustomContentTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
