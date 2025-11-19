/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/Provider.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ProviderMapper {

static const int DISTRIBUTOR_HASH = HashingUtils::HashString("DISTRIBUTOR");
static const int DISTRIBUTION_SELLER_HASH = HashingUtils::HashString("DISTRIBUTION_SELLER");

Provider GetProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISTRIBUTOR_HASH) {
    return Provider::DISTRIBUTOR;
  } else if (hashCode == DISTRIBUTION_SELLER_HASH) {
    return Provider::DISTRIBUTION_SELLER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Provider>(hashCode);
  }

  return Provider::NOT_SET;
}

Aws::String GetNameForProvider(Provider enumValue) {
  switch (enumValue) {
    case Provider::NOT_SET:
      return {};
    case Provider::DISTRIBUTOR:
      return "DISTRIBUTOR";
    case Provider::DISTRIBUTION_SELLER:
      return "DISTRIBUTION_SELLER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProviderMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
