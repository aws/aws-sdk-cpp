/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{
  enum class ShiftType
  {
    NOT_SET,
    REGULAR,
    OVERRIDDEN
  };

namespace ShiftTypeMapper
{
AWS_SSMCONTACTS_API ShiftType GetShiftTypeForName(const Aws::String& name);

AWS_SSMCONTACTS_API Aws::String GetNameForShiftType(ShiftType value);
} // namespace ShiftTypeMapper
} // namespace Model
} // namespace SSMContacts
} // namespace Aws
