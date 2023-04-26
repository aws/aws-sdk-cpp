/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OSIS
{
namespace Model
{
  enum class ChangeProgressStatuses
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace ChangeProgressStatusesMapper
{
AWS_OSIS_API ChangeProgressStatuses GetChangeProgressStatusesForName(const Aws::String& name);

AWS_OSIS_API Aws::String GetNameForChangeProgressStatuses(ChangeProgressStatuses value);
} // namespace ChangeProgressStatusesMapper
} // namespace Model
} // namespace OSIS
} // namespace Aws
