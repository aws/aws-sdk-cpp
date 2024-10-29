﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/RestApiClientException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MWAA
{
namespace Model
{

RestApiClientException::RestApiClientException() : 
    m_restApiStatusCode(0),
    m_restApiStatusCodeHasBeenSet(false),
    m_restApiResponseHasBeenSet(false)
{
}

RestApiClientException::RestApiClientException(JsonView jsonValue)
  : RestApiClientException()
{
  *this = jsonValue;
}

RestApiClientException& RestApiClientException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RestApiStatusCode"))
  {
    m_restApiStatusCode = jsonValue.GetInteger("RestApiStatusCode");

    m_restApiStatusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestApiResponse"))
  {
    m_restApiResponse = jsonValue.GetObject("RestApiResponse");

    m_restApiResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue RestApiClientException::Jsonize() const
{
  JsonValue payload;

  if(m_restApiStatusCodeHasBeenSet)
  {
   payload.WithInteger("RestApiStatusCode", m_restApiStatusCode);

  }

  if(m_restApiResponseHasBeenSet)
  {
    if(!m_restApiResponse.View().IsNull())
    {
       payload.WithObject("RestApiResponse", JsonValue(m_restApiResponse.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace MWAA
} // namespace Aws
