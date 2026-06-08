/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/taxsettings/model/CustomerType.h>

using namespace Aws::Utils;

namespace Aws {
namespace TaxSettings {
namespace Model {
namespace CustomerTypeMapper {

static const int Business_HASH = HashingUtils::HashString("Business");
static const int Individual_HASH = HashingUtils::HashString("Individual");

CustomerType GetCustomerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Business_HASH) {
    return CustomerType::Business;
  } else if (hashCode == Individual_HASH) {
    return CustomerType::Individual;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CustomerType>(hashCode);
  }

  return CustomerType::NOT_SET;
}

Aws::String GetNameForCustomerType(CustomerType enumValue) {
  switch (enumValue) {
    case CustomerType::NOT_SET:
      return {};
    case CustomerType::Business:
      return "Business";
    case CustomerType::Individual:
      return "Individual";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CustomerTypeMapper
}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
