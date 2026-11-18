/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>

namespace Aws {
namespace Signin {
namespace Model {
enum class ClientType { NOT_SET, CLI, MCP };

namespace ClientTypeMapper {
AWS_SIGNIN_API ClientType GetClientTypeForName(const Aws::String& name);

AWS_SIGNIN_API Aws::String GetNameForClientType(ClientType value);
}  // namespace ClientTypeMapper
}  // namespace Model
}  // namespace Signin
}  // namespace Aws
