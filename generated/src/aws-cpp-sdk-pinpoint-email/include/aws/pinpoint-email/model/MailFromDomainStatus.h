/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{
  enum class MailFromDomainStatus
  {
    NOT_SET,
    PENDING,
    SUCCESS,
    FAILED,
    TEMPORARY_FAILURE
  };

namespace MailFromDomainStatusMapper
{
AWS_PINPOINTEMAIL_API MailFromDomainStatus GetMailFromDomainStatusForName(const Aws::String& name);

AWS_PINPOINTEMAIL_API Aws::String GetNameForMailFromDomainStatus(MailFromDomainStatus value);
} // namespace MailFromDomainStatusMapper
} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
