/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/EncryptionKeyProvider.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace EncryptionKeyProviderMapper {

static const int ORACLE_MANAGED_HASH = HashingUtils::HashString("ORACLE_MANAGED");
static const int AWS_KMS_HASH = HashingUtils::HashString("AWS_KMS");
static const int OKV_HASH = HashingUtils::HashString("OKV");
static const int OCI_HASH = HashingUtils::HashString("OCI");

EncryptionKeyProvider GetEncryptionKeyProviderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ORACLE_MANAGED_HASH) {
    return EncryptionKeyProvider::ORACLE_MANAGED;
  } else if (hashCode == AWS_KMS_HASH) {
    return EncryptionKeyProvider::AWS_KMS;
  } else if (hashCode == OKV_HASH) {
    return EncryptionKeyProvider::OKV;
  } else if (hashCode == OCI_HASH) {
    return EncryptionKeyProvider::OCI;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncryptionKeyProvider>(hashCode);
  }

  return EncryptionKeyProvider::NOT_SET;
}

Aws::String GetNameForEncryptionKeyProvider(EncryptionKeyProvider enumValue) {
  switch (enumValue) {
    case EncryptionKeyProvider::NOT_SET:
      return {};
    case EncryptionKeyProvider::ORACLE_MANAGED:
      return "ORACLE_MANAGED";
    case EncryptionKeyProvider::AWS_KMS:
      return "AWS_KMS";
    case EncryptionKeyProvider::OKV:
      return "OKV";
    case EncryptionKeyProvider::OCI:
      return "OCI";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncryptionKeyProviderMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
