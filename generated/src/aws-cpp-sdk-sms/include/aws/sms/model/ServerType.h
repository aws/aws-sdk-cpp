/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SMS
{
namespace Model
{
  enum class ServerType
  {
    NOT_SET,
    VIRTUAL_MACHINE
  };

namespace ServerTypeMapper
{
AWS_SMS_API ServerType GetServerTypeForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForServerType(ServerType value);
} // namespace ServerTypeMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
