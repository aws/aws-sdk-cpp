/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>

namespace Aws {
namespace TaxSettings {
namespace Model {
enum class PolandTaxRegistrationNumberType { NOT_SET, EUTaxRegistrationNumber, LocalTaxRegistrationNumber, LocalRegistrationNumber };

namespace PolandTaxRegistrationNumberTypeMapper {
AWS_TAXSETTINGS_API PolandTaxRegistrationNumberType GetPolandTaxRegistrationNumberTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForPolandTaxRegistrationNumberType(PolandTaxRegistrationNumberType value);
}  // namespace PolandTaxRegistrationNumberTypeMapper
}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
