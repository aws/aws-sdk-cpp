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
  enum class TrainingMode
  {
    NOT_SET,
    FULL,
    UPDATE
  };

namespace TrainingModeMapper
{
AWS_PERSONALIZE_API TrainingMode GetTrainingModeForName(const Aws::String& name);

AWS_PERSONALIZE_API Aws::String GetNameForTrainingMode(TrainingMode value);
} // namespace TrainingModeMapper
} // namespace Model
} // namespace Personalize
} // namespace Aws
