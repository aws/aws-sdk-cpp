/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/ResourceContentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace ResourceContentTypeMapper {

static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
static const int PHONE_NUMBER_HASH = HashingUtils::HashString("PHONE_NUMBER");
static const int LINK_HASH = HashingUtils::HashString("LINK");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

ResourceContentType GetResourceContentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EMAIL_HASH) {
    return ResourceContentType::EMAIL;
  } else if (hashCode == PHONE_NUMBER_HASH) {
    return ResourceContentType::PHONE_NUMBER;
  } else if (hashCode == LINK_HASH) {
    return ResourceContentType::LINK;
  } else if (hashCode == OTHER_HASH) {
    return ResourceContentType::OTHER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceContentType>(hashCode);
  }

  return ResourceContentType::NOT_SET;
}

Aws::String GetNameForResourceContentType(ResourceContentType enumValue) {
  switch (enumValue) {
    case ResourceContentType::NOT_SET:
      return {};
    case ResourceContentType::EMAIL:
      return "EMAIL";
    case ResourceContentType::PHONE_NUMBER:
      return "PHONE_NUMBER";
    case ResourceContentType::LINK:
      return "LINK";
    case ResourceContentType::OTHER:
      return "OTHER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceContentTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
