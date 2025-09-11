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
  enum class QDataKeyType
  {
    NOT_SET,
    AWS_OWNED,
    CMK
  };

namespace QDataKeyTypeMapper
{
AWS_QUICKSIGHT_API QDataKeyType GetQDataKeyTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForQDataKeyType(QDataKeyType value);
} // namespace QDataKeyTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
