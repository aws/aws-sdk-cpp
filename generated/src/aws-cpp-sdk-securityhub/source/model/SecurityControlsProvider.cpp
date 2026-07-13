/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/SecurityControlsProvider.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace SecurityControlsProviderMapper {

static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int Azure_HASH = HashingUtils::HashString("Azure");

SecurityControlsProvider GetSecurityControlsProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_HASH) {
    return SecurityControlsProvider::AWS;
  } else if (hashCode == Azure_HASH) {
    return SecurityControlsProvider::Azure;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecurityControlsProvider>(hashCode);
  }

  return SecurityControlsProvider::NOT_SET;
}

Aws::String GetNameForSecurityControlsProvider(SecurityControlsProvider enumValue) {
  switch (enumValue) {
    case SecurityControlsProvider::NOT_SET:
      return {};
    case SecurityControlsProvider::AWS:
      return "AWS";
    case SecurityControlsProvider::Azure:
      return "Azure";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecurityControlsProviderMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
