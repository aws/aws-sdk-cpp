/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/WAFConfigDataType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace WAFConfigDataTypeMapper {

static const int DefaultAction_HASH = HashingUtils::HashString("DefaultAction");
static const int VisibilityConfig_HASH = HashingUtils::HashString("VisibilityConfig");
static const int CaptchaConfig_HASH = HashingUtils::HashString("CaptchaConfig");
static const int ChallengeConfig_HASH = HashingUtils::HashString("ChallengeConfig");
static const int CustomResponseBodies_HASH = HashingUtils::HashString("CustomResponseBodies");
static const int LoggingConfiguration_HASH = HashingUtils::HashString("LoggingConfiguration");
static const int DataProtectionConfig_HASH = HashingUtils::HashString("DataProtectionConfig");
static const int AssociationConfig_HASH = HashingUtils::HashString("AssociationConfig");
static const int OnSourceDDoSProtectionConfig_HASH = HashingUtils::HashString("OnSourceDDoSProtectionConfig");
static const int TokenDomains_HASH = HashingUtils::HashString("TokenDomains");

WAFConfigDataType GetWAFConfigDataTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DefaultAction_HASH) {
    return WAFConfigDataType::DefaultAction;
  } else if (hashCode == VisibilityConfig_HASH) {
    return WAFConfigDataType::VisibilityConfig;
  } else if (hashCode == CaptchaConfig_HASH) {
    return WAFConfigDataType::CaptchaConfig;
  } else if (hashCode == ChallengeConfig_HASH) {
    return WAFConfigDataType::ChallengeConfig;
  } else if (hashCode == CustomResponseBodies_HASH) {
    return WAFConfigDataType::CustomResponseBodies;
  } else if (hashCode == LoggingConfiguration_HASH) {
    return WAFConfigDataType::LoggingConfiguration;
  } else if (hashCode == DataProtectionConfig_HASH) {
    return WAFConfigDataType::DataProtectionConfig;
  } else if (hashCode == AssociationConfig_HASH) {
    return WAFConfigDataType::AssociationConfig;
  } else if (hashCode == OnSourceDDoSProtectionConfig_HASH) {
    return WAFConfigDataType::OnSourceDDoSProtectionConfig;
  } else if (hashCode == TokenDomains_HASH) {
    return WAFConfigDataType::TokenDomains;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WAFConfigDataType>(hashCode);
  }

  return WAFConfigDataType::NOT_SET;
}

Aws::String GetNameForWAFConfigDataType(WAFConfigDataType enumValue) {
  switch (enumValue) {
    case WAFConfigDataType::NOT_SET:
      return {};
    case WAFConfigDataType::DefaultAction:
      return "DefaultAction";
    case WAFConfigDataType::VisibilityConfig:
      return "VisibilityConfig";
    case WAFConfigDataType::CaptchaConfig:
      return "CaptchaConfig";
    case WAFConfigDataType::ChallengeConfig:
      return "ChallengeConfig";
    case WAFConfigDataType::CustomResponseBodies:
      return "CustomResponseBodies";
    case WAFConfigDataType::LoggingConfiguration:
      return "LoggingConfiguration";
    case WAFConfigDataType::DataProtectionConfig:
      return "DataProtectionConfig";
    case WAFConfigDataType::AssociationConfig:
      return "AssociationConfig";
    case WAFConfigDataType::OnSourceDDoSProtectionConfig:
      return "OnSourceDDoSProtectionConfig";
    case WAFConfigDataType::TokenDomains:
      return "TokenDomains";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WAFConfigDataTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
