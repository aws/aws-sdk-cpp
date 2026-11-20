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
enum class NorwayTaxRegistrationNumberType { NOT_SET, TaxRegistrationNumber, LocalRegistrationNumber };

namespace NorwayTaxRegistrationNumberTypeMapper {
AWS_TAXSETTINGS_API NorwayTaxRegistrationNumberType GetNorwayTaxRegistrationNumberTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForNorwayTaxRegistrationNumberType(NorwayTaxRegistrationNumberType value);
}  // namespace NorwayTaxRegistrationNumberTypeMapper
}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
