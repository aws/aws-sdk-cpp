/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ListExportsRequestFilters.h>
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

ListExportsRequestFilters::ListExportsRequestFilters() : 
    m_exportIDsHasBeenSet(false)
{
}

ListExportsRequestFilters::ListExportsRequestFilters(JsonView jsonValue) : 
    m_exportIDsHasBeenSet(false)
{
  *this = jsonValue;
}

ListExportsRequestFilters& ListExportsRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exportIDs"))
  {
    Aws::Utils::Array<JsonView> exportIDsJsonList = jsonValue.GetArray("exportIDs");
    for(unsigned exportIDsIndex = 0; exportIDsIndex < exportIDsJsonList.GetLength(); ++exportIDsIndex)
    {
      m_exportIDs.push_back(exportIDsJsonList[exportIDsIndex].AsString());
    }
    m_exportIDsHasBeenSet = true;
  }

  return *this;
}

JsonValue ListExportsRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_exportIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exportIDsJsonList(m_exportIDs.size());
   for(unsigned exportIDsIndex = 0; exportIDsIndex < exportIDsJsonList.GetLength(); ++exportIDsIndex)
   {
     exportIDsJsonList[exportIDsIndex].AsString(m_exportIDs[exportIDsIndex]);
   }
   payload.WithArray("exportIDs", std::move(exportIDsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
