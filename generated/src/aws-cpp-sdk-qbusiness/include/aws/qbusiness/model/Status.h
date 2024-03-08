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
  enum class Status
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace StatusMapper
{
AWS_QBUSINESS_API Status GetStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
