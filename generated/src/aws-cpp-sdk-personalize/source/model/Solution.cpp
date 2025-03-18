﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/Solution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

Solution::Solution(JsonView jsonValue)
{
  *this = jsonValue;
}

Solution& Solution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("solutionArn"))
  {
    m_solutionArn = jsonValue.GetString("solutionArn");
    m_solutionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("performHPO"))
  {
    m_performHPO = jsonValue.GetBool("performHPO");
    m_performHPOHasBeenSet = true;
  }
  if(jsonValue.ValueExists("performAutoML"))
  {
    m_performAutoML = jsonValue.GetBool("performAutoML");
    m_performAutoMLHasBeenSet = true;
  }
  if(jsonValue.ValueExists("performAutoTraining"))
  {
    m_performAutoTraining = jsonValue.GetBool("performAutoTraining");
    m_performAutoTrainingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recipeArn"))
  {
    m_recipeArn = jsonValue.GetString("recipeArn");
    m_recipeArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetGroupArn"))
  {
    m_datasetGroupArn = jsonValue.GetString("datasetGroupArn");
    m_datasetGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");
    m_eventTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("solutionConfig"))
  {
    m_solutionConfig = jsonValue.GetObject("solutionConfig");
    m_solutionConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoMLResult"))
  {
    m_autoMLResult = jsonValue.GetObject("autoMLResult");
    m_autoMLResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");
    m_creationDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");
    m_lastUpdatedDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestSolutionVersion"))
  {
    m_latestSolutionVersion = jsonValue.GetObject("latestSolutionVersion");
    m_latestSolutionVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestSolutionUpdate"))
  {
    m_latestSolutionUpdate = jsonValue.GetObject("latestSolutionUpdate");
    m_latestSolutionUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue Solution::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_solutionArnHasBeenSet)
  {
   payload.WithString("solutionArn", m_solutionArn);

  }

  if(m_performHPOHasBeenSet)
  {
   payload.WithBool("performHPO", m_performHPO);

  }

  if(m_performAutoMLHasBeenSet)
  {
   payload.WithBool("performAutoML", m_performAutoML);

  }

  if(m_performAutoTrainingHasBeenSet)
  {
   payload.WithBool("performAutoTraining", m_performAutoTraining);

  }

  if(m_recipeArnHasBeenSet)
  {
   payload.WithString("recipeArn", m_recipeArn);

  }

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("datasetGroupArn", m_datasetGroupArn);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_solutionConfigHasBeenSet)
  {
   payload.WithObject("solutionConfig", m_solutionConfig.Jsonize());

  }

  if(m_autoMLResultHasBeenSet)
  {
   payload.WithObject("autoMLResult", m_autoMLResult.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_latestSolutionVersionHasBeenSet)
  {
   payload.WithObject("latestSolutionVersion", m_latestSolutionVersion.Jsonize());

  }

  if(m_latestSolutionUpdateHasBeenSet)
  {
   payload.WithObject("latestSolutionUpdate", m_latestSolutionUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
