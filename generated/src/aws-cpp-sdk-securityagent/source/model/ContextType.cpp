/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/ContextType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace ContextTypeMapper {

static const int ERROR__HASH = HashingUtils::HashString("ERROR");
static const int CLIENT_ERROR_HASH = HashingUtils::HashString("CLIENT_ERROR");
static const int WARNING_HASH = HashingUtils::HashString("WARNING");
static const int INFO_HASH = HashingUtils::HashString("INFO");

ContextType GetContextTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ERROR__HASH) {
    return ContextType::ERROR_;
  } else if (hashCode == CLIENT_ERROR_HASH) {
    return ContextType::CLIENT_ERROR;
  } else if (hashCode == WARNING_HASH) {
    return ContextType::WARNING;
  } else if (hashCode == INFO_HASH) {
    return ContextType::INFO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContextType>(hashCode);
  }

  return ContextType::NOT_SET;
}

Aws::String GetNameForContextType(ContextType enumValue) {
  switch (enumValue) {
    case ContextType::NOT_SET:
      return {};
    case ContextType::ERROR_:
      return "ERROR";
    case ContextType::CLIENT_ERROR:
      return "CLIENT_ERROR";
    case ContextType::WARNING:
      return "WARNING";
    case ContextType::INFO:
      return "INFO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContextTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
