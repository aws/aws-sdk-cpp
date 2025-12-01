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
enum class TokenStatus { NOT_SET, CREATING, OPERATIONAL, DELETING };

namespace TokenStatusMapper {
AWS_ROUTE53GLOBALRESOLVER_API TokenStatus GetTokenStatusForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForTokenStatus(TokenStatus value);
}  // namespace TokenStatusMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
