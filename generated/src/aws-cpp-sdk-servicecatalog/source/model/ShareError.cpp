/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ShareError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ShareError::ShareError() : 
    m_accountsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

ShareError::ShareError(JsonView jsonValue) : 
    m_accountsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

ShareError& ShareError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("Accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsString());
    }
    m_accountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareError::Jsonize() const
{
  JsonValue payload;

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsString(m_accounts[accountsIndex]);
   }
   payload.WithArray("Accounts", std::move(accountsJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", m_error);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
