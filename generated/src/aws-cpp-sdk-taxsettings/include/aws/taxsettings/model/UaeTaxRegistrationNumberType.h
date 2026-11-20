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
enum class UaeTaxRegistrationNumberType { NOT_SET, VATTaxRegistrationNumber, LocalTaxRegistrationNumber };

namespace UaeTaxRegistrationNumberTypeMapper {
AWS_TAXSETTINGS_API UaeTaxRegistrationNumberType GetUaeTaxRegistrationNumberTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForUaeTaxRegistrationNumberType(UaeTaxRegistrationNumberType value);
}  // namespace UaeTaxRegistrationNumberTypeMapper
}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
