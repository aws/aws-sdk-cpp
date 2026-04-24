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
enum class ContextType { NOT_SET, ERROR_, CLIENT_ERROR, WARNING, INFO };

namespace ContextTypeMapper {
AWS_SECURITYAGENT_API ContextType GetContextTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForContextType(ContextType value);
}  // namespace ContextTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
