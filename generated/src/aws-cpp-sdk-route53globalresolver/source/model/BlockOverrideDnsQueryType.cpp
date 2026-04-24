/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/BlockOverrideDnsQueryType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace BlockOverrideDnsQueryTypeMapper {

static const int CNAME_HASH = HashingUtils::HashString("CNAME");

BlockOverrideDnsQueryType GetBlockOverrideDnsQueryTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CNAME_HASH) {
    return BlockOverrideDnsQueryType::CNAME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BlockOverrideDnsQueryType>(hashCode);
  }

  return BlockOverrideDnsQueryType::NOT_SET;
}

Aws::String GetNameForBlockOverrideDnsQueryType(BlockOverrideDnsQueryType enumValue) {
  switch (enumValue) {
    case BlockOverrideDnsQueryType::NOT_SET:
      return {};
    case BlockOverrideDnsQueryType::CNAME:
      return "CNAME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BlockOverrideDnsQueryTypeMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
