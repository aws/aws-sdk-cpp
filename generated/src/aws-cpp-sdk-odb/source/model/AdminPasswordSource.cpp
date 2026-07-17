/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/AdminPasswordSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace AdminPasswordSourceMapper {

static const int CUSTOMER_MANAGED_AWS_SECRET_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_AWS_SECRET");
static const int API_REQUEST_PARAMETER_HASH = HashingUtils::HashString("API_REQUEST_PARAMETER");

AdminPasswordSource GetAdminPasswordSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_MANAGED_AWS_SECRET_HASH) {
    return AdminPasswordSource::CUSTOMER_MANAGED_AWS_SECRET;
  } else if (hashCode == API_REQUEST_PARAMETER_HASH) {
    return AdminPasswordSource::API_REQUEST_PARAMETER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AdminPasswordSource>(hashCode);
  }

  return AdminPasswordSource::NOT_SET;
}

Aws::String GetNameForAdminPasswordSource(AdminPasswordSource enumValue) {
  switch (enumValue) {
    case AdminPasswordSource::NOT_SET:
      return {};
    case AdminPasswordSource::CUSTOMER_MANAGED_AWS_SECRET:
      return "CUSTOMER_MANAGED_AWS_SECRET";
    case AdminPasswordSource::API_REQUEST_PARAMETER:
      return "API_REQUEST_PARAMETER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AdminPasswordSourceMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
