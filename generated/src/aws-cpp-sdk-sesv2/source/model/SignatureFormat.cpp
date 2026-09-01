/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sesv2/model/SignatureFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {
namespace SignatureFormatMapper {

static const int DETACHED_HASH = HashingUtils::HashString("DETACHED");

SignatureFormat GetSignatureFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DETACHED_HASH) {
    return SignatureFormat::DETACHED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SignatureFormat>(hashCode);
  }

  return SignatureFormat::NOT_SET;
}

Aws::String GetNameForSignatureFormat(SignatureFormat enumValue) {
  switch (enumValue) {
    case SignatureFormat::NOT_SET:
      return {};
    case SignatureFormat::DETACHED:
      return "DETACHED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SignatureFormatMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
