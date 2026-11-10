/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/StreamExceptionPolicyV2.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace StreamExceptionPolicyV2Mapper {

static const int DROP_HASH = HashingUtils::HashString("DROP");
static const int REJECT_HASH = HashingUtils::HashString("REJECT");

StreamExceptionPolicyV2 GetStreamExceptionPolicyV2ForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DROP_HASH) {
    return StreamExceptionPolicyV2::DROP;
  } else if (hashCode == REJECT_HASH) {
    return StreamExceptionPolicyV2::REJECT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StreamExceptionPolicyV2>(hashCode);
  }

  return StreamExceptionPolicyV2::NOT_SET;
}

Aws::String GetNameForStreamExceptionPolicyV2(StreamExceptionPolicyV2 enumValue) {
  switch (enumValue) {
    case StreamExceptionPolicyV2::NOT_SET:
      return {};
    case StreamExceptionPolicyV2::DROP:
      return "DROP";
    case StreamExceptionPolicyV2::REJECT:
      return "REJECT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StreamExceptionPolicyV2Mapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
