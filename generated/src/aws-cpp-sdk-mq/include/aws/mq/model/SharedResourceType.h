/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/MQ_EXPORTS.h>

namespace Aws {
namespace MQ {
namespace Model {
enum class SharedResourceType { NOT_SET, RESOURCE_SHARE, RESOURCE };

namespace SharedResourceTypeMapper {
AWS_MQ_API SharedResourceType GetSharedResourceTypeForName(const Aws::String& name);

AWS_MQ_API Aws::String GetNameForSharedResourceType(SharedResourceType value);
}  // namespace SharedResourceTypeMapper
}  // namespace Model
}  // namespace MQ
}  // namespace Aws
