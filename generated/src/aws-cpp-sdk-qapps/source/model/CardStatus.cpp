/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/CardStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

CardStatus::CardStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

CardStatus& CardStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("currentState"))
  {
    m_currentState = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("currentState"));
    m_currentStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentValue"))
  {
    m_currentValue = jsonValue.GetString("currentValue");
    m_currentValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("submissions"))
  {
    Aws::Utils::Array<JsonView> submissionsJsonList = jsonValue.GetArray("submissions");
    for(unsigned submissionsIndex = 0; submissionsIndex < submissionsJsonList.GetLength(); ++submissionsIndex)
    {
      m_submissions.push_back(submissionsJsonList[submissionsIndex].AsObject());
    }
    m_submissionsHasBeenSet = true;
  }
  return *this;
}

JsonValue CardStatus::Jsonize() const
{
  JsonValue payload;

  if(m_currentStateHasBeenSet)
  {
   payload.WithString("currentState", ExecutionStatusMapper::GetNameForExecutionStatus(m_currentState));
  }

  if(m_currentValueHasBeenSet)
  {
   payload.WithString("currentValue", m_currentValue);

  }

  if(m_submissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> submissionsJsonList(m_submissions.size());
   for(unsigned submissionsIndex = 0; submissionsIndex < submissionsJsonList.GetLength(); ++submissionsIndex)
   {
     submissionsJsonList[submissionsIndex].AsObject(m_submissions[submissionsIndex].Jsonize());
   }
   payload.WithArray("submissions", std::move(submissionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
