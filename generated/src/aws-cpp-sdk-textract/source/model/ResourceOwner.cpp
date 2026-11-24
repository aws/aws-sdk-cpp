/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/textract/model/ResourceOwner.h>

using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {
namespace ResourceOwnerMapper {

static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");

ResourceOwner GetResourceOwnerForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCOUNT_HASH) {
    return ResourceOwner::ACCOUNT;
  } else if (hashCode == SERVICE_HASH) {
    return ResourceOwner::SERVICE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceOwner>(hashCode);
  }

  return ResourceOwner::NOT_SET;
}

Aws::String GetNameForResourceOwner(ResourceOwner enumValue) {
  switch (enumValue) {
    case ResourceOwner::NOT_SET:
      return {};
    case ResourceOwner::ACCOUNT:
      return "ACCOUNT";
    case ResourceOwner::SERVICE:
      return "SERVICE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceOwnerMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
