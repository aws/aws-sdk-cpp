/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    CONVERSATION,
    DICTATION
  };

namespace TypeMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API Type GetTypeForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
