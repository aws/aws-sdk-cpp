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
  enum class VnfInstantiationState
  {
    NOT_SET,
    INSTANTIATED,
    NOT_INSTANTIATED
  };

namespace VnfInstantiationStateMapper
{
AWS_TNB_API VnfInstantiationState GetVnfInstantiationStateForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForVnfInstantiationState(VnfInstantiationState value);
} // namespace VnfInstantiationStateMapper
} // namespace Model
} // namespace tnb
} // namespace Aws
