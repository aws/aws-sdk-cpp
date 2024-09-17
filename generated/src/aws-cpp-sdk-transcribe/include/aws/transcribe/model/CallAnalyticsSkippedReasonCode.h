/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{
  enum class CallAnalyticsSkippedReasonCode
  {
    NOT_SET,
    INSUFFICIENT_CONVERSATION_CONTENT,
    FAILED_SAFETY_GUIDELINES
  };

namespace CallAnalyticsSkippedReasonCodeMapper
{
AWS_TRANSCRIBESERVICE_API CallAnalyticsSkippedReasonCode GetCallAnalyticsSkippedReasonCodeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForCallAnalyticsSkippedReasonCode(CallAnalyticsSkippedReasonCode value);
} // namespace CallAnalyticsSkippedReasonCodeMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
