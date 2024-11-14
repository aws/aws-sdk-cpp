/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{
  enum class SolutionStatus
  {
    NOT_SET,
    Active,
    Inactive,
    Draft
  };

namespace SolutionStatusMapper
{
AWS_PARTNERCENTRALSELLING_API SolutionStatus GetSolutionStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForSolutionStatus(SolutionStatus value);
} // namespace SolutionStatusMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
