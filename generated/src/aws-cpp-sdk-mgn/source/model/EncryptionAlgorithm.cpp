/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/EncryptionAlgorithm.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace EncryptionAlgorithmMapper {

static const int SHA256_HASH = HashingUtils::HashString("SHA256");

EncryptionAlgorithm GetEncryptionAlgorithmForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SHA256_HASH) {
    return EncryptionAlgorithm::SHA256;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EncryptionAlgorithm>(hashCode);
  }

  return EncryptionAlgorithm::NOT_SET;
}

Aws::String GetNameForEncryptionAlgorithm(EncryptionAlgorithm enumValue) {
  switch (enumValue) {
    case EncryptionAlgorithm::NOT_SET:
      return {};
    case EncryptionAlgorithm::SHA256:
      return "SHA256";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EncryptionAlgorithmMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
