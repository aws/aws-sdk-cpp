/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{
  enum class DnsRecordVerificationStatus
  {
    NOT_SET,
    PENDING,
    VERIFIED,
    FAILED
  };

namespace DnsRecordVerificationStatusMapper
{
AWS_WORKMAIL_API DnsRecordVerificationStatus GetDnsRecordVerificationStatusForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForDnsRecordVerificationStatus(DnsRecordVerificationStatus value);
} // namespace DnsRecordVerificationStatusMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
