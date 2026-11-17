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
enum class UpdateIpAddressOperation { NOT_SET, ADD, REMOVE, UPDATE };

namespace UpdateIpAddressOperationMapper {
AWS_ROUTE53GLOBALRESOLVER_API UpdateIpAddressOperation GetUpdateIpAddressOperationForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForUpdateIpAddressOperation(UpdateIpAddressOperation value);
}  // namespace UpdateIpAddressOperationMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
