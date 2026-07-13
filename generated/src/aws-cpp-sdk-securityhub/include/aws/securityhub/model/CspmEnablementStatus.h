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
enum class CspmEnablementStatus { NOT_SET, ENABLED, PENDING_ENABLEMENT, PENDING_UPDATE, PENDING_DELETION };

namespace CspmEnablementStatusMapper {
AWS_SECURITYHUB_API CspmEnablementStatus GetCspmEnablementStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForCspmEnablementStatus(CspmEnablementStatus value);
}  // namespace CspmEnablementStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
