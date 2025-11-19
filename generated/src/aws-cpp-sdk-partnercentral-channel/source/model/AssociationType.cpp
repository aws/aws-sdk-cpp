/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/AssociationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace AssociationTypeMapper {

static const int DOWNSTREAM_SELLER_HASH = HashingUtils::HashString("DOWNSTREAM_SELLER");
static const int END_CUSTOMER_HASH = HashingUtils::HashString("END_CUSTOMER");
static const int INTERNAL_HASH = HashingUtils::HashString("INTERNAL");

AssociationType GetAssociationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DOWNSTREAM_SELLER_HASH) {
    return AssociationType::DOWNSTREAM_SELLER;
  } else if (hashCode == END_CUSTOMER_HASH) {
    return AssociationType::END_CUSTOMER;
  } else if (hashCode == INTERNAL_HASH) {
    return AssociationType::INTERNAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssociationType>(hashCode);
  }

  return AssociationType::NOT_SET;
}

Aws::String GetNameForAssociationType(AssociationType enumValue) {
  switch (enumValue) {
    case AssociationType::NOT_SET:
      return {};
    case AssociationType::DOWNSTREAM_SELLER:
      return "DOWNSTREAM_SELLER";
    case AssociationType::END_CUSTOMER:
      return "END_CUSTOMER";
    case AssociationType::INTERNAL:
      return "INTERNAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssociationTypeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
