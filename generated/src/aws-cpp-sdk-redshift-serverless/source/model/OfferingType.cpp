﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift-serverless/model/OfferingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace RedshiftServerless {
namespace Model {
namespace OfferingTypeMapper {

static const int ALL_UPFRONT_HASH = HashingUtils::HashString("ALL_UPFRONT");
static const int NO_UPFRONT_HASH = HashingUtils::HashString("NO_UPFRONT");

OfferingType GetOfferingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_UPFRONT_HASH) {
    return OfferingType::ALL_UPFRONT;
  } else if (hashCode == NO_UPFRONT_HASH) {
    return OfferingType::NO_UPFRONT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OfferingType>(hashCode);
  }

  return OfferingType::NOT_SET;
}

Aws::String GetNameForOfferingType(OfferingType enumValue) {
  switch (enumValue) {
    case OfferingType::NOT_SET:
      return {};
    case OfferingType::ALL_UPFRONT:
      return "ALL_UPFRONT";
    case OfferingType::NO_UPFRONT:
      return "NO_UPFRONT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OfferingTypeMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
