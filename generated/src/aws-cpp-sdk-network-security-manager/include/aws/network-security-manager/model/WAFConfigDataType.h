/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
enum class WAFConfigDataType {
  NOT_SET,
  DefaultAction,
  VisibilityConfig,
  CaptchaConfig,
  ChallengeConfig,
  CustomResponseBodies,
  LoggingConfiguration,
  DataProtectionConfig,
  AssociationConfig,
  OnSourceDDoSProtectionConfig,
  TokenDomains
};

namespace WAFConfigDataTypeMapper {
AWS_NETWORKSECURITYMANAGER_API WAFConfigDataType GetWAFConfigDataTypeForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForWAFConfigDataType(WAFConfigDataType value);
}  // namespace WAFConfigDataTypeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
