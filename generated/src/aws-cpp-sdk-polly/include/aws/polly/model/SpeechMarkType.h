/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Polly
{
namespace Model
{
  enum class SpeechMarkType
  {
    NOT_SET,
    sentence,
    ssml,
    viseme,
    word
  };

namespace SpeechMarkTypeMapper
{
AWS_POLLY_API SpeechMarkType GetSpeechMarkTypeForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForSpeechMarkType(SpeechMarkType value);
} // namespace SpeechMarkTypeMapper
} // namespace Model
} // namespace Polly
} // namespace Aws
