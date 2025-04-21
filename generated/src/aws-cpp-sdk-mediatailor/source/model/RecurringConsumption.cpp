/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/RecurringConsumption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

RecurringConsumption::RecurringConsumption(JsonView jsonValue)
{
  *this = jsonValue;
}

RecurringConsumption& RecurringConsumption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetrievedAdExpirationSeconds"))
  {
    m_retrievedAdExpirationSeconds = jsonValue.GetInteger("RetrievedAdExpirationSeconds");
    m_retrievedAdExpirationSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailMatchingCriteria"))
  {
    Aws::Utils::Array<JsonView> availMatchingCriteriaJsonList = jsonValue.GetArray("AvailMatchingCriteria");
    for(unsigned availMatchingCriteriaIndex = 0; availMatchingCriteriaIndex < availMatchingCriteriaJsonList.GetLength(); ++availMatchingCriteriaIndex)
    {
      m_availMatchingCriteria.push_back(availMatchingCriteriaJsonList[availMatchingCriteriaIndex].AsObject());
    }
    m_availMatchingCriteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue RecurringConsumption::Jsonize() const
{
  JsonValue payload;

  if(m_retrievedAdExpirationSecondsHasBeenSet)
  {
   payload.WithInteger("RetrievedAdExpirationSeconds", m_retrievedAdExpirationSeconds);

  }

  if(m_availMatchingCriteriaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availMatchingCriteriaJsonList(m_availMatchingCriteria.size());
   for(unsigned availMatchingCriteriaIndex = 0; availMatchingCriteriaIndex < availMatchingCriteriaJsonList.GetLength(); ++availMatchingCriteriaIndex)
   {
     availMatchingCriteriaJsonList[availMatchingCriteriaIndex].AsObject(m_availMatchingCriteria[availMatchingCriteriaIndex].Jsonize());
   }
   payload.WithArray("AvailMatchingCriteria", std::move(availMatchingCriteriaJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
