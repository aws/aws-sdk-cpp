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
  enum class BaseModelName
  {
    NOT_SET,
    NarrowBand,
    WideBand
  };

namespace BaseModelNameMapper
{
AWS_TRANSCRIBESERVICE_API BaseModelName GetBaseModelNameForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForBaseModelName(BaseModelName value);
} // namespace BaseModelNameMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
