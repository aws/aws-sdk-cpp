/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm/model/CloudProvider.h>

using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {
namespace CloudProviderMapper {

static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int Azure_HASH = HashingUtils::HashString("Azure");
static const int GCP_HASH = HashingUtils::HashString("GCP");

CloudProvider GetCloudProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_HASH) {
    return CloudProvider::AWS;
  } else if (hashCode == Azure_HASH) {
    return CloudProvider::Azure;
  } else if (hashCode == GCP_HASH) {
    return CloudProvider::GCP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CloudProvider>(hashCode);
  }

  return CloudProvider::NOT_SET;
}

Aws::String GetNameForCloudProvider(CloudProvider enumValue) {
  switch (enumValue) {
    case CloudProvider::NOT_SET:
      return {};
    case CloudProvider::AWS:
      return "AWS";
    case CloudProvider::Azure:
      return "Azure";
    case CloudProvider::GCP:
      return "GCP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CloudProviderMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
