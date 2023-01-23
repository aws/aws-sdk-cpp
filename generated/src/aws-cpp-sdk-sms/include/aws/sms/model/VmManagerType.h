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
  enum class VmManagerType
  {
    NOT_SET,
    VSPHERE,
    SCVMM,
    HYPERV_MANAGER
  };

namespace VmManagerTypeMapper
{
AWS_SMS_API VmManagerType GetVmManagerTypeForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForVmManagerType(VmManagerType value);
} // namespace VmManagerTypeMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
