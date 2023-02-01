/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CampaignState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

CampaignState::CampaignState() : 
    m_campaignStatus(CampaignStatus::NOT_SET),
    m_campaignStatusHasBeenSet(false)
{
}

CampaignState::CampaignState(JsonView jsonValue) : 
    m_campaignStatus(CampaignStatus::NOT_SET),
    m_campaignStatusHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignState& CampaignState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CampaignStatus"))
  {
    m_campaignStatus = CampaignStatusMapper::GetCampaignStatusForName(jsonValue.GetString("CampaignStatus"));

    m_campaignStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue CampaignState::Jsonize() const
{
  JsonValue payload;

  if(m_campaignStatusHasBeenSet)
  {
   payload.WithString("CampaignStatus", CampaignStatusMapper::GetNameForCampaignStatus(m_campaignStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
