/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/QuoteStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace QuoteStatusMapper {

static const int CREATED_HASH = HashingUtils::HashString("CREATED");
static const int ORDER_SUBMITTED_HASH = HashingUtils::HashString("ORDER_SUBMITTED");
static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");

QuoteStatus GetQuoteStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATED_HASH) {
    return QuoteStatus::CREATED;
  } else if (hashCode == ORDER_SUBMITTED_HASH) {
    return QuoteStatus::ORDER_SUBMITTED;
  } else if (hashCode == EXPIRED_HASH) {
    return QuoteStatus::EXPIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<QuoteStatus>(hashCode);
  }

  return QuoteStatus::NOT_SET;
}

Aws::String GetNameForQuoteStatus(QuoteStatus enumValue) {
  switch (enumValue) {
    case QuoteStatus::NOT_SET:
      return {};
    case QuoteStatus::CREATED:
      return "CREATED";
    case QuoteStatus::ORDER_SUBMITTED:
      return "ORDER_SUBMITTED";
    case QuoteStatus::EXPIRED:
      return "EXPIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace QuoteStatusMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
