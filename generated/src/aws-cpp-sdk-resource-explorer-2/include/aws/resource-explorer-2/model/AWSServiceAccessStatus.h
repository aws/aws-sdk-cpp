/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{
  enum class AWSServiceAccessStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AWSServiceAccessStatusMapper
{
AWS_RESOURCEEXPLORER2_API AWSServiceAccessStatus GetAWSServiceAccessStatusForName(const Aws::String& name);

AWS_RESOURCEEXPLORER2_API Aws::String GetNameForAWSServiceAccessStatus(AWSServiceAccessStatus value);
} // namespace AWSServiceAccessStatusMapper
} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
