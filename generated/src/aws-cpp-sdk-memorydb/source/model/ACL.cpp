/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ACL.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ACL::ACL() : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_userNamesHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false),
    m_pendingChangesHasBeenSet(false),
    m_clustersHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
}

ACL::ACL(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_userNamesHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false),
    m_pendingChangesHasBeenSet(false),
    m_clustersHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
  *this = jsonValue;
}

ACL& ACL::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserNames"))
  {
    Aws::Utils::Array<JsonView> userNamesJsonList = jsonValue.GetArray("UserNames");
    for(unsigned userNamesIndex = 0; userNamesIndex < userNamesJsonList.GetLength(); ++userNamesIndex)
    {
      m_userNames.push_back(userNamesJsonList[userNamesIndex].AsString());
    }
    m_userNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumEngineVersion"))
  {
    m_minimumEngineVersion = jsonValue.GetString("MinimumEngineVersion");

    m_minimumEngineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingChanges"))
  {
    m_pendingChanges = jsonValue.GetObject("PendingChanges");

    m_pendingChangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Clusters"))
  {
    Aws::Utils::Array<JsonView> clustersJsonList = jsonValue.GetArray("Clusters");
    for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
    {
      m_clusters.push_back(clustersJsonList[clustersIndex].AsString());
    }
    m_clustersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  return *this;
}

JsonValue ACL::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_userNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userNamesJsonList(m_userNames.size());
   for(unsigned userNamesIndex = 0; userNamesIndex < userNamesJsonList.GetLength(); ++userNamesIndex)
   {
     userNamesJsonList[userNamesIndex].AsString(m_userNames[userNamesIndex]);
   }
   payload.WithArray("UserNames", std::move(userNamesJsonList));

  }

  if(m_minimumEngineVersionHasBeenSet)
  {
   payload.WithString("MinimumEngineVersion", m_minimumEngineVersion);

  }

  if(m_pendingChangesHasBeenSet)
  {
   payload.WithObject("PendingChanges", m_pendingChanges.Jsonize());

  }

  if(m_clustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clustersJsonList(m_clusters.size());
   for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
   {
     clustersJsonList[clustersIndex].AsString(m_clusters[clustersIndex]);
   }
   payload.WithArray("Clusters", std::move(clustersJsonList));

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
