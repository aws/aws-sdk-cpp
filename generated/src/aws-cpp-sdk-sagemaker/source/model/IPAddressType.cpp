﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/IPAddressType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace IPAddressTypeMapper {

static const int ipv4_HASH = HashingUtils::HashString("ipv4");
static const int dualstack_HASH = HashingUtils::HashString("dualstack");

IPAddressType GetIPAddressTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ipv4_HASH) {
    return IPAddressType::ipv4;
  } else if (hashCode == dualstack_HASH) {
    return IPAddressType::dualstack;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IPAddressType>(hashCode);
  }

  return IPAddressType::NOT_SET;
}

Aws::String GetNameForIPAddressType(IPAddressType enumValue) {
  switch (enumValue) {
    case IPAddressType::NOT_SET:
      return {};
    case IPAddressType::ipv4:
      return "ipv4";
    case IPAddressType::dualstack:
      return "dualstack";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IPAddressTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
