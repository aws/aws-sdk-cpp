/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/ChannelContractType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ChannelContractTypeMapper {

static const int MANAGED_SERVICES_ATTESTATION_HASH = HashingUtils::HashString("MANAGED_SERVICES_ATTESTATION");

ChannelContractType GetChannelContractTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANAGED_SERVICES_ATTESTATION_HASH) {
    return ChannelContractType::MANAGED_SERVICES_ATTESTATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChannelContractType>(hashCode);
  }

  return ChannelContractType::NOT_SET;
}

Aws::String GetNameForChannelContractType(ChannelContractType enumValue) {
  switch (enumValue) {
    case ChannelContractType::NOT_SET:
      return {};
    case ChannelContractType::MANAGED_SERVICES_ATTESTATION:
      return "MANAGED_SERVICES_ATTESTATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChannelContractTypeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
