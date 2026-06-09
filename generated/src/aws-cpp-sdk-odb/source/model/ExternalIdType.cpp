/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/ExternalIdType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace ExternalIdTypeMapper {

static const int database_ocid_HASH = HashingUtils::HashString("database_ocid");
static const int compartment_ocid_HASH = HashingUtils::HashString("compartment_ocid");
static const int tenant_ocid_HASH = HashingUtils::HashString("tenant_ocid");

ExternalIdType GetExternalIdTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == database_ocid_HASH) {
    return ExternalIdType::database_ocid;
  } else if (hashCode == compartment_ocid_HASH) {
    return ExternalIdType::compartment_ocid;
  } else if (hashCode == tenant_ocid_HASH) {
    return ExternalIdType::tenant_ocid;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExternalIdType>(hashCode);
  }

  return ExternalIdType::NOT_SET;
}

Aws::String GetNameForExternalIdType(ExternalIdType enumValue) {
  switch (enumValue) {
    case ExternalIdType::NOT_SET:
      return {};
    case ExternalIdType::database_ocid:
      return "database_ocid";
    case ExternalIdType::compartment_ocid:
      return "compartment_ocid";
    case ExternalIdType::tenant_ocid:
      return "tenant_ocid";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExternalIdTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
