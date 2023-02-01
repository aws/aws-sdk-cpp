/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ListApplicationsRequestFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

ListApplicationsRequestFilters::ListApplicationsRequestFilters() : 
    m_applicationIDsHasBeenSet(false),
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_waveIDsHasBeenSet(false)
{
}

ListApplicationsRequestFilters::ListApplicationsRequestFilters(JsonView jsonValue) : 
    m_applicationIDsHasBeenSet(false),
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_waveIDsHasBeenSet(false)
{
  *this = jsonValue;
}

ListApplicationsRequestFilters& ListApplicationsRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationIDs"))
  {
    Aws::Utils::Array<JsonView> applicationIDsJsonList = jsonValue.GetArray("applicationIDs");
    for(unsigned applicationIDsIndex = 0; applicationIDsIndex < applicationIDsJsonList.GetLength(); ++applicationIDsIndex)
    {
      m_applicationIDs.push_back(applicationIDsJsonList[applicationIDsIndex].AsString());
    }
    m_applicationIDsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isArchived"))
  {
    m_isArchived = jsonValue.GetBool("isArchived");

    m_isArchivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("waveIDs"))
  {
    Aws::Utils::Array<JsonView> waveIDsJsonList = jsonValue.GetArray("waveIDs");
    for(unsigned waveIDsIndex = 0; waveIDsIndex < waveIDsJsonList.GetLength(); ++waveIDsIndex)
    {
      m_waveIDs.push_back(waveIDsJsonList[waveIDsIndex].AsString());
    }
    m_waveIDsHasBeenSet = true;
  }

  return *this;
}

JsonValue ListApplicationsRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationIDsJsonList(m_applicationIDs.size());
   for(unsigned applicationIDsIndex = 0; applicationIDsIndex < applicationIDsJsonList.GetLength(); ++applicationIDsIndex)
   {
     applicationIDsJsonList[applicationIDsIndex].AsString(m_applicationIDs[applicationIDsIndex]);
   }
   payload.WithArray("applicationIDs", std::move(applicationIDsJsonList));

  }

  if(m_isArchivedHasBeenSet)
  {
   payload.WithBool("isArchived", m_isArchived);

  }

  if(m_waveIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> waveIDsJsonList(m_waveIDs.size());
   for(unsigned waveIDsIndex = 0; waveIDsIndex < waveIDsJsonList.GetLength(); ++waveIDsIndex)
   {
     waveIDsJsonList[waveIDsIndex].AsString(m_waveIDs[waveIDsIndex]);
   }
   payload.WithArray("waveIDs", std::move(waveIDsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
