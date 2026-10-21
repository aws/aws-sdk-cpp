/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

namespace Aws {
namespace RDS {
namespace Model {
enum class EndDateType { NOT_SET, unlimited, limited };

namespace EndDateTypeMapper {
AWS_RDS_API EndDateType GetEndDateTypeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForEndDateType(EndDateType value);
}  // namespace EndDateTypeMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
