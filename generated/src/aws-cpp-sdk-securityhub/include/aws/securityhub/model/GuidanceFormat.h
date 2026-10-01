/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class GuidanceFormat { NOT_SET, All, AwsCli, Cli, Python, Terraform, Cdk, CloudFormation, IaC, Template };

namespace GuidanceFormatMapper {
AWS_SECURITYHUB_API GuidanceFormat GetGuidanceFormatForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForGuidanceFormat(GuidanceFormat value);
}  // namespace GuidanceFormatMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
