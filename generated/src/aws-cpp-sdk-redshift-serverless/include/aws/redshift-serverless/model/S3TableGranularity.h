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
enum class S3TableGranularity { NOT_SET, namespace_, account };

namespace S3TableGranularityMapper {
AWS_REDSHIFTSERVERLESS_API S3TableGranularity GetS3TableGranularityForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForS3TableGranularity(S3TableGranularity value);
}  // namespace S3TableGranularityMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
