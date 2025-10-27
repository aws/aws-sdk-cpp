/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>

namespace Aws {
namespace SagemakerEdgeManager {
namespace Model {
enum class ChecksumType { NOT_SET, SHA1 };

namespace ChecksumTypeMapper {
AWS_SAGEMAKEREDGEMANAGER_API ChecksumType GetChecksumTypeForName(const Aws::String& name);

AWS_SAGEMAKEREDGEMANAGER_API Aws::String GetNameForChecksumType(ChecksumType value);
}  // namespace ChecksumTypeMapper
}  // namespace Model
}  // namespace SagemakerEdgeManager
}  // namespace Aws
