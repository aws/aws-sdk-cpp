/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TaxSettings
{
namespace Model
{
  enum class EntityExemptionAccountStatus
  {
    NOT_SET,
    None,
    Valid,
    Expired,
    Pending
  };

namespace EntityExemptionAccountStatusMapper
{
AWS_TAXSETTINGS_API EntityExemptionAccountStatus GetEntityExemptionAccountStatusForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForEntityExemptionAccountStatus(EntityExemptionAccountStatus value);
} // namespace EntityExemptionAccountStatusMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
