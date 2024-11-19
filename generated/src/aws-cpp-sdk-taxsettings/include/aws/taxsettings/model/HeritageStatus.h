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
  enum class HeritageStatus
  {
    NOT_SET,
    OptIn,
    OptOut
  };

namespace HeritageStatusMapper
{
AWS_TAXSETTINGS_API HeritageStatus GetHeritageStatusForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForHeritageStatus(HeritageStatus value);
} // namespace HeritageStatusMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
