﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/storagegateway/model/SMBSecurityStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace StorageGateway {
namespace Model {
namespace SMBSecurityStrategyMapper {

static const int ClientSpecified_HASH = HashingUtils::HashString("ClientSpecified");
static const int MandatorySigning_HASH = HashingUtils::HashString("MandatorySigning");
static const int MandatoryEncryption_HASH = HashingUtils::HashString("MandatoryEncryption");
static const int MandatoryEncryptionNoAes128_HASH = HashingUtils::HashString("MandatoryEncryptionNoAes128");

SMBSecurityStrategy GetSMBSecurityStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ClientSpecified_HASH) {
    return SMBSecurityStrategy::ClientSpecified;
  } else if (hashCode == MandatorySigning_HASH) {
    return SMBSecurityStrategy::MandatorySigning;
  } else if (hashCode == MandatoryEncryption_HASH) {
    return SMBSecurityStrategy::MandatoryEncryption;
  } else if (hashCode == MandatoryEncryptionNoAes128_HASH) {
    return SMBSecurityStrategy::MandatoryEncryptionNoAes128;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SMBSecurityStrategy>(hashCode);
  }

  return SMBSecurityStrategy::NOT_SET;
}

Aws::String GetNameForSMBSecurityStrategy(SMBSecurityStrategy enumValue) {
  switch (enumValue) {
    case SMBSecurityStrategy::NOT_SET:
      return {};
    case SMBSecurityStrategy::ClientSpecified:
      return "ClientSpecified";
    case SMBSecurityStrategy::MandatorySigning:
      return "MandatorySigning";
    case SMBSecurityStrategy::MandatoryEncryption:
      return "MandatoryEncryption";
    case SMBSecurityStrategy::MandatoryEncryptionNoAes128:
      return "MandatoryEncryptionNoAes128";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SMBSecurityStrategyMapper
}  // namespace Model
}  // namespace StorageGateway
}  // namespace Aws
