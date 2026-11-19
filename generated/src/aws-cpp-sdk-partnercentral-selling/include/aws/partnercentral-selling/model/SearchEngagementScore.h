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
enum class SearchEngagementScore { NOT_SET, High, Medium, Low };

namespace SearchEngagementScoreMapper {
AWS_PARTNERCENTRALSELLING_API SearchEngagementScore GetSearchEngagementScoreForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForSearchEngagementScore(SearchEngagementScore value);
}  // namespace SearchEngagementScoreMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
