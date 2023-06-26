/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class AutoEnableStandards
  {
    NOT_SET,
    NONE,
    DEFAULT
  };

namespace AutoEnableStandardsMapper
{
AWS_SECURITYHUB_API AutoEnableStandards GetAutoEnableStandardsForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForAutoEnableStandards(AutoEnableStandards value);
} // namespace AutoEnableStandardsMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
