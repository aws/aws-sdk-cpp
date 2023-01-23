/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DatasetDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

DatasetDescription::DatasetDescription() : 
    m_creationTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_statusMessageCode(DatasetStatusMessageCode::NOT_SET),
    m_statusMessageCodeHasBeenSet(false),
    m_datasetStatsHasBeenSet(false)
{
}

DatasetDescription::DatasetDescription(JsonView jsonValue) : 
    m_creationTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_statusMessageCode(DatasetStatusMessageCode::NOT_SET),
    m_statusMessageCodeHasBeenSet(false),
    m_datasetStatsHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetDescription& DatasetDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DatasetStatusMapper::GetDatasetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessageCode"))
  {
    m_statusMessageCode = DatasetStatusMessageCodeMapper::GetDatasetStatusMessageCodeForName(jsonValue.GetString("StatusMessageCode"));

    m_statusMessageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetStats"))
  {
    m_datasetStats = jsonValue.GetObject("DatasetStats");

    m_datasetStatsHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetDescription::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DatasetStatusMapper::GetNameForDatasetStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_statusMessageCodeHasBeenSet)
  {
   payload.WithString("StatusMessageCode", DatasetStatusMessageCodeMapper::GetNameForDatasetStatusMessageCode(m_statusMessageCode));
  }

  if(m_datasetStatsHasBeenSet)
  {
   payload.WithObject("DatasetStats", m_datasetStats.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
