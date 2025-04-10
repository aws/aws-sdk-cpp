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
  enum class SystemMessageType
  {
    NOT_SET,
    RESPONSE,
    GROUNDED_RESPONSE
  };

namespace SystemMessageTypeMapper
{
AWS_QBUSINESS_API SystemMessageType GetSystemMessageTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForSystemMessageType(SystemMessageType value);
} // namespace SystemMessageTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
