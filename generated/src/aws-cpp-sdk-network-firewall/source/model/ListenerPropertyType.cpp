/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/ListenerPropertyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace ListenerPropertyTypeMapper {

static const int HTTP_HASH = HashingUtils::HashString("HTTP");
static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");

ListenerPropertyType GetListenerPropertyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HTTP_HASH) {
    return ListenerPropertyType::HTTP;
  } else if (hashCode == HTTPS_HASH) {
    return ListenerPropertyType::HTTPS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListenerPropertyType>(hashCode);
  }

  return ListenerPropertyType::NOT_SET;
}

Aws::String GetNameForListenerPropertyType(ListenerPropertyType enumValue) {
  switch (enumValue) {
    case ListenerPropertyType::NOT_SET:
      return {};
    case ListenerPropertyType::HTTP:
      return "HTTP";
    case ListenerPropertyType::HTTPS:
      return "HTTPS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListenerPropertyTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
