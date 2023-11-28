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
  enum class DataSourceStatus
  {
    NOT_SET,
    PENDING_CREATION,
    CREATING,
    ACTIVE,
    DELETING,
    FAILED,
    UPDATING
  };

namespace DataSourceStatusMapper
{
AWS_QBUSINESS_API DataSourceStatus GetDataSourceStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForDataSourceStatus(DataSourceStatus value);
} // namespace DataSourceStatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
