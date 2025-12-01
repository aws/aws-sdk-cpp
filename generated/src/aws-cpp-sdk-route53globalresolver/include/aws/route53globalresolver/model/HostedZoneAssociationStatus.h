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
enum class HostedZoneAssociationStatus { NOT_SET, CREATING, OPERATIONAL, DELETING };

namespace HostedZoneAssociationStatusMapper {
AWS_ROUTE53GLOBALRESOLVER_API HostedZoneAssociationStatus GetHostedZoneAssociationStatusForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForHostedZoneAssociationStatus(HostedZoneAssociationStatus value);
}  // namespace HostedZoneAssociationStatusMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
