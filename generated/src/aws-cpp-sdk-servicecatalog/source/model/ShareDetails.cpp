/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ShareDetails.h>
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

ShareDetails::ShareDetails() : 
    m_successfulSharesHasBeenSet(false),
    m_shareErrorsHasBeenSet(false)
{
}

ShareDetails::ShareDetails(JsonView jsonValue) : 
    m_successfulSharesHasBeenSet(false),
    m_shareErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

ShareDetails& ShareDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SuccessfulShares"))
  {
    Aws::Utils::Array<JsonView> successfulSharesJsonList = jsonValue.GetArray("SuccessfulShares");
    for(unsigned successfulSharesIndex = 0; successfulSharesIndex < successfulSharesJsonList.GetLength(); ++successfulSharesIndex)
    {
      m_successfulShares.push_back(successfulSharesJsonList[successfulSharesIndex].AsString());
    }
    m_successfulSharesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareErrors"))
  {
    Aws::Utils::Array<JsonView> shareErrorsJsonList = jsonValue.GetArray("ShareErrors");
    for(unsigned shareErrorsIndex = 0; shareErrorsIndex < shareErrorsJsonList.GetLength(); ++shareErrorsIndex)
    {
      m_shareErrors.push_back(shareErrorsJsonList[shareErrorsIndex].AsObject());
    }
    m_shareErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareDetails::Jsonize() const
{
  JsonValue payload;

  if(m_successfulSharesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> successfulSharesJsonList(m_successfulShares.size());
   for(unsigned successfulSharesIndex = 0; successfulSharesIndex < successfulSharesJsonList.GetLength(); ++successfulSharesIndex)
   {
     successfulSharesJsonList[successfulSharesIndex].AsString(m_successfulShares[successfulSharesIndex]);
   }
   payload.WithArray("SuccessfulShares", std::move(successfulSharesJsonList));

  }

  if(m_shareErrorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shareErrorsJsonList(m_shareErrors.size());
   for(unsigned shareErrorsIndex = 0; shareErrorsIndex < shareErrorsJsonList.GetLength(); ++shareErrorsIndex)
   {
     shareErrorsJsonList[shareErrorsIndex].AsObject(m_shareErrors[shareErrorsIndex].Jsonize());
   }
   payload.WithArray("ShareErrors", std::move(shareErrorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
