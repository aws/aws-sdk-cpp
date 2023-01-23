/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/TemplateVersionsResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

TemplateVersionsResponse::TemplateVersionsResponse() : 
    m_itemHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_requestIDHasBeenSet(false)
{
}

TemplateVersionsResponse::TemplateVersionsResponse(JsonView jsonValue) : 
    m_itemHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_requestIDHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateVersionsResponse& TemplateVersionsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Item"))
  {
    Aws::Utils::Array<JsonView> itemJsonList = jsonValue.GetArray("Item");
    for(unsigned itemIndex = 0; itemIndex < itemJsonList.GetLength(); ++itemIndex)
    {
      m_item.push_back(itemJsonList[itemIndex].AsObject());
    }
    m_itemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

    m_nextTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestID"))
  {
    m_requestID = jsonValue.GetString("RequestID");

    m_requestIDHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateVersionsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_itemHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemJsonList(m_item.size());
   for(unsigned itemIndex = 0; itemIndex < itemJsonList.GetLength(); ++itemIndex)
   {
     itemJsonList[itemIndex].AsObject(m_item[itemIndex].Jsonize());
   }
   payload.WithArray("Item", std::move(itemJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_requestIDHasBeenSet)
  {
   payload.WithString("RequestID", m_requestID);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
