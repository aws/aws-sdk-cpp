/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/Organizations_EXPORTS.h>

namespace Aws {
namespace Organizations {
namespace Model {
enum class EffectivePolicyType {
  NOT_SET,
  TAG_POLICY,
  BACKUP_POLICY,
  AISERVICES_OPT_OUT_POLICY,
  CHATBOT_POLICY,
  DECLARATIVE_POLICY_EC2,
  SECURITYHUB_POLICY,
  INSPECTOR_POLICY,
  UPGRADE_ROLLOUT_POLICY,
  BEDROCK_POLICY,
  S3_POLICY,
  NETWORK_SECURITY_DIRECTOR_POLICY
};

namespace EffectivePolicyTypeMapper {
AWS_ORGANIZATIONS_API EffectivePolicyType GetEffectivePolicyTypeForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForEffectivePolicyType(EffectivePolicyType value);
}  // namespace EffectivePolicyTypeMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
