/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class ApplicationProgressStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    COMPLETED
  };

namespace ApplicationProgressStatusMapper
{
AWS_MGN_API ApplicationProgressStatus GetApplicationProgressStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForApplicationProgressStatus(ApplicationProgressStatus value);
} // namespace ApplicationProgressStatusMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
