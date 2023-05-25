/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ResourcePolicyInvalidParameterException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourcePolicyInvalidParameterException::ResourcePolicyInvalidParameterException() : 
    m_parameterNamesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ResourcePolicyInvalidParameterException::ResourcePolicyInvalidParameterException(JsonView jsonValue) : 
    m_parameterNamesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePolicyInvalidParameterException& ResourcePolicyInvalidParameterException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterNames"))
  {
    Aws::Utils::Array<JsonView> parameterNamesJsonList = jsonValue.GetArray("ParameterNames");
    for(unsigned parameterNamesIndex = 0; parameterNamesIndex < parameterNamesJsonList.GetLength(); ++parameterNamesIndex)
    {
      m_parameterNames.push_back(parameterNamesJsonList[parameterNamesIndex].AsString());
    }
    m_parameterNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePolicyInvalidParameterException::Jsonize() const
{
  JsonValue payload;

  if(m_parameterNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterNamesJsonList(m_parameterNames.size());
   for(unsigned parameterNamesIndex = 0; parameterNamesIndex < parameterNamesJsonList.GetLength(); ++parameterNamesIndex)
   {
     parameterNamesJsonList[parameterNamesIndex].AsString(m_parameterNames[parameterNamesIndex]);
   }
   payload.WithArray("ParameterNames", std::move(parameterNamesJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
