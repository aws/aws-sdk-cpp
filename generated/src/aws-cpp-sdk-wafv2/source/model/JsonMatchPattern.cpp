/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/JsonMatchPattern.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

JsonMatchPattern::JsonMatchPattern() : 
    m_allHasBeenSet(false),
    m_includedPathsHasBeenSet(false)
{
}

JsonMatchPattern::JsonMatchPattern(JsonView jsonValue) : 
    m_allHasBeenSet(false),
    m_includedPathsHasBeenSet(false)
{
  *this = jsonValue;
}

JsonMatchPattern& JsonMatchPattern::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("All"))
  {
    m_all = jsonValue.GetObject("All");

    m_allHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludedPaths"))
  {
    Aws::Utils::Array<JsonView> includedPathsJsonList = jsonValue.GetArray("IncludedPaths");
    for(unsigned includedPathsIndex = 0; includedPathsIndex < includedPathsJsonList.GetLength(); ++includedPathsIndex)
    {
      m_includedPaths.push_back(includedPathsJsonList[includedPathsIndex].AsString());
    }
    m_includedPathsHasBeenSet = true;
  }

  return *this;
}

JsonValue JsonMatchPattern::Jsonize() const
{
  JsonValue payload;

  if(m_allHasBeenSet)
  {
   payload.WithObject("All", m_all.Jsonize());

  }

  if(m_includedPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includedPathsJsonList(m_includedPaths.size());
   for(unsigned includedPathsIndex = 0; includedPathsIndex < includedPathsJsonList.GetLength(); ++includedPathsIndex)
   {
     includedPathsJsonList[includedPathsIndex].AsString(m_includedPaths[includedPathsIndex]);
   }
   payload.WithArray("IncludedPaths", std::move(includedPathsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
