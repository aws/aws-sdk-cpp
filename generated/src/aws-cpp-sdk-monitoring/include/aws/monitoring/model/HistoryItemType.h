/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
  enum class HistoryItemType
  {
    NOT_SET,
    ConfigurationUpdate,
    StateUpdate,
    Action
  };

namespace HistoryItemTypeMapper
{
AWS_CLOUDWATCH_API HistoryItemType GetHistoryItemTypeForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForHistoryItemType(HistoryItemType value);
} // namespace HistoryItemTypeMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
