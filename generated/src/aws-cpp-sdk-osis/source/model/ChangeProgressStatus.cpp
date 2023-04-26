/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/ChangeProgressStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

ChangeProgressStatus::ChangeProgressStatus() : 
    m_startTimeHasBeenSet(false),
    m_status(ChangeProgressStatuses::NOT_SET),
    m_statusHasBeenSet(false),
    m_totalNumberOfStages(0),
    m_totalNumberOfStagesHasBeenSet(false),
    m_changeProgressStagesHasBeenSet(false)
{
}

ChangeProgressStatus::ChangeProgressStatus(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_status(ChangeProgressStatuses::NOT_SET),
    m_statusHasBeenSet(false),
    m_totalNumberOfStages(0),
    m_totalNumberOfStagesHasBeenSet(false),
    m_changeProgressStagesHasBeenSet(false)
{
  *this = jsonValue;
}

ChangeProgressStatus& ChangeProgressStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ChangeProgressStatusesMapper::GetChangeProgressStatusesForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalNumberOfStages"))
  {
    m_totalNumberOfStages = jsonValue.GetInteger("TotalNumberOfStages");

    m_totalNumberOfStagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChangeProgressStages"))
  {
    Aws::Utils::Array<JsonView> changeProgressStagesJsonList = jsonValue.GetArray("ChangeProgressStages");
    for(unsigned changeProgressStagesIndex = 0; changeProgressStagesIndex < changeProgressStagesJsonList.GetLength(); ++changeProgressStagesIndex)
    {
      m_changeProgressStages.push_back(changeProgressStagesJsonList[changeProgressStagesIndex].AsObject());
    }
    m_changeProgressStagesHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangeProgressStatus::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ChangeProgressStatusesMapper::GetNameForChangeProgressStatuses(m_status));
  }

  if(m_totalNumberOfStagesHasBeenSet)
  {
   payload.WithInteger("TotalNumberOfStages", m_totalNumberOfStages);

  }

  if(m_changeProgressStagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> changeProgressStagesJsonList(m_changeProgressStages.size());
   for(unsigned changeProgressStagesIndex = 0; changeProgressStagesIndex < changeProgressStagesJsonList.GetLength(); ++changeProgressStagesIndex)
   {
     changeProgressStagesJsonList[changeProgressStagesIndex].AsObject(m_changeProgressStages[changeProgressStagesIndex].Jsonize());
   }
   payload.WithArray("ChangeProgressStages", std::move(changeProgressStagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
