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
  enum class Stage
  {
    NOT_SET,
    Prospect,
    Qualified,
    Technical_Validation,
    Business_Validation,
    Committed,
    Launched,
    Closed_Lost
  };

namespace StageMapper
{
AWS_PARTNERCENTRALSELLING_API Stage GetStageForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForStage(Stage value);
} // namespace StageMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
