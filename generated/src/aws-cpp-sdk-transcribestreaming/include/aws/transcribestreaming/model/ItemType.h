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
  enum class ItemType
  {
    NOT_SET,
    pronunciation,
    punctuation
  };

namespace ItemTypeMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API ItemType GetItemTypeForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForItemType(ItemType value);
} // namespace ItemTypeMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
