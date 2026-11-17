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
enum class PublicIpStatus { NOT_SET, ENABLED_RESERVED, DISABLED_RESERVED, DISABLED_RELEASED };

namespace PublicIpStatusMapper {
AWS_ROUTE53GLOBALRESOLVER_API PublicIpStatus GetPublicIpStatusForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForPublicIpStatus(PublicIpStatus value);
}  // namespace PublicIpStatusMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
