/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TrustedAdvisor
{
namespace Model
{
  enum class ExclusionStatus
  {
    NOT_SET,
    excluded,
    included
  };

namespace ExclusionStatusMapper
{
AWS_TRUSTEDADVISOR_API ExclusionStatus GetExclusionStatusForName(const Aws::String& name);

AWS_TRUSTEDADVISOR_API Aws::String GetNameForExclusionStatus(ExclusionStatus value);
} // namespace ExclusionStatusMapper
} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
