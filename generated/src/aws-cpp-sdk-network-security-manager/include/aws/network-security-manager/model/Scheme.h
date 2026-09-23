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
enum class Scheme { NOT_SET, internet_facing, internal };

namespace SchemeMapper {
AWS_NETWORKSECURITYMANAGER_API Scheme GetSchemeForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForScheme(Scheme value);
}  // namespace SchemeMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
