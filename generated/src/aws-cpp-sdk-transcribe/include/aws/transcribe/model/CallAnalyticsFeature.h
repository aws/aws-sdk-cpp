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
  enum class CallAnalyticsFeature
  {
    NOT_SET,
    GENERATIVE_SUMMARIZATION
  };

namespace CallAnalyticsFeatureMapper
{
AWS_TRANSCRIBESERVICE_API CallAnalyticsFeature GetCallAnalyticsFeatureForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForCallAnalyticsFeature(CallAnalyticsFeature value);
} // namespace CallAnalyticsFeatureMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
