/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class CheckFailureReason
  {
    NOT_SET,
    ASSUME_ROLE_ERROR,
    ACCESS_DENIED,
    UNKNOWN_ERROR,
    PREMIUM_SUPPORT_REQUIRED
  };

namespace CheckFailureReasonMapper
{
AWS_WELLARCHITECTED_API CheckFailureReason GetCheckFailureReasonForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForCheckFailureReason(CheckFailureReason value);
} // namespace CheckFailureReasonMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
