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
enum class CustomerType { NOT_SET, Business, Individual };

namespace CustomerTypeMapper {
AWS_TAXSETTINGS_API CustomerType GetCustomerTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForCustomerType(CustomerType value);
}  // namespace CustomerTypeMapper
}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
