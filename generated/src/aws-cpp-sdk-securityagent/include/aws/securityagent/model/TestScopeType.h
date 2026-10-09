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
enum class TestScopeType { NOT_SET, WEB_APP, GENERATIVE_AI_APP };

namespace TestScopeTypeMapper {
AWS_SECURITYAGENT_API TestScopeType GetTestScopeTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForTestScopeType(TestScopeType value);
}  // namespace TestScopeTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
