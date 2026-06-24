/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/EncryptionKeyProviderInput.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace EncryptionKeyProviderInputMapper {

static const int ORACLE_MANAGED_HASH = HashingUtils::HashString("ORACLE_MANAGED");
static const int AWS_KMS_HASH = HashingUtils::HashString("AWS_KMS");

EncryptionKeyProviderInput GetEncryptionKeyProviderInputForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ORACLE_MANAGED_HASH) {
    return EncryptionKeyProviderInput::ORACLE_MANAGED;
  } else if (hashCode == AWS_KMS_HASH) {
    return EncryptionKeyProviderInput::AWS_KMS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncryptionKeyProviderInput>(hashCode);
  }

  return EncryptionKeyProviderInput::NOT_SET;
}

Aws::String GetNameForEncryptionKeyProviderInput(EncryptionKeyProviderInput enumValue) {
  switch (enumValue) {
    case EncryptionKeyProviderInput::NOT_SET:
      return {};
    case EncryptionKeyProviderInput::ORACLE_MANAGED:
      return "ORACLE_MANAGED";
    case EncryptionKeyProviderInput::AWS_KMS:
      return "AWS_KMS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncryptionKeyProviderInputMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
