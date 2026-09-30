/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/TlsEncryptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace TlsEncryptionTypeMapper {

static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");

TlsEncryptionType GetTlsEncryptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC__HASH) {
    return TlsEncryptionType::PUBLIC_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TlsEncryptionType>(hashCode);
  }

  return TlsEncryptionType::NOT_SET;
}

Aws::String GetNameForTlsEncryptionType(TlsEncryptionType enumValue) {
  switch (enumValue) {
    case TlsEncryptionType::NOT_SET:
      return {};
    case TlsEncryptionType::PUBLIC_:
      return "PUBLIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TlsEncryptionTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
