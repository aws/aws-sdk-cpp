/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class NumberAttributeBoostingType { NOT_SET, PRIORITIZE_LARGER_VALUES, PRIORITIZE_SMALLER_VALUES };

namespace NumberAttributeBoostingTypeMapper {
AWS_QBUSINESS_API NumberAttributeBoostingType GetNumberAttributeBoostingTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForNumberAttributeBoostingType(NumberAttributeBoostingType value);
}  // namespace NumberAttributeBoostingTypeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
