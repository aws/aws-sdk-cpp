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
  enum class Sector
  {
    NOT_SET,
    Business,
    Individual,
    Government
  };

namespace SectorMapper
{
AWS_TAXSETTINGS_API Sector GetSectorForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForSector(Sector value);
} // namespace SectorMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
