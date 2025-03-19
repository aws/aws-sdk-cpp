/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/EdgeOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

EdgeOverride::EdgeOverride(JsonView jsonValue)
{
  *this = jsonValue;
}

EdgeOverride& EdgeOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EdgeSets"))
  {
    Aws::Utils::Array<JsonView> edgeSetsJsonList = jsonValue.GetArray("EdgeSets");
    for(unsigned edgeSetsIndex = 0; edgeSetsIndex < edgeSetsJsonList.GetLength(); ++edgeSetsIndex)
    {
      Aws::Utils::Array<JsonView> edgeSetJsonList = edgeSetsJsonList[edgeSetsIndex].AsArray();
      Aws::Vector<Aws::String> edgeSetList;
      edgeSetList.reserve((size_t)edgeSetJsonList.GetLength());
      for(unsigned edgeSetIndex = 0; edgeSetIndex < edgeSetJsonList.GetLength(); ++edgeSetIndex)
      {
        edgeSetList.push_back(edgeSetJsonList[edgeSetIndex].AsString());
      }
      m_edgeSets.push_back(std::move(edgeSetList));
    }
    m_edgeSetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UseEdge"))
  {
    m_useEdge = jsonValue.GetString("UseEdge");
    m_useEdgeHasBeenSet = true;
  }
  return *this;
}

JsonValue EdgeOverride::Jsonize() const
{
  JsonValue payload;

  if(m_edgeSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> edgeSetsJsonList(m_edgeSets.size());
   for(unsigned edgeSetsIndex = 0; edgeSetsIndex < edgeSetsJsonList.GetLength(); ++edgeSetsIndex)
   {
     Aws::Utils::Array<JsonValue> edgeSetJsonList(m_edgeSets[edgeSetsIndex].size());
     for(unsigned edgeSetIndex = 0; edgeSetIndex < edgeSetJsonList.GetLength(); ++edgeSetIndex)
     {
       edgeSetJsonList[edgeSetIndex].AsString(m_edgeSets[edgeSetsIndex][edgeSetIndex]);
     }
     edgeSetsJsonList[edgeSetsIndex].AsArray(std::move(edgeSetJsonList));
   }
   payload.WithArray("EdgeSets", std::move(edgeSetsJsonList));

  }

  if(m_useEdgeHasBeenSet)
  {
   payload.WithString("UseEdge", m_useEdge);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
