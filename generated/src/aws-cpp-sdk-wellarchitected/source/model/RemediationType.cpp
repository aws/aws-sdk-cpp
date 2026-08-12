/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/RemediationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace RemediationTypeMapper {

static const int AUTO_REMEDIATION_HASH = HashingUtils::HashString("AUTO_REMEDIATION");
static const int CONSOLE_HASH = HashingUtils::HashString("CONSOLE");
static const int CLI_HASH = HashingUtils::HashString("CLI");
static const int SDK_HASH = HashingUtils::HashString("SDK");
static const int IAC_HASH = HashingUtils::HashString("IAC");
static const int MCP_HASH = HashingUtils::HashString("MCP");

RemediationType GetRemediationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_REMEDIATION_HASH) {
    return RemediationType::AUTO_REMEDIATION;
  } else if (hashCode == CONSOLE_HASH) {
    return RemediationType::CONSOLE;
  } else if (hashCode == CLI_HASH) {
    return RemediationType::CLI;
  } else if (hashCode == SDK_HASH) {
    return RemediationType::SDK;
  } else if (hashCode == IAC_HASH) {
    return RemediationType::IAC;
  } else if (hashCode == MCP_HASH) {
    return RemediationType::MCP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RemediationType>(hashCode);
  }

  return RemediationType::NOT_SET;
}

Aws::String GetNameForRemediationType(RemediationType enumValue) {
  switch (enumValue) {
    case RemediationType::NOT_SET:
      return {};
    case RemediationType::AUTO_REMEDIATION:
      return "AUTO_REMEDIATION";
    case RemediationType::CONSOLE:
      return "CONSOLE";
    case RemediationType::CLI:
      return "CLI";
    case RemediationType::SDK:
      return "SDK";
    case RemediationType::IAC:
      return "IAC";
    case RemediationType::MCP:
      return "MCP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RemediationTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
