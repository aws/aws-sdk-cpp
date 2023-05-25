/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ResponseInspectionStatusCode.h>
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

ResponseInspectionStatusCode::ResponseInspectionStatusCode() : 
    m_successCodesHasBeenSet(false),
    m_failureCodesHasBeenSet(false)
{
}

ResponseInspectionStatusCode::ResponseInspectionStatusCode(JsonView jsonValue) : 
    m_successCodesHasBeenSet(false),
    m_failureCodesHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseInspectionStatusCode& ResponseInspectionStatusCode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuccessCodes"))
  {
    Aws::Utils::Array<JsonView> successCodesJsonList = jsonValue.GetArray("SuccessCodes");
    for(unsigned successCodesIndex = 0; successCodesIndex < successCodesJsonList.GetLength(); ++successCodesIndex)
    {
      m_successCodes.push_back(successCodesJsonList[successCodesIndex].AsInteger());
    }
    m_successCodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureCodes"))
  {
    Aws::Utils::Array<JsonView> failureCodesJsonList = jsonValue.GetArray("FailureCodes");
    for(unsigned failureCodesIndex = 0; failureCodesIndex < failureCodesJsonList.GetLength(); ++failureCodesIndex)
    {
      m_failureCodes.push_back(failureCodesJsonList[failureCodesIndex].AsInteger());
    }
    m_failureCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseInspectionStatusCode::Jsonize() const
{
  JsonValue payload;

  if(m_successCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> successCodesJsonList(m_successCodes.size());
   for(unsigned successCodesIndex = 0; successCodesIndex < successCodesJsonList.GetLength(); ++successCodesIndex)
   {
     successCodesJsonList[successCodesIndex].AsInteger(m_successCodes[successCodesIndex]);
   }
   payload.WithArray("SuccessCodes", std::move(successCodesJsonList));

  }

  if(m_failureCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failureCodesJsonList(m_failureCodes.size());
   for(unsigned failureCodesIndex = 0; failureCodesIndex < failureCodesJsonList.GetLength(); ++failureCodesIndex)
   {
     failureCodesJsonList[failureCodesIndex].AsInteger(m_failureCodes[failureCodesIndex]);
   }
   payload.WithArray("FailureCodes", std::move(failureCodesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
