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
  enum class ListTasksSortName
  {
    NOT_SET,
    StartTime
  };

namespace ListTasksSortNameMapper
{
AWS_PARTNERCENTRALSELLING_API ListTasksSortName GetListTasksSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForListTasksSortName(ListTasksSortName value);
} // namespace ListTasksSortNameMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
