/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AwsOpportunityInsights.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

AwsOpportunityInsights::AwsOpportunityInsights() : 
    m_engagementScore(EngagementScore::NOT_SET),
    m_engagementScoreHasBeenSet(false),
    m_nextBestActionsHasBeenSet(false)
{
}

AwsOpportunityInsights::AwsOpportunityInsights(JsonView jsonValue)
  : AwsOpportunityInsights()
{
  *this = jsonValue;
}

AwsOpportunityInsights& AwsOpportunityInsights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngagementScore"))
  {
    m_engagementScore = EngagementScoreMapper::GetEngagementScoreForName(jsonValue.GetString("EngagementScore"));

    m_engagementScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextBestActions"))
  {
    m_nextBestActions = jsonValue.GetString("NextBestActions");

    m_nextBestActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsOpportunityInsights::Jsonize() const
{
  JsonValue payload;

  if(m_engagementScoreHasBeenSet)
  {
   payload.WithString("EngagementScore", EngagementScoreMapper::GetNameForEngagementScore(m_engagementScore));
  }

  if(m_nextBestActionsHasBeenSet)
  {
   payload.WithString("NextBestActions", m_nextBestActions);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
