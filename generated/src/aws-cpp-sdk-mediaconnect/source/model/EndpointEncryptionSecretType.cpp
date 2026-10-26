/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/EndpointEncryptionSecretType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace EndpointEncryptionSecretTypeMapper {

static const int AES_128_KEY_HASH = HashingUtils::HashString("AES_128_KEY");
static const int AES_192_KEY_HASH = HashingUtils::HashString("AES_192_KEY");
static const int AES_256_KEY_HASH = HashingUtils::HashString("AES_256_KEY");
static const int SRT_PASSPHRASE_HASH = HashingUtils::HashString("SRT_PASSPHRASE");

EndpointEncryptionSecretType GetEndpointEncryptionSecretTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AES_128_KEY_HASH) {
    return EndpointEncryptionSecretType::AES_128_KEY;
  } else if (hashCode == AES_192_KEY_HASH) {
    return EndpointEncryptionSecretType::AES_192_KEY;
  } else if (hashCode == AES_256_KEY_HASH) {
    return EndpointEncryptionSecretType::AES_256_KEY;
  } else if (hashCode == SRT_PASSPHRASE_HASH) {
    return EndpointEncryptionSecretType::SRT_PASSPHRASE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EndpointEncryptionSecretType>(hashCode);
  }

  return EndpointEncryptionSecretType::NOT_SET;
}

Aws::String GetNameForEndpointEncryptionSecretType(EndpointEncryptionSecretType enumValue) {
  switch (enumValue) {
    case EndpointEncryptionSecretType::NOT_SET:
      return {};
    case EndpointEncryptionSecretType::AES_128_KEY:
      return "AES_128_KEY";
    case EndpointEncryptionSecretType::AES_192_KEY:
      return "AES_192_KEY";
    case EndpointEncryptionSecretType::AES_256_KEY:
      return "AES_256_KEY";
    case EndpointEncryptionSecretType::SRT_PASSPHRASE:
      return "SRT_PASSPHRASE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EndpointEncryptionSecretTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
