/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/CharacterSetType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace CharacterSetTypeMapper {

static const int DATABASE_HASH = HashingUtils::HashString("DATABASE");
static const int NATIONAL_HASH = HashingUtils::HashString("NATIONAL");

CharacterSetType GetCharacterSetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DATABASE_HASH) {
    return CharacterSetType::DATABASE;
  } else if (hashCode == NATIONAL_HASH) {
    return CharacterSetType::NATIONAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CharacterSetType>(hashCode);
  }

  return CharacterSetType::NOT_SET;
}

Aws::String GetNameForCharacterSetType(CharacterSetType enumValue) {
  switch (enumValue) {
    case CharacterSetType::NOT_SET:
      return {};
    case CharacterSetType::DATABASE:
      return "DATABASE";
    case CharacterSetType::NATIONAL:
      return "NATIONAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CharacterSetTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
