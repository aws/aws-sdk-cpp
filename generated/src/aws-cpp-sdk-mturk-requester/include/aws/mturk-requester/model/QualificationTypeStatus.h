/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{
  enum class QualificationTypeStatus
  {
    NOT_SET,
    Active,
    Inactive
  };

namespace QualificationTypeStatusMapper
{
AWS_MTURK_API QualificationTypeStatus GetQualificationTypeStatusForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForQualificationTypeStatus(QualificationTypeStatus value);
} // namespace QualificationTypeStatusMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
