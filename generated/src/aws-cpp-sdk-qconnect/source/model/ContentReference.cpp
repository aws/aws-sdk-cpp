/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ContentReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

ContentReference::ContentReference() : 
    m_contentArnHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false)
{
}

ContentReference::ContentReference(JsonView jsonValue) : 
    m_contentArnHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false)
{
  *this = jsonValue;
}

ContentReference& ContentReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentArn"))
  {
    m_contentArn = jsonValue.GetString("contentArn");

    m_contentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentId"))
  {
    m_contentId = jsonValue.GetString("contentId");

    m_contentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseArn"))
  {
    m_knowledgeBaseArn = jsonValue.GetString("knowledgeBaseArn");

    m_knowledgeBaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentReference::Jsonize() const
{
  JsonValue payload;

  if(m_contentArnHasBeenSet)
  {
   payload.WithString("contentArn", m_contentArn);

  }

  if(m_contentIdHasBeenSet)
  {
   payload.WithString("contentId", m_contentId);

  }

  if(m_knowledgeBaseArnHasBeenSet)
  {
   payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);

  }

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
