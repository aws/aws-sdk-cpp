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
enum class EdnsClientSubnetType { NOT_SET, ENABLED, DISABLED };

namespace EdnsClientSubnetTypeMapper {
AWS_ROUTE53GLOBALRESOLVER_API EdnsClientSubnetType GetEdnsClientSubnetTypeForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForEdnsClientSubnetType(EdnsClientSubnetType value);
}  // namespace EdnsClientSubnetTypeMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
