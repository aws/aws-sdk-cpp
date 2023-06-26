/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace tnb
{
namespace Model
{
  enum class OnboardingState
  {
    NOT_SET,
    CREATED,
    ONBOARDED,
    ERROR_
  };

namespace OnboardingStateMapper
{
AWS_TNB_API OnboardingState GetOnboardingStateForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForOnboardingState(OnboardingState value);
} // namespace OnboardingStateMapper
} // namespace Model
} // namespace tnb
} // namespace Aws
