/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/EndTimeBehaviorReasonCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace EndTimeBehaviorReasonCodeMapper {

static const int PROPOSER_RENEW_OPTED_OUT_HASH = HashingUtils::HashString("PROPOSER_RENEW_OPTED_OUT");
static const int ACCEPTOR_RENEW_OPTED_OUT_HASH = HashingUtils::HashString("ACCEPTOR_RENEW_OPTED_OUT");
static const int NO_RENEWAL_TERM_HASH = HashingUtils::HashString("NO_RENEWAL_TERM");
static const int RENEWAL_LIMIT_EXHAUSTED_HASH = HashingUtils::HashString("RENEWAL_LIMIT_EXHAUSTED");

EndTimeBehaviorReasonCode GetEndTimeBehaviorReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROPOSER_RENEW_OPTED_OUT_HASH) {
    return EndTimeBehaviorReasonCode::PROPOSER_RENEW_OPTED_OUT;
  } else if (hashCode == ACCEPTOR_RENEW_OPTED_OUT_HASH) {
    return EndTimeBehaviorReasonCode::ACCEPTOR_RENEW_OPTED_OUT;
  } else if (hashCode == NO_RENEWAL_TERM_HASH) {
    return EndTimeBehaviorReasonCode::NO_RENEWAL_TERM;
  } else if (hashCode == RENEWAL_LIMIT_EXHAUSTED_HASH) {
    return EndTimeBehaviorReasonCode::RENEWAL_LIMIT_EXHAUSTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EndTimeBehaviorReasonCode>(hashCode);
  }

  return EndTimeBehaviorReasonCode::NOT_SET;
}

Aws::String GetNameForEndTimeBehaviorReasonCode(EndTimeBehaviorReasonCode enumValue) {
  switch (enumValue) {
    case EndTimeBehaviorReasonCode::NOT_SET:
      return {};
    case EndTimeBehaviorReasonCode::PROPOSER_RENEW_OPTED_OUT:
      return "PROPOSER_RENEW_OPTED_OUT";
    case EndTimeBehaviorReasonCode::ACCEPTOR_RENEW_OPTED_OUT:
      return "ACCEPTOR_RENEW_OPTED_OUT";
    case EndTimeBehaviorReasonCode::NO_RENEWAL_TERM:
      return "NO_RENEWAL_TERM";
    case EndTimeBehaviorReasonCode::RENEWAL_LIMIT_EXHAUSTED:
      return "RENEWAL_LIMIT_EXHAUSTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EndTimeBehaviorReasonCodeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
