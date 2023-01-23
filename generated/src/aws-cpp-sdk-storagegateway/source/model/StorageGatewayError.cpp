/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/StorageGatewayError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

StorageGatewayError::StorageGatewayError() : 
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
}

StorageGatewayError::StorageGatewayError(JsonView jsonValue) : 
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

StorageGatewayError& StorageGatewayError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorDetails"))
  {
    Aws::Map<Aws::String, JsonView> errorDetailsJsonMap = jsonValue.GetObject("errorDetails").GetAllObjects();
    for(auto& errorDetailsItem : errorDetailsJsonMap)
    {
      m_errorDetails[errorDetailsItem.first] = errorDetailsItem.second.AsString();
    }
    m_errorDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageGatewayError::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", ErrorCodeMapper::GetNameForErrorCode(m_errorCode));
  }

  if(m_errorDetailsHasBeenSet)
  {
   JsonValue errorDetailsJsonMap;
   for(auto& errorDetailsItem : m_errorDetails)
   {
     errorDetailsJsonMap.WithString(errorDetailsItem.first, errorDetailsItem.second);
   }
   payload.WithObject("errorDetails", std::move(errorDetailsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
