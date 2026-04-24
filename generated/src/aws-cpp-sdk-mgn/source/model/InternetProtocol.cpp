/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/InternetProtocol.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace InternetProtocolMapper {

static const int IPV4_HASH = HashingUtils::HashString("IPV4");
static const int IPV6_HASH = HashingUtils::HashString("IPV6");

InternetProtocol GetInternetProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IPV4_HASH) {
    return InternetProtocol::IPV4;
  } else if (hashCode == IPV6_HASH) {
    return InternetProtocol::IPV6;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InternetProtocol>(hashCode);
  }

  return InternetProtocol::NOT_SET;
}

Aws::String GetNameForInternetProtocol(InternetProtocol enumValue) {
  switch (enumValue) {
    case InternetProtocol::NOT_SET:
      return {};
    case InternetProtocol::IPV4:
      return "IPV4";
    case InternetProtocol::IPV6:
      return "IPV6";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InternetProtocolMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
