/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/model/ServerlessGeneration.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
namespace ServerlessGenerationMapper {

static const int CLASSIC_HASH = HashingUtils::HashString("CLASSIC");
static const int NEXTGEN_HASH = HashingUtils::HashString("NEXTGEN");

ServerlessGeneration GetServerlessGenerationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLASSIC_HASH) {
    return ServerlessGeneration::CLASSIC;
  } else if (hashCode == NEXTGEN_HASH) {
    return ServerlessGeneration::NEXTGEN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServerlessGeneration>(hashCode);
  }

  return ServerlessGeneration::NOT_SET;
}

Aws::String GetNameForServerlessGeneration(ServerlessGeneration enumValue) {
  switch (enumValue) {
    case ServerlessGeneration::NOT_SET:
      return {};
    case ServerlessGeneration::CLASSIC:
      return "CLASSIC";
    case ServerlessGeneration::NEXTGEN:
      return "NEXTGEN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServerlessGenerationMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
