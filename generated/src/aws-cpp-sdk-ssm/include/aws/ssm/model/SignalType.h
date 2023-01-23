/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class SignalType
  {
    NOT_SET,
    Approve,
    Reject,
    StartStep,
    StopStep,
    Resume
  };

namespace SignalTypeMapper
{
AWS_SSM_API SignalType GetSignalTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForSignalType(SignalType value);
} // namespace SignalTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
