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
  enum class SelectAllValueOptions
  {
    NOT_SET,
    ALL_VALUES
  };

namespace SelectAllValueOptionsMapper
{
AWS_QUICKSIGHT_API SelectAllValueOptions GetSelectAllValueOptionsForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSelectAllValueOptions(SelectAllValueOptions value);
} // namespace SelectAllValueOptionsMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
