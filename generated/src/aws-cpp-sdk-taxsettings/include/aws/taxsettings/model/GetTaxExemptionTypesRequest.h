﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/TaxSettingsRequest.h>

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

  /**
   */
  class GetTaxExemptionTypesRequest : public TaxSettingsRequest
  {
  public:
    AWS_TAXSETTINGS_API GetTaxExemptionTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTaxExemptionTypes"; }

    AWS_TAXSETTINGS_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
