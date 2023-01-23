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
  enum class Specialty
  {
    NOT_SET,
    PRIMARYCARE,
    CARDIOLOGY,
    NEUROLOGY,
    ONCOLOGY,
    RADIOLOGY,
    UROLOGY
  };

namespace SpecialtyMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API Specialty GetSpecialtyForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForSpecialty(Specialty value);
} // namespace SpecialtyMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
