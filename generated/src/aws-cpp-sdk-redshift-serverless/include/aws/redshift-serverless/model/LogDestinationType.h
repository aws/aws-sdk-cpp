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
enum class LogDestinationType { NOT_SET, s3table, cloudwatch };

namespace LogDestinationTypeMapper {
AWS_REDSHIFTSERVERLESS_API LogDestinationType GetLogDestinationTypeForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForLogDestinationType(LogDestinationType value);
}  // namespace LogDestinationTypeMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
