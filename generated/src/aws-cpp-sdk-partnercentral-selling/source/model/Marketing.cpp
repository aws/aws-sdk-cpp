/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/Marketing.h>
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

Marketing::Marketing(JsonView jsonValue)
{
  *this = jsonValue;
}

Marketing& Marketing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CampaignName"))
  {
    m_campaignName = jsonValue.GetString("CampaignName");
    m_campaignNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Source"))
  {
    m_source = MarketingSourceMapper::GetMarketingSourceForName(jsonValue.GetString("Source"));
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UseCases"))
  {
    Aws::Utils::Array<JsonView> useCasesJsonList = jsonValue.GetArray("UseCases");
    for(unsigned useCasesIndex = 0; useCasesIndex < useCasesJsonList.GetLength(); ++useCasesIndex)
    {
      m_useCases.push_back(useCasesJsonList[useCasesIndex].AsString());
    }
    m_useCasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Channels"))
  {
    Aws::Utils::Array<JsonView> channelsJsonList = jsonValue.GetArray("Channels");
    for(unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex)
    {
      m_channels.push_back(ChannelMapper::GetChannelForName(channelsJsonList[channelsIndex].AsString()));
    }
    m_channelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AwsFundingUsed"))
  {
    m_awsFundingUsed = AwsFundingUsedMapper::GetAwsFundingUsedForName(jsonValue.GetString("AwsFundingUsed"));
    m_awsFundingUsedHasBeenSet = true;
  }
  return *this;
}

JsonValue Marketing::Jsonize() const
{
  JsonValue payload;

  if(m_campaignNameHasBeenSet)
  {
   payload.WithString("CampaignName", m_campaignName);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", MarketingSourceMapper::GetNameForMarketingSource(m_source));
  }

  if(m_useCasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> useCasesJsonList(m_useCases.size());
   for(unsigned useCasesIndex = 0; useCasesIndex < useCasesJsonList.GetLength(); ++useCasesIndex)
   {
     useCasesJsonList[useCasesIndex].AsString(m_useCases[useCasesIndex]);
   }
   payload.WithArray("UseCases", std::move(useCasesJsonList));

  }

  if(m_channelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelsJsonList(m_channels.size());
   for(unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex)
   {
     channelsJsonList[channelsIndex].AsString(ChannelMapper::GetNameForChannel(m_channels[channelsIndex]));
   }
   payload.WithArray("Channels", std::move(channelsJsonList));

  }

  if(m_awsFundingUsedHasBeenSet)
  {
   payload.WithString("AwsFundingUsed", AwsFundingUsedMapper::GetNameForAwsFundingUsed(m_awsFundingUsed));
  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
