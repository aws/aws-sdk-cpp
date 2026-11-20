/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payments/model/LineOfBusiness.h>

using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {
namespace LineOfBusinessMapper {

static const int AWS_CLOUD_SERVICES_HASH = HashingUtils::HashString("AWS_CLOUD_SERVICES");
static const int PROSERVE_MARKETING_AND_TRAINING_HASH = HashingUtils::HashString("PROSERVE_MARKETING_AND_TRAINING");
static const int AWS_MARKETPLACE_HASH = HashingUtils::HashString("AWS_MARKETPLACE");

LineOfBusiness GetLineOfBusinessForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_CLOUD_SERVICES_HASH) {
    return LineOfBusiness::AWS_CLOUD_SERVICES;
  } else if (hashCode == PROSERVE_MARKETING_AND_TRAINING_HASH) {
    return LineOfBusiness::PROSERVE_MARKETING_AND_TRAINING;
  } else if (hashCode == AWS_MARKETPLACE_HASH) {
    return LineOfBusiness::AWS_MARKETPLACE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LineOfBusiness>(hashCode);
  }

  return LineOfBusiness::NOT_SET;
}

Aws::String GetNameForLineOfBusiness(LineOfBusiness enumValue) {
  switch (enumValue) {
    case LineOfBusiness::NOT_SET:
      return {};
    case LineOfBusiness::AWS_CLOUD_SERVICES:
      return "AWS_CLOUD_SERVICES";
    case LineOfBusiness::PROSERVE_MARKETING_AND_TRAINING:
      return "PROSERVE_MARKETING_AND_TRAINING";
    case LineOfBusiness::AWS_MARKETPLACE:
      return "AWS_MARKETPLACE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LineOfBusinessMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
