/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class BulkEmailStatus
  {
    NOT_SET,
    SUCCESS,
    MESSAGE_REJECTED,
    MAIL_FROM_DOMAIN_NOT_VERIFIED,
    CONFIGURATION_SET_NOT_FOUND,
    TEMPLATE_NOT_FOUND,
    ACCOUNT_SUSPENDED,
    ACCOUNT_THROTTLED,
    ACCOUNT_DAILY_QUOTA_EXCEEDED,
    INVALID_SENDING_POOL_NAME,
    ACCOUNT_SENDING_PAUSED,
    CONFIGURATION_SET_SENDING_PAUSED,
    INVALID_PARAMETER,
    TRANSIENT_FAILURE,
    FAILED
  };

namespace BulkEmailStatusMapper
{
AWS_SESV2_API BulkEmailStatus GetBulkEmailStatusForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForBulkEmailStatus(BulkEmailStatus value);
} // namespace BulkEmailStatusMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
