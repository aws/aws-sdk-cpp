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

ContentReference::ContentReference(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentReference& ContentReference::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("sourceURL"))
  {
    m_sourceURL = jsonValue.GetString("sourceURL");
    m_sourceURLHasBeenSet = true;
  }
  if(jsonValue.ValueExists("referenceType"))
  {
    m_referenceType = ReferenceTypeMapper::GetReferenceTypeForName(jsonValue.GetString("referenceType"));
    m_referenceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentReference::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseArnHasBeenSet)
  {
   payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);

  }

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_contentArnHasBeenSet)
  {
   payload.WithString("contentArn", m_contentArn);

  }

  if(m_contentIdHasBeenSet)
  {
   payload.WithString("contentId", m_contentId);

  }

  if(m_sourceURLHasBeenSet)
  {
   payload.WithString("sourceURL", m_sourceURL);

  }

  if(m_referenceTypeHasBeenSet)
  {
   payload.WithString("referenceType", ReferenceTypeMapper::GetNameForReferenceType(m_referenceType));
  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
