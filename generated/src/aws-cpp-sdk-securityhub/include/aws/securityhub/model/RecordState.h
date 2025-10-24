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
enum class RecordState { NOT_SET, ACTIVE, ARCHIVED };

namespace RecordStateMapper {
AWS_SECURITYHUB_API RecordState GetRecordStateForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForRecordState(RecordState value);
}  // namespace RecordStateMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
