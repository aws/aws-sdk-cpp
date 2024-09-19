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
  enum class CommitMode
  {
    NOT_SET,
    AUTO,
    MANUAL
  };

namespace CommitModeMapper
{
AWS_QUICKSIGHT_API CommitMode GetCommitModeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForCommitMode(CommitMode value);
} // namespace CommitModeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
