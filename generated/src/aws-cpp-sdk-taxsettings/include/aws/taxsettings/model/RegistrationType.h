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
  enum class RegistrationType
  {
    NOT_SET,
    Intra_EU,
    Local
  };

namespace RegistrationTypeMapper
{
AWS_TAXSETTINGS_API RegistrationType GetRegistrationTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForRegistrationType(RegistrationType value);
} // namespace RegistrationTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
