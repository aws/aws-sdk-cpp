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
  enum class LicenseType
  {
    NOT_SET,
    AWS,
    BYOL
  };

namespace LicenseTypeMapper
{
AWS_SMS_API LicenseType GetLicenseTypeForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForLicenseType(LicenseType value);
} // namespace LicenseTypeMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
