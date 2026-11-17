/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/Timing.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace TimingMapper {

static const int ON_ACCEPTANCE_HASH = HashingUtils::HashString("ON_ACCEPTANCE");
static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
static const int BILLING_PERIOD_HASH = HashingUtils::HashString("BILLING_PERIOD");
static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");

Timing GetTimingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ON_ACCEPTANCE_HASH) {
    return Timing::ON_ACCEPTANCE;
  } else if (hashCode == SCHEDULED_HASH) {
    return Timing::SCHEDULED;
  } else if (hashCode == BILLING_PERIOD_HASH) {
    return Timing::BILLING_PERIOD;
  } else if (hashCode == NOT_APPLICABLE_HASH) {
    return Timing::NOT_APPLICABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Timing>(hashCode);
  }

  return Timing::NOT_SET;
}

Aws::String GetNameForTiming(Timing enumValue) {
  switch (enumValue) {
    case Timing::NOT_SET:
      return {};
    case Timing::ON_ACCEPTANCE:
      return "ON_ACCEPTANCE";
    case Timing::SCHEDULED:
      return "SCHEDULED";
    case Timing::BILLING_PERIOD:
      return "BILLING_PERIOD";
    case Timing::NOT_APPLICABLE:
      return "NOT_APPLICABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TimingMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
