/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Personalize
{
namespace Model
{
  enum class BatchInferenceJobMode
  {
    NOT_SET,
    BATCH_INFERENCE,
    THEME_GENERATION
  };

namespace BatchInferenceJobModeMapper
{
AWS_PERSONALIZE_API BatchInferenceJobMode GetBatchInferenceJobModeForName(const Aws::String& name);

AWS_PERSONALIZE_API Aws::String GetNameForBatchInferenceJobMode(BatchInferenceJobMode value);
} // namespace BatchInferenceJobModeMapper
} // namespace Model
} // namespace Personalize
} // namespace Aws
