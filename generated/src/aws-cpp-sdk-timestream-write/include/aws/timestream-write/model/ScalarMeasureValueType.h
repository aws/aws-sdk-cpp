/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>

namespace Aws {
namespace TimestreamWrite {
namespace Model {
enum class ScalarMeasureValueType { NOT_SET, DOUBLE, BIGINT, BOOLEAN, VARCHAR, TIMESTAMP };

namespace ScalarMeasureValueTypeMapper {
AWS_TIMESTREAMWRITE_API ScalarMeasureValueType GetScalarMeasureValueTypeForName(const Aws::String& name);

AWS_TIMESTREAMWRITE_API Aws::String GetNameForScalarMeasureValueType(ScalarMeasureValueType value);
}  // namespace ScalarMeasureValueTypeMapper
}  // namespace Model
}  // namespace TimestreamWrite
}  // namespace Aws
