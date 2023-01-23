/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DataReplicationInitiation.h>
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

DataReplicationInitiation::DataReplicationInitiation() : 
    m_nextAttemptDateTimeHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_stepsHasBeenSet(false)
{
}

DataReplicationInitiation::DataReplicationInitiation(JsonView jsonValue) : 
    m_nextAttemptDateTimeHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_stepsHasBeenSet(false)
{
  *this = jsonValue;
}

DataReplicationInitiation& DataReplicationInitiation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nextAttemptDateTime"))
  {
    m_nextAttemptDateTime = jsonValue.GetString("nextAttemptDateTime");

    m_nextAttemptDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startDateTime"))
  {
    m_startDateTime = jsonValue.GetString("startDateTime");

    m_startDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataReplicationInitiation::Jsonize() const
{
  JsonValue payload;

  if(m_nextAttemptDateTimeHasBeenSet)
  {
   payload.WithString("nextAttemptDateTime", m_nextAttemptDateTime);

  }

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithString("startDateTime", m_startDateTime);

  }

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("steps", std::move(stepsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
