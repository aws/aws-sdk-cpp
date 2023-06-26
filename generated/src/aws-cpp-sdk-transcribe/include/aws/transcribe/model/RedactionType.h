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
  enum class RedactionType
  {
    NOT_SET,
    PII
  };

namespace RedactionTypeMapper
{
AWS_TRANSCRIBESERVICE_API RedactionType GetRedactionTypeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForRedactionType(RedactionType value);
} // namespace RedactionTypeMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
