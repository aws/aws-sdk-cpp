/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>

namespace Aws {
namespace TranscribeService {
namespace Model {
enum class BadRequestExceptionReason {
  NOT_SET,
  audioTooLong,
  audioTooShort,
  unsupportedAudioFormat,
  unsupportedChannelCount,
  invalidAudio,
  audioFileTooLarge,
  mediaDownloadFailed
};

namespace BadRequestExceptionReasonMapper {
AWS_TRANSCRIBESERVICE_API BadRequestExceptionReason GetBadRequestExceptionReasonForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForBadRequestExceptionReason(BadRequestExceptionReason value);
}  // namespace BadRequestExceptionReasonMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
