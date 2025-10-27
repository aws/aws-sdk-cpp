/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
enum class SolutionSortName { NOT_SET, Identifier, Name, Status, Category, CreatedDate };

namespace SolutionSortNameMapper {
AWS_PARTNERCENTRALSELLING_API SolutionSortName GetSolutionSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForSolutionSortName(SolutionSortName value);
}  // namespace SolutionSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
