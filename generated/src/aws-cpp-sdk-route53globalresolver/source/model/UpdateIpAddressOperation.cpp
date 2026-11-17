/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/UpdateIpAddressOperation.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace UpdateIpAddressOperationMapper {

static const int ADD_HASH = HashingUtils::HashString("ADD");
static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");
static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");

UpdateIpAddressOperation GetUpdateIpAddressOperationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ADD_HASH) {
    return UpdateIpAddressOperation::ADD;
  } else if (hashCode == REMOVE_HASH) {
    return UpdateIpAddressOperation::REMOVE;
  } else if (hashCode == UPDATE_HASH) {
    return UpdateIpAddressOperation::UPDATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UpdateIpAddressOperation>(hashCode);
  }

  return UpdateIpAddressOperation::NOT_SET;
}

Aws::String GetNameForUpdateIpAddressOperation(UpdateIpAddressOperation enumValue) {
  switch (enumValue) {
    case UpdateIpAddressOperation::NOT_SET:
      return {};
    case UpdateIpAddressOperation::ADD:
      return "ADD";
    case UpdateIpAddressOperation::REMOVE:
      return "REMOVE";
    case UpdateIpAddressOperation::UPDATE:
      return "UPDATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UpdateIpAddressOperationMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
