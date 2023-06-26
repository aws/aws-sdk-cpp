/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class ChoiceReason
  {
    NOT_SET,
    OUT_OF_SCOPE,
    BUSINESS_PRIORITIES,
    ARCHITECTURE_CONSTRAINTS,
    OTHER,
    NONE
  };

namespace ChoiceReasonMapper
{
AWS_WELLARCHITECTED_API ChoiceReason GetChoiceReasonForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForChoiceReason(ChoiceReason value);
} // namespace ChoiceReasonMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
