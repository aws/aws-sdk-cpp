/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift-serverless/model/LakehouseIdcRegistration.h>

using namespace Aws::Utils;

namespace Aws {
namespace RedshiftServerless {
namespace Model {
namespace LakehouseIdcRegistrationMapper {

static const int Associate_HASH = HashingUtils::HashString("Associate");
static const int Disassociate_HASH = HashingUtils::HashString("Disassociate");

LakehouseIdcRegistration GetLakehouseIdcRegistrationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Associate_HASH) {
    return LakehouseIdcRegistration::Associate;
  } else if (hashCode == Disassociate_HASH) {
    return LakehouseIdcRegistration::Disassociate;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LakehouseIdcRegistration>(hashCode);
  }

  return LakehouseIdcRegistration::NOT_SET;
}

Aws::String GetNameForLakehouseIdcRegistration(LakehouseIdcRegistration enumValue) {
  switch (enumValue) {
    case LakehouseIdcRegistration::NOT_SET:
      return {};
    case LakehouseIdcRegistration::Associate:
      return "Associate";
    case LakehouseIdcRegistration::Disassociate:
      return "Disassociate";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LakehouseIdcRegistrationMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
