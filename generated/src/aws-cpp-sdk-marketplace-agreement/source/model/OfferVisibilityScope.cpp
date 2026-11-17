/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/OfferVisibilityScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace OfferVisibilityScopeMapper {

static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");

OfferVisibilityScope GetOfferVisibilityScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC__HASH) {
    return OfferVisibilityScope::PUBLIC_;
  } else if (hashCode == PRIVATE__HASH) {
    return OfferVisibilityScope::PRIVATE_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OfferVisibilityScope>(hashCode);
  }

  return OfferVisibilityScope::NOT_SET;
}

Aws::String GetNameForOfferVisibilityScope(OfferVisibilityScope enumValue) {
  switch (enumValue) {
    case OfferVisibilityScope::NOT_SET:
      return {};
    case OfferVisibilityScope::PUBLIC_:
      return "PUBLIC";
    case OfferVisibilityScope::PRIVATE_:
      return "PRIVATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OfferVisibilityScopeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
