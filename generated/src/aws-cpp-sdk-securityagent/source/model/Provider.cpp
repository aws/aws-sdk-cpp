/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/Provider.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ProviderMapper {

static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");

Provider GetProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GITHUB_HASH) {
    return Provider::GITHUB;
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
    case Provider::GITHUB:
      return "GITHUB";
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
}  // namespace SecurityAgent
}  // namespace Aws
