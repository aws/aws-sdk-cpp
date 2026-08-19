/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>

namespace Aws {
namespace RedshiftServerless {
namespace Model {
enum class S3TableAction { NOT_SET, Enable, Disable };

namespace S3TableActionMapper {
AWS_REDSHIFTSERVERLESS_API S3TableAction GetS3TableActionForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForS3TableAction(S3TableAction value);
}  // namespace S3TableActionMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
