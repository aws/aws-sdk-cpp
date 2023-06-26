/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ListImportsRequestFilters.h>
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

ListImportsRequestFilters::ListImportsRequestFilters() : 
    m_importIDsHasBeenSet(false)
{
}

ListImportsRequestFilters::ListImportsRequestFilters(JsonView jsonValue) : 
    m_importIDsHasBeenSet(false)
{
  *this = jsonValue;
}

ListImportsRequestFilters& ListImportsRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("importIDs"))
  {
    Aws::Utils::Array<JsonView> importIDsJsonList = jsonValue.GetArray("importIDs");
    for(unsigned importIDsIndex = 0; importIDsIndex < importIDsJsonList.GetLength(); ++importIDsIndex)
    {
      m_importIDs.push_back(importIDsJsonList[importIDsIndex].AsString());
    }
    m_importIDsHasBeenSet = true;
  }

  return *this;
}

JsonValue ListImportsRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_importIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> importIDsJsonList(m_importIDs.size());
   for(unsigned importIDsIndex = 0; importIDsIndex < importIDsJsonList.GetLength(); ++importIDsIndex)
   {
     importIDsJsonList[importIDsIndex].AsString(m_importIDs[importIDsIndex]);
   }
   payload.WithArray("importIDs", std::move(importIDsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
