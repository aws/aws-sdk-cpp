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
  enum class AudioExtractionStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AudioExtractionStatusMapper
{
AWS_QBUSINESS_API AudioExtractionStatus GetAudioExtractionStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForAudioExtractionStatus(AudioExtractionStatus value);
} // namespace AudioExtractionStatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
