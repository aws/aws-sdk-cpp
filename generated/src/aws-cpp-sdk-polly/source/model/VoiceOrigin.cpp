/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/polly/model/VoiceOrigin.h>

using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {
namespace VoiceOriginMapper {

static const int aws_HASH = HashingUtils::HashString("aws");
static const int customer_HASH = HashingUtils::HashString("customer");

VoiceOrigin GetVoiceOriginForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == aws_HASH) {
    return VoiceOrigin::aws;
  } else if (hashCode == customer_HASH) {
    return VoiceOrigin::customer;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VoiceOrigin>(hashCode);
  }

  return VoiceOrigin::NOT_SET;
}

Aws::String GetNameForVoiceOrigin(VoiceOrigin enumValue) {
  switch (enumValue) {
    case VoiceOrigin::NOT_SET:
      return {};
    case VoiceOrigin::aws:
      return "aws";
    case VoiceOrigin::customer:
      return "customer";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VoiceOriginMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
