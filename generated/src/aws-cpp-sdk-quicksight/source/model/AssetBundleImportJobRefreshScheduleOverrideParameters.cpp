/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobRefreshScheduleOverrideParameters.h>
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

AssetBundleImportJobRefreshScheduleOverrideParameters::AssetBundleImportJobRefreshScheduleOverrideParameters() : 
    m_dataSetIdHasBeenSet(false),
    m_scheduleIdHasBeenSet(false),
    m_startAfterDateTimeHasBeenSet(false)
{
}

AssetBundleImportJobRefreshScheduleOverrideParameters::AssetBundleImportJobRefreshScheduleOverrideParameters(JsonView jsonValue) : 
    m_dataSetIdHasBeenSet(false),
    m_scheduleIdHasBeenSet(false),
    m_startAfterDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobRefreshScheduleOverrideParameters& AssetBundleImportJobRefreshScheduleOverrideParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScheduleId"))
  {
    m_scheduleId = jsonValue.GetString("ScheduleId");

    m_scheduleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartAfterDateTime"))
  {
    m_startAfterDateTime = jsonValue.GetDouble("StartAfterDateTime");

    m_startAfterDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobRefreshScheduleOverrideParameters::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_scheduleIdHasBeenSet)
  {
   payload.WithString("ScheduleId", m_scheduleId);

  }

  if(m_startAfterDateTimeHasBeenSet)
  {
   payload.WithDouble("StartAfterDateTime", m_startAfterDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
