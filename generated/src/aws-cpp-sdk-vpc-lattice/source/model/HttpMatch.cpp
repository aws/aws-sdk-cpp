/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/HttpMatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

HttpMatch::HttpMatch() : 
    m_headerMatchesHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_pathMatchHasBeenSet(false)
{
}

HttpMatch::HttpMatch(JsonView jsonValue) : 
    m_headerMatchesHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_pathMatchHasBeenSet(false)
{
  *this = jsonValue;
}

HttpMatch& HttpMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("headerMatches"))
  {
    Aws::Utils::Array<JsonView> headerMatchesJsonList = jsonValue.GetArray("headerMatches");
    for(unsigned headerMatchesIndex = 0; headerMatchesIndex < headerMatchesJsonList.GetLength(); ++headerMatchesIndex)
    {
      m_headerMatches.push_back(headerMatchesJsonList[headerMatchesIndex].AsObject());
    }
    m_headerMatchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("method"))
  {
    m_method = jsonValue.GetString("method");

    m_methodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pathMatch"))
  {
    m_pathMatch = jsonValue.GetObject("pathMatch");

    m_pathMatchHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpMatch::Jsonize() const
{
  JsonValue payload;

  if(m_headerMatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> headerMatchesJsonList(m_headerMatches.size());
   for(unsigned headerMatchesIndex = 0; headerMatchesIndex < headerMatchesJsonList.GetLength(); ++headerMatchesIndex)
   {
     headerMatchesJsonList[headerMatchesIndex].AsObject(m_headerMatches[headerMatchesIndex].Jsonize());
   }
   payload.WithArray("headerMatches", std::move(headerMatchesJsonList));

  }

  if(m_methodHasBeenSet)
  {
   payload.WithString("method", m_method);

  }

  if(m_pathMatchHasBeenSet)
  {
   payload.WithObject("pathMatch", m_pathMatch.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
