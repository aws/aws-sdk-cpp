/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ReviewReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

ReviewReport::ReviewReport() : 
    m_reviewResultsHasBeenSet(false),
    m_reviewActionsHasBeenSet(false)
{
}

ReviewReport::ReviewReport(JsonView jsonValue) : 
    m_reviewResultsHasBeenSet(false),
    m_reviewActionsHasBeenSet(false)
{
  *this = jsonValue;
}

ReviewReport& ReviewReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReviewResults"))
  {
    Aws::Utils::Array<JsonView> reviewResultsJsonList = jsonValue.GetArray("ReviewResults");
    for(unsigned reviewResultsIndex = 0; reviewResultsIndex < reviewResultsJsonList.GetLength(); ++reviewResultsIndex)
    {
      m_reviewResults.push_back(reviewResultsJsonList[reviewResultsIndex].AsObject());
    }
    m_reviewResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReviewActions"))
  {
    Aws::Utils::Array<JsonView> reviewActionsJsonList = jsonValue.GetArray("ReviewActions");
    for(unsigned reviewActionsIndex = 0; reviewActionsIndex < reviewActionsJsonList.GetLength(); ++reviewActionsIndex)
    {
      m_reviewActions.push_back(reviewActionsJsonList[reviewActionsIndex].AsObject());
    }
    m_reviewActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReviewReport::Jsonize() const
{
  JsonValue payload;

  if(m_reviewResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reviewResultsJsonList(m_reviewResults.size());
   for(unsigned reviewResultsIndex = 0; reviewResultsIndex < reviewResultsJsonList.GetLength(); ++reviewResultsIndex)
   {
     reviewResultsJsonList[reviewResultsIndex].AsObject(m_reviewResults[reviewResultsIndex].Jsonize());
   }
   payload.WithArray("ReviewResults", std::move(reviewResultsJsonList));

  }

  if(m_reviewActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reviewActionsJsonList(m_reviewActions.size());
   for(unsigned reviewActionsIndex = 0; reviewActionsIndex < reviewActionsJsonList.GetLength(); ++reviewActionsIndex)
   {
     reviewActionsJsonList[reviewActionsIndex].AsObject(m_reviewActions[reviewActionsIndex].Jsonize());
   }
   payload.WithArray("ReviewActions", std::move(reviewActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws
