﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PackageVersionHistory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

PackageVersionHistory::PackageVersionHistory(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageVersionHistory& PackageVersionHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PackageVersion"))
  {
    m_packageVersion = jsonValue.GetString("PackageVersion");
    m_packageVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CommitMessage"))
  {
    m_commitMessage = jsonValue.GetString("CommitMessage");
    m_commitMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PluginProperties"))
  {
    m_pluginProperties = jsonValue.GetObject("PluginProperties");
    m_pluginPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageConfiguration"))
  {
    m_packageConfiguration = jsonValue.GetObject("PackageConfiguration");
    m_packageConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageVersionHistory::Jsonize() const
{
  JsonValue payload;

  if(m_packageVersionHasBeenSet)
  {
   payload.WithString("PackageVersion", m_packageVersion);

  }

  if(m_commitMessageHasBeenSet)
  {
   payload.WithString("CommitMessage", m_commitMessage);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_pluginPropertiesHasBeenSet)
  {
   payload.WithObject("PluginProperties", m_pluginProperties.Jsonize());

  }

  if(m_packageConfigurationHasBeenSet)
  {
   payload.WithObject("PackageConfiguration", m_packageConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
