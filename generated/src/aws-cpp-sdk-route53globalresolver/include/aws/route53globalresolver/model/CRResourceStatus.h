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
enum class CRResourceStatus { NOT_SET, CREATING, OPERATIONAL, UPDATING, DELETING };

namespace CRResourceStatusMapper {
AWS_ROUTE53GLOBALRESOLVER_API CRResourceStatus GetCRResourceStatusForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForCRResourceStatus(CRResourceStatus value);
}  // namespace CRResourceStatusMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
