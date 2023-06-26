/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/VersionDifferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

VersionDifferences::VersionDifferences() : 
    m_pillarDifferencesHasBeenSet(false)
{
}

VersionDifferences::VersionDifferences(JsonView jsonValue) : 
    m_pillarDifferencesHasBeenSet(false)
{
  *this = jsonValue;
}

VersionDifferences& VersionDifferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PillarDifferences"))
  {
    Aws::Utils::Array<JsonView> pillarDifferencesJsonList = jsonValue.GetArray("PillarDifferences");
    for(unsigned pillarDifferencesIndex = 0; pillarDifferencesIndex < pillarDifferencesJsonList.GetLength(); ++pillarDifferencesIndex)
    {
      m_pillarDifferences.push_back(pillarDifferencesJsonList[pillarDifferencesIndex].AsObject());
    }
    m_pillarDifferencesHasBeenSet = true;
  }

  return *this;
}

JsonValue VersionDifferences::Jsonize() const
{
  JsonValue payload;

  if(m_pillarDifferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pillarDifferencesJsonList(m_pillarDifferences.size());
   for(unsigned pillarDifferencesIndex = 0; pillarDifferencesIndex < pillarDifferencesJsonList.GetLength(); ++pillarDifferencesIndex)
   {
     pillarDifferencesJsonList[pillarDifferencesIndex].AsObject(m_pillarDifferences[pillarDifferencesIndex].Jsonize());
   }
   payload.WithArray("PillarDifferences", std::move(pillarDifferencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
