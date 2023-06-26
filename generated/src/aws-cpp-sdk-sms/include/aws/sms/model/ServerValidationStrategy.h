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
  enum class ServerValidationStrategy
  {
    NOT_SET,
    USERDATA
  };

namespace ServerValidationStrategyMapper
{
AWS_SMS_API ServerValidationStrategy GetServerValidationStrategyForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForServerValidationStrategy(ServerValidationStrategy value);
} // namespace ServerValidationStrategyMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
