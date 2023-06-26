/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/LongTermPricingListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

LongTermPricingListEntry::LongTermPricingListEntry() : 
    m_longTermPricingIdHasBeenSet(false),
    m_longTermPricingEndDateHasBeenSet(false),
    m_longTermPricingStartDateHasBeenSet(false),
    m_longTermPricingType(LongTermPricingType::NOT_SET),
    m_longTermPricingTypeHasBeenSet(false),
    m_currentActiveJobHasBeenSet(false),
    m_replacementJobHasBeenSet(false),
    m_isLongTermPricingAutoRenew(false),
    m_isLongTermPricingAutoRenewHasBeenSet(false),
    m_longTermPricingStatusHasBeenSet(false),
    m_snowballType(SnowballType::NOT_SET),
    m_snowballTypeHasBeenSet(false),
    m_jobIdsHasBeenSet(false)
{
}

LongTermPricingListEntry::LongTermPricingListEntry(JsonView jsonValue) : 
    m_longTermPricingIdHasBeenSet(false),
    m_longTermPricingEndDateHasBeenSet(false),
    m_longTermPricingStartDateHasBeenSet(false),
    m_longTermPricingType(LongTermPricingType::NOT_SET),
    m_longTermPricingTypeHasBeenSet(false),
    m_currentActiveJobHasBeenSet(false),
    m_replacementJobHasBeenSet(false),
    m_isLongTermPricingAutoRenew(false),
    m_isLongTermPricingAutoRenewHasBeenSet(false),
    m_longTermPricingStatusHasBeenSet(false),
    m_snowballType(SnowballType::NOT_SET),
    m_snowballTypeHasBeenSet(false),
    m_jobIdsHasBeenSet(false)
{
  *this = jsonValue;
}

LongTermPricingListEntry& LongTermPricingListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LongTermPricingId"))
  {
    m_longTermPricingId = jsonValue.GetString("LongTermPricingId");

    m_longTermPricingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LongTermPricingEndDate"))
  {
    m_longTermPricingEndDate = jsonValue.GetDouble("LongTermPricingEndDate");

    m_longTermPricingEndDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LongTermPricingStartDate"))
  {
    m_longTermPricingStartDate = jsonValue.GetDouble("LongTermPricingStartDate");

    m_longTermPricingStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LongTermPricingType"))
  {
    m_longTermPricingType = LongTermPricingTypeMapper::GetLongTermPricingTypeForName(jsonValue.GetString("LongTermPricingType"));

    m_longTermPricingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentActiveJob"))
  {
    m_currentActiveJob = jsonValue.GetString("CurrentActiveJob");

    m_currentActiveJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplacementJob"))
  {
    m_replacementJob = jsonValue.GetString("ReplacementJob");

    m_replacementJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsLongTermPricingAutoRenew"))
  {
    m_isLongTermPricingAutoRenew = jsonValue.GetBool("IsLongTermPricingAutoRenew");

    m_isLongTermPricingAutoRenewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LongTermPricingStatus"))
  {
    m_longTermPricingStatus = jsonValue.GetString("LongTermPricingStatus");

    m_longTermPricingStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnowballType"))
  {
    m_snowballType = SnowballTypeMapper::GetSnowballTypeForName(jsonValue.GetString("SnowballType"));

    m_snowballTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobIds"))
  {
    Aws::Utils::Array<JsonView> jobIdsJsonList = jsonValue.GetArray("JobIds");
    for(unsigned jobIdsIndex = 0; jobIdsIndex < jobIdsJsonList.GetLength(); ++jobIdsIndex)
    {
      m_jobIds.push_back(jobIdsJsonList[jobIdsIndex].AsString());
    }
    m_jobIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue LongTermPricingListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_longTermPricingIdHasBeenSet)
  {
   payload.WithString("LongTermPricingId", m_longTermPricingId);

  }

  if(m_longTermPricingEndDateHasBeenSet)
  {
   payload.WithDouble("LongTermPricingEndDate", m_longTermPricingEndDate.SecondsWithMSPrecision());
  }

  if(m_longTermPricingStartDateHasBeenSet)
  {
   payload.WithDouble("LongTermPricingStartDate", m_longTermPricingStartDate.SecondsWithMSPrecision());
  }

  if(m_longTermPricingTypeHasBeenSet)
  {
   payload.WithString("LongTermPricingType", LongTermPricingTypeMapper::GetNameForLongTermPricingType(m_longTermPricingType));
  }

  if(m_currentActiveJobHasBeenSet)
  {
   payload.WithString("CurrentActiveJob", m_currentActiveJob);

  }

  if(m_replacementJobHasBeenSet)
  {
   payload.WithString("ReplacementJob", m_replacementJob);

  }

  if(m_isLongTermPricingAutoRenewHasBeenSet)
  {
   payload.WithBool("IsLongTermPricingAutoRenew", m_isLongTermPricingAutoRenew);

  }

  if(m_longTermPricingStatusHasBeenSet)
  {
   payload.WithString("LongTermPricingStatus", m_longTermPricingStatus);

  }

  if(m_snowballTypeHasBeenSet)
  {
   payload.WithString("SnowballType", SnowballTypeMapper::GetNameForSnowballType(m_snowballType));
  }

  if(m_jobIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobIdsJsonList(m_jobIds.size());
   for(unsigned jobIdsIndex = 0; jobIdsIndex < jobIdsJsonList.GetLength(); ++jobIdsIndex)
   {
     jobIdsJsonList[jobIdsIndex].AsString(m_jobIds[jobIdsIndex]);
   }
   payload.WithArray("JobIds", std::move(jobIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
