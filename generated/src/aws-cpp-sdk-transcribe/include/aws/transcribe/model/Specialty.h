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
  enum class Specialty
  {
    NOT_SET,
    PRIMARYCARE
  };

namespace SpecialtyMapper
{
AWS_TRANSCRIBESERVICE_API Specialty GetSpecialtyForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForSpecialty(Specialty value);
} // namespace SpecialtyMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
