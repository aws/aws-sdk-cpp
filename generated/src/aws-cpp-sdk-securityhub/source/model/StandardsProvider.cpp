/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/StandardsProvider.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace StandardsProviderMapper {

static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int Azure_HASH = HashingUtils::HashString("Azure");

StandardsProvider GetStandardsProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_HASH) {
    return StandardsProvider::AWS;
  } else if (hashCode == Azure_HASH) {
    return StandardsProvider::Azure;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StandardsProvider>(hashCode);
  }

  return StandardsProvider::NOT_SET;
}

Aws::String GetNameForStandardsProvider(StandardsProvider enumValue) {
  switch (enumValue) {
    case StandardsProvider::NOT_SET:
      return {};
    case StandardsProvider::AWS:
      return "AWS";
    case StandardsProvider::Azure:
      return "Azure";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StandardsProviderMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
