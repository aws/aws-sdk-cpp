/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ThreatActor.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ThreatActorMapper {

static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
static const int AGENT_HASH = HashingUtils::HashString("AGENT");

ThreatActor GetThreatActorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_HASH) {
    return ThreatActor::CUSTOMER;
  } else if (hashCode == AGENT_HASH) {
    return ThreatActor::AGENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ThreatActor>(hashCode);
  }

  return ThreatActor::NOT_SET;
}

Aws::String GetNameForThreatActor(ThreatActor enumValue) {
  switch (enumValue) {
    case ThreatActor::NOT_SET:
      return {};
    case ThreatActor::CUSTOMER:
      return "CUSTOMER";
    case ThreatActor::AGENT:
      return "AGENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ThreatActorMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
