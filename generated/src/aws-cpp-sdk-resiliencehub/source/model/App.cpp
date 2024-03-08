/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/App.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

App::App() : 
    m_appArnHasBeenSet(false),
    m_assessmentSchedule(AppAssessmentScheduleType::NOT_SET),
    m_assessmentScheduleHasBeenSet(false),
    m_complianceStatus(AppComplianceStatusType::NOT_SET),
    m_complianceStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_driftStatus(AppDriftStatusType::NOT_SET),
    m_driftStatusHasBeenSet(false),
    m_eventSubscriptionsHasBeenSet(false),
    m_lastAppComplianceEvaluationTimeHasBeenSet(false),
    m_lastDriftEvaluationTimeHasBeenSet(false),
    m_lastResiliencyScoreEvaluationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_permissionModelHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_resiliencyScore(0.0),
    m_resiliencyScoreHasBeenSet(false),
    m_rpoInSecs(0),
    m_rpoInSecsHasBeenSet(false),
    m_rtoInSecs(0),
    m_rtoInSecsHasBeenSet(false),
    m_status(AppStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

App::App(JsonView jsonValue) : 
    m_appArnHasBeenSet(false),
    m_assessmentSchedule(AppAssessmentScheduleType::NOT_SET),
    m_assessmentScheduleHasBeenSet(false),
    m_complianceStatus(AppComplianceStatusType::NOT_SET),
    m_complianceStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_driftStatus(AppDriftStatusType::NOT_SET),
    m_driftStatusHasBeenSet(false),
    m_eventSubscriptionsHasBeenSet(false),
    m_lastAppComplianceEvaluationTimeHasBeenSet(false),
    m_lastDriftEvaluationTimeHasBeenSet(false),
    m_lastResiliencyScoreEvaluationTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_permissionModelHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_resiliencyScore(0.0),
    m_resiliencyScoreHasBeenSet(false),
    m_rpoInSecs(0),
    m_rpoInSecsHasBeenSet(false),
    m_rtoInSecs(0),
    m_rtoInSecsHasBeenSet(false),
    m_status(AppStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

App& App::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appArn"))
  {
    m_appArn = jsonValue.GetString("appArn");

    m_appArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentSchedule"))
  {
    m_assessmentSchedule = AppAssessmentScheduleTypeMapper::GetAppAssessmentScheduleTypeForName(jsonValue.GetString("assessmentSchedule"));

    m_assessmentScheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("complianceStatus"))
  {
    m_complianceStatus = AppComplianceStatusTypeMapper::GetAppComplianceStatusTypeForName(jsonValue.GetString("complianceStatus"));

    m_complianceStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("driftStatus"))
  {
    m_driftStatus = AppDriftStatusTypeMapper::GetAppDriftStatusTypeForName(jsonValue.GetString("driftStatus"));

    m_driftStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventSubscriptions"))
  {
    Aws::Utils::Array<JsonView> eventSubscriptionsJsonList = jsonValue.GetArray("eventSubscriptions");
    for(unsigned eventSubscriptionsIndex = 0; eventSubscriptionsIndex < eventSubscriptionsJsonList.GetLength(); ++eventSubscriptionsIndex)
    {
      m_eventSubscriptions.push_back(eventSubscriptionsJsonList[eventSubscriptionsIndex].AsObject());
    }
    m_eventSubscriptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAppComplianceEvaluationTime"))
  {
    m_lastAppComplianceEvaluationTime = jsonValue.GetDouble("lastAppComplianceEvaluationTime");

    m_lastAppComplianceEvaluationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastDriftEvaluationTime"))
  {
    m_lastDriftEvaluationTime = jsonValue.GetDouble("lastDriftEvaluationTime");

    m_lastDriftEvaluationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastResiliencyScoreEvaluationTime"))
  {
    m_lastResiliencyScoreEvaluationTime = jsonValue.GetDouble("lastResiliencyScoreEvaluationTime");

    m_lastResiliencyScoreEvaluationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("permissionModel"))
  {
    m_permissionModel = jsonValue.GetObject("permissionModel");

    m_permissionModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyArn"))
  {
    m_policyArn = jsonValue.GetString("policyArn");

    m_policyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resiliencyScore"))
  {
    m_resiliencyScore = jsonValue.GetDouble("resiliencyScore");

    m_resiliencyScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rpoInSecs"))
  {
    m_rpoInSecs = jsonValue.GetInteger("rpoInSecs");

    m_rpoInSecsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rtoInSecs"))
  {
    m_rtoInSecs = jsonValue.GetInteger("rtoInSecs");

    m_rtoInSecsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AppStatusTypeMapper::GetAppStatusTypeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue App::Jsonize() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_assessmentScheduleHasBeenSet)
  {
   payload.WithString("assessmentSchedule", AppAssessmentScheduleTypeMapper::GetNameForAppAssessmentScheduleType(m_assessmentSchedule));
  }

  if(m_complianceStatusHasBeenSet)
  {
   payload.WithString("complianceStatus", AppComplianceStatusTypeMapper::GetNameForAppComplianceStatusType(m_complianceStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_driftStatusHasBeenSet)
  {
   payload.WithString("driftStatus", AppDriftStatusTypeMapper::GetNameForAppDriftStatusType(m_driftStatus));
  }

  if(m_eventSubscriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventSubscriptionsJsonList(m_eventSubscriptions.size());
   for(unsigned eventSubscriptionsIndex = 0; eventSubscriptionsIndex < eventSubscriptionsJsonList.GetLength(); ++eventSubscriptionsIndex)
   {
     eventSubscriptionsJsonList[eventSubscriptionsIndex].AsObject(m_eventSubscriptions[eventSubscriptionsIndex].Jsonize());
   }
   payload.WithArray("eventSubscriptions", std::move(eventSubscriptionsJsonList));

  }

  if(m_lastAppComplianceEvaluationTimeHasBeenSet)
  {
   payload.WithDouble("lastAppComplianceEvaluationTime", m_lastAppComplianceEvaluationTime.SecondsWithMSPrecision());
  }

  if(m_lastDriftEvaluationTimeHasBeenSet)
  {
   payload.WithDouble("lastDriftEvaluationTime", m_lastDriftEvaluationTime.SecondsWithMSPrecision());
  }

  if(m_lastResiliencyScoreEvaluationTimeHasBeenSet)
  {
   payload.WithDouble("lastResiliencyScoreEvaluationTime", m_lastResiliencyScoreEvaluationTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_permissionModelHasBeenSet)
  {
   payload.WithObject("permissionModel", m_permissionModel.Jsonize());

  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  if(m_resiliencyScoreHasBeenSet)
  {
   payload.WithDouble("resiliencyScore", m_resiliencyScore);

  }

  if(m_rpoInSecsHasBeenSet)
  {
   payload.WithInteger("rpoInSecs", m_rpoInSecs);

  }

  if(m_rtoInSecsHasBeenSet)
  {
   payload.WithInteger("rtoInSecs", m_rtoInSecs);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AppStatusTypeMapper::GetNameForAppStatusType(m_status));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
