/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift-serverless/model/S3TableGranularity.h>

using namespace Aws::Utils;

namespace Aws {
namespace RedshiftServerless {
namespace Model {
namespace S3TableGranularityMapper {

static const int namespace__HASH = HashingUtils::HashString("namespace");
static const int account_HASH = HashingUtils::HashString("account");

S3TableGranularity GetS3TableGranularityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == namespace__HASH) {
    return S3TableGranularity::namespace_;
  } else if (hashCode == account_HASH) {
    return S3TableGranularity::account;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3TableGranularity>(hashCode);
  }

  return S3TableGranularity::NOT_SET;
}

Aws::String GetNameForS3TableGranularity(S3TableGranularity enumValue) {
  switch (enumValue) {
    case S3TableGranularity::NOT_SET:
      return {};
    case S3TableGranularity::namespace_:
      return "namespace";
    case S3TableGranularity::account:
      return "account";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3TableGranularityMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
