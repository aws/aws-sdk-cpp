﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/SolutionVersionSummary.h>
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

SolutionVersionSummary::SolutionVersionSummary() : 
    m_solutionVersionArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_trainingMode(TrainingMode::NOT_SET),
    m_trainingModeHasBeenSet(false),
    m_trainingType(TrainingType::NOT_SET),
    m_trainingTypeHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

SolutionVersionSummary::SolutionVersionSummary(JsonView jsonValue)
  : SolutionVersionSummary()
{
  *this = jsonValue;
}

SolutionVersionSummary& SolutionVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("solutionVersionArn"))
  {
    m_solutionVersionArn = jsonValue.GetString("solutionVersionArn");

    m_solutionVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingMode"))
  {
    m_trainingMode = TrainingModeMapper::GetTrainingModeForName(jsonValue.GetString("trainingMode"));

    m_trainingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingType"))
  {
    m_trainingType = TrainingTypeMapper::GetTrainingTypeForName(jsonValue.GetString("trainingType"));

    m_trainingTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue SolutionVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_solutionVersionArnHasBeenSet)
  {
   payload.WithString("solutionVersionArn", m_solutionVersionArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_trainingModeHasBeenSet)
  {
   payload.WithString("trainingMode", TrainingModeMapper::GetNameForTrainingMode(m_trainingMode));
  }

  if(m_trainingTypeHasBeenSet)
  {
   payload.WithString("trainingType", TrainingTypeMapper::GetNameForTrainingType(m_trainingType));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
