/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/TicketCreationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace TicketCreationModeMapper {

static const int DRYRUN_HASH = HashingUtils::HashString("DRYRUN");

TicketCreationMode GetTicketCreationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DRYRUN_HASH) {
    return TicketCreationMode::DRYRUN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TicketCreationMode>(hashCode);
  }

  return TicketCreationMode::NOT_SET;
}

Aws::String GetNameForTicketCreationMode(TicketCreationMode enumValue) {
  switch (enumValue) {
    case TicketCreationMode::NOT_SET:
      return {};
    case TicketCreationMode::DRYRUN:
      return "DRYRUN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TicketCreationModeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
