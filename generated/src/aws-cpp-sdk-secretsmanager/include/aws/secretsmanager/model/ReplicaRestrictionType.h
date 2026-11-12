/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>

namespace Aws {
namespace SecretsManager {
namespace Model {
enum class ReplicaRestrictionType { NOT_SET, SameOrg, NoRestriction };

namespace ReplicaRestrictionTypeMapper {
AWS_SECRETSMANAGER_API ReplicaRestrictionType GetReplicaRestrictionTypeForName(const Aws::String& name);

AWS_SECRETSMANAGER_API Aws::String GetNameForReplicaRestrictionType(ReplicaRestrictionType value);
}  // namespace ReplicaRestrictionTypeMapper
}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
