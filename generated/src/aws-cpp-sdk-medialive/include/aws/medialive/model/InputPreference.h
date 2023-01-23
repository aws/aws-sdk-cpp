/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class InputPreference
  {
    NOT_SET,
    EQUAL_INPUT_PREFERENCE,
    PRIMARY_INPUT_PREFERRED
  };

namespace InputPreferenceMapper
{
AWS_MEDIALIVE_API InputPreference GetInputPreferenceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputPreference(InputPreference value);
} // namespace InputPreferenceMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
