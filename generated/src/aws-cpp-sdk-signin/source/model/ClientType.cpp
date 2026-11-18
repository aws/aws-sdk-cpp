/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/signin/model/ClientType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {
namespace ClientTypeMapper {

static const int CLI_HASH = HashingUtils::HashString("CLI");
static const int MCP_HASH = HashingUtils::HashString("MCP");

ClientType GetClientTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLI_HASH) {
    return ClientType::CLI;
  } else if (hashCode == MCP_HASH) {
    return ClientType::MCP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClientType>(hashCode);
  }

  return ClientType::NOT_SET;
}

Aws::String GetNameForClientType(ClientType enumValue) {
  switch (enumValue) {
    case ClientType::NOT_SET:
      return {};
    case ClientType::CLI:
      return "CLI";
    case ClientType::MCP:
      return "MCP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClientTypeMapper
}  // namespace Model
}  // namespace Signin
}  // namespace Aws
