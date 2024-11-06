/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{
  enum class BatchGetPolicyErrorCode
  {
    NOT_SET,
    POLICY_STORE_NOT_FOUND,
    POLICY_NOT_FOUND
  };

namespace BatchGetPolicyErrorCodeMapper
{
AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyErrorCode GetBatchGetPolicyErrorCodeForName(const Aws::String& name);

AWS_VERIFIEDPERMISSIONS_API Aws::String GetNameForBatchGetPolicyErrorCode(BatchGetPolicyErrorCode value);
} // namespace BatchGetPolicyErrorCodeMapper
} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
