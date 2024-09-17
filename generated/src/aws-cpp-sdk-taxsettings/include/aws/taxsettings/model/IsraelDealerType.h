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
  enum class IsraelDealerType
  {
    NOT_SET,
    Authorized,
    Non_authorized
  };

namespace IsraelDealerTypeMapper
{
AWS_TAXSETTINGS_API IsraelDealerType GetIsraelDealerTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForIsraelDealerType(IsraelDealerType value);
} // namespace IsraelDealerTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
