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
  enum class PersonType
  {
    NOT_SET,
    Legal_Person,
    Physical_Person,
    Business
  };

namespace PersonTypeMapper
{
AWS_TAXSETTINGS_API PersonType GetPersonTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForPersonType(PersonType value);
} // namespace PersonTypeMapper
} // namespace Model
} // namespace TaxSettings
} // namespace Aws
