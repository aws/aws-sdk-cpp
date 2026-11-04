/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

namespace Aws {
namespace S3Tables {
namespace Model {
enum class IncompatibleValuesPolicy { NOT_SET, fail, setNull };

namespace IncompatibleValuesPolicyMapper {
AWS_S3TABLES_API IncompatibleValuesPolicy GetIncompatibleValuesPolicyForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForIncompatibleValuesPolicy(IncompatibleValuesPolicy value);
}  // namespace IncompatibleValuesPolicyMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
