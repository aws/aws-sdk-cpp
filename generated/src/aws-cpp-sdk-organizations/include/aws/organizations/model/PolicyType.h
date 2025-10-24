﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/Organizations_EXPORTS.h>

namespace Aws {
namespace Organizations {
namespace Model {
enum class PolicyType {
  NOT_SET,
  SERVICE_CONTROL_POLICY,
  RESOURCE_CONTROL_POLICY,
  TAG_POLICY,
  BACKUP_POLICY,
  AISERVICES_OPT_OUT_POLICY,
  CHATBOT_POLICY,
  DECLARATIVE_POLICY_EC2,
  SECURITYHUB_POLICY
};

namespace PolicyTypeMapper {
AWS_ORGANIZATIONS_API PolicyType GetPolicyTypeForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForPolicyType(PolicyType value);
}  // namespace PolicyTypeMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
