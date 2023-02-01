/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ChangeProgressStatusDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

ChangeProgressStatusDetails::ChangeProgressStatusDetails() : 
    m_changeIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(OverallChangeStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_pendingPropertiesHasBeenSet(false),
    m_completedPropertiesHasBeenSet(false),
    m_totalNumberOfStages(0),
    m_totalNumberOfStagesHasBeenSet(false),
    m_changeProgressStagesHasBeenSet(false)
{
}

ChangeProgressStatusDetails::ChangeProgressStatusDetails(JsonView jsonValue) : 
    m_changeIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(OverallChangeStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_pendingPropertiesHasBeenSet(false),
    m_completedPropertiesHasBeenSet(false),
    m_totalNumberOfStages(0),
    m_totalNumberOfStagesHasBeenSet(false),
    m_changeProgressStagesHasBeenSet(false)
{
  *this = jsonValue;
}

ChangeProgressStatusDetails& ChangeProgressStatusDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChangeId"))
  {
    m_changeId = jsonValue.GetString("ChangeId");

    m_changeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OverallChangeStatusMapper::GetOverallChangeStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingProperties"))
  {
    Aws::Utils::Array<JsonView> pendingPropertiesJsonList = jsonValue.GetArray("PendingProperties");
    for(unsigned pendingPropertiesIndex = 0; pendingPropertiesIndex < pendingPropertiesJsonList.GetLength(); ++pendingPropertiesIndex)
    {
      m_pendingProperties.push_back(pendingPropertiesJsonList[pendingPropertiesIndex].AsString());
    }
    m_pendingPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedProperties"))
  {
    Aws::Utils::Array<JsonView> completedPropertiesJsonList = jsonValue.GetArray("CompletedProperties");
    for(unsigned completedPropertiesIndex = 0; completedPropertiesIndex < completedPropertiesJsonList.GetLength(); ++completedPropertiesIndex)
    {
      m_completedProperties.push_back(completedPropertiesJsonList[completedPropertiesIndex].AsString());
    }
    m_completedPropertiesHasBeenSet = true;
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

JsonValue ChangeProgressStatusDetails::Jsonize() const
{
  JsonValue payload;

  if(m_changeIdHasBeenSet)
  {
   payload.WithString("ChangeId", m_changeId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OverallChangeStatusMapper::GetNameForOverallChangeStatus(m_status));
  }

  if(m_pendingPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pendingPropertiesJsonList(m_pendingProperties.size());
   for(unsigned pendingPropertiesIndex = 0; pendingPropertiesIndex < pendingPropertiesJsonList.GetLength(); ++pendingPropertiesIndex)
   {
     pendingPropertiesJsonList[pendingPropertiesIndex].AsString(m_pendingProperties[pendingPropertiesIndex]);
   }
   payload.WithArray("PendingProperties", std::move(pendingPropertiesJsonList));

  }

  if(m_completedPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> completedPropertiesJsonList(m_completedProperties.size());
   for(unsigned completedPropertiesIndex = 0; completedPropertiesIndex < completedPropertiesJsonList.GetLength(); ++completedPropertiesIndex)
   {
     completedPropertiesJsonList[completedPropertiesIndex].AsString(m_completedProperties[completedPropertiesIndex]);
   }
   payload.WithArray("CompletedProperties", std::move(completedPropertiesJsonList));

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
} // namespace OpenSearchService
} // namespace Aws
