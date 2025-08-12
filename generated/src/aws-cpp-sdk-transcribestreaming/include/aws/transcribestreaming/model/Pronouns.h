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
  enum class Pronouns
  {
    NOT_SET,
    HE_HIM,
    SHE_HER,
    THEY_THEM
  };

namespace PronounsMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API Pronouns GetPronounsForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForPronouns(Pronouns value);
} // namespace PronounsMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
