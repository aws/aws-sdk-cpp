/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicRefreshScheduleSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TopicRefreshScheduleSummary::TopicRefreshScheduleSummary() : 
    m_datasetIdHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_refreshScheduleHasBeenSet(false)
{
}

TopicRefreshScheduleSummary::TopicRefreshScheduleSummary(JsonView jsonValue) : 
    m_datasetIdHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_refreshScheduleHasBeenSet(false)
{
  *this = jsonValue;
}

TopicRefreshScheduleSummary& TopicRefreshScheduleSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasetId"))
  {
    m_datasetId = jsonValue.GetString("DatasetId");

    m_datasetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

    m_datasetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

    m_datasetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RefreshSchedule"))
  {
    m_refreshSchedule = jsonValue.GetObject("RefreshSchedule");

    m_refreshScheduleHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicRefreshScheduleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_datasetIdHasBeenSet)
  {
   payload.WithString("DatasetId", m_datasetId);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_refreshScheduleHasBeenSet)
  {
   payload.WithObject("RefreshSchedule", m_refreshSchedule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
