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
  enum class ChangeProgressStageStatuses
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace ChangeProgressStageStatusesMapper
{
AWS_OSIS_API ChangeProgressStageStatuses GetChangeProgressStageStatusesForName(const Aws::String& name);

AWS_OSIS_API Aws::String GetNameForChangeProgressStageStatuses(ChangeProgressStageStatuses value);
} // namespace ChangeProgressStageStatusesMapper
} // namespace Model
} // namespace OSIS
} // namespace Aws
