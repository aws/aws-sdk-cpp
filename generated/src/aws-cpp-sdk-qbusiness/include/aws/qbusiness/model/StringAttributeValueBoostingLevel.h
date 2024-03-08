/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class StringAttributeValueBoostingLevel
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH,
    VERY_HIGH
  };

namespace StringAttributeValueBoostingLevelMapper
{
AWS_QBUSINESS_API StringAttributeValueBoostingLevel GetStringAttributeValueBoostingLevelForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForStringAttributeValueBoostingLevel(StringAttributeValueBoostingLevel value);
} // namespace StringAttributeValueBoostingLevelMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
