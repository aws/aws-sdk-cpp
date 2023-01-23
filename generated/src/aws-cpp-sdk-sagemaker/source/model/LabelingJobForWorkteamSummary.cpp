/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobForWorkteamSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

LabelingJobForWorkteamSummary::LabelingJobForWorkteamSummary() : 
    m_labelingJobNameHasBeenSet(false),
    m_jobReferenceCodeHasBeenSet(false),
    m_workRequesterAccountIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_labelCountersHasBeenSet(false),
    m_numberOfHumanWorkersPerDataObject(0),
    m_numberOfHumanWorkersPerDataObjectHasBeenSet(false)
{
}

LabelingJobForWorkteamSummary::LabelingJobForWorkteamSummary(JsonView jsonValue) : 
    m_labelingJobNameHasBeenSet(false),
    m_jobReferenceCodeHasBeenSet(false),
    m_workRequesterAccountIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_labelCountersHasBeenSet(false),
    m_numberOfHumanWorkersPerDataObject(0),
    m_numberOfHumanWorkersPerDataObjectHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobForWorkteamSummary& LabelingJobForWorkteamSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LabelingJobName"))
  {
    m_labelingJobName = jsonValue.GetString("LabelingJobName");

    m_labelingJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobReferenceCode"))
  {
    m_jobReferenceCode = jsonValue.GetString("JobReferenceCode");

    m_jobReferenceCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkRequesterAccountId"))
  {
    m_workRequesterAccountId = jsonValue.GetString("WorkRequesterAccountId");

    m_workRequesterAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelCounters"))
  {
    m_labelCounters = jsonValue.GetObject("LabelCounters");

    m_labelCountersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfHumanWorkersPerDataObject"))
  {
    m_numberOfHumanWorkersPerDataObject = jsonValue.GetInteger("NumberOfHumanWorkersPerDataObject");

    m_numberOfHumanWorkersPerDataObjectHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobForWorkteamSummary::Jsonize() const
{
  JsonValue payload;

  if(m_labelingJobNameHasBeenSet)
  {
   payload.WithString("LabelingJobName", m_labelingJobName);

  }

  if(m_jobReferenceCodeHasBeenSet)
  {
   payload.WithString("JobReferenceCode", m_jobReferenceCode);

  }

  if(m_workRequesterAccountIdHasBeenSet)
  {
   payload.WithString("WorkRequesterAccountId", m_workRequesterAccountId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_labelCountersHasBeenSet)
  {
   payload.WithObject("LabelCounters", m_labelCounters.Jsonize());

  }

  if(m_numberOfHumanWorkersPerDataObjectHasBeenSet)
  {
   payload.WithInteger("NumberOfHumanWorkersPerDataObject", m_numberOfHumanWorkersPerDataObject);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
