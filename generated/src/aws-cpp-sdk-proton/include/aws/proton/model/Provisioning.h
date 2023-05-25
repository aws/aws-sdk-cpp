/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Proton
{
namespace Model
{
  enum class Provisioning
  {
    NOT_SET,
    CUSTOMER_MANAGED
  };

namespace ProvisioningMapper
{
AWS_PROTON_API Provisioning GetProvisioningForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForProvisioning(Provisioning value);
} // namespace ProvisioningMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
