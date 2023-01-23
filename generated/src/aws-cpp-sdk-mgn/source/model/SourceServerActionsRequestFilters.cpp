/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/SourceServerActionsRequestFilters.h>
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

SourceServerActionsRequestFilters::SourceServerActionsRequestFilters() : 
    m_actionIDsHasBeenSet(false)
{
}

SourceServerActionsRequestFilters::SourceServerActionsRequestFilters(JsonView jsonValue) : 
    m_actionIDsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceServerActionsRequestFilters& SourceServerActionsRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionIDs"))
  {
    Aws::Utils::Array<JsonView> actionIDsJsonList = jsonValue.GetArray("actionIDs");
    for(unsigned actionIDsIndex = 0; actionIDsIndex < actionIDsJsonList.GetLength(); ++actionIDsIndex)
    {
      m_actionIDs.push_back(actionIDsJsonList[actionIDsIndex].AsString());
    }
    m_actionIDsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceServerActionsRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_actionIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionIDsJsonList(m_actionIDs.size());
   for(unsigned actionIDsIndex = 0; actionIDsIndex < actionIDsJsonList.GetLength(); ++actionIDsIndex)
   {
     actionIDsJsonList[actionIDsIndex].AsString(m_actionIDs[actionIDsIndex]);
   }
   payload.WithArray("actionIDs", std::move(actionIDsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
