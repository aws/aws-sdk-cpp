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
  enum class AllowedOperators
  {
    NOT_SET,
    AND,
    OR
  };

namespace AllowedOperatorsMapper
{
AWS_SECURITYHUB_API AllowedOperators GetAllowedOperatorsForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForAllowedOperators(AllowedOperators value);
} // namespace AllowedOperatorsMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
