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
  enum class Type
  {
    NOT_SET,
    CONVERSATION,
    DICTATION
  };

namespace TypeMapper
{
AWS_TRANSCRIBESERVICE_API Type GetTypeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
