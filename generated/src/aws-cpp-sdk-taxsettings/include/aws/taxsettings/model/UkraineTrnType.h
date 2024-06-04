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
  enum class UkraineTrnType
  {
    NOT_SET,
    Business,
    Individual
  };

namespace UkraineTrnTypeMapper
{
AWS_TAXSETTINGS_API UkraineTrnType GetUkraineTrnTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForUkraineTrnType(UkraineTrnType value);
} // namespace UkraineTrnTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
