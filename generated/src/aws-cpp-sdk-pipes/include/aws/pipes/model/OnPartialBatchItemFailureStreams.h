/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class OnPartialBatchItemFailureStreams
  {
    NOT_SET,
    AUTOMATIC_BISECT
  };

namespace OnPartialBatchItemFailureStreamsMapper
{
AWS_PIPES_API OnPartialBatchItemFailureStreams GetOnPartialBatchItemFailureStreamsForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForOnPartialBatchItemFailureStreams(OnPartialBatchItemFailureStreams value);
} // namespace OnPartialBatchItemFailureStreamsMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
