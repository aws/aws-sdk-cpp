﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/Dataset.h>
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

Dataset::Dataset(JsonView jsonValue)
{
  *this = jsonValue;
}

Dataset& Dataset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetArn"))
  {
    m_datasetArn = jsonValue.GetString("datasetArn");
    m_datasetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetGroupArn"))
  {
    m_datasetGroupArn = jsonValue.GetString("datasetGroupArn");
    m_datasetGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("datasetType"))
  {
    m_datasetType = jsonValue.GetString("datasetType");
    m_datasetTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaArn"))
  {
    m_schemaArn = jsonValue.GetString("schemaArn");
    m_schemaArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("latestDatasetUpdate"))
  {
    m_latestDatasetUpdate = jsonValue.GetObject("latestDatasetUpdate");
    m_latestDatasetUpdateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trackingId"))
  {
    m_trackingId = jsonValue.GetString("trackingId");
    m_trackingIdHasBeenSet = true;
  }
  return *this;
}

JsonValue Dataset::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("datasetArn", m_datasetArn);

  }

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("datasetGroupArn", m_datasetGroupArn);

  }

  if(m_datasetTypeHasBeenSet)
  {
   payload.WithString("datasetType", m_datasetType);

  }

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("schemaArn", m_schemaArn);

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

  if(m_latestDatasetUpdateHasBeenSet)
  {
   payload.WithObject("latestDatasetUpdate", m_latestDatasetUpdate.Jsonize());

  }

  if(m_trackingIdHasBeenSet)
  {
   payload.WithString("trackingId", m_trackingId);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
