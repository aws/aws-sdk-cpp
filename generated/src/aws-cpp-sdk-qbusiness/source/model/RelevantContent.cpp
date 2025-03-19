/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/RelevantContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

RelevantContent::RelevantContent(JsonView jsonValue)
{
  *this = jsonValue;
}

RelevantContent& RelevantContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentId"))
  {
    m_documentId = jsonValue.GetString("documentId");
    m_documentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentTitle"))
  {
    m_documentTitle = jsonValue.GetString("documentTitle");
    m_documentTitleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentUri"))
  {
    m_documentUri = jsonValue.GetString("documentUri");
    m_documentUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentAttributes"))
  {
    Aws::Utils::Array<JsonView> documentAttributesJsonList = jsonValue.GetArray("documentAttributes");
    for(unsigned documentAttributesIndex = 0; documentAttributesIndex < documentAttributesJsonList.GetLength(); ++documentAttributesIndex)
    {
      m_documentAttributes.push_back(documentAttributesJsonList[documentAttributesIndex].AsObject());
    }
    m_documentAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scoreAttributes"))
  {
    m_scoreAttributes = jsonValue.GetObject("scoreAttributes");
    m_scoreAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue RelevantContent::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_documentIdHasBeenSet)
  {
   payload.WithString("documentId", m_documentId);

  }

  if(m_documentTitleHasBeenSet)
  {
   payload.WithString("documentTitle", m_documentTitle);

  }

  if(m_documentUriHasBeenSet)
  {
   payload.WithString("documentUri", m_documentUri);

  }

  if(m_documentAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentAttributesJsonList(m_documentAttributes.size());
   for(unsigned documentAttributesIndex = 0; documentAttributesIndex < documentAttributesJsonList.GetLength(); ++documentAttributesIndex)
   {
     documentAttributesJsonList[documentAttributesIndex].AsObject(m_documentAttributes[documentAttributesIndex].Jsonize());
   }
   payload.WithArray("documentAttributes", std::move(documentAttributesJsonList));

  }

  if(m_scoreAttributesHasBeenSet)
  {
   payload.WithObject("scoreAttributes", m_scoreAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
