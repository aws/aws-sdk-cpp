/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pcs/model/SlurmRestMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {
namespace SlurmRestModeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int NONE_HASH = HashingUtils::HashString("NONE");

SlurmRestMode GetSlurmRestModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return SlurmRestMode::STANDARD;
  } else if (hashCode == NONE_HASH) {
    return SlurmRestMode::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SlurmRestMode>(hashCode);
  }

  return SlurmRestMode::NOT_SET;
}

Aws::String GetNameForSlurmRestMode(SlurmRestMode enumValue) {
  switch (enumValue) {
    case SlurmRestMode::NOT_SET:
      return {};
    case SlurmRestMode::STANDARD:
      return "STANDARD";
    case SlurmRestMode::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SlurmRestModeMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
