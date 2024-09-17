/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class KmsKeyState
  {
    NOT_SET,
    DISABLED,
    PENDING_DELETION,
    PENDING_IMPORT,
    UNAVAILABLE,
    CREATING
  };

namespace KmsKeyStateMapper
{
AWS_SFN_API KmsKeyState GetKmsKeyStateForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForKmsKeyState(KmsKeyState value);
} // namespace KmsKeyStateMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
