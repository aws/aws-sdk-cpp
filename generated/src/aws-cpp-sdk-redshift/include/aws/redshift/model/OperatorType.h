/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/Redshift_EXPORTS.h>

namespace Aws {
namespace Redshift {
namespace Model {
enum class OperatorType { NOT_SET, eq, lt, gt, le, ge, in, between };

namespace OperatorTypeMapper {
AWS_REDSHIFT_API OperatorType GetOperatorTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForOperatorType(OperatorType value);
}  // namespace OperatorTypeMapper
}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
