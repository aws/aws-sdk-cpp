/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/GenerationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace GenerationTypeMapper {

static const int ONDEMAND_HASH = HashingUtils::HashString("ONDEMAND");
static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
static const int BASIC_HASH = HashingUtils::HashString("BASIC");

GenerationType GetGenerationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ONDEMAND_HASH) {
    return GenerationType::ONDEMAND;
  } else if (hashCode == SCHEDULED_HASH) {
    return GenerationType::SCHEDULED;
  } else if (hashCode == BASIC_HASH) {
    return GenerationType::BASIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GenerationType>(hashCode);
  }

  return GenerationType::NOT_SET;
}

Aws::String GetNameForGenerationType(GenerationType enumValue) {
  switch (enumValue) {
    case GenerationType::NOT_SET:
      return {};
    case GenerationType::ONDEMAND:
      return "ONDEMAND";
    case GenerationType::SCHEDULED:
      return "SCHEDULED";
    case GenerationType::BASIC:
      return "BASIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GenerationTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
