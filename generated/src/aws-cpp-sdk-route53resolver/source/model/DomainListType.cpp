/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53resolver/model/DomainListType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {
namespace DomainListTypeMapper {

static const int THREAT_HASH = HashingUtils::HashString("THREAT");
static const int CONTENT_HASH = HashingUtils::HashString("CONTENT");

DomainListType GetDomainListTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == THREAT_HASH) {
    return DomainListType::THREAT;
  } else if (hashCode == CONTENT_HASH) {
    return DomainListType::CONTENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DomainListType>(hashCode);
  }

  return DomainListType::NOT_SET;
}

Aws::String GetNameForDomainListType(DomainListType enumValue) {
  switch (enumValue) {
    case DomainListType::NOT_SET:
      return {};
    case DomainListType::THREAT:
      return "THREAT";
    case DomainListType::CONTENT:
      return "CONTENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DomainListTypeMapper
}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
