/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MPA
{
namespace Model
{
  enum class ApprovalTeamStatusCode
  {
    NOT_SET,
    VALIDATING,
    PENDING_ACTIVATION,
    FAILED_VALIDATION,
    FAILED_ACTIVATION,
    UPDATE_PENDING_APPROVAL,
    UPDATE_PENDING_ACTIVATION,
    UPDATE_FAILED_APPROVAL,
    UPDATE_FAILED_ACTIVATION,
    UPDATE_FAILED_VALIDATION,
    DELETE_PENDING_APPROVAL,
    DELETE_FAILED_APPROVAL,
    DELETE_FAILED_VALIDATION
  };

namespace ApprovalTeamStatusCodeMapper
{
AWS_MPA_API ApprovalTeamStatusCode GetApprovalTeamStatusCodeForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForApprovalTeamStatusCode(ApprovalTeamStatusCode value);
} // namespace ApprovalTeamStatusCodeMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
