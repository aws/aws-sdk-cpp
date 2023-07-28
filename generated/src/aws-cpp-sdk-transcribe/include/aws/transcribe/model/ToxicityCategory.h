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
  enum class ToxicityCategory
  {
    NOT_SET,
    ALL
  };

namespace ToxicityCategoryMapper
{
AWS_TRANSCRIBESERVICE_API ToxicityCategory GetToxicityCategoryForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForToxicityCategory(ToxicityCategory value);
} // namespace ToxicityCategoryMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
