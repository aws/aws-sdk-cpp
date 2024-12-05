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
  enum class SortBy
  {
    NOT_SET,
    CreatedDate
  };

namespace SortByMapper
{
AWS_PARTNERCENTRALSELLING_API SortBy GetSortByForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForSortBy(SortBy value);
} // namespace SortByMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
