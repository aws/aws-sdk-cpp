/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3/model/EncryptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3 {
namespace Model {
namespace EncryptionTypeMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int SSE_C_HASH = HashingUtils::HashString("SSE-C");

EncryptionType GetEncryptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return EncryptionType::NONE;
  } else if (hashCode == SSE_C_HASH) {
    return EncryptionType::SSE_C;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncryptionType>(hashCode);
  }

  return EncryptionType::NOT_SET;
}

Aws::String GetNameForEncryptionType(EncryptionType enumValue) {
  switch (enumValue) {
    case EncryptionType::NOT_SET:
      return {};
    case EncryptionType::NONE:
      return "NONE";
    case EncryptionType::SSE_C:
      return "SSE-C";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncryptionTypeMapper
}  // namespace Model
}  // namespace S3
}  // namespace Aws
