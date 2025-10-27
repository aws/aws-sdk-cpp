/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class AttachmentsControlMode { NOT_SET, ENABLED, DISABLED };

namespace AttachmentsControlModeMapper {
AWS_QBUSINESS_API AttachmentsControlMode GetAttachmentsControlModeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForAttachmentsControlMode(AttachmentsControlMode value);
}  // namespace AttachmentsControlModeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
