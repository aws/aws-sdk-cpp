/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift-serverless/model/LakehouseRegistration.h>

using namespace Aws::Utils;

namespace Aws {
namespace RedshiftServerless {
namespace Model {
namespace LakehouseRegistrationMapper {

static const int Register_HASH = HashingUtils::HashString("Register");
static const int Deregister_HASH = HashingUtils::HashString("Deregister");

LakehouseRegistration GetLakehouseRegistrationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Register_HASH) {
    return LakehouseRegistration::Register;
  } else if (hashCode == Deregister_HASH) {
    return LakehouseRegistration::Deregister;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LakehouseRegistration>(hashCode);
  }

  return LakehouseRegistration::NOT_SET;
}

Aws::String GetNameForLakehouseRegistration(LakehouseRegistration enumValue) {
  switch (enumValue) {
    case LakehouseRegistration::NOT_SET:
      return {};
    case LakehouseRegistration::Register:
      return "Register";
    case LakehouseRegistration::Deregister:
      return "Deregister";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LakehouseRegistrationMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
