/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class ExtensionHealthIssueCode {
  NOT_SET,
  InvalidConfiguration,
  ConfigurationConflict,
  AccessDenied,
  ResourceNotFound,
  DependencyUnreachable,
  ExtensionUnhealthy,
  InternalFailure,
  Other
};

namespace ExtensionHealthIssueCodeMapper {
AWS_SAGEMAKER_API ExtensionHealthIssueCode GetExtensionHealthIssueCodeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForExtensionHealthIssueCode(ExtensionHealthIssueCode value);
}  // namespace ExtensionHealthIssueCodeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
