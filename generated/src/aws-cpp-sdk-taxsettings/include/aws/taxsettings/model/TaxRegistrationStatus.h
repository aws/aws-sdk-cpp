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
  enum class TaxRegistrationStatus
  {
    NOT_SET,
    Verified,
    Pending,
    Deleted,
    Rejected
  };

namespace TaxRegistrationStatusMapper
{
AWS_TAXSETTINGS_API TaxRegistrationStatus GetTaxRegistrationStatusForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForTaxRegistrationStatus(TaxRegistrationStatus value);
} // namespace TaxRegistrationStatusMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
