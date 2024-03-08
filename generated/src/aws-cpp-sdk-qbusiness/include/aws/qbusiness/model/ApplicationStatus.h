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
  enum class ApplicationStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    FAILED,
    UPDATING
  };

namespace ApplicationStatusMapper
{
AWS_QBUSINESS_API ApplicationStatus GetApplicationStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForApplicationStatus(ApplicationStatus value);
} // namespace ApplicationStatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
