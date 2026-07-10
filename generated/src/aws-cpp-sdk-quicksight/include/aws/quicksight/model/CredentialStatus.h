/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class CredentialStatus { NOT_SET, CONNECTED, AUTH_FAILED, NOT_VERIFIED };

namespace CredentialStatusMapper {
AWS_QUICKSIGHT_API CredentialStatus GetCredentialStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForCredentialStatus(CredentialStatus value);
}  // namespace CredentialStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
