/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BatchScheduleActionDeleteRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

BatchScheduleActionDeleteRequest::BatchScheduleActionDeleteRequest() : 
    m_actionNamesHasBeenSet(false)
{
}

BatchScheduleActionDeleteRequest::BatchScheduleActionDeleteRequest(JsonView jsonValue) : 
    m_actionNamesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchScheduleActionDeleteRequest& BatchScheduleActionDeleteRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionNames"))
  {
    Aws::Utils::Array<JsonView> actionNamesJsonList = jsonValue.GetArray("actionNames");
    for(unsigned actionNamesIndex = 0; actionNamesIndex < actionNamesJsonList.GetLength(); ++actionNamesIndex)
    {
      m_actionNames.push_back(actionNamesJsonList[actionNamesIndex].AsString());
    }
    m_actionNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchScheduleActionDeleteRequest::Jsonize() const
{
  JsonValue payload;

  if(m_actionNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionNamesJsonList(m_actionNames.size());
   for(unsigned actionNamesIndex = 0; actionNamesIndex < actionNamesJsonList.GetLength(); ++actionNamesIndex)
   {
     actionNamesJsonList[actionNamesIndex].AsString(m_actionNames[actionNamesIndex]);
   }
   payload.WithArray("actionNames", std::move(actionNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
