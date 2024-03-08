/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ListConnectorsRequestFilters.h>
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

ListConnectorsRequestFilters::ListConnectorsRequestFilters() : 
    m_connectorIDsHasBeenSet(false)
{
}

ListConnectorsRequestFilters::ListConnectorsRequestFilters(JsonView jsonValue) : 
    m_connectorIDsHasBeenSet(false)
{
  *this = jsonValue;
}

ListConnectorsRequestFilters& ListConnectorsRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectorIDs"))
  {
    Aws::Utils::Array<JsonView> connectorIDsJsonList = jsonValue.GetArray("connectorIDs");
    for(unsigned connectorIDsIndex = 0; connectorIDsIndex < connectorIDsJsonList.GetLength(); ++connectorIDsIndex)
    {
      m_connectorIDs.push_back(connectorIDsJsonList[connectorIDsIndex].AsString());
    }
    m_connectorIDsHasBeenSet = true;
  }

  return *this;
}

JsonValue ListConnectorsRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_connectorIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectorIDsJsonList(m_connectorIDs.size());
   for(unsigned connectorIDsIndex = 0; connectorIDsIndex < connectorIDsJsonList.GetLength(); ++connectorIDsIndex)
   {
     connectorIDsJsonList[connectorIDsIndex].AsString(m_connectorIDs[connectorIDsIndex]);
   }
   payload.WithArray("connectorIDs", std::move(connectorIDsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
