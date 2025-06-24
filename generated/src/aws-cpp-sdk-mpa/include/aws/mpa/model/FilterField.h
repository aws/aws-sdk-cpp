/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MPA
{
namespace Model
{
  enum class FilterField
  {
    NOT_SET,
    ActionName,
    ApprovalTeamName,
    VotingTime,
    Vote,
    SessionStatus,
    InitiationTime
  };

namespace FilterFieldMapper
{
AWS_MPA_API FilterField GetFilterFieldForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForFilterField(FilterField value);
} // namespace FilterFieldMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
