/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/FormFactor.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace FormFactorMapper {

static const int RACK_HASH = HashingUtils::HashString("RACK");
static const int SERVER_HASH = HashingUtils::HashString("SERVER");

FormFactor GetFormFactorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RACK_HASH) {
    return FormFactor::RACK;
  } else if (hashCode == SERVER_HASH) {
    return FormFactor::SERVER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FormFactor>(hashCode);
  }

  return FormFactor::NOT_SET;
}

Aws::String GetNameForFormFactor(FormFactor enumValue) {
  switch (enumValue) {
    case FormFactor::NOT_SET:
      return {};
    case FormFactor::RACK:
      return "RACK";
    case FormFactor::SERVER:
      return "SERVER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FormFactorMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
