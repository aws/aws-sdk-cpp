﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ProjectDescription.h>
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

ProjectDescription::ProjectDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

ProjectDescription& ProjectDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectArn"))
  {
    m_projectArn = jsonValue.GetString("ProjectArn");
    m_projectArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");
    m_creationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProjectStatusMapper::GetProjectStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Datasets"))
  {
    Aws::Utils::Array<JsonView> datasetsJsonList = jsonValue.GetArray("Datasets");
    for(unsigned datasetsIndex = 0; datasetsIndex < datasetsJsonList.GetLength(); ++datasetsIndex)
    {
      m_datasets.push_back(datasetsJsonList[datasetsIndex].AsObject());
    }
    m_datasetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Feature"))
  {
    m_feature = CustomizationFeatureMapper::GetCustomizationFeatureForName(jsonValue.GetString("Feature"));
    m_featureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoUpdate"))
  {
    m_autoUpdate = ProjectAutoUpdateMapper::GetProjectAutoUpdateForName(jsonValue.GetString("AutoUpdate"));
    m_autoUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectDescription::Jsonize() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("ProjectArn", m_projectArn);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ProjectStatusMapper::GetNameForProjectStatus(m_status));
  }

  if(m_datasetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> datasetsJsonList(m_datasets.size());
   for(unsigned datasetsIndex = 0; datasetsIndex < datasetsJsonList.GetLength(); ++datasetsIndex)
   {
     datasetsJsonList[datasetsIndex].AsObject(m_datasets[datasetsIndex].Jsonize());
   }
   payload.WithArray("Datasets", std::move(datasetsJsonList));

  }

  if(m_featureHasBeenSet)
  {
   payload.WithString("Feature", CustomizationFeatureMapper::GetNameForCustomizationFeature(m_feature));
  }

  if(m_autoUpdateHasBeenSet)
  {
   payload.WithString("AutoUpdate", ProjectAutoUpdateMapper::GetNameForProjectAutoUpdate(m_autoUpdate));
  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
