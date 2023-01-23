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
  enum class QualificationStatus
  {
    NOT_SET,
    Granted,
    Revoked
  };

namespace QualificationStatusMapper
{
AWS_MTURK_API QualificationStatus GetQualificationStatusForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForQualificationStatus(QualificationStatus value);
} // namespace QualificationStatusMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
