/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
enum class ProfileResourceStatus { NOT_SET, CREATING, OPERATIONAL, UPDATING, ENABLING, DISABLING, DISABLED, DELETING };

namespace ProfileResourceStatusMapper {
AWS_ROUTE53GLOBALRESOLVER_API ProfileResourceStatus GetProfileResourceStatusForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForProfileResourceStatus(ProfileResourceStatus value);
}  // namespace ProfileResourceStatusMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
