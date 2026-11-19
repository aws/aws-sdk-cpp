/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/ContactWindow.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace ContactWindowMapper {

static const int MORNING_HASH = HashingUtils::HashString("MORNING");
static const int AFTERNOON_HASH = HashingUtils::HashString("AFTERNOON");
static const int EVENING_HASH = HashingUtils::HashString("EVENING");

ContactWindow GetContactWindowForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MORNING_HASH) {
    return ContactWindow::MORNING;
  } else if (hashCode == AFTERNOON_HASH) {
    return ContactWindow::AFTERNOON;
  } else if (hashCode == EVENING_HASH) {
    return ContactWindow::EVENING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContactWindow>(hashCode);
  }

  return ContactWindow::NOT_SET;
}

Aws::String GetNameForContactWindow(ContactWindow enumValue) {
  switch (enumValue) {
    case ContactWindow::NOT_SET:
      return {};
    case ContactWindow::MORNING:
      return "MORNING";
    case ContactWindow::AFTERNOON:
      return "AFTERNOON";
    case ContactWindow::EVENING:
      return "EVENING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContactWindowMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
