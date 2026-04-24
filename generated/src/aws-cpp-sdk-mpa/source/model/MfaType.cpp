/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mpa/model/MfaType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MPA {
namespace Model {
namespace MfaTypeMapper {

static const int EMAIL_OTP_HASH = HashingUtils::HashString("EMAIL_OTP");

MfaType GetMfaTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EMAIL_OTP_HASH) {
    return MfaType::EMAIL_OTP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MfaType>(hashCode);
  }

  return MfaType::NOT_SET;
}

Aws::String GetNameForMfaType(MfaType enumValue) {
  switch (enumValue) {
    case MfaType::NOT_SET:
      return {};
    case MfaType::EMAIL_OTP:
      return "EMAIL_OTP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MfaTypeMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws
