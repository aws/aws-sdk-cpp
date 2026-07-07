/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/CloudProviderName.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace CloudProviderNameMapper {

static const int Azure_HASH = HashingUtils::HashString("Azure");
static const int AWS_HASH = HashingUtils::HashString("AWS");

CloudProviderName GetCloudProviderNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Azure_HASH) {
    return CloudProviderName::Azure;
  } else if (hashCode == AWS_HASH) {
    return CloudProviderName::AWS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CloudProviderName>(hashCode);
  }

  return CloudProviderName::NOT_SET;
}

Aws::String GetNameForCloudProviderName(CloudProviderName enumValue) {
  switch (enumValue) {
    case CloudProviderName::NOT_SET:
      return {};
    case CloudProviderName::Azure:
      return "Azure";
    case CloudProviderName::AWS:
      return "AWS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CloudProviderNameMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
