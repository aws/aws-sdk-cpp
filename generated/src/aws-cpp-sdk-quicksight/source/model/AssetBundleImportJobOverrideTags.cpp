﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobOverrideTags.h>
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

AssetBundleImportJobOverrideTags::AssetBundleImportJobOverrideTags(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetBundleImportJobOverrideTags& AssetBundleImportJobOverrideTags::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VPCConnections"))
  {
    Aws::Utils::Array<JsonView> vPCConnectionsJsonList = jsonValue.GetArray("VPCConnections");
    for(unsigned vPCConnectionsIndex = 0; vPCConnectionsIndex < vPCConnectionsJsonList.GetLength(); ++vPCConnectionsIndex)
    {
      m_vPCConnections.push_back(vPCConnectionsJsonList[vPCConnectionsIndex].AsObject());
    }
    m_vPCConnectionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSources"))
  {
    Aws::Utils::Array<JsonView> dataSourcesJsonList = jsonValue.GetArray("DataSources");
    for(unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex)
    {
      m_dataSources.push_back(dataSourcesJsonList[dataSourcesIndex].AsObject());
    }
    m_dataSourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSets"))
  {
    Aws::Utils::Array<JsonView> dataSetsJsonList = jsonValue.GetArray("DataSets");
    for(unsigned dataSetsIndex = 0; dataSetsIndex < dataSetsJsonList.GetLength(); ++dataSetsIndex)
    {
      m_dataSets.push_back(dataSetsJsonList[dataSetsIndex].AsObject());
    }
    m_dataSetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Themes"))
  {
    Aws::Utils::Array<JsonView> themesJsonList = jsonValue.GetArray("Themes");
    for(unsigned themesIndex = 0; themesIndex < themesJsonList.GetLength(); ++themesIndex)
    {
      m_themes.push_back(themesJsonList[themesIndex].AsObject());
    }
    m_themesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Analyses"))
  {
    Aws::Utils::Array<JsonView> analysesJsonList = jsonValue.GetArray("Analyses");
    for(unsigned analysesIndex = 0; analysesIndex < analysesJsonList.GetLength(); ++analysesIndex)
    {
      m_analyses.push_back(analysesJsonList[analysesIndex].AsObject());
    }
    m_analysesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Dashboards"))
  {
    Aws::Utils::Array<JsonView> dashboardsJsonList = jsonValue.GetArray("Dashboards");
    for(unsigned dashboardsIndex = 0; dashboardsIndex < dashboardsJsonList.GetLength(); ++dashboardsIndex)
    {
      m_dashboards.push_back(dashboardsJsonList[dashboardsIndex].AsObject());
    }
    m_dashboardsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Folders"))
  {
    Aws::Utils::Array<JsonView> foldersJsonList = jsonValue.GetArray("Folders");
    for(unsigned foldersIndex = 0; foldersIndex < foldersJsonList.GetLength(); ++foldersIndex)
    {
      m_folders.push_back(foldersJsonList[foldersIndex].AsObject());
    }
    m_foldersHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetBundleImportJobOverrideTags::Jsonize() const
{
  JsonValue payload;

  if(m_vPCConnectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vPCConnectionsJsonList(m_vPCConnections.size());
   for(unsigned vPCConnectionsIndex = 0; vPCConnectionsIndex < vPCConnectionsJsonList.GetLength(); ++vPCConnectionsIndex)
   {
     vPCConnectionsJsonList[vPCConnectionsIndex].AsObject(m_vPCConnections[vPCConnectionsIndex].Jsonize());
   }
   payload.WithArray("VPCConnections", std::move(vPCConnectionsJsonList));

  }

  if(m_dataSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSourcesJsonList(m_dataSources.size());
   for(unsigned dataSourcesIndex = 0; dataSourcesIndex < dataSourcesJsonList.GetLength(); ++dataSourcesIndex)
   {
     dataSourcesJsonList[dataSourcesIndex].AsObject(m_dataSources[dataSourcesIndex].Jsonize());
   }
   payload.WithArray("DataSources", std::move(dataSourcesJsonList));

  }

  if(m_dataSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSetsJsonList(m_dataSets.size());
   for(unsigned dataSetsIndex = 0; dataSetsIndex < dataSetsJsonList.GetLength(); ++dataSetsIndex)
   {
     dataSetsJsonList[dataSetsIndex].AsObject(m_dataSets[dataSetsIndex].Jsonize());
   }
   payload.WithArray("DataSets", std::move(dataSetsJsonList));

  }

  if(m_themesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> themesJsonList(m_themes.size());
   for(unsigned themesIndex = 0; themesIndex < themesJsonList.GetLength(); ++themesIndex)
   {
     themesJsonList[themesIndex].AsObject(m_themes[themesIndex].Jsonize());
   }
   payload.WithArray("Themes", std::move(themesJsonList));

  }

  if(m_analysesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysesJsonList(m_analyses.size());
   for(unsigned analysesIndex = 0; analysesIndex < analysesJsonList.GetLength(); ++analysesIndex)
   {
     analysesJsonList[analysesIndex].AsObject(m_analyses[analysesIndex].Jsonize());
   }
   payload.WithArray("Analyses", std::move(analysesJsonList));

  }

  if(m_dashboardsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dashboardsJsonList(m_dashboards.size());
   for(unsigned dashboardsIndex = 0; dashboardsIndex < dashboardsJsonList.GetLength(); ++dashboardsIndex)
   {
     dashboardsJsonList[dashboardsIndex].AsObject(m_dashboards[dashboardsIndex].Jsonize());
   }
   payload.WithArray("Dashboards", std::move(dashboardsJsonList));

  }

  if(m_foldersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> foldersJsonList(m_folders.size());
   for(unsigned foldersIndex = 0; foldersIndex < foldersJsonList.GetLength(); ++foldersIndex)
   {
     foldersJsonList[foldersIndex].AsObject(m_folders[foldersIndex].Jsonize());
   }
   payload.WithArray("Folders", std::move(foldersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
