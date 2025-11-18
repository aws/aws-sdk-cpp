/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mwaa-serverless/model/EncryptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MWAAServerless {
namespace Model {
namespace EncryptionTypeMapper {

static const int AWS_MANAGED_KEY_HASH = HashingUtils::HashString("AWS_MANAGED_KEY");
static const int CUSTOMER_MANAGED_KEY_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_KEY");

EncryptionType GetEncryptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_MANAGED_KEY_HASH) {
    return EncryptionType::AWS_MANAGED_KEY;
  } else if (hashCode == CUSTOMER_MANAGED_KEY_HASH) {
    return EncryptionType::CUSTOMER_MANAGED_KEY;
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
    case EncryptionType::AWS_MANAGED_KEY:
      return "AWS_MANAGED_KEY";
    case EncryptionType::CUSTOMER_MANAGED_KEY:
      return "CUSTOMER_MANAGED_KEY";
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
}  // namespace MWAAServerless
}  // namespace Aws
