/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class AudioExtractionType
  {
    NOT_SET,
    TRANSCRIPT,
    SUMMARY
  };

namespace AudioExtractionTypeMapper
{
AWS_QBUSINESS_API AudioExtractionType GetAudioExtractionTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForAudioExtractionType(AudioExtractionType value);
} // namespace AudioExtractionTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
