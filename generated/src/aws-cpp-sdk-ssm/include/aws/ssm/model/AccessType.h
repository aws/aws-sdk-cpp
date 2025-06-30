/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class AccessType
  {
    NOT_SET,
    Standard,
    JustInTime
  };

namespace AccessTypeMapper
{
AWS_SSM_API AccessType GetAccessTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAccessType(AccessType value);
} // namespace AccessTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
