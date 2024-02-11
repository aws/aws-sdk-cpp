/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class GroupStatus
  {
    NOT_SET,
    FAILED,
    SUCCEEDED,
    PROCESSING,
    DELETING,
    DELETED
  };

namespace GroupStatusMapper
{
AWS_QBUSINESS_API GroupStatus GetGroupStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForGroupStatus(GroupStatus value);
} // namespace GroupStatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
