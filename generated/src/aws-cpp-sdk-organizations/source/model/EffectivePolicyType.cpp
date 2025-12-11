/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/organizations/model/EffectivePolicyType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Organizations {
namespace Model {
namespace EffectivePolicyTypeMapper {

static const int TAG_POLICY_HASH = HashingUtils::HashString("TAG_POLICY");
static const int BACKUP_POLICY_HASH = HashingUtils::HashString("BACKUP_POLICY");
static const int AISERVICES_OPT_OUT_POLICY_HASH = HashingUtils::HashString("AISERVICES_OPT_OUT_POLICY");
static const int CHATBOT_POLICY_HASH = HashingUtils::HashString("CHATBOT_POLICY");
static const int DECLARATIVE_POLICY_EC2_HASH = HashingUtils::HashString("DECLARATIVE_POLICY_EC2");
static const int SECURITYHUB_POLICY_HASH = HashingUtils::HashString("SECURITYHUB_POLICY");
static const int INSPECTOR_POLICY_HASH = HashingUtils::HashString("INSPECTOR_POLICY");
static const int UPGRADE_ROLLOUT_POLICY_HASH = HashingUtils::HashString("UPGRADE_ROLLOUT_POLICY");
static const int BEDROCK_POLICY_HASH = HashingUtils::HashString("BEDROCK_POLICY");
static const int S3_POLICY_HASH = HashingUtils::HashString("S3_POLICY");
static const int NETWORK_SECURITY_DIRECTOR_POLICY_HASH = HashingUtils::HashString("NETWORK_SECURITY_DIRECTOR_POLICY");

EffectivePolicyType GetEffectivePolicyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TAG_POLICY_HASH) {
    return EffectivePolicyType::TAG_POLICY;
  } else if (hashCode == BACKUP_POLICY_HASH) {
    return EffectivePolicyType::BACKUP_POLICY;
  } else if (hashCode == AISERVICES_OPT_OUT_POLICY_HASH) {
    return EffectivePolicyType::AISERVICES_OPT_OUT_POLICY;
  } else if (hashCode == CHATBOT_POLICY_HASH) {
    return EffectivePolicyType::CHATBOT_POLICY;
  } else if (hashCode == DECLARATIVE_POLICY_EC2_HASH) {
    return EffectivePolicyType::DECLARATIVE_POLICY_EC2;
  } else if (hashCode == SECURITYHUB_POLICY_HASH) {
    return EffectivePolicyType::SECURITYHUB_POLICY;
  } else if (hashCode == INSPECTOR_POLICY_HASH) {
    return EffectivePolicyType::INSPECTOR_POLICY;
  } else if (hashCode == UPGRADE_ROLLOUT_POLICY_HASH) {
    return EffectivePolicyType::UPGRADE_ROLLOUT_POLICY;
  } else if (hashCode == BEDROCK_POLICY_HASH) {
    return EffectivePolicyType::BEDROCK_POLICY;
  } else if (hashCode == S3_POLICY_HASH) {
    return EffectivePolicyType::S3_POLICY;
  } else if (hashCode == NETWORK_SECURITY_DIRECTOR_POLICY_HASH) {
    return EffectivePolicyType::NETWORK_SECURITY_DIRECTOR_POLICY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EffectivePolicyType>(hashCode);
  }

  return EffectivePolicyType::NOT_SET;
}

Aws::String GetNameForEffectivePolicyType(EffectivePolicyType enumValue) {
  switch (enumValue) {
    case EffectivePolicyType::NOT_SET:
      return {};
    case EffectivePolicyType::TAG_POLICY:
      return "TAG_POLICY";
    case EffectivePolicyType::BACKUP_POLICY:
      return "BACKUP_POLICY";
    case EffectivePolicyType::AISERVICES_OPT_OUT_POLICY:
      return "AISERVICES_OPT_OUT_POLICY";
    case EffectivePolicyType::CHATBOT_POLICY:
      return "CHATBOT_POLICY";
    case EffectivePolicyType::DECLARATIVE_POLICY_EC2:
      return "DECLARATIVE_POLICY_EC2";
    case EffectivePolicyType::SECURITYHUB_POLICY:
      return "SECURITYHUB_POLICY";
    case EffectivePolicyType::INSPECTOR_POLICY:
      return "INSPECTOR_POLICY";
    case EffectivePolicyType::UPGRADE_ROLLOUT_POLICY:
      return "UPGRADE_ROLLOUT_POLICY";
    case EffectivePolicyType::BEDROCK_POLICY:
      return "BEDROCK_POLICY";
    case EffectivePolicyType::S3_POLICY:
      return "S3_POLICY";
    case EffectivePolicyType::NETWORK_SECURITY_DIRECTOR_POLICY:
      return "NETWORK_SECURITY_DIRECTOR_POLICY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EffectivePolicyTypeMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
