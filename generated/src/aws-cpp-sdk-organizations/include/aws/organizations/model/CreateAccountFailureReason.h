/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class CreateAccountFailureReason
  {
    NOT_SET,
    ACCOUNT_LIMIT_EXCEEDED,
    EMAIL_ALREADY_EXISTS,
    INVALID_ADDRESS,
    INVALID_EMAIL,
    CONCURRENT_ACCOUNT_MODIFICATION,
    INTERNAL_FAILURE,
    GOVCLOUD_ACCOUNT_ALREADY_EXISTS,
    MISSING_BUSINESS_VALIDATION,
    FAILED_BUSINESS_VALIDATION,
    PENDING_BUSINESS_VALIDATION,
    INVALID_IDENTITY_FOR_BUSINESS_VALIDATION,
    UNKNOWN_BUSINESS_VALIDATION,
    MISSING_PAYMENT_INSTRUMENT,
    INVALID_PAYMENT_INSTRUMENT,
    UPDATE_EXISTING_RESOURCE_POLICY_WITH_TAGS_NOT_SUPPORTED
  };

namespace CreateAccountFailureReasonMapper
{
AWS_ORGANIZATIONS_API CreateAccountFailureReason GetCreateAccountFailureReasonForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForCreateAccountFailureReason(CreateAccountFailureReason value);
} // namespace CreateAccountFailureReasonMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
