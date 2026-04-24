/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mailmanager/model/TrustStoreResponseOption.h>

using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {
namespace TrustStoreResponseOptionMapper {

static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");
static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");

TrustStoreResponseOption GetTrustStoreResponseOptionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXCLUDE_HASH) {
    return TrustStoreResponseOption::EXCLUDE;
  } else if (hashCode == INCLUDE_HASH) {
    return TrustStoreResponseOption::INCLUDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrustStoreResponseOption>(hashCode);
  }

  return TrustStoreResponseOption::NOT_SET;
}

Aws::String GetNameForTrustStoreResponseOption(TrustStoreResponseOption enumValue) {
  switch (enumValue) {
    case TrustStoreResponseOption::NOT_SET:
      return {};
    case TrustStoreResponseOption::EXCLUDE:
      return "EXCLUDE";
    case TrustStoreResponseOption::INCLUDE:
      return "INCLUDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrustStoreResponseOptionMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
