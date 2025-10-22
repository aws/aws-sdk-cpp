/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/ResponderErrorMaskingForHttpCode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RTBFabric
{
namespace Model
{

ResponderErrorMaskingForHttpCode::ResponderErrorMaskingForHttpCode(JsonView jsonValue)
{
  *this = jsonValue;
}

ResponderErrorMaskingForHttpCode& ResponderErrorMaskingForHttpCode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("httpCode"))
  {
    m_httpCode = jsonValue.GetString("httpCode");
    m_httpCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = ResponderErrorMaskingActionMapper::GetResponderErrorMaskingActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loggingTypes"))
  {
    Aws::Utils::Array<JsonView> loggingTypesJsonList = jsonValue.GetArray("loggingTypes");
    for(unsigned loggingTypesIndex = 0; loggingTypesIndex < loggingTypesJsonList.GetLength(); ++loggingTypesIndex)
    {
      m_loggingTypes.push_back(ResponderErrorMaskingLoggingTypeMapper::GetResponderErrorMaskingLoggingTypeForName(loggingTypesJsonList[loggingTypesIndex].AsString()));
    }
    m_loggingTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("responseLoggingPercentage"))
  {
    m_responseLoggingPercentage = jsonValue.GetDouble("responseLoggingPercentage");
    m_responseLoggingPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue ResponderErrorMaskingForHttpCode::Jsonize() const
{
  JsonValue payload;

  if(m_httpCodeHasBeenSet)
  {
   payload.WithString("httpCode", m_httpCode);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", ResponderErrorMaskingActionMapper::GetNameForResponderErrorMaskingAction(m_action));
  }

  if(m_loggingTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loggingTypesJsonList(m_loggingTypes.size());
   for(unsigned loggingTypesIndex = 0; loggingTypesIndex < loggingTypesJsonList.GetLength(); ++loggingTypesIndex)
   {
     loggingTypesJsonList[loggingTypesIndex].AsString(ResponderErrorMaskingLoggingTypeMapper::GetNameForResponderErrorMaskingLoggingType(m_loggingTypes[loggingTypesIndex]));
   }
   payload.WithArray("loggingTypes", std::move(loggingTypesJsonList));

  }

  if(m_responseLoggingPercentageHasBeenSet)
  {
   payload.WithDouble("responseLoggingPercentage", m_responseLoggingPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
