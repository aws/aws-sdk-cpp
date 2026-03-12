/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3-crt/model/BucketNamespace.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Crt {
namespace Model {
namespace BucketNamespaceMapper {

static const int account_regional_HASH = HashingUtils::HashString("account-regional");
static const int global_HASH = HashingUtils::HashString("global");

BucketNamespace GetBucketNamespaceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == account_regional_HASH) {
    return BucketNamespace::account_regional;
  } else if (hashCode == global_HASH) {
    return BucketNamespace::global;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BucketNamespace>(hashCode);
  }

  return BucketNamespace::NOT_SET;
}

Aws::String GetNameForBucketNamespace(BucketNamespace enumValue) {
  switch (enumValue) {
    case BucketNamespace::NOT_SET:
      return {};
    case BucketNamespace::account_regional:
      return "account-regional";
    case BucketNamespace::global:
      return "global";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BucketNamespaceMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
