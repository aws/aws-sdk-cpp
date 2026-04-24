/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mailmanager/model/TlsPolicy.h>

using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {
namespace TlsPolicyMapper {

static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");
static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");
static const int FIPS_HASH = HashingUtils::HashString("FIPS");

TlsPolicy GetTlsPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUIRED_HASH) {
    return TlsPolicy::REQUIRED;
  } else if (hashCode == OPTIONAL_HASH) {
    return TlsPolicy::OPTIONAL;
  } else if (hashCode == FIPS_HASH) {
    return TlsPolicy::FIPS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TlsPolicy>(hashCode);
  }

  return TlsPolicy::NOT_SET;
}

Aws::String GetNameForTlsPolicy(TlsPolicy enumValue) {
  switch (enumValue) {
    case TlsPolicy::NOT_SET:
      return {};
    case TlsPolicy::REQUIRED:
      return "REQUIRED";
    case TlsPolicy::OPTIONAL:
      return "OPTIONAL";
    case TlsPolicy::FIPS:
      return "FIPS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TlsPolicyMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
