/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ResponseInspectionJson.h>
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

ResponseInspectionJson::ResponseInspectionJson() : 
    m_identifierHasBeenSet(false),
    m_successValuesHasBeenSet(false),
    m_failureValuesHasBeenSet(false)
{
}

ResponseInspectionJson::ResponseInspectionJson(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_successValuesHasBeenSet(false),
    m_failureValuesHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseInspectionJson& ResponseInspectionJson::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SuccessValues"))
  {
    Aws::Utils::Array<JsonView> successValuesJsonList = jsonValue.GetArray("SuccessValues");
    for(unsigned successValuesIndex = 0; successValuesIndex < successValuesJsonList.GetLength(); ++successValuesIndex)
    {
      m_successValues.push_back(successValuesJsonList[successValuesIndex].AsString());
    }
    m_successValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureValues"))
  {
    Aws::Utils::Array<JsonView> failureValuesJsonList = jsonValue.GetArray("FailureValues");
    for(unsigned failureValuesIndex = 0; failureValuesIndex < failureValuesJsonList.GetLength(); ++failureValuesIndex)
    {
      m_failureValues.push_back(failureValuesJsonList[failureValuesIndex].AsString());
    }
    m_failureValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseInspectionJson::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_successValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> successValuesJsonList(m_successValues.size());
   for(unsigned successValuesIndex = 0; successValuesIndex < successValuesJsonList.GetLength(); ++successValuesIndex)
   {
     successValuesJsonList[successValuesIndex].AsString(m_successValues[successValuesIndex]);
   }
   payload.WithArray("SuccessValues", std::move(successValuesJsonList));

  }

  if(m_failureValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failureValuesJsonList(m_failureValues.size());
   for(unsigned failureValuesIndex = 0; failureValuesIndex < failureValuesJsonList.GetLength(); ++failureValuesIndex)
   {
     failureValuesJsonList[failureValuesIndex].AsString(m_failureValues[failureValuesIndex]);
   }
   payload.WithArray("FailureValues", std::move(failureValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
