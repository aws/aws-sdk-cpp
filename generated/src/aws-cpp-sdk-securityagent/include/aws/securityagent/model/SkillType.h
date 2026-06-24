/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class SkillType { NOT_SET, FINDING_PERSONALIZATION, LOGIN_OPTIMIZATION };

namespace SkillTypeMapper {
AWS_SECURITYAGENT_API SkillType GetSkillTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForSkillType(SkillType value);
}  // namespace SkillTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
