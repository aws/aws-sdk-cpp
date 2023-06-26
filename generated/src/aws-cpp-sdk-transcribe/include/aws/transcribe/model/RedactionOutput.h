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
  enum class RedactionOutput
  {
    NOT_SET,
    redacted,
    redacted_and_unredacted
  };

namespace RedactionOutputMapper
{
AWS_TRANSCRIBESERVICE_API RedactionOutput GetRedactionOutputForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForRedactionOutput(RedactionOutput value);
} // namespace RedactionOutputMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
