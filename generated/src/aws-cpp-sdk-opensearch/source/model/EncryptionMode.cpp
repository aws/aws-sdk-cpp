/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/EncryptionMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace EncryptionModeMapper {

static const int DISK_HASH = HashingUtils::HashString("DISK");
static const int NATIVE_HASH = HashingUtils::HashString("NATIVE");

EncryptionMode GetEncryptionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISK_HASH) {
    return EncryptionMode::DISK;
  } else if (hashCode == NATIVE_HASH) {
    return EncryptionMode::NATIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncryptionMode>(hashCode);
  }

  return EncryptionMode::NOT_SET;
}

Aws::String GetNameForEncryptionMode(EncryptionMode enumValue) {
  switch (enumValue) {
    case EncryptionMode::NOT_SET:
      return {};
    case EncryptionMode::DISK:
      return "DISK";
    case EncryptionMode::NATIVE:
      return "NATIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncryptionModeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
