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
  enum class ModelStatus
  {
    NOT_SET,
    IN_PROGRESS,
    FAILED,
    COMPLETED
  };

namespace ModelStatusMapper
{
AWS_TRANSCRIBESERVICE_API ModelStatus GetModelStatusForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForModelStatus(ModelStatus value);
} // namespace ModelStatusMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
