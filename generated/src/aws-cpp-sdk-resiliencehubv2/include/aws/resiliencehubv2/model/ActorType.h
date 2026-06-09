/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class ActorType { NOT_SET, USER, SYSTEM };

namespace ActorTypeMapper {
AWS_RESILIENCEHUBV2_API ActorType GetActorTypeForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForActorType(ActorType value);
}  // namespace ActorTypeMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
